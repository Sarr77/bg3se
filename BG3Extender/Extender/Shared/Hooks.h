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
    net::ProtocolResult OnClientJoiningProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnJoiningProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    void OnModReconciliationClassify(
        void (*wrapped)(void*, void*, void*, void*, void*, void*, void*, void*),
        void* manager, void* hostManifest, void* asyncState,
        void* mismatch0, void* mismatch1, void* mismatch2, void* mismatch3, void* mismatch4);
    void OnModReconciliationGate(
        void (*wrapped)(void*, void*),
        void* coordinator, void* hostManifest);
    uint32_t OnModManifestCompare(
        uint32_t (*wrapped)(void*, void*, void*),
        void* firstManifest, void* secondManifest, void* mismatchOutput);
    net::ProtocolResult OnClientLobbyProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnServerLobbyProtocolProcessMessage(
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    void OnDCLobbyUpdate(void (*wrapped)(void*), void* lobby);
    void OnPlatformIdentityMapWrite(
        void (*wrapped)(void*, int32_t, void const*),
        void* identityMap, int32_t peerId, void const* identity);
    void OnConnectedPeerRegistered(
        void (*wrapped)(void*, int32_t const*),
        void* gameServer, int32_t const* peerId);
    uint8_t OnSessionMemberAdded(
        uint8_t (*wrapped)(void*, int32_t const*),
        void* listener, int32_t const* membershipEvent);
    void OnCharacterOwnerWrite(
        void (*wrapped)(void*, void const*, uint32_t, uint8_t),
        void* gameServer, void const* entityObject, uint32_t proposedUserId, uint8_t assignImmediately);
    uint8_t OnLobbyParticipantAdded(
        uint8_t (*wrapped)(void*, uint32_t const*),
        void* callback, uint32_t const* compositeId);
    void OnServerLobbyRecordWrite(
        void (*wrapped)(void*, void const*, uint8_t),
        void* lobbyManager, void const* record, uint8_t slot);
    void OnServerLobbyStateReconcile(
        void (*wrapped)(void*, void*, uint8_t, uint8_t),
        void* lobbyManager, void* body, uint8_t notify, uint8_t reserved);
    void OnLobbyStartGame(void (*wrapped)(void*), void* lobbyManager);
    void OnLobbyReadyRecompute(void (*wrapped)(void*), void* lobbyManager);
    void OnConnectionParticipantRemove(
        void (*wrapped)(void*, int32_t const*, void const*, uint32_t),
        void* gameServer, int32_t const* peerId, void const* displayName, uint32_t reason);
    void OnConnectionStateEvent(
        void (*wrapped)(void*, void const*),
        void* gameServer, void const* event);
    uint8_t OnSteamLobbyVisibility(
        uint8_t (*wrapped)(void*, uint8_t, uint8_t*, uint8_t*),
        void* manager, uint8_t requestedVisibility,
        uint8_t* previousVisibility, uint8_t* effectiveVisibility);
    void OnSteamLobbyCreated(
        void (*wrapped)(void*, void const*, uint8_t),
        void* manager, void const* callback, uint8_t ioFailure);
    uint8_t OnSteamLobbyJoinRequest(
        uint8_t (*wrapped)(void*, void const*),
        void* manager, void const* lobbyRecord);
    void OnSteamLobbyEntered(
        void (*wrapped)(void*, void const*, uint8_t),
        void* manager, void const* callback, uint8_t ioFailure);
    void OnSteamLobbyMatchList(
        void (*wrapped)(void*, uint32_t const*, uint8_t, void*),
        void* manager, uint32_t const* matchCount, uint8_t ioFailure, void* context);
    void* OnPlatformMemberResolve(
        void* (*wrapped)(void*, void const*),
        void* participantManager, void const* identity);
    void OnPlatformMembershipEvent(
        void (*wrapped)(void*, uint32_t, uint8_t),
        void* participantManager, uint32_t internalMemberId, uint8_t eventFlag);
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
    void* OnAlternateEntityHandleSetInsert(
        void* (*wrapped)(void*, void*, uint64_t const*),
        void* set, void* result, uint64_t const* entityHandle);
    void* OnEntityHandleArrayAppend(
        void* (*wrapped)(void*, uint64_t const*),
        void* array, uint64_t const* entityHandle);
    void* OnEntityReplicationCommandSetInsert(
        void* (*wrapped)(void*, void*, uint64_t const*),
        void* set, void* result, uint64_t const* entityHandle);
    void OnEntityReplicationCommandBufferReplicate(
        void (*wrapped)(void*, uint64_t const*),
        void* context, uint64_t const* entityHandle);
    void OnEntityReplicationSystemUpdate(
        void (*wrapped)(void*, void*),
        void* replicationSystem, void* context);
    void OnEntityReplicationCommandBufferFlush(
        void (*wrapped)(void*, void*, void*),
        void* commandBuffer, void* host, void* replicationAuthority);
    uint64_t OnCharacterAssignmentEntityRoute(
        uint64_t (*wrapped)(void*, void*),
        void* peerContext, void* entityContext);
    void OnPeersInRangeAdd(
        void (*wrapped)(void*, int32_t const*),
        void* entityContext, int32_t const* peerId);
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
    enum class ClientJoiningProtocolProcessMessageTag{};
    WrappableFunction<ClientJoiningProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ClientJoiningProtocol__ProcessMessage;
    enum class ModReconciliationClassifyTag{};
    WrappableFunction<ModReconciliationClassifyTag,
        void(void*, void*, void*, void*, void*, void*, void*, void*)> eocnet__ModReconciliation__Classify;
    enum class ModReconciliationGateTag{};
    WrappableFunction<ModReconciliationGateTag,
        void(void*, void*)> eocnet__ModReconciliation__RunGate;
    enum class ModManifestCompareTag{};
    WrappableFunction<ModManifestCompareTag,
        uint32_t(void*, void*, void*)> eocnet__ModManifest__Compare;
    enum class ClientLobbyProtocolProcessMessageTag{};
    WrappableFunction<ClientLobbyProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ClientLobbyProtocol__ProcessMessage;
    enum class ServerLobbyProtocolProcessMessageTag{};
    WrappableFunction<ServerLobbyProtocolProcessMessageTag,
        net::ProtocolResult(net::Protocol*, void*, net::MessageContext*, net::Message*)> eocnet__ServerLobbyProtocol__ProcessMessage;
    enum class DCLobbyUpdateTag{};
    WrappableFunction<DCLobbyUpdateTag, void(void*)> ecl__DCLobby__Update;
    enum class PlatformIdentityMapWriteTag{};
    WrappableFunction<PlatformIdentityMapWriteTag,
        void(void*, int32_t, void const*)> net__PlatformIdentityMap__Write;
    enum class ConnectedPeerRegisteredTag{};
    WrappableFunction<ConnectedPeerRegisteredTag,
        void(void*, int32_t const*)> esv__GameServer__RegisterConnectedPeer;
    enum class SessionMemberAddedTag{};
    WrappableFunction<SessionMemberAddedTag,
        uint8_t(void*, int32_t const*)> esv__GameServer__SessionMemberAdded;
    enum class CharacterOwnerWriteTag{};
    WrappableFunction<CharacterOwnerWriteTag,
        void(void*, void const*, uint32_t, uint8_t)> esv__GameServer__WriteCharacterOwner;
    enum class LobbyParticipantAddedTag{};
    WrappableFunction<LobbyParticipantAddedTag,
        uint8_t(void*, uint32_t const*)> esv__LobbyManager__ParticipantAdded;
    enum class ServerLobbyRecordWriteTag{};
    WrappableFunction<ServerLobbyRecordWriteTag,
        void(void*, void const*, uint8_t)> esv__LobbyManager__WriteRecord;
    enum class ServerLobbyStateReconcileTag{};
    WrappableFunction<ServerLobbyStateReconcileTag,
        void(void*, void*, uint8_t, uint8_t)> esv__LobbyManager__ReconcileState;
    enum class LobbyStartGameTag{};
    WrappableFunction<LobbyStartGameTag, void(void*)> esv__LobbyManager__StartGame;
    enum class LobbyReadyRecomputeTag{};
    WrappableFunction<LobbyReadyRecomputeTag, void(void*)> esv__LobbyManager__RecomputeReady;
    enum class ConnectionParticipantRemoveTag{};
    WrappableFunction<ConnectionParticipantRemoveTag,
        void(void*, int32_t const*, void const*, uint32_t)> esv__GameServer__RemoveParticipant;
    enum class ConnectionStateEventTag{};
    WrappableFunction<ConnectionStateEventTag,
        void(void*, void const*)> esv__GameServer__OnConnectionStateEvent;
    enum class SteamLobbyVisibilityTag{};
    WrappableFunction<SteamLobbyVisibilityTag,
        uint8_t(void*, uint8_t, uint8_t*, uint8_t*)> stm__SteamMatchMakingManager__SetLobbyVisibility;
    enum class SteamLobbyCreatedTag{};
    WrappableFunction<SteamLobbyCreatedTag,
        void(void*, void const*, uint8_t)> stm__SteamMatchMakingManager__OnLobbyCreated;
    enum class SteamLobbyJoinRequestTag{};
    WrappableFunction<SteamLobbyJoinRequestTag,
        uint8_t(void*, void const*)> stm__SteamMatchMakingManager__JoinLobby;
    enum class SteamLobbyEnteredTag{};
    WrappableFunction<SteamLobbyEnteredTag,
        void(void*, void const*, uint8_t)> stm__SteamMatchMakingManager__OnLobbyEntered;
    enum class SteamLobbyMatchListTag{};
    WrappableFunction<SteamLobbyMatchListTag,
        void(void*, uint32_t const*, uint8_t, void*)> stm__SteamMatchMakingManager__OnLobbyMatchList;
    enum class PlatformMemberResolveTag{};
    WrappableFunction<PlatformMemberResolveTag,
        void*(void*, void const*)> net__PlatformParticipantManager__ResolveMember;
    enum class PlatformMembershipEventTag{};
    WrappableFunction<PlatformMembershipEventTag,
        void(void*, uint32_t, uint8_t)> net__PlatformParticipantManager__PublishMembershipEvent;
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
    enum class AlternateEntityHandleSetInsertTag{};
    WrappableFunction<AlternateEntityHandleSetInsertTag,
        void*(void*, void*, uint64_t const*)> ecs__AlternateEntityHandleSet__Insert;
    enum class EntityHandleArrayAppendTag{};
    WrappableFunction<EntityHandleArrayAppendTag,
        void*(void*, uint64_t const*)> ecs__EntityHandleArray__Append;
    enum class EntityReplicationCommandSetInsertTag{};
    WrappableFunction<EntityReplicationCommandSetInsertTag,
        void*(void*, void*, uint64_t const*)> ecs__EntityReplicationCommandSet__Insert;
    enum class EntityReplicationCommandBufferReplicateTag{};
    WrappableFunction<EntityReplicationCommandBufferReplicateTag,
        void(void*, uint64_t const*)> ecs__EntityReplicationCommandBuffer__Replicate;
    enum class EntityReplicationSystemUpdateTag{};
    WrappableFunction<EntityReplicationSystemUpdateTag,
        void(void*, void*)> ecs__EntityReplicationSystem__Update;
    enum class EntityReplicationCommandBufferFlushTag{};
    WrappableFunction<EntityReplicationCommandBufferFlushTag,
        void(void*, void*, void*)> ecs__EntityReplicationCommandBuffer__Flush;
    enum class CharacterAssignmentEntityRouteTag{};
    WrappableFunction<CharacterAssignmentEntityRouteTag,
        uint64_t(void*, void*)> eocnet__CharacterAssignment__RouteEntity;
    enum class PeersInRangeAddTag{};
    WrappableFunction<PeersInRangeAddTag,
        void(void*, int32_t const*)> esv__PeersInRange__Add;
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
    void TraceCharacterLifecycleEnqueue(net::AbstractPeer* peer, TPeerId peerId, net::Message* message);
    bool BeginLocalPeerMessageTraceEvent(uint32_t& eventIndex);
    bool BeginInitialPeerSerializerTelemetryEvent(uint32_t& eventIndex);
    bool BeginSocketOverrideSendTelemetryEvent(uint32_t& eventIndex);
    bool BeginRakNetRecvTelemetryEvent(uint32_t& eventIndex);
    bool BeginRakNetSendTelemetryEvent(uint32_t& eventIndex);
    bool BeginPartyWinSocketTelemetryEvent(uint32_t& eventIndex);
    bool BeginLocalPeerTransportPrototypeEvent(uint32_t& eventIndex);
    bool BeginJoinLifecycleTraceEvent(uint32_t& eventIndex);
    bool BeginLoadProtocolWireTraceEvent(uint32_t& eventIndex);
    void TraceJoinMessageSemantics(
        char const* side, char const* direction, TPeerId peerId,
        net::Message* message, uint32_t callIndex);
    void TraceServerLobbySnapshot(
        char const* event, uint32_t callIndex, void const* lobbyManager);
    void TraceGameServerSessionSnapshot(
        char const* event, uint32_t callIndex, void const* gameServer);
    void TraceCreatorStateSnapshot(
        char const* event, uint32_t callIndex, void const* gameServer,
        uint64_t netId, uint64_t expectedEntityHandle, uint32_t targetUserId);
    net::ProtocolResult OnJoiningProtocolProcessMessageImpl(
        char const* side, bool allowSyntheticAdmission,
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    net::ProtocolResult OnLoadProtocolProcessMessage(
        char const* side,
        net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
        net::Protocol* protocol, void* unused, net::MessageContext* context, net::Message* message);
    bool EnsureLocalPeerTransportMapping(void* steamSocketOverride);
    bool IsMarkedSyntheticPeer(TPeerId peerId) const;
    size_t CaptureGameReturnAddressRvas(uintptr_t* rvas, size_t capacity) const;
    uintptr_t FindGameReturnAddressRva() const;
    uintptr_t FindEntityReplicationEnqueueCallerRva(uint64_t entityHandle);
    uintptr_t FindEntityReplicationEnqueueSourceRva(uint64_t entityHandle);
    uintptr_t FindEntityReplicationAuthorityInsertCallerRva(uint64_t entityHandle);
    void* OnEntityHandleSetInsertImpl(
        void* (*wrapped)(void*, void*, uint64_t const*),
        void* set, void* result, uint64_t const* entityHandle, uintptr_t sourceRva);

    struct PendingPartyWinReceive
    {
        uintptr_t Socket;
        void* Buffers;
        uint32_t BufferCount;
        void* From;
        int* FromLength;
    };

    struct EntityReplicationPendingInsert
    {
        void* Set{ nullptr };
        uint64_t EntityHandle{ 0 };
        uintptr_t CallerRva{ 0 };
        uintptr_t SourceRva{ 0 };
        uint32_t ThreadId{ 0 };
    };

    struct EntityReplicationCommandFlushHistory
    {
        uint64_t FirstSequence{ 0 };
        uint64_t LastSequence{ 0 };
        uint32_t Occurrences{ 0 };
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
    std::atomic<uint32_t> joinLifecycleTraceEventCount_{ 0 };
    std::atomic<uint32_t> loadProtocolWireTraceEventCount_{ 0 };
    std::atomic<uint32_t> characterAssignmentEntityRouteTraceEventCount_{ 0 };
    std::atomic<uint32_t> peersInRangeAddTraceEventCount_{ 0 };
    std::atomic<uint32_t> markedSyntheticPeerMask_{ 0 };
    std::atomic<bool> syntheticLobbyBypassActive_{ false };
    std::mutex localPeerTransportMappingMutex_;
    void* localPeerTransportMappedOverride_{ nullptr };
    std::mutex pendingPartyWinReceivesMutex_;
    std::unordered_map<void*, PendingPartyWinReceive> pendingPartyWinReceives_;
    std::mutex entityReplicationTraceMutex_;
    std::atomic<bool> entityReplicationPreBindCaptureEnabled_{ false };
    std::atomic<uintptr_t> entityReplicationServerCommandReplicateSet_{ 0 };
    std::atomic<uint32_t> entityReplicationCommandBufferMismatchCount_{ 0 };
    std::atomic<uint64_t> entityReplicationServerFlushSequence_{ 0 };
    std::atomic<uint32_t> entityReplicationCommandSetInvalidLayoutCount_{ 0 };
    std::atomic<uint32_t> entityReplicationAlternateInsertMatchCount_{ 0 };
    std::array<EntityReplicationPendingInsert, 8192> entityReplicationPendingInserts_{};
    size_t entityReplicationPendingInsertNext_{ 0 };
    size_t entityReplicationPendingInsertCount_{ 0 };
    uint64_t entityReplicationPendingInsertTotal_{ 0 };
    std::unordered_map<uint64_t, uintptr_t> entityReplicationCommandEnqueueCallerRvas_;
    std::unordered_map<uint64_t, uintptr_t> entityReplicationCommandEnqueueSourceRvas_;
    std::unordered_map<uint64_t, uintptr_t> entityReplicationAuthorityInsertCallerRvas_;
    std::unordered_map<uint64_t, EntityReplicationCommandFlushHistory> entityReplicationCommandFlushHistory_;
};

END_SE()
