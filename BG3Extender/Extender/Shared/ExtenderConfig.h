#pragma once

#include <cstdint>
#include <string>

BEGIN_SE()

struct ProfilerThreshold
{
    inline constexpr ProfilerThreshold(uint32_t error)
        : Error(error)
    {}

    uint32_t Error{ 0 };
};

inline constexpr bool IsValidExperimentalNativeMultiplayerPeerLimit(uint32_t limit)
{
    return limit >= 9 && limit <= 64;
}

inline constexpr bool IsValidInitialPeerSerializerTelemetryMaxEvents(uint32_t maxEvents)
{
    return maxEvents >= 1 && maxEvents <= 1024;
}

inline constexpr bool IsValidSocketOverrideSendTelemetryMaxEvents(uint32_t maxEvents)
{
    return maxEvents >= 1 && maxEvents <= 1024;
}

inline constexpr bool IsValidRakNetRecvTelemetryMaxEvents(uint32_t maxEvents)
{
    return maxEvents >= 1 && maxEvents <= 1024;
}

static_assert(!IsValidExperimentalNativeMultiplayerPeerLimit(0));
static_assert(!IsValidExperimentalNativeMultiplayerPeerLimit(8));
static_assert(IsValidExperimentalNativeMultiplayerPeerLimit(9));
static_assert(IsValidExperimentalNativeMultiplayerPeerLimit(64));
static_assert(!IsValidExperimentalNativeMultiplayerPeerLimit(65));
static_assert(!IsValidInitialPeerSerializerTelemetryMaxEvents(0));
static_assert(IsValidInitialPeerSerializerTelemetryMaxEvents(1));
static_assert(IsValidInitialPeerSerializerTelemetryMaxEvents(64));
static_assert(IsValidInitialPeerSerializerTelemetryMaxEvents(1024));
static_assert(!IsValidInitialPeerSerializerTelemetryMaxEvents(1025));
static_assert(!IsValidSocketOverrideSendTelemetryMaxEvents(0));
static_assert(IsValidSocketOverrideSendTelemetryMaxEvents(1));
static_assert(IsValidSocketOverrideSendTelemetryMaxEvents(128));
static_assert(IsValidSocketOverrideSendTelemetryMaxEvents(1024));
static_assert(!IsValidSocketOverrideSendTelemetryMaxEvents(1025));
static_assert(!IsValidRakNetRecvTelemetryMaxEvents(0));
static_assert(IsValidRakNetRecvTelemetryMaxEvents(1));
static_assert(IsValidRakNetRecvTelemetryMaxEvents(64));
static_assert(IsValidRakNetRecvTelemetryMaxEvents(1024));
static_assert(!IsValidRakNetRecvTelemetryMaxEvents(1025));

struct ExtenderConfig
{
#if defined(OSI_EXTENSION_BUILD)
    bool CreateConsole{ false };
    bool DefaultToClientConsole{ false };
    bool EnableDebugger{ false };
    bool EnableLuaDebugger{ false };
#else
    bool CreateConsole{ true };
    bool DefaultToClientConsole{ false };
    bool EnableDebugger{ true };
    bool EnableLuaDebugger{ true };
#endif

    bool ExtendStory{ false };
    bool LogFailedCompile{ true };
    bool EnableLogging{ false };
    bool LogCompile{ false };
    bool LogRuntime{ false };
    bool SendCrashReports{ true };
    bool ForceCrashReporting{ false };
    bool EnableAchievements{ true };
    bool DisableLauncher{ false };
    bool DisableStoryPatching{ false };
    bool DisableStoryCompilation{ true };
    bool InsanityCheck{ false };
    bool LocalMessagePassing{ true };
    bool Optick{ false };
    bool MergeVirtualTextures{ false };
    // Read-only research telemetry for multiplayer capacity. Disabled by default.
    bool EnableMultiplayerCapacityTelemetry{ false };
    uint32_t MultiplayerCapacityTelemetryIntervalMs{ 10000 };
    // Bounded, metadata-only trace of the common client/server message enqueue path.
    bool EnableLocalPeerMessageTrace{ false };
    uint32_t LocalPeerMessageTraceMaxEvents{ 4096 };
    // Bounded field/size telemetry for the first peer serializers. No strings or GUID values.
    bool EnableInitialPeerSerializerTelemetry{ false };
    uint32_t InitialPeerSerializerTelemetryMaxEvents{ 64 };
    // Bounded metadata-only trace of SteamSocketOverride::RakNetSendTo.
    bool EnableSocketOverrideSendTelemetry{ false };
    uint32_t SocketOverrideSendTelemetryMaxEvents{ 128 };
    // Loopback-only metadata trace for recvfrom() on the RakNet host port.
    bool EnableRakNetRecvTelemetry{ false };
    uint32_t RakNetRecvTelemetryMaxEvents{ 64 };
    // Loopback-only metadata trace for sendto() from the RakNet host port.
    bool EnableRakNetSendTelemetry{ false };
    uint32_t RakNetSendTelemetryMaxEvents{ 64 };
    // Experimental native RakNet peer capacity override. 0 disables the hook.
    uint32_t ExperimentalNativeMultiplayerPeerLimit{ 0 };

#if defined(OSI_EXTENSION_BUILD)
#if defined(_DEBUG)
    bool DeveloperMode{ true };
#else
    bool DeveloperMode{ false };
#endif // defined(_DEBUG)
#else
    bool DeveloperMode{ true };
#endif // defined(OSI_EXTENSION_BUILD)

    bool ClearOnReset{ true };
    uint32_t DebuggerPort{ 9999 };
    uint32_t LuaDebuggerPort{ 9998 };
    uint32_t DebugFlags{ 0 };
    std::wstring LogDirectory;
    std::wstring LuaBuiltinResourceDirectory;
    std::string CustomProfile;

    // Lua profiler configuration
    bool EnablePerfMessages{ true };
    ProfilerThreshold ProfilerLoadThreshold{ 50000 };
    ProfilerThreshold ProfilerLoadCallbackThreshold{ 50000 };
    ProfilerThreshold ProfilerCallbackThreshold{ 5000 };
    ProfilerThreshold ProfilerClientCallbackThreshold{ 2000 };
};

inline bool ProfilerShouldReport(uint64_t took, ExtenderConfig const& config, ProfilerThreshold const& threshold)
{
    return config.EnablePerfMessages
        && took >= threshold.Error;
}

#define PERF_REPORT(type, took, ...) WARN(##__VA_ARGS__)
#define PERF_SHOULD_REPORT(type, took) ProfilerShouldReport((took), gExtender->GetConfig(), gExtender->GetConfig().Profiler##type##Threshold)

END_SE()
