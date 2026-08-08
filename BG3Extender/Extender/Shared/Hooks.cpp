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
decltype(Hooks::stm__SteamSocketOverride__RakNetSendTo)* decltype(Hooks::stm__SteamSocketOverride__RakNetSendTo)::gHook;
decltype(Hooks::stm__SteamSocketOverride__RakNetRecvFrom)* decltype(Hooks::stm__SteamSocketOverride__RakNetRecvFrom)::gHook;
decltype(Hooks::winsock__recvfrom)* decltype(Hooks::winsock__recvfrom)::gHook;
decltype(Hooks::winsock__sendto)* decltype(Hooks::winsock__sendto)::gHook;
decltype(Hooks::winsock__WSARecvFrom)* decltype(Hooks::winsock__WSARecvFrom)::gHook;
decltype(Hooks::winsock__WSAGetOverlappedResult)* decltype(Hooks::winsock__WSAGetOverlappedResult)::gHook;
decltype(Hooks::winsock__WSASendTo)* decltype(Hooks::winsock__WSASendTo)::gHook;

static constexpr uintptr_t SteamSocketOverrideSendRva7398727 = 0x4061C20;
static constexpr uintptr_t SteamSocketOverrideReceiveRva7398727 = 0x4061D60;
static constexpr uintptr_t SocketOverrideAddOverrideRva7398727 = 0x405B960;
static constexpr uintptr_t SocketOverrideHelperSendRva7398727 = 0x405B2D0;
static constexpr uintptr_t SocketOverrideMapSystemAddressRva7398727 = 0x405C340;
static constexpr uintptr_t SocketOverrideMapTransportAddressRva7398727 = 0x405C420;
static constexpr uint64_t LocalPeerTransportSyntheticId = 0xE100000000000001ull;
static constexpr uint8_t SteamSocketOverrideSendPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10,
    0x48, 0x89, 0x6C, 0x24, 0x18,
    0x48, 0x89, 0x7C, 0x24, 0x20,
    0x41, 0x56, 0x48, 0x83, 0xEC, 0x50
};

static constexpr uint8_t SteamSocketOverrideReceivePreamble7398727[] = {
    0x40, 0x55, 0x53, 0x56, 0x57, 0x41, 0x54, 0x41,
    0x56, 0x41, 0x57, 0x48, 0x8D, 0xAC, 0x24, 0xB0,
    0xFB, 0xFF, 0xFF, 0x48, 0x81, 0xEC, 0x50, 0x05
};

static constexpr uint8_t SocketOverrideAddOverridePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x48, 0x89, 0x74,
    0x24, 0x20, 0x55, 0x57, 0x41, 0x54, 0x41, 0x56,
    0x41, 0x57, 0x48, 0x8D, 0x6C, 0x24, 0xC9, 0x48
};

static constexpr uint8_t SocketOverrideHelperSendPreamble7398727[] = {
    0x40, 0x55, 0x53, 0x56, 0x57, 0x41, 0x56, 0x41,
    0x57, 0x48, 0x8D, 0xAC, 0x24, 0x78, 0xFF, 0xFF,
    0xFF, 0x48, 0x81, 0xEC, 0x88, 0x01, 0x00, 0x00
};

static constexpr uint8_t SocketOverrideMapSystemAddressPreamble7398727[] = {
    0x40, 0x53, 0x56, 0x57, 0x48, 0x83, 0xEC, 0x60,
    0x48, 0x8B, 0x05, 0x11, 0x9A, 0xE6, 0x01, 0x48,
    0x33, 0xC4, 0x48, 0x89, 0x44, 0x24, 0x58, 0x49
};

static constexpr uint8_t SocketOverrideMapTransportAddressPreamble7398727[] = {
    0x40, 0x53, 0x55, 0x56, 0x57, 0x41, 0x56, 0x48,
    0x83, 0xEC, 0x60, 0x48, 0x8B, 0x05, 0x2E, 0x99,
    0xE6, 0x01, 0x48, 0x33, 0xC4, 0x48, 0x89, 0x44,
    0x24, 0x58
};

struct LocalPeerTransportAddress
{
    uint32_t Kind;
    uint8_t Type;
    uint8_t Reserved[3];
    uint64_t Id;
    uint64_t SecondaryId;
};

static_assert(sizeof(LocalPeerTransportAddress) == 24);

