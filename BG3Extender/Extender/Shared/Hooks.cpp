#include <stdafx.h>
#include <Extender/Shared/Hooks.h>
#include <Extender/ScriptExtender.h>
#include <GameDefinitions/Net.h>

BEGIN_SE()

decltype(Hooks::eocnet__ClientConnectMessage__Serialize)* decltype(Hooks::eocnet__ClientConnectMessage__Serialize)::gHook;
decltype(Hooks::eocnet__InitialPeerHandshakeMessage__Serialize)* decltype(Hooks::eocnet__InitialPeerHandshakeMessage__Serialize)::gHook;
decltype(Hooks::eocnet__PeerActivateMessage__Serialize)* decltype(Hooks::eocnet__PeerActivateMessage__Serialize)::gHook;
decltype(Hooks::eocnet__SessionLoadMessage__Serialize)* decltype(Hooks::eocnet__SessionLoadMessage__Serialize)::gHook;
decltype(Hooks::eocnet__SessionLoadedMessage__Serialize)* decltype(Hooks::eocnet__SessionLoadedMessage__Serialize)::gHook;
decltype(Hooks::eocnet__LevelLoadMessage__Serialize)* decltype(Hooks::eocnet__LevelLoadMessage__Serialize)::gHook;
decltype(Hooks::eocnet__LevelLoadedMessage__Serialize)* decltype(Hooks::eocnet__LevelLoadedMessage__Serialize)::gHook;
decltype(Hooks::eocnet__LoadStartMessage__Serialize)* decltype(Hooks::eocnet__LoadStartMessage__Serialize)::gHook;
decltype(Hooks::eocnet__LoadStartedMessage__Serialize)* decltype(Hooks::eocnet__LoadStartedMessage__Serialize)::gHook;
decltype(Hooks::net__AbstractPeer__BindSocket)* decltype(Hooks::net__AbstractPeer__BindSocket)::gHook;
decltype(Hooks::net__AbstractPeer__SendMessageSinglePeer)* decltype(Hooks::net__AbstractPeer__SendMessageSinglePeer)::gHook;
decltype(Hooks::net__AbstractPeer__SendMessageMultiPeerMoveIds)* decltype(Hooks::net__AbstractPeer__SendMessageMultiPeerMoveIds)::gHook;

static bool IsNativePeerLimitResearchBuild(GameVersionInfo const& version)
{
    // Product versions 4.1.1.7209685 and 4.1.1.7398727 are encoded in the
    // PE fixed file version as 4.72.9.685 and 4.73.98.727, respectively.
    auto const originalResearchBuild = version.Major == 4
        && version.Minor == 72
        && version.Revision == 9
        && version.Build == 685;
    auto const august2026ResearchBuild = version.Major == 4
        && version.Minor == 73
        && version.Revision == 98
        && version.Build == 727;
    return originalResearchBuild || august2026ResearchBuild;
}

