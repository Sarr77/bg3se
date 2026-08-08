#include <stdafx.h>
#include <Extender/Server/ServerNetworking.h>
#include <Extender/ScriptExtender.h>

BEGIN_NS(esv)

net::ProtocolResult ExtenderProtocol::ProcessMsg(void* unused, net::MessageContext* context, net::Message* msg)
{
    auto base = ExtenderProtocolBase::ProcessMsg(unused, context, msg);
    if (base == net::ProtocolResult::Unhandled && msg->MsgId == NetMessage::NETMSG_CLIENT_CONNECT) {
        gExtender->GetServer().GetNetworkManager().OnClientConnectMessage(context, (net::ClientConnectMessage*)msg);
    }

    return base;
}

void ExtenderProtocol::ProcessExtenderMessage(net::MessageContext& context, net::MessageWrapper & msg)
{
    switch (msg.msg_case()) {
    case net::MessageWrapper::kPostLua:
    {
        if (gExtender->GetServer().HasExtensionState()) {
            auto& postMsg = msg.post_lua();
            esv::LuaServerPin pin(esv::ExtensionState::Get());
            if (pin) {
                pin->OnNetMessageReceived(postMsg.channel_name(), postMsg.payload(), postMsg.module(), 
                    postMsg.request_id(), postMsg.reply_id(), context.UserID,
                    postMsg.serializer() == net::SerializerType::SERIALIZER_BINARY);
            }
        }
        break;
    }

    case net::MessageWrapper::kC2SExtenderHello:
    {
        auto const& hello = msg.c2s_extender_hello();
        DEBUG("Got extender support notification from user %d (version %d)", context.UserID.Id, hello.version());
        gExtender->GetServer().GetNetworkManager().AllowExtenderMessages(context.UserID.GetPeerId(), (net::ProtoVersion)hello.version());
        break;
    }

    case net::MessageWrapper::kUserVars:
    {
        SyncUserVars(msg.user_vars());
        break;
    }

    default:
        OsiErrorS("Unknown extension message type received!");
    }
}

void NetworkManager::Reset()
{
    UpdateCapacityTelemetry(true, "reset-before");
    peerVersions_.clear();
    lastCapacitySnapshot_.reset();
    lastCapacityTelemetryTick_ = 0;
}

bool NetworkManager::CapacitySnapshot::operator == (CapacitySnapshot const& other) const
{
    return MaxPeers == other.MaxPeers
        && ModulePlayers == other.ModulePlayers
        && ConnectedPeers == other.ConnectedPeers
        && ActivePeers == other.ActivePeers
        && SessionPeers == other.SessionPeers
        && LevelPeers == other.LevelPeers
        && KickedPeers == other.KickedPeers
        && UserMappings == other.UserMappings
        && PeerInfoEntries == other.PeerInfoEntries
        && CharacterOwners == other.CharacterOwners
        && ExtenderPeers == other.ExtenderPeers
        && LocalPeerId == other.LocalPeerId
        && ServerState == other.ServerState
        && WasInitialized == other.WasInitialized;
}

void NetworkManager::Update()
{
    BaseNetworkManager::Update();
    MaintainExperimentalPlayerCapacity();
    UpdateCapacityTelemetry();
}

void NetworkManager::MaintainExperimentalPlayerCapacity()
{
    auto const target = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
    if (!IsValidExperimentalNativeMultiplayerPeerLimit(target)) {
        return;
    }

    auto modManager = GetStaticSymbols().GetModManagerServer();
    if (modManager == nullptr) {
        return;
    }

    auto& nativeCapacity = modManager->BaseModule.Info.NumPlayers;
    if ((nativeCapacity == 4 || nativeCapacity == 8) && target > nativeCapacity) {
        auto const native = nativeCapacity;
        nativeCapacity = static_cast<uint8_t>(target);
        INFO("[MP_PEER_LIMIT] event=player_capacity_refreshed method=server_update native=%u target=%u",
            (unsigned)native,
            target);
    }
}