using SocketOverrideAddOverrideProc = void (*)(void*, LocalPeerTransportAddress const*);
using SocketOverrideHelperSendProc = int (*)(void*, void*, char const*, int, LocalPeerTransportAddress const*);
using SocketOverrideMapSystemAddressProc = bool (*)(void*, void const*, LocalPeerTransportAddress*);
using SocketOverrideMapTransportAddressProc = bool (*)(void*, LocalPeerTransportAddress*, void*);

static SocketOverrideAddOverrideProc LocalPeerTransportAddOverride{ nullptr };
static SocketOverrideHelperSendProc LocalPeerTransportHelperSend{ nullptr };
static SocketOverrideMapSystemAddressProc LocalPeerTransportMapSystemAddress{ nullptr };
static SocketOverrideMapTransportAddressProc LocalPeerTransportMapTransportAddress{ nullptr };

static bool IsLocalPeerTransportDefaultProxyDestination(void* helperState)
{
    if (helperState == nullptr) {
        return false;
    }

    auto const destination = reinterpret_cast<sockaddr_in*>(
        reinterpret_cast<uint8_t*>(helperState) + 8);
    return destination->sin_family == AF_INET
        && destination->sin_port == htons(51914)
        && destination->sin_addr.s_addr == htonl(INADDR_ANY);
}

static int SendLocalPeerTransportToLoopbackProxy(void* helperState,
    void* socketOverride, char const* data, int length,
    LocalPeerTransportAddress const* transportAddress, bool& routeAdjusted)
{
    routeAdjusted = false;
    if (helperState == nullptr || LocalPeerTransportHelperSend == nullptr) {
        return SOCKET_ERROR;
    }

    auto sendWithTemporaryLoopback = [&]() {
        auto destination = reinterpret_cast<sockaddr_in*>(
            reinterpret_cast<uint8_t*>(helperState) + 8);
        auto const originalAddress = destination->sin_addr.s_addr;
        destination->sin_addr.s_addr = htonl(INADDR_LOOPBACK);
        auto const result = LocalPeerTransportHelperSend(
            helperState, socketOverride, data, length, transportAddress);
        destination->sin_addr.s_addr = originalAddress;
        routeAdjusted = true;
        return result;
    };

    if (IsLocalPeerTransportDefaultProxyDestination(helperState)) {
        return sendWithTemporaryLoopback();
    }

    auto const initialResult = LocalPeerTransportHelperSend(
        helperState, socketOverride, data, length, transportAddress);
    if (initialResult == SOCKET_ERROR
        && IsLocalPeerTransportDefaultProxyDestination(helperState)) {
        return sendWithTemporaryLoopback();
    }
    return initialResult;
}

template <class T, size_t N>
static T ResolveExactGameFunction(uintptr_t rva, uint8_t const (&preamble)[N])
{
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        return nullptr;
    }

    auto const target = reinterpret_cast<uint8_t const*>(module + rva);
    if (memcmp(target, preamble, N) != 0) {
        return nullptr;
    }

    return reinterpret_cast<T>(const_cast<uint8_t*>(target));
}

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

static bool IsSocketOverrideTelemetryResearchBuild(GameVersionInfo const& version)
{
    return version.Major == 4
        && version.Minor == 73
        && version.Revision == 98
        && version.Build == 727;
}

static int (*ResolveSteamSocketOverrideSend())(void*, char const*, int, void const*)
{
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        return nullptr;
    }

    auto const target = reinterpret_cast<uint8_t const*>(module + SteamSocketOverrideSendRva7398727);
    if (memcmp(target, SteamSocketOverrideSendPreamble7398727,
            sizeof(SteamSocketOverrideSendPreamble7398727)) != 0) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(void*, char const*, int, void const*)>(
        const_cast<uint8_t*>(target));
}

static int (*ResolveSteamSocketOverrideReceive())(void*, char*, void*)
{
    return ResolveExactGameFunction<int (*)(void*, char*, void*)>(
        SteamSocketOverrideReceiveRva7398727,
        SteamSocketOverrideReceivePreamble7398727);
}

static SocketOverrideAddOverrideProc ResolveSocketOverrideAddOverride()
{
    return ResolveExactGameFunction<SocketOverrideAddOverrideProc>(
        SocketOverrideAddOverrideRva7398727,
        SocketOverrideAddOverridePreamble7398727);
}

static SocketOverrideHelperSendProc ResolveSocketOverrideHelperSend()
{
    return ResolveExactGameFunction<SocketOverrideHelperSendProc>(
        SocketOverrideHelperSendRva7398727,
        SocketOverrideHelperSendPreamble7398727);
}

