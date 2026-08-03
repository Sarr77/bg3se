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
    bool OnAbstractPeerBindSocket(net::AbstractPeerBindSocketProc* wrapped, net::AbstractPeer* peer, uint16_t port, uint32_t socketType);

    enum class ClientConnectMessageSerializeTag{};
    WrappableFunction<ClientConnectMessageSerializeTag, void(net::Message*, net::BitstreamSerializer*)> eocnet__ClientConnectMessage__Serialize;
    enum class AbstractPeerBindSocketTag{};
    WrappableFunction<AbstractPeerBindSocketTag, net::AbstractPeerBindSocketProc> net__AbstractPeer__BindSocket;

private:
    bool loaded_{ false };
    bool networkingInitialized_{ false };
    bool nativePeerLimitUnexpectedValueLogged_{ false };
};

END_SE()