void Hooks::Startup()
{
    if (loaded_) {
        return;
    }

    auto& lib = gExtender->GetEngineHooks();
    lib.RPGStats__PreParseDataFolder.SetWrapper(&Hooks::OnParseDataFolder, this);
    eocnet__ClientConnectMessage__Serialize.SetWrapper(&Hooks::OnClientConnectMessage, this);
    eocnet__InitialPeerHandshakeMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerHandshakeMessage, this);
    eocnet__PeerActivateMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__SessionLoadMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__SessionLoadedMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__LevelLoadMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__LevelLoadedMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__LoadStartMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);
    eocnet__LoadStartedMessage__Serialize.SetWrapper(&Hooks::OnInitialPeerLoadMessage, this);

    auto const nativePeerLimit = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
    if (nativePeerLimit != 0) {
        if (!IsValidExperimentalNativeMultiplayerPeerLimit(nativePeerLimit)) {
            ERR("[MP_PEER_LIMIT] event=disabled reason=invalid_limit target=%u allowed=9-64", nativePeerLimit);
        } else if (!IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_PEER_LIMIT] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.72.9.685,4.73.98.727",
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
            ERR("[MP_MESSAGE_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.72.9.685,4.73.98.727",
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

    if (gExtender->GetConfig().EnableInitialPeerSerializerTelemetry) {
        if (!IsValidInitialPeerSerializerTelemetryMaxEvents(
                gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents)) {
            ERR("[MP_SERIALIZER_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-1024",
                gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents);
        } else if (!IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_SERIALIZER_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.72.9.685,4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (factory->MessagePools.size() <= (unsigned)NetMessage::NETMSG_LOAD_STARTED) {
            ERR("[MP_SERIALIZER_TRACE] event=disabled reason=load_message_pool_missing actual=%u required=%u",
                factory->MessagePools.size(),
                (unsigned)NetMessage::NETMSG_LOAD_STARTED + 1);
        } else {
            auto handshake = factory->MessagePools[(unsigned)NetMessage::NETMSG_HANDSHAKE]->Template;
            eocnet__InitialPeerHandshakeMessage__Serialize.Wrap((*(net::Message::VMT**)handshake)->Serialize);
            auto peerActivate = factory->MessagePools[(unsigned)NetMessage::NETMSG_PEER_ACTIVATE]->Template;
            auto sessionLoad = factory->MessagePools[(unsigned)NetMessage::NETMSG_SESSION_LOAD]->Template;
            auto sessionLoaded = factory->MessagePools[(unsigned)NetMessage::NETMSG_SESSION_LOADED]->Template;
            auto levelLoad = factory->MessagePools[(unsigned)NetMessage::NETMSG_LEVEL_LOAD]->Template;
            auto levelLoaded = factory->MessagePools[(unsigned)NetMessage::NETMSG_LEVEL_LOADED]->Template;
            auto loadStart = factory->MessagePools[(unsigned)NetMessage::NETMSG_LOAD_START]->Template;
            auto loadStarted = factory->MessagePools[(unsigned)NetMessage::NETMSG_LOAD_STARTED]->Template;
            eocnet__PeerActivateMessage__Serialize.Wrap((*(net::Message::VMT**)peerActivate)->Serialize);
            eocnet__SessionLoadMessage__Serialize.Wrap((*(net::Message::VMT**)sessionLoad)->Serialize);
            eocnet__SessionLoadedMessage__Serialize.Wrap((*(net::Message::VMT**)sessionLoaded)->Serialize);
            eocnet__LevelLoadMessage__Serialize.Wrap((*(net::Message::VMT**)levelLoad)->Serialize);
            eocnet__LevelLoadedMessage__Serialize.Wrap((*(net::Message::VMT**)levelLoaded)->Serialize);
            eocnet__LoadStartMessage__Serialize.Wrap((*(net::Message::VMT**)loadStart)->Serialize);
            eocnet__LoadStartedMessage__Serialize.Wrap((*(net::Message::VMT**)loadStarted)->Serialize);
        }
    }

    auto const status = DetourTransactionCommit();

    if (status == NO_ERROR && gExtender->GetConfig().EnableInitialPeerSerializerTelemetry
        && IsValidInitialPeerSerializerTelemetryMaxEvents(
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents)
        && IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())
        && factory->MessagePools.size() > (unsigned)NetMessage::NETMSG_LOAD_STARTED) {
        INFO("[MP_SERIALIZER_TRACE] event=hook_enabled max_events=%u payload_logging=disabled string_logging=disabled guid_logging=disabled",
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents);
    } else if (status != NO_ERROR && gExtender->GetConfig().EnableInitialPeerSerializerTelemetry) {
        ERR("[MP_SERIALIZER_TRACE] event=disabled reason=detour_failed status=%ld", status);
    }

    networkingInitialized_ = status == NO_ERROR;
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

    auto const bitstream = serializer->Bitstream;
    auto const bitsBefore = bitstream != nullptr ? bitstream->NumBits : 0;
    auto const offsetBefore = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
    wrapped(msg, serializer);

    uint32_t eventIndex;
    if (gExtender->GetConfig().EnableInitialPeerSerializerTelemetry
        && IsValidInitialPeerSerializerTelemetryMaxEvents(
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents)
        && IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())
        && BeginInitialPeerSerializerTelemetryEvent(eventIndex)) {
        auto const bitsAfter = bitstream != nullptr ? bitstream->NumBits : 0;
        auto const offsetAfter = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
        INFO("[MP_SERIALIZER_TRACE] event=client_connect index=%u direction=%s msg_id=%u bits_before=%u bits_after=%u offset_before=%u offset_after=%u game_version_length=%u build_length=%u identity_type=%u identity_subtype=%u identity_payload_logging=disabled flag_70=%u flag_71=%u guid_set_count=%u field_a8=%d field_ac=%u",
            eventIndex,
            serializer->IsWriting ? "write" : "read",
            (unsigned)msg->MsgId,
            bitsBefore,
            bitsAfter,
            offsetBefore,
            offsetAfter,
            m->GameVersion.size(),
            m->Build.size(),
            (unsigned)(uint8_t)m->field_58,
            (unsigned)(uint8_t)m->field_5C,
            (unsigned)m->field_70,
            (unsigned)m->field_71,
            m->field_78.size(),
            m->field_A8,
            (unsigned)m->field_AC);
    }
}

