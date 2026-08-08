#pragma once

#include <Extender/Shared/ExtenderNet.h>

BEGIN_NS(esv)

class ExtenderProtocol : public net::ExtenderProtocolBase
{
public:
    static constexpr uint32_t ProtocolId = 101;

    net::ProtocolResult ProcessMsg(void* unused, net::MessageContext* unknown, net::Message* usg) override;

protected:
    void ProcessExtenderMessage(net::MessageContext& context, net::MessageWrapper& msg) override;
};

class NetworkManager : public net::BaseNetworkManager
{
public:
    void Reset();
    void Update() override;

    bool LocalPeerOnly() const;
    bool CanSendExtenderMessages(PeerId peerId) const;
    std::optional<net::ProtoVersion> GetPeerVersion(PeerId peerId) const;
    void AllowExtenderMessages(PeerId peerId, net::ProtoVersion version);
    void OnClientConnectMessage(net::MessageContext* context, net::ClientConnectMessage* msg);

    void ExtendNetworking();

    net::ExtenderMessage * GetFreeMessage(UserId userId) override;
    net::ExtenderMessage * GetFreeMessage() override;
    net::ProtoVersion SharedVersion() override;
    void HandleLocalMessage(net::LocalMessage const& msg) override;
    net::GameServer* GetServer() const;

    void Send(net::ExtenderMessage * msg, UserId userId);
    void Broadcast(net::ExtenderMessage * msg, UserId excludeUserId, bool excludeLocalPeer = false);
    void BroadcastToConnectedPeers(net::ExtenderMessage* msg, UserId excludeUserId, bool excludeLocalPeer = false);

private:
    struct CapacitySnapshot
    {
        uint16_t MaxPeers{ 0 };
        uint8_t ModulePlayers{ 0 };
        uint32_t ConnectedPeers{ 0 };
        uint32_t ActivePeers{ 0 };
        uint32_t SessionPeers{ 0 };
        uint32_t LevelPeers{ 0 };
        uint32_t KickedPeers{ 0 };
        uint32_t UserMappings{ 0 };
        uint32_t PeerInfoEntries{ 0 };
        uint32_t CharacterOwners{ 0 };
        uint32_t ExtenderPeers{ 0 };
        int32_t LocalPeerId{ -1 };
        int32_t ServerState{ -1 };
        bool WasInitialized{ false };

        bool operator == (CapacitySnapshot const& other) const;
    };

    void UpdateCapacityTelemetry(bool force = false, char const* event = "snapshot", std::optional<PeerId> peerId = {});
    void MaintainExperimentalPlayerCapacity();
    void PruneDisconnectedExtenderPeers();
    std::optional<CapacitySnapshot> MakeCapacitySnapshot() const;

    ExtenderProtocol * protocol_{ nullptr };
    // List of clients that support the extender protocol
    std::unordered_map<PeerId, net::ProtoVersion> peerVersions_;
    std::optional<CapacitySnapshot> lastCapacitySnapshot_;
    uint64_t lastCapacityTelemetryTick_{ 0 };
};

END_NS()