static SocketOverrideMapSystemAddressProc ResolveSocketOverrideMapSystemAddress()
{
    return ResolveExactGameFunction<SocketOverrideMapSystemAddressProc>(
        SocketOverrideMapSystemAddressRva7398727,
        SocketOverrideMapSystemAddressPreamble7398727);
}

static SocketOverrideMapTransportAddressProc ResolveSocketOverrideMapTransportAddress()
{
    return ResolveExactGameFunction<SocketOverrideMapTransportAddressProc>(
        SocketOverrideMapTransportAddressRva7398727,
        SocketOverrideMapTransportAddressPreamble7398727);
}

static int (*ResolveWinSockRecvFrom())(uintptr_t, char*, int, int, void*, int*)
{
    auto const module = GetModuleHandleW(L"Ws2_32.dll");
    if (module == nullptr) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(uintptr_t, char*, int, int, void*, int*)>(
        GetProcAddress(module, "recvfrom"));
}

static int (*ResolveWinSockSendTo())(uintptr_t, char const*, int, int, void const*, int)
{
    auto const module = GetModuleHandleW(L"Ws2_32.dll");
    if (module == nullptr) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(uintptr_t, char const*, int, int, void const*, int)>(
        GetProcAddress(module, "sendto"));
}

static int (*ResolveWinSockWSARecvFrom())(uintptr_t, void*, uint32_t, uint32_t*, uint32_t*, void*, int*, void*, void*)
{
    auto const module = GetModuleHandleW(L"Ws2_32.dll");
    if (module == nullptr) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t*, void*, int*, void*, void*)>(
        GetProcAddress(module, "WSARecvFrom"));
}

static int (*ResolveWinSockWSAGetOverlappedResult())(uintptr_t, void*, uint32_t*, int, uint32_t*)
{
    auto const module = GetModuleHandleW(L"Ws2_32.dll");
    if (module == nullptr) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(uintptr_t, void*, uint32_t*, int, uint32_t*)>(
        GetProcAddress(module, "WSAGetOverlappedResult"));
}

static int (*ResolveWinSockWSASendTo())(uintptr_t, void*, uint32_t, uint32_t*, uint32_t, void const*, int, void*, void*)
{
    auto const module = GetModuleHandleW(L"Ws2_32.dll");
    if (module == nullptr) {
        return nullptr;
    }

    return reinterpret_cast<int (*)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t, void const*, int, void*, void*)>(
        GetProcAddress(module, "WSASendTo"));
}

static bool IsDatagramSocket(SOCKET socket)
{
    int type{};
    int typeLength = sizeof(type);
    return getsockopt(socket, SOL_SOCKET, SO_TYPE, reinterpret_cast<char*>(&type), &typeLength) == 0
        && type == SOCK_DGRAM;
}

static_assert(sizeof(uintptr_t) == sizeof(SOCKET));
static_assert(sizeof(uint32_t) == sizeof(DWORD));
static_assert(sizeof(int) == sizeof(BOOL));
static_assert(sizeof(void*) == sizeof(LPWSAOVERLAPPED));
static_assert(sizeof(void*) == sizeof(LPWSAOVERLAPPED_COMPLETION_ROUTINE));

static bool IsLoopbackAddress(sockaddr const* address)
{
    if (address == nullptr || address->sa_family != AF_INET) {
        return false;
    }

    auto const ipv4 = reinterpret_cast<sockaddr_in const*>(address);
    return (ntohl(ipv4->sin_addr.s_addr) >> 24) == 127;
}

static bool TryGetFirstWsaBufferByte(LPWSABUF buffers, DWORD bufferCount, DWORD transferred, uint8_t& byte)
{
    if (buffers == nullptr || transferred == 0) {
        return false;
    }

    for (DWORD i = 0; i < bufferCount; i++) {
        if (buffers[i].buf != nullptr && buffers[i].len != 0) {
            byte = static_cast<uint8_t>(buffers[i].buf[0]);
            return true;
        }
    }

    return false;
}