void Hooks::OnInitialPeerHandshakeMessage(
    net::Message::SerializeProc* wrapped,
    net::Message* msg,
    net::BitstreamSerializer* serializer)
{
    auto const bitstream = serializer->Bitstream;
    auto const bitsBefore = bitstream != nullptr ? bitstream->NumBits : 0;
    auto const offsetBefore = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
    auto const scalarBefore = *(uint32_t*)((uint8_t*)msg + 0x28);
    wrapped(msg, serializer);

    uint32_t eventIndex;
    if (BeginInitialPeerSerializerTelemetryEvent(eventIndex)) {
        auto const bitsAfter = bitstream != nullptr ? bitstream->NumBits : 0;
        auto const offsetAfter = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
        INFO("[MP_SERIALIZER_TRACE] event=handshake_scalar index=%u direction=%s msg_id=%u bits_before=%u bits_after=%u offset_before=%u offset_after=%u scalar_u32=%u",
            eventIndex,
            serializer->IsWriting ? "write" : "read",
            (unsigned)msg->MsgId,
            bitsBefore,
            bitsAfter,
            offsetBefore,
            offsetAfter,
            serializer->IsWriting ? scalarBefore : *(uint32_t*)((uint8_t*)msg + 0x28));
    }
}

void Hooks::OnInitialPeerLoadMessage(
    net::Message::SerializeProc* wrapped,
    net::Message* msg,
    net::BitstreamSerializer* serializer)
{
    auto readSafeMetadata = [msg](uint32_t (&metadata)[3]) {
        metadata[0] = 0;
        metadata[1] = 0;
        metadata[2] = 0;
        auto const bytes = (uint8_t*)msg;
        switch ((unsigned)msg->MsgId) {
        case (unsigned)NetMessage::NETMSG_SESSION_LOAD:
            metadata[0] = *(uint16_t*)(bytes + 0x40);
            metadata[1] = (uint32_t)bytes[0x42]
                | ((uint32_t)bytes[0x43] << 8)
                | ((uint32_t)bytes[0x44] << 16)
                | ((uint32_t)bytes[0x45] << 24);
            break;
        case (unsigned)NetMessage::NETMSG_SESSION_LOADED:
            metadata[0] = *(uint32_t*)(bytes + 0x28);
            break;
        case (unsigned)NetMessage::NETMSG_LEVEL_LOAD:
            metadata[0] = *(uint32_t*)(bytes + 0x3c);
            break;
        case (unsigned)NetMessage::NETMSG_LEVEL_LOADED:
            metadata[0] = *(uint32_t*)(bytes + 0xbc);
            metadata[1] = *(uint32_t*)(bytes + 0xa4);
            break;
        case (unsigned)NetMessage::NETMSG_LOAD_START:
            metadata[0] = *(uint16_t*)(bytes + 0x40);
            metadata[1] = (uint32_t)bytes[0x43]
                | ((uint32_t)bytes[0x42] << 8)
                | ((uint32_t)bytes[0x48] << 16);
            break;
        case (unsigned)NetMessage::NETMSG_LOAD_STARTED:
            metadata[0] = (uint32_t)bytes[0x28] | ((uint32_t)bytes[0x29] << 8);
            break;
        default:
            break;
        }
    };

    auto const bitstream = serializer->Bitstream;
    auto const bitsBefore = bitstream != nullptr ? bitstream->NumBits : 0;
    auto const offsetBefore = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
    uint32_t metadataBefore[3];
    readSafeMetadata(metadataBefore);
    wrapped(msg, serializer);

    uint32_t eventIndex;
    if (BeginInitialPeerSerializerTelemetryEvent(eventIndex)) {
        auto const bitsAfter = bitstream != nullptr ? bitstream->NumBits : 0;
        auto const offsetAfter = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
        uint32_t metadataAfter[3];
        readSafeMetadata(metadataAfter);
        auto const metadata = serializer->IsWriting ? metadataBefore : metadataAfter;
        INFO("[MP_SERIALIZER_TRACE] event=load_phase index=%u direction=%s msg_id=%u bits_before=%u bits_after=%u offset_before=%u offset_after=%u metadata_0=%u metadata_1=%u metadata_2=%u payload_logging=disabled string_logging=disabled fixed_string_logging=disabled",
            eventIndex,
            serializer->IsWriting ? "write" : "read",
            (unsigned)msg->MsgId,
            bitsBefore,
            bitsAfter,
            offsetBefore,
            offsetAfter,
            metadata[0],
            metadata[1],
            metadata[2]);
    }
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

bool Hooks::BeginInitialPeerSerializerTelemetryEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents;
    eventIndex = initialPeerSerializerTelemetryEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_SERIALIZER_TRACE] event=limit_reached max_events=%u", maxEvents);
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
