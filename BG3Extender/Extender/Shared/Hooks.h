#pragma once

#include <Osiris/Shared/CustomFunctions.h>
#include <Extender/Shared/ExtensionState.h>
#include <GameDefinitions/Stats/Stats.h>
#include <GameDefinitions/Net.h>
#include <CoreLib/Wrappers.h>

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
    bool OnAbstractPeerBindSocket(net::AbstractPeerBindSocketProc* wrapped, net::AbstractPeer* peer, uint16_t port, uint32_t socketType);
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
    enum class AbstractPeerSendMessageSinglePeerTag{};
    WrappableFunction<AbstractPeerSendMessageSinglePeerTag, net::AbstractPeerSendMessageSinglePeerProc> net__AbstractPeer__SendMessageSinglePeer;
    enum class AbstractPeerSendMessageMultiPeerMoveIdsTag{};
    WrappableFunction<AbstractPeerSendMessageMultiPeerMoveIdsTag, net::AbstractPeerSendMessageMultiPeerMoveIdsProc> net__AbstractPeer__SendMessageMultiPeerMoveIds;
    enum class SocketOverrideSendTag{};
    WrappableFunction<SocketOverrideSendTag, int(void*, char const*, int, void const*)> stm__SteamSocketOverride__RakNetSendTo;

private:
    char const* GetLocalPeerMessageTraceSource(net::AbstractPeer* peer) const;
    bool BeginLocalPeerMessageTraceEvent(uint32_t& eventIndex);
    bool BeginInitialPeerSerializerTelemetryEvent(uint32_t& eventIndex);
    bool BeginSocketOverrideSendTelemetryEvent(uint32_t& eventIndex);

    bool loaded_{ false };
    bool networkingInitialized_{ false };
    bool nativePeerLimitUnexpectedValueLogged_{ false };
    std::atomic<uint32_t> localPeerMessageTraceEventCount_{ 0 };
    std::atomic<uint32_t> initialPeerSerializerTelemetryEventCount_{ 0 };
    std::atomic<uint32_t> socketOverrideSendTelemetryEventCount_{ 0 };
};

END_SE()