static uint64_t GetWsaBufferLength(LPWSABUF buffers, DWORD bufferCount)
{
    uint64_t length{ 0 };
    if (buffers != nullptr) {
        for (DWORD i = 0; i < bufferCount; i++) {
            length += buffers[i].len;
        }
    }
    return length;
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

    bool socketOverrideSendHookInstalled{ false };
    if (gExtender->GetConfig().EnableSocketOverrideSendTelemetry) {
        auto const maxEvents = gExtender->GetConfig().SocketOverrideSendTelemetryMaxEvents;
        if (!IsValidSocketOverrideSendTelemetryMaxEvents(maxEvents)) {
            ERR("[MP_TRANSPORT_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-1024", maxEvents);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_TRANSPORT_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (auto const target = ResolveSteamSocketOverrideSend(); target == nullptr) {
            ERR("[MP_TRANSPORT_TRACE] event=disabled reason=send_preamble_mismatch rva=0x%llx",
                (unsigned long long)SteamSocketOverrideSendRva7398727);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            stm__SteamSocketOverride__RakNetSendTo.Wrap(target);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                stm__SteamSocketOverride__RakNetSendTo.SetWrapper(&Hooks::OnSocketOverrideSend, this);
                socketOverrideSendHookInstalled = true;
                INFO("[MP_TRANSPORT_TRACE] event=hook_enabled max_events=%u payload_logging=disabled address_logging=disabled",
                    maxEvents);
            } else {
                ERR("[MP_TRANSPORT_TRACE] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }


    if (gExtender->GetConfig().EnableRakNetRecvTelemetry) {
        auto const maxEvents = gExtender->GetConfig().RakNetRecvTelemetryMaxEvents;
        if (!IsValidRakNetRecvTelemetryMaxEvents(maxEvents)) {
            ERR("[MP_RAKNET_RECV_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-1024", maxEvents);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_RAKNET_RECV_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (auto const target = ResolveWinSockRecvFrom(); target == nullptr) {
            ERR("[MP_RAKNET_RECV_TRACE] event=disabled reason=recvfrom_missing");
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            winsock__recvfrom.Wrap(target);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                winsock__recvfrom.SetWrapper(&Hooks::OnWinSockRecvFrom, this);
                INFO("[MP_RAKNET_RECV_TRACE] event=hook_enabled max_events=%u host_port=23253 payload_logging=disabled address_logging=disabled loopback_only=true",
                    maxEvents);
            } else {
                ERR("[MP_RAKNET_RECV_TRACE] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }


    if (gExtender->GetConfig().EnableRakNetSendTelemetry) {
        auto const maxEvents = gExtender->GetConfig().RakNetSendTelemetryMaxEvents;
        if (!IsValidRakNetRecvTelemetryMaxEvents(maxEvents)) {
            ERR("[MP_RAKNET_SEND_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-1024", maxEvents);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_RAKNET_SEND_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (auto const target = ResolveWinSockSendTo(); target == nullptr) {
            ERR("[MP_RAKNET_SEND_TRACE] event=disabled reason=sendto_missing");
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            winsock__sendto.Wrap(target);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                winsock__sendto.SetWrapper(&Hooks::OnWinSockSendTo, this);
                INFO("[MP_RAKNET_SEND_TRACE] event=hook_enabled max_events=%u host_port=23253 payload_logging=disabled address_logging=disabled loopback_only=true",
                    maxEvents);
            } else {
                ERR("[MP_RAKNET_SEND_TRACE] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    if (gExtender->GetConfig().EnablePartyWinSocketTelemetry) {
        auto const maxEvents = gExtender->GetConfig().PartyWinSocketTelemetryMaxEvents;
        auto const recvTarget = ResolveWinSockWSARecvFrom();
        auto const resultTarget = ResolveWinSockWSAGetOverlappedResult();
        auto const sendTarget = ResolveWinSockWSASendTo();
        if (!IsValidPartyWinSocketTelemetryMaxEvents(maxEvents)) {
            ERR("[MP_PARTYWIN_SOCKET_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-1024", maxEvents);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_PARTYWIN_SOCKET_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (recvTarget == nullptr || resultTarget == nullptr || sendTarget == nullptr) {
            ERR("[MP_PARTYWIN_SOCKET_TRACE] event=disabled reason=winsock_symbol_missing recv=%d result=%d send=%d",
                recvTarget != nullptr,
                resultTarget != nullptr,
                sendTarget != nullptr);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            winsock__WSARecvFrom.Wrap(recvTarget);
            winsock__WSAGetOverlappedResult.Wrap(resultTarget);
            winsock__WSASendTo.Wrap(sendTarget);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                winsock__WSARecvFrom.SetWrapper(&Hooks::OnWinSockWSARecvFrom, this);
                winsock__WSAGetOverlappedResult.SetWrapper(&Hooks::OnWinSockWSAGetOverlappedResult, this);
                winsock__WSASendTo.SetWrapper(&Hooks::OnWinSockWSASendTo, this);
                INFO("[MP_PARTYWIN_SOCKET_TRACE] event=hook_enabled max_events=%u socket_scope=udp payload_logging=disabled address_logging=disabled loopback_only=true",
                    maxEvents);
            } else {
                ERR("[MP_PARTYWIN_SOCKET_TRACE] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    if (gExtender->GetConfig().EnableLocalPeerTransportPrototype) {
        auto const maxEvents = gExtender->GetConfig().LocalPeerTransportPrototypeMaxEvents;
        auto const sendTarget = ResolveSteamSocketOverrideSend();
        auto const receiveTarget = ResolveSteamSocketOverrideReceive();
        auto const addOverride = ResolveSocketOverrideAddOverride();
        auto const helperSend = ResolveSocketOverrideHelperSend();
        auto const mapSystemAddress = ResolveSocketOverrideMapSystemAddress();
        auto const mapTransportAddress = ResolveSocketOverrideMapTransportAddress();
        if (!IsValidLocalPeerTransportPrototypeMaxEvents(maxEvents)) {
            ERR("[MP_LOCAL_TRANSPORT] event=disabled reason=invalid_max_events actual=%u allowed=1-256", maxEvents);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_LOCAL_TRANSPORT] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (sendTarget == nullptr || receiveTarget == nullptr || addOverride == nullptr
            || helperSend == nullptr || mapSystemAddress == nullptr || mapTransportAddress == nullptr) {
            ERR("[MP_LOCAL_TRANSPORT] event=disabled reason=function_guard_failed send=%d receive=%d add_override=%d helper_send=%d address_to_transport=%d transport_to_address=%d",
                sendTarget != nullptr,
                receiveTarget != nullptr,
                addOverride != nullptr,
                helperSend != nullptr,
                mapSystemAddress != nullptr,
                mapTransportAddress != nullptr);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            if (!socketOverrideSendHookInstalled) {
                stm__SteamSocketOverride__RakNetSendTo.Wrap(sendTarget);
            }
            stm__SteamSocketOverride__RakNetRecvFrom.Wrap(receiveTarget);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                LocalPeerTransportAddOverride = addOverride;
                LocalPeerTransportHelperSend = helperSend;
                LocalPeerTransportMapSystemAddress = mapSystemAddress;
                LocalPeerTransportMapTransportAddress = mapTransportAddress;
                if (!socketOverrideSendHookInstalled) {
                    stm__SteamSocketOverride__RakNetSendTo.SetWrapper(&Hooks::OnSocketOverrideSend, this);
                    socketOverrideSendHookInstalled = true;
                }
                stm__SteamSocketOverride__RakNetRecvFrom.SetWrapper(&Hooks::OnSocketOverrideReceive, this);
                INFO("[MP_LOCAL_TRANSPORT] event=hook_enabled max_events=%u peer_scope=one_reserved_id proxy_port=51914 payload_logging=disabled address_logging=disabled id_logging=disabled",
                    maxEvents);
            } else {
                ERR("[MP_LOCAL_TRANSPORT] event=disabled reason=detour_failed status=%ld", status);
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

int Hooks::OnSocketOverrideSend(int (*wrapped)(void*, char const*, int, void const*),
    void* self, char const* data, int length, void const* systemAddress)
{
    if (gExtender->GetConfig().EnableLocalPeerTransportPrototype
        && self != nullptr && data != nullptr && length > 0 && systemAddress != nullptr
        && LocalPeerTransportHelperSend != nullptr && LocalPeerTransportMapSystemAddress != nullptr) {
        auto const socketOverride = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x10);
        LocalPeerTransportAddress transportAddress{};
        if (socketOverride != nullptr
            && LocalPeerTransportMapSystemAddress(socketOverride, systemAddress, &transportAddress)
            && transportAddress.Kind == 1
            && transportAddress.Type == 7
            && transportAddress.Id == LocalPeerTransportSyntheticId
            && transportAddress.SecondaryId == 0) {
            auto const helperState = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(socketOverride) + 0x18);
            bool routeAdjusted{ false };
            auto const helperResult = SendLocalPeerTransportToLoopbackProxy(
                helperState,
                socketOverride,
                data,
                length,
                &transportAddress,
                routeAdjusted);
            auto const result = helperResult > 0 ? length : helperResult;

            uint32_t eventIndex;
            if (BeginLocalPeerTransportPrototypeEvent(eventIndex)) {
                INFO("[MP_LOCAL_TRANSPORT] event=send index=%u length=%d result=%d helper_result=%d proxy_route=%s peer_scope=reserved payload_logging=disabled address_logging=disabled id_logging=disabled",
                    eventIndex,
                    length,
                    result,
                    helperResult,
                    routeAdjusted ? "loopback" : "unchanged");
            }
            return result;
        }
    }

    auto const result = wrapped(self, data, length, systemAddress);

    uint32_t eventIndex;
    if (gExtender->GetConfig().EnableSocketOverrideSendTelemetry
        && BeginSocketOverrideSendTelemetryEvent(eventIndex)) {
        INFO("[MP_TRANSPORT_TRACE] event=send index=%u length=%d result=%d payload_logging=disabled address_logging=disabled",
            eventIndex,
            length,
            result);
    }

    return result;
}

int Hooks::OnSocketOverrideReceive(int (*wrapped)(void*, char*, void*),
    void* self, char* data, void* systemAddress)
{
    EnsureLocalPeerTransportMapping(self);
    auto const result = wrapped(self, data, systemAddress);
    if (result > 0 && self != nullptr && systemAddress != nullptr
        && LocalPeerTransportMapSystemAddress != nullptr) {
        auto const socketOverride = *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(self) + 0x10);
        LocalPeerTransportAddress transportAddress{};
        if (socketOverride != nullptr
            && LocalPeerTransportMapSystemAddress(socketOverride, systemAddress, &transportAddress)
            && transportAddress.Kind == 1
            && transportAddress.Type == 7
            && transportAddress.Id == LocalPeerTransportSyntheticId
            && transportAddress.SecondaryId == 0) {
            uint32_t eventIndex;
            if (BeginLocalPeerTransportPrototypeEvent(eventIndex)) {
                INFO("[MP_LOCAL_TRANSPORT] event=receive index=%u length=%d peer_scope=reserved payload_logging=disabled address_logging=disabled id_logging=disabled",
                    eventIndex,
                    result);
            }
        }
    }
    return result;
}

int Hooks::OnWinSockRecvFrom(int (*wrapped)(uintptr_t, char*, int, int, void*, int*),
    uintptr_t socket, char* buffer, int length, int flags, void* from, int* fromLength)
{
    auto const result = wrapped(socket, buffer, length, flags, from, fromLength);
    auto const sourceAddressBase = reinterpret_cast<sockaddr const*>(from);
    if (result <= 0 || buffer == nullptr || sourceAddressBase == nullptr
        || sourceAddressBase->sa_family != AF_INET) {
        return result;
    }

    auto const source = reinterpret_cast<sockaddr_in const*>(sourceAddressBase);
    auto const sourceAddress = ntohl(source->sin_addr.s_addr);
    if ((sourceAddress >> 24) != 127) {
        return result;
    }

    sockaddr_in local{};
    int localLength = sizeof(local);
    if (getsockname((SOCKET)socket, reinterpret_cast<sockaddr*>(&local), &localLength) != 0
        || local.sin_family != AF_INET
        || ntohs(local.sin_port) != 23253) {
        return result;
    }

    uint32_t eventIndex;
    if (BeginRakNetRecvTelemetryEvent(eventIndex)) {
        INFO("[MP_RAKNET_RECV_TRACE] event=datagram index=%u length=%d message_id=%u source_loopback=true host_port=23253 payload_logging=disabled address_logging=disabled",
            eventIndex,
            result,
            (unsigned)(uint8_t)buffer[0]);
    }

    return result;
}

int Hooks::OnWinSockSendTo(int (*wrapped)(uintptr_t, char const*, int, int, void const*, int),
    uintptr_t socket, char const* buffer, int length, int flags, void const* to, int toLength)
{
    auto const result = wrapped(socket, buffer, length, flags, to, toLength);
    auto const destinationAddressBase = reinterpret_cast<sockaddr const*>(to);
    if (length <= 0 || buffer == nullptr || destinationAddressBase == nullptr
        || destinationAddressBase->sa_family != AF_INET) {
        return result;
    }

    auto const destination = reinterpret_cast<sockaddr_in const*>(destinationAddressBase);
    auto const destinationAddress = ntohl(destination->sin_addr.s_addr);
    if ((destinationAddress >> 24) != 127) {
        return result;
    }

    sockaddr_in local{};
    int localLength = sizeof(local);
    if (getsockname((SOCKET)socket, reinterpret_cast<sockaddr*>(&local), &localLength) != 0
        || local.sin_family != AF_INET
        || ntohs(local.sin_port) != 23253) {
        return result;
    }

    uint32_t eventIndex;
    if (BeginRakNetSendTelemetryEvent(eventIndex)) {
        INFO("[MP_RAKNET_SEND_TRACE] event=datagram index=%u length=%d message_id=%u result=%d destination_loopback=true host_port=23253 payload_logging=disabled address_logging=disabled",
            eventIndex,
            length,
            (unsigned)(uint8_t)buffer[0],
            result);
    }

    return result;
}

int Hooks::OnWinSockWSARecvFrom(int (*wrapped)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t*, void*, int*, void*, void*),
    uintptr_t socket, void* buffers, uint32_t bufferCount, uint32_t* numberOfBytesReceived, uint32_t* flags,
    void* from, int* fromLength, void* overlapped, void* completionRoutine)
{
    auto const datagramSocket = IsDatagramSocket((SOCKET)socket);
    if (datagramSocket && overlapped != nullptr) {
        std::lock_guard<std::mutex> lock(pendingPartyWinReceivesMutex_);
        if (pendingPartyWinReceives_.size() < 1024 || pendingPartyWinReceives_.find(overlapped) != pendingPartyWinReceives_.end()) {
            pendingPartyWinReceives_[overlapped] = PendingPartyWinReceive{
                socket, buffers, bufferCount, from, fromLength
            };
        }
    }

    auto const result = wrapped(socket, buffers, bufferCount, numberOfBytesReceived, flags,
        from, fromLength, overlapped, completionRoutine);
    auto const error = result == SOCKET_ERROR ? WSAGetLastError() : 0;
    if (!datagramSocket) {
        return result;
    }

    if (overlapped != nullptr && (result != SOCKET_ERROR || error != WSA_IO_PENDING)) {
        std::lock_guard<std::mutex> lock(pendingPartyWinReceivesMutex_);
        pendingPartyWinReceives_.erase(overlapped);
    }

    if (result == SOCKET_ERROR && error == WSA_IO_PENDING) {
        return result;
    }

    uint32_t eventIndex;
    auto const transferred = result == 0 && numberOfBytesReceived != nullptr ? *numberOfBytesReceived : 0;
    uint8_t messageId{};
    if (result == 0 && IsLoopbackAddress(reinterpret_cast<sockaddr const*>(from))
        && TryGetFirstWsaBufferByte(reinterpret_cast<LPWSABUF>(buffers), bufferCount, transferred, messageId)
        && BeginPartyWinSocketTelemetryEvent(eventIndex)) {
        INFO("[MP_PARTYWIN_SOCKET_TRACE] event=recv_complete index=%u mode=immediate length=%u message_id=%u result=0 source_loopback=true socket_scope=udp payload_logging=disabled address_logging=disabled",
            eventIndex,
            (unsigned)transferred,
            (unsigned)messageId);
    }

    return result;
}

int Hooks::OnWinSockWSAGetOverlappedResult(int (*wrapped)(uintptr_t, void*, uint32_t*, int, uint32_t*),
    uintptr_t socket, void* overlapped, uint32_t* transferred, int wait, uint32_t* flags)
{
    auto const result = wrapped(socket, overlapped, transferred, wait, flags);
    auto const error = result == FALSE ? WSAGetLastError() : 0;

    PendingPartyWinReceive pending{};
    auto found = false;
    {
        std::lock_guard<std::mutex> lock(pendingPartyWinReceivesMutex_);
        auto const it = pendingPartyWinReceives_.find(overlapped);
        if (it != pendingPartyWinReceives_.end()) {
            pending = it->second;
            found = true;
            if (result != FALSE || error != WSA_IO_INCOMPLETE) {
                pendingPartyWinReceives_.erase(it);
            }
        }
    }

    if (!found || (result == FALSE && error == WSA_IO_INCOMPLETE)) {
        return result;
    }

    uint32_t eventIndex;
    auto const length = result != FALSE && transferred != nullptr ? *transferred : 0;
    uint8_t messageId{};
    if (result != FALSE && IsLoopbackAddress(reinterpret_cast<sockaddr const*>(pending.From))
        && TryGetFirstWsaBufferByte(reinterpret_cast<LPWSABUF>(pending.Buffers), pending.BufferCount, length, messageId)
        && BeginPartyWinSocketTelemetryEvent(eventIndex)) {
        INFO("[MP_PARTYWIN_SOCKET_TRACE] event=recv_complete index=%u mode=overlapped length=%u message_id=%u result=1 source_loopback=true socket_scope=udp payload_logging=disabled address_logging=disabled",
            eventIndex,
            (unsigned)length,
            (unsigned)messageId);
    }

    return result;
}

int Hooks::OnWinSockWSASendTo(int (*wrapped)(uintptr_t, void*, uint32_t, uint32_t*, uint32_t, void const*, int, void*, void*),
    uintptr_t socket, void* buffers, uint32_t bufferCount, uint32_t* numberOfBytesSent, uint32_t flags,
    void const* to, int toLength, void* overlapped, void* completionRoutine)
{
    auto const trace = IsDatagramSocket((SOCKET)socket)
        && IsLoopbackAddress(reinterpret_cast<sockaddr const*>(to));
    auto const length = trace ? GetWsaBufferLength(reinterpret_cast<LPWSABUF>(buffers), bufferCount) : 0;
    uint8_t messageId{};
    auto const hasMessageId = trace && TryGetFirstWsaBufferByte(reinterpret_cast<LPWSABUF>(buffers), bufferCount,
        static_cast<DWORD>(std::min<uint64_t>(length, UINT32_MAX)), messageId);

    auto const result = wrapped(socket, buffers, bufferCount, numberOfBytesSent, flags,
        to, toLength, overlapped, completionRoutine);
    auto const error = result == SOCKET_ERROR ? WSAGetLastError() : 0;

    uint32_t eventIndex;
    if (hasMessageId && BeginPartyWinSocketTelemetryEvent(eventIndex)) {
        INFO("[MP_PARTYWIN_SOCKET_TRACE] event=send index=%u length=%llu message_id=%u result=%d error=%d overlapped=%d destination_loopback=true socket_scope=udp payload_logging=disabled address_logging=disabled",
            eventIndex,
            (unsigned long long)length,
            (unsigned)messageId,
            result,
            error,
            overlapped != nullptr);
    }

    return result;
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

bool Hooks::BeginSocketOverrideSendTelemetryEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().SocketOverrideSendTelemetryMaxEvents;
    eventIndex = socketOverrideSendTelemetryEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_TRANSPORT_TRACE] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

bool Hooks::BeginRakNetRecvTelemetryEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().RakNetRecvTelemetryMaxEvents;
    eventIndex = rakNetRecvTelemetryEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_RAKNET_RECV_TRACE] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

bool Hooks::BeginRakNetSendTelemetryEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().RakNetSendTelemetryMaxEvents;
    eventIndex = rakNetSendTelemetryEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_RAKNET_SEND_TRACE] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

bool Hooks::BeginPartyWinSocketTelemetryEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().PartyWinSocketTelemetryMaxEvents;
    eventIndex = partyWinSocketTelemetryEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_PARTYWIN_SOCKET_TRACE] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

bool Hooks::BeginLocalPeerTransportPrototypeEvent(uint32_t& eventIndex)
{
    auto const maxEvents = gExtender->GetConfig().LocalPeerTransportPrototypeMaxEvents;
    eventIndex = localPeerTransportPrototypeEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_LOCAL_TRANSPORT] event=limit_reached max_events=%u", maxEvents);
    }

    return false;
}

bool Hooks::EnsureLocalPeerTransportMapping(void* steamSocketOverride)
{
    if (!gExtender->GetConfig().EnableLocalPeerTransportPrototype
        || steamSocketOverride == nullptr || LocalPeerTransportAddOverride == nullptr
        || LocalPeerTransportMapTransportAddress == nullptr) {
        return false;
    }

    auto const socketOverride = *reinterpret_cast<void**>(
        reinterpret_cast<uint8_t*>(steamSocketOverride) + 0x10);
    if (socketOverride == nullptr) {
        return false;
    }

    std::lock_guard<std::mutex> lock(localPeerTransportMappingMutex_);
    if (localPeerTransportMappedOverride_ == socketOverride) {
        return true;
    }

    LocalPeerTransportAddress transportAddress{
        1,
        7,
        { 0, 0, 0 },
        LocalPeerTransportSyntheticId,
        0
    };
    LocalPeerTransportAddOverride(socketOverride, &transportAddress);

    alignas(16) uint8_t systemAddress[128]{};
    auto transportAddressForLookup = transportAddress;
    auto const mappingReady = LocalPeerTransportMapTransportAddress(
        socketOverride,
        &transportAddressForLookup,
        systemAddress);
    if (mappingReady) {
        localPeerTransportMappedOverride_ = socketOverride;
    }

    uint32_t eventIndex;
    if (BeginLocalPeerTransportPrototypeEvent(eventIndex)) {
        INFO("[MP_LOCAL_TRANSPORT] event=mapping_attempt index=%u result=%s peer_scope=reserved payload_logging=disabled address_logging=disabled id_logging=disabled",
            eventIndex,
            mappingReady ? "ready" : "failed");
    }
    return mappingReady;
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
