#include <stdafx.h>
#include <Extender/Shared/Hooks.h>
#include <Extender/ScriptExtender.h>
#include <GameDefinitions/Net.h>

BEGIN_SE()

decltype(Hooks::eocnet__ClientConnectMessage__Serialize)* decltype(Hooks::eocnet__ClientConnectMessage__Serialize)::gHook;
decltype(Hooks::net__AbstractPeer__BindSocket)* decltype(Hooks::net__AbstractPeer__BindSocket)::gHook;
decltype(Hooks::net__AbstractPeer__SendMessageSinglePeer)* decltype(Hooks::net__AbstractPeer__SendMessageSinglePeer)::gHook;
decltype(Hooks::net__AbstractPeer__SendMessageMultiPeerMoveIds)* decltype(Hooks::net__AbstractPeer__SendMessageMultiPeerMoveIds)::gHook;

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

    if (gExtender->GetConfig().EnableLocalPeerMessageTrace) {
        if (!IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_MESSAGE_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u expected=4.72.9.685",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (GetStaticSymbols().net__AbstractPeer__SendMessageSinglePeer == nullptr
            || GetStaticSymbols().net__AbstractPeer__SendMessageMultiPeerMoveIds == nullptr) {
            ERR("[MP_MESSAGE_TRACE] event=disabled reason=message_enqueue_symbol_missing single=%d multi=%d",
                GetStaticSymbols().net__AbstractPeer__SendMessageSinglePeer != nullptr,
                GetStaticSymbols().net__AbstractPeer__SendMessageMultiPeerMoveIds != nullptr);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            net__AbstractPeer__SendMessageSinglePeer.Wrap(GetStaticSymbols().net__AbstractPeer__SendMessageSinglePeer);
            net__AbstractPeer__SendMessageMultiPeerMoveIds.Wrap(GetStaticSymbols().net__AbstractPeer__SendMessageMultiPeerMoveIds);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__SendMessageSinglePeer.SetWrapper(&Hooks::OnAbstractPeerSendMessageSinglePeer, this);
                net__AbstractPeer__SendMessageMultiPeerMoveIds.SetWrapper(&Hooks::OnAbstractPeerSendMessageMultiPeerMoveIds, this);
                INFO("[MP_MESSAGE_TRACE] event=hook_enabled max_events=%u payload_logging=disabled",
                    gExtender->GetConfig().LocalPeerMessageTraceMaxEvents);
            } else {
                ERR("[MP_MESSAGE_TRACE] event=disabled reason=detour_failed status=%ld", status);
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

char const* Hooks::GetLocalPeerMessageTraceSource(net::AbstractPeer* peer) const
{
    auto const eocServer = GetStaticSymbols().GetEoCServer();
    if (eocServer != nullptr && static_cast<net::AbstractPeer*>(eocServer->GameServer) == peer) {
        return "server";
    }

    auto const eocClient = GetStaticSymbols().GetEoCClient();
    if (eocClient != nullptr && static_cast<net::AbstractPeer*>(eocClient->GameClient) == peer) {
        return "client";
    }

    return "other";
}

bool Hooks::BeginLocalPeerMessageTraceEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().LocalPeerMessageTraceMaxEvents;
    eventIndex = localPeerMessageTraceEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_MESSAGE_TRACE] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

void Hooks::OnAbstractPeerSendMessageSinglePeer(
    net::AbstractPeerSendMessageSinglePeerProc* wrapped,
    net::AbstractPeer* peer,
    TPeerId peerId,
    net::Message* message)
{
    uint32_t eventIndex;
    if (BeginLocalPeerMessageTraceEvent(eventIndex)) {
        if (message != nullptr) {
            INFO("[MP_MESSAGE_TRACE] event=message index=%u source=%s enqueue=single msg_id=%u target_peer=%u reliability=%u priority=%u ordering=%u timestamped=%u original_size=%u",
                eventIndex,
                GetLocalPeerMessageTraceSource(peer),
                (unsigned)message->MsgId,
                (unsigned)peerId,
                message->Reliability,
                message->Priority,
                (unsigned)message->OrderingSequence,
                message->Timestamped,
                message->OriginalSize);
        } else {
            INFO("[MP_MESSAGE_TRACE] event=message index=%u source=%s enqueue=single target_peer=%u message=null",
                eventIndex,
                GetLocalPeerMessageTraceSource(peer),
                (unsigned)peerId);
        }
    }

    wrapped(peer, peerId, message);
}

void Hooks::OnAbstractPeerSendMessageMultiPeerMoveIds(
    net::AbstractPeerSendMessageMultiPeerMoveIdsProc* wrapped,
    net::AbstractPeer* peer,
    Array<PeerId>* recipients,
    net::Message* message,
    TPeerId excludePeerId)
{
    uint32_t eventIndex;
    if (BeginLocalPeerMessageTraceEvent(eventIndex)) {
        auto const recipientCount = recipients != nullptr ? recipients->size() : 0;
        if (message != nullptr) {
            INFO("[MP_MESSAGE_TRACE] event=message index=%u source=%s enqueue=multi msg_id=%u recipient_count=%u exclude_peer=%u reliability=%u priority=%u ordering=%u timestamped=%u original_size=%u",
                eventIndex,
                GetLocalPeerMessageTraceSource(peer),
                (unsigned)message->MsgId,
                recipientCount,
                (unsigned)excludePeerId,
                message->Reliability,
                message->Priority,
                (unsigned)message->OrderingSequence,
                message->Timestamped,
                message->OriginalSize);
        } else {
            INFO("[MP_MESSAGE_TRACE] event=message index=%u source=%s enqueue=multi recipient_count=%u exclude_peer=%u message=null",
                eventIndex,
                GetLocalPeerMessageTraceSource(peer),
                recipientCount,
                (unsigned)excludePeerId);
        }
    }

    wrapped(peer, recipients, message, excludePeerId);
}

END_SE()
