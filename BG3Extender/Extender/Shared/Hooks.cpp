#include <stdafx.h>
#include <Extender/Shared/Hooks.h>
#include <Extender/ScriptExtender.h>
#include <GameDefinitions/Net.h>

BEGIN_SE()

decltype(Hooks::eocnet__ClientConnectMessage__Serialize)* decltype(Hooks::eocnet__ClientConnectMessage__Serialize)::gHook;
decltype(Hooks::net__AbstractPeer__BindSocket)* decltype(Hooks::net__AbstractPeer__BindSocket)::gHook;

static bool IsNativePeerLimitResearchBuild(GameVersionInfo const& version)
{
    // Product version 4.1.1.7209685 is encoded in the PE fixed file version as 4.72.9.685.
    return version.Major == 4
        && version.Minor == 72
        && version.Revision == 9
        && version.Build == 685;
}

void Hooks::Startup()
{
    if (loaded_) {
        return;
    }

    auto& lib = gExtender->GetEngineHooks();
    lib.RPGStats__PreParseDataFolder.SetWrapper(&Hooks::OnParseDataFolder, this);
    eocnet__ClientConnectMessage__Serialize.SetWrapper(&Hooks::OnClientConnectMessage, this);

    auto const nativePeerLimit = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
    if (nativePeerLimit != 0) {
        if (!IsValidExperimentalNativeMultiplayerPeerLimit(nativePeerLimit)) {
            ERR("[MP_PEER_LIMIT] event=disabled reason=invalid_limit target=%u allowed=9-64", nativePeerLimit);
        } else if (!IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_PEER_LIMIT] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u expected=4.72.9.685",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (GetStaticSymbols().net__AbstractPeer__BindSocket == nullptr) {
            ERR("[MP_PEER_LIMIT] event=disabled reason=bind_socket_symbol_missing target=%u", nativePeerLimit);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            net__AbstractPeer__BindSocket.Wrap(GetStaticSymbols().net__AbstractPeer__BindSocket);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__BindSocket.SetWrapper(&Hooks::OnAbstractPeerBindSocket, this);
                INFO("[MP_PEER_LIMIT] event=hook_enabled target=%u", nativePeerLimit);
            } else {
                ERR("[MP_PEER_LIMIT] event=disabled reason=detour_failed target=%u status=%ld", nativePeerLimit, status);
            }
        }
    }
    
    loaded_ = true;
}

void Hooks::HookNetworkMessages(net::MessageFactory* factory)
{
    if (networkingInitialized_) {
        return;
    }

    if (factory->MessagePools.size() <= (unsigned)NetMessage::NETMSG_CLIENT_CONNECT) {
        ERR("MessageFactory not initialized yet");
        return;
    }

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());

    auto clientConnect = factory->MessagePools[(unsigned)NetMessage::NETMSG_CLIENT_CONNECT]->Template;
    eocnet__ClientConnectMessage__Serialize.Wrap((*(net::Message::VMT**)clientConnect)->Serialize);

    DetourTransactionCommit();

    networkingInitialized_ = true;
}

void Hooks::OnParseDataFolder(stats::RPGStats::ParseStructureFolderProc* next, stats::RPGStats* self, Array<STDString>* paths)
{
    LuaVirtualPin lua(gExtender->GetCurrentExtensionState());
    if (lua) {
        lua->OnStatsStructureLoaded();
    }

    {
        DisableCrashReporting _;
        next(self, paths);
    }

    gExtender->GetStatLoadOrderHelper().OnLoadFinished();
}

void Hooks::OnClientConnectMessage(net::Message::SerializeProc* wrapped, net::Message* msg, net::BitstreamSerializer* serializer)
{
    auto m = (net::ClientConnectMessage*)msg;
    if (serializer->IsWriting) {
        gExtender->GetClient().GetNetworkManager().OnClientConnectMessage(m);
    }

    wrapped(msg, serializer);
}

bool Hooks::OnAbstractPeerBindSocket(
    net::AbstractPeerBindSocketProc* wrapped,
    net::AbstractPeer* peer,
    uint16_t port,
    uint32_t socketType)
{
    auto const target = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
    auto const eocServer = GetStaticSymbols().GetEoCServer();
    auto const gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;

    if (gameServer != nullptr && static_cast<net::AbstractPeer*>(gameServer) == peer) {
        if (peer->MaxPeers == 8) {
            peer->MaxPeers = static_cast<uint16_t>(target);
            INFO("[MP_PEER_LIMIT] event=applied native=8 target=%u", target);
        } else if (peer->MaxPeers != target && !nativePeerLimitUnexpectedValueLogged_) {
            ERR("[MP_PEER_LIMIT] event=not_applied reason=unexpected_native_value current=%u target=%u",
                (unsigned)peer->MaxPeers,
                target);
            nativePeerLimitUnexpectedValueLogged_ = true;
        }
    }

    return wrapped(peer, port, socketType);
}

END_SE()
