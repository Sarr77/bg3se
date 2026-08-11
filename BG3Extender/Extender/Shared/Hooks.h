#pragma once

#include <Osiris/Shared/CustomFunctions.h>
#include <Extender/Shared/ExtensionState.h>
#include <GameDefinitions/Stats/Stats.h>
#include <GameDefinitions/Net.h>
#include <CoreLib/Wrappers.h>

#include <mutex>
#include <unordered_map>

BEGIN_SE()

class Hooks
{
public:
    void Startup();
    void HookNetworkMessages(net::MessageFactory* factory);

    void OnParseDataFolder(stats::RPGStats::ParseStructureFolderProc* next, stats::RPGStats* self, Array<STDString>* paths);
    void OnClientConnectMessage(net::Message::SerializeProc* wrapped, net::Message* msg, net::BitstreamSerializer* serializer);
    void OnInitialPeerHandshakeMessage(net::Message::SerializeProc* wrapped, net::Message* msg, net::BitstreamSerializer* serializer);
    void OnInitialPeerLoadMessage(net::Message::SerializeProc* wrapped, net::Message* msg, net::BitstreamSerializer* serializer);
    int OnSocketOverrideSend(int (*wrapped)(void*, char const*, int, void const*),
        void* self, char const* data, int length, void const* systemAddress);
    int OnSocketOverrideReceive(int (*wrapped)(void*, char*, void*),
        void* self, char* data, void* systemAddress);
    int OnWinSockRecvFrom(int (*wrapped)(uintptr_t, char*, int, int, void*, int*),
        uintptr_t socket, char* buffer, int length, int flags, void* from, int* fromLength);
    int OnWinSockSendTo(int (*wrapped)(uintptr_t, char const*, int, int, void const*, int),
        uintptr_t socket, char const* buffer, int length, int flags, void const* to, int toLength);
    int OnWinSockWSARecvFrom(int (*wrapped)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t*, void*, int*, void*, void*),
        uintptr_t socket, void* buffers, uint32_t bufferCount, uint32_t* numberOfBytesReceived, uint32_t* flags,
        void* from, int* fromLength, void* overlapped, void* completionRoutine);
    int OnWinSockWSAGetOverlappedResult(int (*wrapped)(uintptr_t, void*, uint32_t*, int, uint32_t*),
        uintptr_t socket, void* overlapped, uint32_t* transferred, int wait, uint32_t* flags);
    int OnWinSockWSASendTo(int (*wrapped)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t, void const*, int, void*, void*),
        uintptr_t socket, void* buffers, uint32_t bufferCount, uint32_t* numberOfBytesSent, uint32_t flags,
        void const* to, int toLength, void* overlapped, void* completionRoutine);
    bool OnAbstractPeerBindSocket(net::AbstractPeerBindSocketProc* wrapped, net::AbstractPeer* peer, uint16_t port, uint32_t socketType);
    void OnAbstractPeerSendMessageSinglePeer(net::AbstractPeerSendMessageSinglePeerProc* wrapped,
        net::AbstractPeer* peer, TPeerId peerId, net::Message* message);
    void OnAbstractPeerSendMessageMultiPeerMoveIds(net::AbstractPeerSendMessageMultiPeerMoveIdsProc* wrapped,
        net::AbstractPeer* peer, Array<PeerId>* recipients, net::Message* message, TPeerId excludePeerId);
    void OnAbstractPeerSendGeneralMessage(
        void (*wrapped)(void*, void*, TPeerId, uint8_t, void*, net::Message*),
        void* compressor, void* output, TPeerId peerId, uint8_t flags,
        void* input, net::Message* message);
    bool OnAbstractPeerReceiveGeneralMessage(
        bool (*wrapped)(void*, net::BitstreamSerializer*, TPeerId, net::Message*),
        void* compressor, net::BitstreamSerializer* input, TPeerId peerId,
        net::Message* message);
    net::ProtocolResult OnJoiningProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnClientLoadProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnServerLoadProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnServerCharacterCreationProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    void* OnEntityHandleSetInsert(
        void* (*wrapped)(void*, void*, uint64_t const*),
        void* set, void* result, uint64_t const* entityHandle);
    void OnEntityReplicationSystemUpdate(
        void (*wrapped)(void*, void*),
        void* replicationSystem, void* context);
    void OnEntityReplicationCommandBufferFlush(
        void (*wrapped)(void*, void*, void*),
        void* commandBuffer, void* host, void* replicationAuthority);
    uint8_t OnLobbyMembershipCheck(uint8_t (*wrapped)(void*, int8_t), void* lobby, int8_t backend);
    uint8_t OnLobbyIsReady(uint8_t (*wrapped)(void*), void* lobby);

    enum class ClientConnectMessageSerializeTag{};
    WrappableFunction<ClientConnectMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__ClientConnectMessage__Serialize;
    enum class InitialPeerHandshakeMessageSerializeTag{};
    WrappableFunction<InitialPeerHandshakeMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__InitialPeerHandshakeMessage__Serialize;
    enum class PeerActivateMessageSerializeTag{};
    WrappableFunction<PeerActivateMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__PeerActivateMessage__Serialize;
    enum class SessionLoadMessageSerializeTag{};
    WrappableFunction<SessionLoadMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__SessionLoadMessage__Serialize;
    enum class SessionLoadedMessageSerializeTag{};
    WrappableFunction<SessionLoadedMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__SessionLoadedMessage__Serialize;
    enum class LevelLoadMessageSerializeTag{};
    WrappableFunction<LevelLoadMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__LevelLoadMessage__Serialize;
    enum class LevelLoadedMessageSerializeTag{};
    WrappableFunction<LevelLoadedMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__LevelLoadedMessage__Serialize;
    enum class LoadStartMessageSerializeTag{};
    WrappableFunction<LoadStartMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__LoadStartMessage__Serialize;
    enum class LoadStartedMessageSerializeTag{};
    WrappableFunction<LoadStartedMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__LoadStartedMessage__Serialize;
    enum class AbstractPeerBindSocketTag{};
    WrappableFunction<AbstractPeerBindSocketTag, net::AbstractPeerBindSocketProc> net__AbstractPeer__BindSocket;
    enum class AbstractPeerSendMessageSinglePeerTag{};
    WrappableFunction<AbstractPeerSendMessageSinglePeerTag, net::AbstractPeerSendMessageSinglePeerProc> net__AbstractPeer__SendMessageSinglePeer;
    enum class AbstractPeerSendMessageMultiPeerMoveIdsTag{};
    WrappableFunction<AbstractPeerSendMessageMultiPeerMoveIdsTag, net::AbstractPeerSendMessageMultiPeerMoveIdsProc> net__AbstractPeer__SendMessageMultiPeerMoveIds;
    enum class AbstractPeerSendGeneralMessageTag{};
    WrappableFunction<AbstractPeerSendGeneralMessageTag,
        void(void*, void*, TPeerId, uint8_t, void*, net::Message*)> net__AbstractPeer__SendGeneralMessage;
    enum class AbstractPeerReceiveGeneralMessageTag{};
    WrappableFunction<AbstractPeerReceiveGeneralMessageTag,
        bool(void*, net::BitstreamSerializer*, TPeerId, net::Message*)> net__AbstractPeer__ReceiveGeneralMessage;
    enum class JoiningProtocolProcessMessageTag{};
    WrappableFunction<JoiningProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__JoiningProtocol__ProcessMessage;
    enum class ClientLoadProtocolProcessMessageTag{};
    WrappableFunction<ClientLoadProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ClientLoadProtocol__ProcessMessage;
    enum class ServerLoadProtocolProcessMessageTag{};
    WrappableFunction<ServerLoadProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ServerLoadProtocol__ProcessMessage;
    enum class ServerCharacterCreationProtocolProcessMessageTag{};
    WrappableFunction<ServerCharacterCreationProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ServerCharacterCreationProtocol__ProcessMessage;
    enum class EntityHandleSetInsertTag{};
    WrappableFunction<EntityHandleSetInsertTag,
        void*(void*, void*, uint64_t const*)> ecs__EntityHandleSet__Insert;
    enum class EntityReplicationSystemUpdateTag{};
    WrappableFunction<EntityReplicationSystemUpdateTag,
        void(void*, void*)> ecs__EntityReplicationSystem__Update;
    enum class EntityReplicationCommandBufferFlushTag{};
    WrappableFunction<EntityReplicationCommandBufferFlushTag,
        void(void*, void*, void*)> ecs__EntityReplicationCommandBuffer__Flush;
    enum class LobbyMembershipCheckTag{};
    WrappableFunction<LobbyMembershipCheckTag, uint8_t(void*, int8_t)> eocnet__Lobby__CheckMembership;
    enum class LobbyIsReadyTag{};
    WrappableFunction<LobbyIsReadyTag, uint8_t(void*)> eocnet__Lobby__IsReady;
    enum class SocketOverrideSendTag{};
    WrappableFunction<SocketOverrideSendTag, int(void*, char const*, int, void const*)> stm__SteamSocketOverride__RakNetSendTo;
    enum class SocketOverrideReceiveTag{};
    WrappableFunction<SocketOverrideReceiveTag, int(void*, char*, void*)> stm__SteamSocketOverride__RakNetRecvFrom;
    enum class WinSockRecvFromTag{};
    WrappableFunction<WinSockRecvFromTag, int(uintptr_t, char*, int, int, void*, int*)> winsock__recvfrom;
    enum class WinSockSendToTag{};
    WrappableFunction<WinSockSendToTag, int(uintptr_t, char const*, int, int, void const*, int)> winsock__sendto;
    enum class WinSockWSARecvFromTag{};
    WrappableFunction<WinSockWSARecvFromTag, int(uintptr_t, void*, uint32_t, uint32_t*, uint32_t*, void*, int*, void*, void*)>
        winsock__WSARecvFrom;
    enum class WinSockWSAGetOverlappedResultTag{};
    WrappableFunction<WinSockWSAGetOverlappedResultTag, int(uintptr_t, void*, uint32_t*, int, uint32_t*)>
        winsock__WSAGetOverlappedResult;
    enum class WinSockWSASendToTag{};
    WrappableFunction<WinSockWSASendToTag, int(uintptr_t, void*, uint32_t, uint32_t*, uint32_t, void const*, int, void*, void*)>
        winsock__WSASendTo;