std::optional<NetworkManager::CapacitySnapshot> NetworkManager::MakeCapacitySnapshot() const
{
    auto server = GetServer();
    if (server == nullptr) {
        return {};
    }

    CapacitySnapshot snapshot;
    snapshot.MaxPeers = server->MaxPeers;
    snapshot.ConnectedPeers = server->ConnectedPeerIds.size();
    snapshot.ActivePeers = server->ActivePeerIds.size();
    snapshot.SessionPeers = server->SessionPeerIds.size();
    snapshot.LevelPeers = server->LevelPeerIds.size();
    snapshot.KickedPeers = server->KickedPeerIds.size();
    snapshot.UserMappings = server->UserMappings.UserIds.size();
    snapshot.PeerInfoEntries = server->PeerInfo.size();
    snapshot.CharacterOwners = server->CharacterOwners.size();
    snapshot.ExtenderPeers = (uint32_t)peerVersions_.size();
    snapshot.LocalPeerId = server->LocalPeerId;
    snapshot.ServerState = server->ServerState;
    snapshot.WasInitialized = server->WasInitialized;

    auto modManager = GetStaticSymbols().GetModManagerServer();
    if (modManager != nullptr) {
        snapshot.ModulePlayers = modManager->BaseModule.Info.NumPlayers;
    }

    return snapshot;
}

void NetworkManager::UpdateCapacityTelemetry(bool force, char const* event, std::optional<PeerId> peerId)
{
    auto const& config = gExtender->GetConfig();
    if (!config.EnableMultiplayerCapacityTelemetry) {
        return;
    }

    auto snapshot = MakeCapacitySnapshot();
    if (!snapshot) {
        return;
    }

    auto now = GetTickCount64();
    auto interval = std::max<uint32_t>(config.MultiplayerCapacityTelemetryIntervalMs, 1000);
    auto changed = !lastCapacitySnapshot_ || !(*lastCapacitySnapshot_ == *snapshot);
    auto heartbeatDue = lastCapacityTelemetryTick_ == 0 || now - lastCapacityTelemetryTick_ >= interval;
    if (!force && !changed && !heartbeatDue) {
        return;
    }

    auto peer = peerId ? (int32_t)(TPeerId)*peerId : -1;
    INFO("[MP_CAPACITY] event=%s peer=%d maxPeers=%u modulePlayers=%u initialized=%u "
        "connected=%u active=%u session=%u level=%u kicked=%u users=%u "
        "peerInfo=%u characterOwners=%u extenderPeers=%u localPeer=%d serverState=%d",
        event,
        peer,
        (unsigned)snapshot->MaxPeers,
        (unsigned)snapshot->ModulePlayers,
        snapshot->WasInitialized ? 1u : 0u,
        snapshot->ConnectedPeers,
        snapshot->ActivePeers,
        snapshot->SessionPeers,
        snapshot->LevelPeers,
        snapshot->KickedPeers,
        snapshot->UserMappings,
        snapshot->PeerInfoEntries,
        snapshot->CharacterOwners,
        snapshot->ExtenderPeers,
        snapshot->LocalPeerId,
        snapshot->ServerState);

    lastCapacitySnapshot_ = *snapshot;
    lastCapacityTelemetryTick_ = now;
}

bool NetworkManager::LocalPeerOnly() const
{
    auto server = GetServer();
    return server != nullptr
        && server->ActivePeerIds.size() == 1
        && server->ActivePeerIds[0] == (PeerId)server->LocalPeerId;
}

bool NetworkManager::CanSendExtenderMessages(PeerId peerId) const
{
    return peerVersions_.find(peerId) != peerVersions_.end();
}

std::optional<net::ProtoVersion> NetworkManager::GetPeerVersion(PeerId peerId) const
{
    auto it = peerVersions_.find(peerId);
    if (it != peerVersions_.end()) {
        return it->second;
    } else {
        return {};
    }
}

void NetworkManager::AllowExtenderMessages(PeerId peerId, net::ProtoVersion version)
{
    peerVersions_.insert_or_assign(peerId, version);
    UpdateCapacityTelemetry(true, "extender-peer-ready", peerId);
}


void NetworkManager::OnClientConnectMessage(net::MessageContext* context, net::ClientConnectMessage* msg)
{
    UpdateCapacityTelemetry(true, "client-connect-message", context->UserID.GetPeerId());
    if (!msg->Build.contains(" Extender")) {
        DEBUG("No extender trailer found in ClientConnect message");
    } else if (!msg->Build.contains(" Extender_0")) {
        WARN("Extender signature incorrect in ClientConnect message");
    } else {
        DEBUG("Sending ExtenderHello to client");
        ExtendNetworking();
        auto helloMsg = GetFreeMessage();
        if (helloMsg != nullptr) {
            auto hello = helloMsg->GetMessage().mutable_c2s_extender_hello();
            hello->set_version((uint32_t)net::ProtoVersion::Current);
            Send(helloMsg, context->UserID);
        } else {
            OsiErrorS("Could not get free message!");
        }
    }
}

