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
    uint8_t OnGameServerGetMaxPlayers(uint8_t (*wrapped)(void*), void* server);
    void OnAbstractPeerSendMessageSinglePeer(net::AbstractPeerSendMessageSinglePeerProc* wrapped,
        net::AbstractPeer* peer, TPeerId peerId, net::Message* message);
    void OnAbstractPeerSendMessageMultiPeerMoveIds(net::AbstractPeerSendMessageMultiPeerMoveIdsProc* wrapped,
        net::AbstractPeer* peer, Array<PeerId>* recipients, net::Message* message, TPeerId excludePeerId);

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
    enum class GameServerGetMaxPlayersTag{};
    WrappableFunction<GameServerGetMaxPlayersTag, uint8_t(void*)> esv__GameServer__GetMaxPlayers;
    enum class AbstractPeerSendMessageSinglePeerTag{};
    WrappableFunction<AbstractPeerSendMessageSinglePeerTag, net::AbstractPeerSendMessageSinglePeerProc> net__AbstractPeer__SendMessageSinglePeer;
    enum class AbstractPeerSendMessageMultiPeerMoveIdsTag{};
    WrappableFunction<AbstractPeerSendMessageMultiPeerMoveIdsTag, net::AbstractPeerSendMessageMultiPeerMoveIdsProc> net__AbstractPeer__SendMessageMultiPeerMoveIds;
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
    bool EnsureLocalPeerTransportMapping(void* steamSocketOverride);

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
    std::mutex localPeerTransportMappingMutex_;
    void* localPeerTransportMappedOverride_{ nullptr };
    std::mutex pendingPartyWinReceivesMutex_;
    std::unordered_map<void*, PendingPartyWinReceive> pendingPartyWinReceives_;
};

END_SE()