private:
    char const* GetLocalPeerMessageTraceSource(net::AbstractPeer* peer) const;
    bool BeginLocalPeerMessageTraceEvent(uint32_t& eventIndex);
    bool BeginInitialPeerSerializerTelemetryEvent(uint32_t& eventIndex);
    bool BeginSocketOverrideSendTelemetryEvent(uint32_t& eventIndex);
    bool BeginRakNetRecvTelemetryEvent(uint32_t& eventIndex);
    bool BeginRakNetSendTelemetryEvent(uint32_t& eventIndex);
    bool BeginPartyWinSocketTelemetryEvent(uint32_t& eventIndex);
    bool BeginLocalPeerTransportPrototypeEvent(uint32_t& eventIndex);
    bool BeginLoadProtocolWireTraceEvent(uint32_t& eventIndex);
    net::ProtocolResult OnLoadProtocolProcessMessage(
        char const* side,
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    bool EnsureLocalPeerTransportMapping(void* steamSocketOverride);
    bool IsMarkedSyntheticPeer(TPeerId peerId) const;
    uintptr_t FindGameReturnAddressRva() const;
    uintptr_t FindEntityReplicationEnqueueCallerRva(uint64_t entityHandle);
    uintptr_t FindEntityReplicationAuthorityInsertCallerRva(uint64_t entityHandle);

    struct PendingPartyWinReceive
    {
        uintptr_t Socket;
        void* Buffers;
        uint32_t BufferCount;
        void* From;
        int* FromLength;
    };

    bool loaded_{ false };
    bool networkingInitialized_{ false };
    bool nativePeerLimitUnexpectedValueLogged_{ false };
    bool nativePlayerCapacityUnexpectedValueLogged_{ false };
    std::atomic<uint32_t> localPeerMessageTraceEventCount_{ 0 };
    std::atomic<uint32_t> initialPeerSerializerTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> socketOverrideSendTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> rakNetRecvTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> rakNetSendTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> partyWinSocketTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> localPeerTransportPrototypeEventCount_{ 0 };
    std::atomic<uint32_t> loadProtocolWireTraceEventCount_{ 0 };
    std::atomic<uint32_t> markedSyntheticPeerMask_{ 0 };
    std::mutex localPeerTransportMappingMutex_;
    void* localPeerTransportMappedOverride_{ nullptr };
    std::mutex pendingPartyWinReceivesMutex_;
    std::unordered_map<void*, PendingPartyWinReceive> pendingPartyWinReceives_;
    std::mutex entityReplicationTraceMutex_;
    std::atomic<bool> entityReplicationPreBindCaptureEnabled_{ false };
    std::atomic<uint32_t> entityReplicationCommandBufferMismatchCount_{ 0 };
    std::unordered_map<uint64_t, uintptr_t> entityReplicationCommandEnqueueCallerRvas_;
    std::unordered_map<uint64_t, uintptr_t> entityReplicationAuthorityInsertCallerRvas_;
};

END_SE()