void NetworkManager::ExtendNetworking()
{
    auto server = GetServer();
    if (server == nullptr) return;

    if (server->NetMessageFactory->MessagePools.size() > (unsigned)net::ExtenderMessage::MessageId) {
        return;
    }

    protocol_ = new ExtenderProtocol();
    server->ProtocolList.insert_at(0, protocol_);
    server->ProtocolMap.set(ExtenderProtocol::ProtocolId, protocol_);

    auto extenderMsg = new net::ExtenderMessage();
    server->NetMessageFactory->Register((uint32_t)net::ExtenderMessage::MessageId, extenderMsg);
    gExtender->GetHooks().HookNetworkMessages(server->NetMessageFactory);
    DEBUG("Registered custom server network protocol");
}

net::GameServer * NetworkManager::GetServer() const
{
    auto server = GetStaticSymbols().esv__EoCServer;
    if (server != nullptr && *server != nullptr) {
        return (*server)->GameServer;
    } else {
        return nullptr;
    }
}

net::ExtenderMessage * NetworkManager::GetFreeMessage(UserId userId)
{
    if (userId && !CanSendExtenderMessages(userId.GetPeerId())) {
        ERR("Attempted to send extender message to user %d that does not understand extender protocol!", userId.Id);
        return nullptr;
    }

    return GetFreeMessage();
}

net::ExtenderMessage * NetworkManager::GetFreeMessage()
{
    auto server = GetServer();
    if (server != nullptr) {
        return (net::ExtenderMessage*)server->NetMessageFactory->GetFreeMessage((uint32_t)net::ExtenderMessage::MessageId);
    } else {
        return nullptr;
    }
}

net::ProtoVersion NetworkManager::SharedVersion()
{
    auto ver{ net::ProtoVersion::Current };
    for (auto const& peer : peerVersions_) {
        ver = std::min(ver, peer.second);
    }

    return ver;
}

void NetworkManager::HandleLocalMessage(net::LocalMessage const& msg)
{
    esv::LuaServerPin pin(esv::ExtensionState::Get());
    if (pin) {
        pin->OnNetMessageReceived(msg.Channel, msg.Payload, msg.Module, msg.RequestId, msg.ReplyId, msg.User, msg.Binary);
    }
}

void NetworkManager::Send(net::ExtenderMessage * msg, UserId userId)
{
    auto server = GetServer();
    if (server != nullptr) {
        server->SendMessageSinglePeer((TPeerId)userId.GetPeerId(), msg);
    }
}

void NetworkManager::Broadcast(net::ExtenderMessage * msg, UserId excludeUserId, bool excludeLocalPeer)
{
    auto server = GetServer();
    if (server == nullptr) return;

    Array<PeerId> peerIds;
    for (auto peerId : server->ActivePeerIds) {
        if (CanSendExtenderMessages(peerId)) {
            if (peerId != LocalPeerId || !excludeLocalPeer) {
                peerIds.push_back(peerId);
            }
        } else {
            WARN("Not sending extender message to peer %d as it does not understand extender protocol!", peerId);
        }
    }

    server->SendMessageMultiPeerMoveIds(peerIds, msg, (TPeerId)excludeUserId.GetPeerId());
}

void NetworkManager::BroadcastToConnectedPeers(net::ExtenderMessage* msg, UserId excludeUserId, bool excludeLocalPeer)
{
    auto server = GetServer();
    if (server == nullptr) return;

    Array<PeerId> peerIds;
    for (auto peerId : server->ConnectedPeerIds) {
        if (CanSendExtenderMessages(peerId)) {
            if (peerId != LocalPeerId || !excludeLocalPeer) {
                peerIds.push_back(peerId);
            }
        } else {
            WARN("Not sending extender message to peer %d as it does not understand extender protocol!", peerId);
        }
    }

    server->SendMessageMultiPeerMoveIds(peerIds, msg, (TPeerId)excludeUserId.GetPeerId());
}

END_NS()
