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
decltype(Hooks::net__AbstractPeer__SendGeneralMessage)* decltype(Hooks::net__AbstractPeer__SendGeneralMessage)::gHook;
decltype(Hooks::net__AbstractPeer__ReceiveGeneralMessage)* decltype(Hooks::net__AbstractPeer__ReceiveGeneralMessage)::gHook;
decltype(Hooks::eocnet__JoiningProtocol__ProcessMessage)* decltype(Hooks::eocnet__JoiningProtocol__ProcessMessage)::gHook;
decltype(Hooks::eocnet__ClientLoadProtocol__ProcessMessage)* decltype(Hooks::eocnet__ClientLoadProtocol__ProcessMessage)::gHook;
decltype(Hooks::eocnet__ServerLoadProtocol__ProcessMessage)* decltype(Hooks::eocnet__ServerLoadProtocol__ProcessMessage)::gHook;
decltype(Hooks::eocnet__ServerCharacterCreationProtocol__ProcessMessage)* decltype(Hooks::eocnet__ServerCharacterCreationProtocol__ProcessMessage)::gHook;
decltype(Hooks::ecs__EntityHandleSet__Insert)* decltype(Hooks::ecs__EntityHandleSet__Insert)::gHook;
decltype(Hooks::ecs__AlternateEntityHandleSet__Insert)* decltype(Hooks::ecs__AlternateEntityHandleSet__Insert)::gHook;
decltype(Hooks::ecs__EntityHandleArray__Append)* decltype(Hooks::ecs__EntityHandleArray__Append)::gHook;
decltype(Hooks::ecs__EntityReplicationCommandSet__Insert)* decltype(Hooks::ecs__EntityReplicationCommandSet__Insert)::gHook;
decltype(Hooks::ecs__EntityReplicationCommandBuffer__Replicate)* decltype(Hooks::ecs__EntityReplicationCommandBuffer__Replicate)::gHook;
decltype(Hooks::ecs__EntityReplicationSystem__Update)* decltype(Hooks::ecs__EntityReplicationSystem__Update)::gHook;
decltype(Hooks::ecs__EntityReplicationCommandBuffer__Flush)* decltype(Hooks::ecs__EntityReplicationCommandBuffer__Flush)::gHook;
decltype(Hooks::eocnet__Lobby__CheckMembership)* decltype(Hooks::eocnet__Lobby__CheckMembership)::gHook;
decltype(Hooks::eocnet__Lobby__IsReady)* decltype(Hooks::eocnet__Lobby__IsReady)::gHook;
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
static constexpr uintptr_t JoiningProtocolProcessMessageRva7398727 = 0x426A9A0;
static constexpr uintptr_t LobbyMembershipCheckRva7398727 = 0x404E570;
static constexpr uintptr_t LobbyIsReadyRva7398727 = 0x404DA40;
static constexpr uintptr_t AbstractPeerSendGeneralMessageRva7398727 = 0x4061F20;
static constexpr uintptr_t AbstractPeerReceiveGeneralMessageRva7398727 = 0x4062320;
static constexpr uintptr_t ClientLoadProtocolProcessMessageRva7398727 = 0x1FEE910;
static constexpr uintptr_t ServerLoadProtocolProcessMessageRva7398727 = 0x2F9F170;
static constexpr uintptr_t ServerCharacterCreationProtocolProcessMessageRva7398727 = 0x373C020;
static constexpr uintptr_t EntityHandleSetInsertRva7398727 = 0x1135EB0;
static constexpr uintptr_t AlternateEntityHandleSetInsertRva7398727 = 0x3148D00;
static constexpr uintptr_t EntityHandleArrayAppendRva7398727 = 0x7554F0;
static constexpr uintptr_t EntityReplicationCommandSetInsertRva7398727 = 0x7200C0;
static constexpr uintptr_t EntityReplicationCommandBufferReplicateRva7398727 = 0x428FF80;
static constexpr uintptr_t EntityReplicationSystemUpdateRva7398727 = 0x3158380;
static constexpr uintptr_t EntityReplicationCommandBufferFlushRva7398727 = 0x4287190;
static constexpr uintptr_t NativePlayerSlotPatchRvas7398727[] = {
    0x14AF947,
    0x14B1020,
    0x18846D5,
    0x3297E2C,
    0x15485BF,
    0x11DC4A5,
    0x14B0C34,
    0x14B18B4
};
static constexpr uint64_t LocalPeerTransportSyntheticIdBase = 0xE100000000000001ull;
static constexpr uint32_t LocalPeerTransportSyntheticPeerCount = 8;
struct EntityReplicationThreadTraceState
{
    uintptr_t ActiveCommandBuffer{ 0 };
    std::array<uintptr_t, 8> DerivedCommandBuffers{};
    std::array<uintptr_t, 8> ValidatedCommandBuffers{};
};

static thread_local EntityReplicationThreadTraceState EntityReplicationTraceForCurrentThread;

struct EntityReplicationCountWriteRecord
{
    uintptr_t NextInstruction{ 0 };
    uint64_t EntityHandle{ 0 };
    int32_t CountAfter{ 0 };
    uint32_t ThreadId{ 0 };
};

static constexpr size_t EntityReplicationCountWriteRecordCapacity = 4096;
static std::array<EntityReplicationCountWriteRecord,
    EntityReplicationCountWriteRecordCapacity> EntityReplicationCountWriteRecords;
static std::atomic<uint32_t> EntityReplicationCountWriteRecordNext{ 0 };
static std::atomic<uint32_t> EntityReplicationCountWriteRecordPublished{ 0 };
static std::atomic<uint32_t> EntityReplicationCountWriteRecordDumped{ 0 };
static std::atomic<uint32_t> EntityReplicationCountWatchState{ 0 };
static std::atomic<uintptr_t> EntityReplicationCountWatchAddress{ 0 };
static std::atomic<uintptr_t> EntityReplicationCountWatchSet{ 0 };
static std::atomic<uint32_t> EntityReplicationCountWatchThreadId{ 0 };
static void* EntityReplicationCountWatchHandler{ nullptr };
static HANDLE EntityReplicationCountWatchArmEvent{ nullptr };

static LONG WINAPI EntityReplicationCountWatchExceptionHandler(
    EXCEPTION_POINTERS* exceptionPointers)
{
    if (exceptionPointers == nullptr
        || exceptionPointers->ExceptionRecord == nullptr
        || exceptionPointers->ContextRecord == nullptr
        || exceptionPointers->ExceptionRecord->ExceptionCode != EXCEPTION_SINGLE_STEP
        || (exceptionPointers->ContextRecord->Dr6 & 1u) == 0
        || GetCurrentThreadId()
            != EntityReplicationCountWatchThreadId.load(std::memory_order_relaxed)) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    auto* context = exceptionPointers->ContextRecord;
    context->Dr6 &= ~uintptr_t(1u);

    auto const countAddress = EntityReplicationCountWatchAddress.load(
        std::memory_order_relaxed);
    auto const setAddress = EntityReplicationCountWatchSet.load(
        std::memory_order_relaxed);
    if (countAddress == 0 || setAddress == 0) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    auto const count = *reinterpret_cast<volatile int32_t const*>(countAddress);
    if (count <= 0 || count > 64) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    auto const entries = *reinterpret_cast<uint64_t const* const*>(setAddress + 0x20);
    if (entries == nullptr) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    auto const entityHandle = entries[count - 1];
    if (entityHandle == 0) {
        return EXCEPTION_CONTINUE_EXECUTION;
    }

    auto const recordIndex = EntityReplicationCountWriteRecordNext.fetch_add(
        1, std::memory_order_relaxed);
    if (recordIndex < EntityReplicationCountWriteRecords.size()) {
        EntityReplicationCountWriteRecords[recordIndex] = {
            static_cast<uintptr_t>(context->Rip),
            entityHandle,
            count,
            GetCurrentThreadId()
        };
        std::atomic_thread_fence(std::memory_order_release);
        EntityReplicationCountWriteRecordPublished.store(
            recordIndex + 1, std::memory_order_release);
    }

    return EXCEPTION_CONTINUE_EXECUTION;
}

static DWORD WINAPI ArmEntityReplicationCountWatchpoint(void*)
{
    auto const threadId = EntityReplicationCountWatchThreadId.load(
        std::memory_order_acquire);
    auto const countAddress = EntityReplicationCountWatchAddress.load(
        std::memory_order_acquire);
    auto thread = OpenThread(
        THREAD_SUSPEND_RESUME | THREAD_GET_CONTEXT | THREAD_SET_CONTEXT
            | THREAD_QUERY_INFORMATION,
        FALSE,
        threadId);
    bool armed{};
    bool suspended{};
    if (thread != nullptr) {
        suspended = SuspendThread(thread) != static_cast<DWORD>(-1);
        if (suspended) {
            CONTEXT context{};
            context.ContextFlags = CONTEXT_DEBUG_REGISTERS;
            if (GetThreadContext(thread, &context)
                && (context.Dr7 & 1u) == 0
                && context.Dr0 == 0) {
                context.Dr0 = countAddress;
                context.Dr6 = 0;
                context.Dr7 &= ~uintptr_t(0xF0003u);
                context.Dr7 |= uintptr_t(1u | (1u << 16) | (3u << 18));
                armed = SetThreadContext(thread, &context) != FALSE;
            }
            ResumeThread(thread);
        }
        CloseHandle(thread);
    }

    EntityReplicationCountWatchState.store(
        armed ? 2u : 3u, std::memory_order_release);
    if (EntityReplicationCountWatchArmEvent != nullptr) {
        SetEvent(EntityReplicationCountWatchArmEvent);
    }
    return 0;
}

static uint32_t EnsureEntityReplicationCountWatchpoint(
    uintptr_t setAddress,
    uint32_t threadId)
{
    uint32_t expected{};
    if (!EntityReplicationCountWatchState.compare_exchange_strong(
            expected, 1u, std::memory_order_acq_rel)) {
        return EntityReplicationCountWatchState.load(std::memory_order_acquire);
    }

    EntityReplicationCountWriteRecordNext.store(0, std::memory_order_release);
    EntityReplicationCountWriteRecordPublished.store(0, std::memory_order_release);
    EntityReplicationCountWriteRecordDumped.store(0, std::memory_order_release);
    EntityReplicationCountWatchSet.store(setAddress, std::memory_order_release);
    EntityReplicationCountWatchAddress.store(setAddress + 0x2C, std::memory_order_release);
    EntityReplicationCountWatchThreadId.store(threadId, std::memory_order_release);

    EntityReplicationCountWatchHandler = AddVectoredExceptionHandler(
        1, EntityReplicationCountWatchExceptionHandler);
    EntityReplicationCountWatchArmEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    if (EntityReplicationCountWatchHandler == nullptr
        || EntityReplicationCountWatchArmEvent == nullptr) {
        EntityReplicationCountWatchState.store(3u, std::memory_order_release);
        return 3u;
    }

    auto worker = CreateThread(
        nullptr, 0, ArmEntityReplicationCountWatchpoint, nullptr, 0, nullptr);
    if (worker == nullptr) {
        EntityReplicationCountWatchState.store(3u, std::memory_order_release);
        return 3u;
    }
    WaitForSingleObject(EntityReplicationCountWatchArmEvent, 1000);
    CloseHandle(worker);
    return EntityReplicationCountWatchState.load(std::memory_order_acquire);
}

static void DumpEntityReplicationCountWriteRecords(uint64_t flushSequence)
{
    auto const published = std::min<uint32_t>(
        EntityReplicationCountWriteRecordPublished.load(std::memory_order_acquire),
        static_cast<uint32_t>(EntityReplicationCountWriteRecords.size()));
    auto dumped = EntityReplicationCountWriteRecordDumped.load(
        std::memory_order_acquire);
    auto const moduleBase = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    while (dumped < published) {
        auto const& record = EntityReplicationCountWriteRecords[dumped];
        auto const nextInstructionRva = record.NextInstruction >= moduleBase
            ? record.NextInstruction - moduleBase
            : 0;
        INFO("[MP_REPLICATION_TRACE] event=command_count_write index=%u thread=%u flush_sequence=%llu count_after=%d entity_handle=0x%016llX next_instruction=0x%p next_instruction_rva=0x%llX watch_address=0x%p mechanism=hardware_watchpoint message_mutation=0",
            dumped,
            record.ThreadId,
            static_cast<unsigned long long>(flushSequence),
            record.CountAfter,
            static_cast<unsigned long long>(record.EntityHandle),
            reinterpret_cast<void*>(record.NextInstruction),
            static_cast<unsigned long long>(nextInstructionRva),
            reinterpret_cast<void*>(EntityReplicationCountWatchAddress.load(
                std::memory_order_acquire)));
        dumped++;
    }
    EntityReplicationCountWriteRecordDumped.store(dumped, std::memory_order_release);
}

template <size_t N>
static bool MarkEntityReplicationCommandBufferSeen(
    std::array<uintptr_t, N>& seen,
    uintptr_t address)
{
    if (address == 0) {
        return false;
    }

    for (auto const candidate : seen) {
        if (candidate == address) {
            return false;
        }
    }

    for (auto& candidate : seen) {
        if (candidate == 0) {
            candidate = address;
            return true;
        }
    }
    return false;
}
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

static constexpr uint8_t JoiningProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0x60, 0xFE, 0xFF, 0xFF,
    0x48, 0x81, 0xEC, 0xA0, 0x02, 0x00, 0x00, 0x48
};

static constexpr uint8_t LobbyMembershipCheckPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x74,
    0x24, 0x10, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x48,
    0x0F, 0xBE, 0xFA, 0x48, 0x8B, 0xF1, 0x40, 0x80,
    0xFF, 0x09, 0x75, 0x12, 0xB0, 0x04, 0x48, 0x8B,
    0x5C, 0x24, 0x30, 0x48, 0x8B, 0x74, 0x24, 0x38,
    0x48, 0x83, 0xC4, 0x20, 0x5F, 0xC3, 0x48, 0x8B,
    0x99, 0x28, 0x04, 0x00, 0x00, 0x48, 0x89, 0x5C,
    0x24, 0x40, 0x48, 0x8B, 0xCB, 0xFF, 0x15, 0x8D,
    0xDF, 0x1F, 0x01
};

static constexpr uint8_t LobbyIsReadyPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83,
    0xEC, 0x20, 0x48, 0x8B, 0x99, 0x28, 0x04, 0x00,
    0x00, 0x48, 0x8B, 0xF9, 0x48, 0x8B, 0xCB, 0xFF
};

static constexpr uintptr_t LobbyCanStartGetterRva7398727 = 0x140CEA0;
static constexpr uint8_t LobbyCanStartGetterExpected7398727[] = {
    0x0F, 0xB6, 0x81, 0x38, 0x08, 0x00, 0x00, 0xC3
};
static constexpr uint8_t LobbyCanStartGetterBypass7398727[] = {
    0xB0, 0x01, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90
};

// LobbyManager::StartGame rejects an otherwise joined synthetic peer when its
// platform identity is absent from the backend-owned session-member list. A
// real platform client populates that list; the local protocol emulator cannot.
// Keep this exact-build patch behind EnableSyntheticLobbyBypassPrototype and
// redirect only the two early-return branches to the normal next-record path.
static constexpr uintptr_t LobbyStartMembershipPatchRvas7398727[] = {
    0x2A9654C,
    0x2A96574
};
static constexpr uint8_t LobbyStartMembershipExpected7398727[][6] = {
    { 0x0F, 0x84, 0x61, 0x04, 0x00, 0x00 },
    { 0x0F, 0x84, 0x39, 0x04, 0x00, 0x00 }
};
static constexpr uint8_t LobbyStartMembershipBypass7398727[][6] = {
    // When the member array is absent, continue with the next lobby record.
    { 0x0F, 0x84, 0x28, 0x00, 0x00, 0x00 },
    // A missing member now falls through to the next lobby record.
    { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 }
};

static_assert(std::size(LobbyStartMembershipPatchRvas7398727)
    == std::size(LobbyStartMembershipExpected7398727));
static_assert(std::size(LobbyStartMembershipPatchRvas7398727)
    == std::size(LobbyStartMembershipBypass7398727));

static constexpr uint8_t AbstractPeerSendGeneralMessagePreamble7398727[] = {
    0x44, 0x89, 0x44, 0x24, 0x18, 0x53, 0x55, 0x56,
    0x57, 0x41, 0x54, 0x41, 0x56, 0x41, 0x57, 0x48,
    0x83, 0xEC, 0x50, 0x41, 0x0F, 0xB6, 0xE9, 0x48,
    0x8B, 0xF2, 0x48, 0x8B, 0xD9
};

static constexpr uint8_t AbstractPeerReceiveGeneralMessagePreamble7398727[] = {
    0x44, 0x89, 0x44, 0x24, 0x18, 0x55, 0x53, 0x56,
    0x57, 0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41,
    0x57, 0x48, 0x8D, 0xAC, 0x24, 0x48, 0xFF, 0xFF,
    0xFF, 0x48, 0x81, 0xEC, 0xB8, 0x01, 0x00, 0x00
};

static constexpr uint8_t ClientLoadProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x8B, 0xC4, 0x48, 0x89, 0x58, 0x10, 0x55,
    0x56, 0x57, 0x41, 0x54, 0x41, 0x55, 0x41, 0x56,
    0x41, 0x57, 0x48, 0x8D, 0xA8, 0xC8, 0xFE, 0xFF,
    0xFF, 0x48, 0x81, 0xEC, 0x00, 0x02, 0x00, 0x00
};

static constexpr uint8_t ServerLoadProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0x6C, 0x24, 0xF0, 0x48, 0x81, 0xEC,
    0x10, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x05
};

static constexpr uint8_t ServerCharacterCreationProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0x40, 0xFB, 0xFF, 0xFF,
    0x48, 0x81, 0xEC, 0xC0, 0x05, 0x00, 0x00
};

static constexpr uint8_t EntityHandleSetInsertPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20, 0x41,
    0x54, 0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC,
    0x20, 0x48, 0x63, 0x41, 0x08, 0x4D, 0x8B, 0xE0,
    0x48, 0x8B, 0xFA, 0x48, 0x8B, 0xF1, 0x41, 0xBF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x85, 0xC0, 0x7E, 0x54,
    0x4D, 0x8B, 0x10, 0x4C, 0x8B, 0xC8, 0x33, 0xD2,
    0x49, 0x8B, 0xC2, 0x49, 0xF7, 0xF1
};

static constexpr uint8_t AlternateEntityHandleSetInsertPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x6C,
    0x24, 0x18, 0x48, 0x89, 0x74, 0x24, 0x20, 0x57,
    0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC, 0x20,
    0x48, 0x63, 0x41, 0x08, 0x4D, 0x8B, 0xF0, 0x48,
    0x8B, 0xF2, 0x48, 0x8B, 0xD9, 0x41, 0xBF, 0xFF,
    0xFF, 0xFF, 0xFF, 0x85, 0xC0, 0x7E, 0x53, 0x4D,
    0x8B, 0x10, 0x4C, 0x8B, 0xC8, 0x33, 0xD2, 0x49,
    0x8B, 0xC2, 0x49, 0xF7, 0xF1, 0x48, 0x8B, 0x03,
    0x48, 0x63, 0xCA, 0x4C, 0x8B, 0xFA, 0x44, 0x8B,
    0x04, 0x88, 0x45, 0x85, 0xC0, 0x78, 0x1A, 0x4C,
    0x8B, 0x4B, 0x20, 0x41, 0x8B, 0xC8, 0x4D, 0x39,
    0x14, 0xC9, 0x74, 0x13, 0x48, 0x8B, 0x43, 0x10,
    0x44, 0x8B, 0x04, 0x88, 0x45, 0x85, 0xC0, 0x79,
    0xEA, 0x41, 0xB8, 0xFF, 0xFF, 0xFF, 0xFF
};

static constexpr uint8_t EntityHandleArrayAppendPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83,
    0xEC, 0x20, 0x48, 0x8B, 0xD9, 0x48, 0x8B, 0xFA,
    0x8B, 0x49, 0x08, 0x8B, 0x43, 0x0C, 0x3B, 0xC8,
    0x7F, 0x16, 0xFF, 0xC0, 0x8D, 0x14, 0x09, 0x3B,
    0xD0, 0x0F, 0x4C, 0xD0, 0x3B, 0xCA, 0x7D, 0x08
};

static constexpr uint8_t EntityReplicationCommandSetInsertPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20, 0x41,
    0x54, 0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC,
    0x20, 0x48, 0x63, 0x41, 0x08, 0x4D, 0x8B, 0xE0,
    0x48, 0x8B, 0xFA, 0x48, 0x8B, 0xF1, 0x41, 0xBF,
    0xFF, 0xFF, 0xFF, 0xFF
};

static constexpr uint8_t EntityReplicationCommandBufferReplicatePreamble7398727[] = {
    0x48, 0x83, 0xEC, 0x38, 0x4C, 0x8B, 0x59, 0x18,
    0x0F, 0x10, 0x02, 0x49, 0x63, 0x83, 0x80, 0x00,
    0x00, 0x00, 0x0F, 0x29, 0x44, 0x24, 0x20, 0x48,
    0x8B, 0x4C, 0x24, 0x20, 0x48, 0x89, 0x4C, 0x24,
    0x40, 0x85, 0xC0, 0x74, 0x39, 0x4C, 0x8B, 0xC0,
    0x33, 0xD2, 0x48, 0x8B, 0xC1, 0x49, 0xF7, 0xF0
};

static constexpr uint8_t EntityReplicationSystemUpdatePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0xB0, 0xFD, 0xFF, 0xFF,
    0x48, 0x81, 0xEC, 0x50, 0x03, 0x00, 0x00,
    0x48, 0x8B, 0x05, 0xBA, 0xD9, 0xD6, 0x02, 0x48,
    0x33, 0xC4, 0x48, 0x89, 0x85, 0x40, 0x02, 0x00,
    0x00, 0x48, 0x8B, 0xF2, 0x48, 0x89, 0x55, 0x90,
    0x4C, 0x8B, 0xF9
};

static constexpr uint8_t EntityReplicationCommandBufferFlushPreamble7398727[] = {
    0x40, 0x56, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x83, 0xEC, 0x28, 0x48, 0x89, 0x5C, 0x24,
    0x58, 0x4D, 0x8B, 0xF0, 0x48, 0x89, 0x6C, 0x24,
    0x60, 0x4C, 0x8B, 0xEA, 0x48, 0x89, 0x7C, 0x24,
    0x68
};

static constexpr uint8_t NativePlayerSlotPatchExpected7398727[][8] = {
    { 0x83, 0xFD, 0x04, 0x0F, 0x8C, 0xA0, 0xFE, 0xFF },
    { 0x41, 0x83, 0xFE, 0x04, 0x0F, 0x8C, 0x66, 0xFF },
    { 0x41, 0x80, 0xFE, 0x04, 0x0F, 0x86, 0x91, 0xFE },
    { 0xC6, 0x40, 0x38, 0x04, 0x48, 0x8B, 0x4E, 0x08 },
    { 0xC6, 0x40, 0x38, 0x04, 0x48, 0x8B, 0x4B, 0x08 },
    { 0xC6, 0x41, 0x38, 0x04, 0x4C, 0x89, 0x41, 0x40 },
    { 0x01, 0x83, 0xFB, 0x04, 0x0F, 0x8D, 0xA0, 0x00 },
    { 0x41, 0x83, 0xFC, 0x04, 0x48, 0x8B, 0x44, 0x24 }
};

static constexpr uint8_t NativePlayerSlotPatchImmediateOffsets7398727[] = {
    2, 3, 3, 3, 3, 3, 3, 3
};

static_assert(std::size(NativePlayerSlotPatchRvas7398727)
    == std::size(NativePlayerSlotPatchExpected7398727));
static_assert(std::size(NativePlayerSlotPatchRvas7398727)
    == std::size(NativePlayerSlotPatchImmediateOffsets7398727));

static thread_local bool SyntheticLobbyAdmissionActive{ false };

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

static bool IsLocalPeerTransportSyntheticAddress(LocalPeerTransportAddress const& address)
{
    return address.Kind == 1
        && address.Type == 7
        && address.SecondaryId == 0
        && address.Id >= LocalPeerTransportSyntheticIdBase
        && address.Id - LocalPeerTransportSyntheticIdBase < LocalPeerTransportSyntheticPeerCount;
}

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

struct SerializedByteBufferView
{
    uint8_t* Data;
    uint32_t Capacity;
    uint32_t Length;
};

static_assert(offsetof(SerializedByteBufferView, Data) == 0x00);
static_assert(offsetof(SerializedByteBufferView, Capacity) == 0x08);
static_assert(offsetof(SerializedByteBufferView, Length) == 0x0C);
static_assert(sizeof(SerializedByteBufferView) == 0x10);
static_assert(offsetof(net::Message, Reliability) == 0x0C);

static bool WriteNetworkTracePayload(
    uint32_t eventIndex,
    TPeerId peerId,
    uint32_t messageId,
    SerializedByteBufferView const& body,
    uint32_t maxPayloadBytes,
    DWORD& error)
{
    error = ERROR_SUCCESS;
    if (body.Length > maxPayloadBytes || (body.Length > 0 && body.Data == nullptr)) {
        error = ERROR_INVALID_DATA;
        return false;
    }

    wchar_t localAppData[32768];
    auto const localAppDataLength = GetEnvironmentVariableW(
        L"LOCALAPPDATA", localAppData, static_cast<DWORD>(std::size(localAppData)));
    if (localAppDataLength == 0 || localAppDataLength >= std::size(localAppData)) {
        error = GetLastError();
        return false;
    }

    std::wstring extenderDirectory(localAppData, localAppDataLength);
    extenderDirectory += L"\\BG3ScriptExtender";
    if (!CreateDirectoryW(extenderDirectory.c_str(), nullptr)
        && GetLastError() != ERROR_ALREADY_EXISTS) {
        error = GetLastError();
        return false;
    }

    auto traceDirectory = extenderDirectory + L"\\NetworkTrace";
    if (!CreateDirectoryW(traceDirectory.c_str(), nullptr)
        && GetLastError() != ERROR_ALREADY_EXISTS) {
        error = GetLastError();
        return false;
    }

    wchar_t filename[192];
    swprintf_s(filename, L"\\trace-pid%lu-event%u-send-id%u-peer%u.bin",
        GetCurrentProcessId(), eventIndex, messageId, static_cast<uint32_t>(peerId));
    auto const path = traceDirectory + filename;
    auto const file = CreateFileW(
        path.c_str(),
        GENERIC_WRITE,
        FILE_SHARE_READ,
        nullptr,
        CREATE_ALWAYS,
        FILE_ATTRIBUTE_NORMAL | FILE_FLAG_WRITE_THROUGH,
        nullptr);
    if (file == INVALID_HANDLE_VALUE) {
        error = GetLastError();
        return false;
    }

    DWORD written{ 0 };
    auto const writeSucceeded = body.Length == 0
        || WriteFile(file, body.Data, body.Length, &written, nullptr) != FALSE;
    if (!writeSucceeded || written != body.Length) {
        error = writeSucceeded ? ERROR_WRITE_FAULT : GetLastError();
        CloseHandle(file);
        return false;
    }

    if (!FlushFileBuffers(file)) {
        error = GetLastError();
        CloseHandle(file);
        return false;
    }
    CloseHandle(file);
    return true;
}

static void TraceSerializerSnapshot(
    uint32_t eventIndex,
    net::Message* message,
    net::BitstreamSerializer* serializer,
    uint32_t bitsBefore,
    uint32_t offsetBefore,
    uint32_t maxPayloadBytes)
{
    auto const bitstream = serializer != nullptr ? serializer->Bitstream : nullptr;
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    auto const bitsAfter = bitstream != nullptr ? bitstream->NumBits : 0;
    auto const offsetAfter = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0;
    auto const capacityBytes = bitstream != nullptr
        ? (bitstream->AllocatedBits + 7u) / 8u
        : 0u;
    auto const lengthBytes = bitstream != nullptr
        ? (bitstream->NumBits + 7u) / 8u
        : 0u;
    SerializedByteBufferView snapshot{
        bitstream != nullptr ? bitstream->Buf : nullptr,
        capacityBytes,
        lengthBytes
    };
    DWORD payloadError{ ERROR_SUCCESS };
    if (lengthBytes > capacityBytes) {
        payloadError = ERROR_INVALID_DATA;
    }
    auto const payloadWritten = serializer != nullptr
        && serializer->IsWriting != 0
        && lengthBytes <= capacityBytes
        && WriteNetworkTracePayload(
            eventIndex,
            UINT32_MAX,
            messageId,
            snapshot,
            maxPayloadBytes,
            payloadError);
    INFO("[MP_LOAD_TRACE] event=serializer_snapshot index=%u thread=%lu direction=%s msg_id=%u bits_before=%u bits_after=%u offset_before=%u offset_after=%u snapshot_bytes=%u payload_written=%u payload_error=%lu payload_name=trace-pid%lu-event%u-send-id%u-peer%u.bin",
        eventIndex,
        GetCurrentThreadId(),
        serializer != nullptr && serializer->IsWriting ? "write" : "read",
        messageId,
        bitsBefore,
        bitsAfter,
        offsetBefore,
        offsetAfter,
        lengthBytes,
        payloadWritten ? 1u : 0u,
        payloadError,
        GetCurrentProcessId(),
        eventIndex,
        messageId,
        UINT32_MAX);
}

static bool WriteExecutableByte(uint8_t* address, uint8_t value)
{
    DWORD oldProtection{ 0 };
    if (!VirtualProtect(address, 1, PAGE_EXECUTE_READWRITE, &oldProtection)) {
        return false;
    }

    *address = value;
    FlushInstructionCache(GetCurrentProcess(), address, 1);

    DWORD ignored{ 0 };
    return VirtualProtect(address, 1, oldProtection, &ignored) != FALSE;
}

static bool ApplyNativePlayerSlotExpansion7398727(uint8_t target)
{
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        ERR("[MP_PLAYER_SLOTS] event=disabled reason=main_module_missing target=%u", (unsigned)target);
        return false;
    }

    // Validate every exact-build signature before changing any executable byte.
    for (size_t i = 0; i < std::size(NativePlayerSlotPatchRvas7398727); i++) {
        auto const address = reinterpret_cast<uint8_t const*>(
            module + NativePlayerSlotPatchRvas7398727[i]);
        auto const immediateOffset = NativePlayerSlotPatchImmediateOffsets7398727[i];
        auto matches = true;
        for (size_t byteIndex = 0; byteIndex < 8; byteIndex++) {
            if (byteIndex != immediateOffset
                && address[byteIndex] != NativePlayerSlotPatchExpected7398727[i][byteIndex]) {
                matches = false;
                break;
            }
        }
        auto const immediate = address[immediateOffset];
        if (!matches || (immediate != 4 && immediate != target)) {
            ERR("[MP_PLAYER_SLOTS] event=disabled reason=signature_guard_failed patch=P%u rva=0x%llx current_immediate=%u target=%u",
                (unsigned)(i + 1),
                (unsigned long long)NativePlayerSlotPatchRvas7398727[i],
                (unsigned)immediate,
                (unsigned)target);
            return false;
        }
    }

    size_t applied{ 0 };
    bool changed[std::size(NativePlayerSlotPatchRvas7398727)]{};
    for (size_t i = 0; i < std::size(NativePlayerSlotPatchRvas7398727); i++) {
        auto const immediateOffset = NativePlayerSlotPatchImmediateOffsets7398727[i];
        auto address = reinterpret_cast<uint8_t*>(
            module + NativePlayerSlotPatchRvas7398727[i] + immediateOffset);
        if (*address == target) {
            continue;
        }
        if (!WriteExecutableByte(address, target)) {
            // The byte write can succeed even when restoring page protection fails.
            // Include the current patch in rollback if its immediate changed.
            changed[i] = *address == target;
            auto rollbackSucceeded = true;
            for (size_t rollbackIndex = 0; rollbackIndex <= i; rollbackIndex++) {
                if (!changed[rollbackIndex]) {
                    continue;
                }
                auto const rollbackOffset = NativePlayerSlotPatchImmediateOffsets7398727[rollbackIndex];
                auto rollbackAddress = reinterpret_cast<uint8_t*>(
                    module + NativePlayerSlotPatchRvas7398727[rollbackIndex] + rollbackOffset);
                if (*rollbackAddress == target && !WriteExecutableByte(rollbackAddress, 4)) {
                    rollbackSucceeded = false;
                }
            }
            ERR("[MP_PLAYER_SLOTS] event=disabled reason=memory_write_failed patch=P%u target=%u rollback_succeeded=%u",
                (unsigned)(i + 1),
                (unsigned)target,
                rollbackSucceeded ? 1u : 0u);
            return false;
        }
        changed[i] = true;
        applied++;
    }

    INFO("[MP_PLAYER_SLOTS] event=applied target=%u patches=8 newly_written=%u exact_build=4.73.98.727 p5_register_preserved=RBX file_modified=0",
        (unsigned)target,
        (unsigned)applied);
    return true;
}

static bool ApplySyntheticLobbyCanStartBypass7398727()
{
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        ERR("[MP_SYNTHETIC_LOBBY] event=can_start_bypass_disabled reason=main_module_missing");
        return false;
    }

    auto address = reinterpret_cast<uint8_t*>(module + LobbyCanStartGetterRva7398727);
    if (memcmp(address, LobbyCanStartGetterBypass7398727,
            sizeof(LobbyCanStartGetterBypass7398727)) == 0) {
        INFO("[MP_SYNTHETIC_LOBBY] event=can_start_bypass_enabled newly_written=0 exact_build=4.73.98.727 file_modified=0");
        return true;
    }
    if (memcmp(address, LobbyCanStartGetterExpected7398727,
            sizeof(LobbyCanStartGetterExpected7398727)) != 0) {
        ERR("[MP_SYNTHETIC_LOBBY] event=can_start_bypass_disabled reason=signature_guard_failed rva=0x%llx",
            (unsigned long long)LobbyCanStartGetterRva7398727);
        return false;
    }

    size_t written{ 0 };
    for (; written < sizeof(LobbyCanStartGetterBypass7398727); written++) {
        if (!WriteExecutableByte(address + written, LobbyCanStartGetterBypass7398727[written])) {
            auto rollbackSucceeded = true;
            for (size_t rollback = 0; rollback < written; rollback++) {
                if (!WriteExecutableByte(address + rollback, LobbyCanStartGetterExpected7398727[rollback])) {
                    rollbackSucceeded = false;
                }
            }
            ERR("[MP_SYNTHETIC_LOBBY] event=can_start_bypass_disabled reason=memory_write_failed byte=%u rollback_succeeded=%u",
                (unsigned)written,
                rollbackSucceeded ? 1u : 0u);
            return false;
        }
    }

    INFO("[MP_SYNTHETIC_LOBBY] event=can_start_bypass_enabled newly_written=8 exact_build=4.73.98.727 file_modified=0");
    return true;
}

static bool ApplySyntheticLobbyStartMembershipBypass7398727()
{
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        ERR("[MP_SYNTHETIC_LOBBY] event=start_membership_bypass_disabled reason=main_module_missing");
        return false;
    }

    bool changed[std::size(LobbyStartMembershipPatchRvas7398727)][6]{};
    size_t newlyWritten{ 0 };
    for (size_t patch = 0; patch < std::size(LobbyStartMembershipPatchRvas7398727); patch++) {
        auto const address = reinterpret_cast<uint8_t*>(
            module + LobbyStartMembershipPatchRvas7398727[patch]);
        if (memcmp(address, LobbyStartMembershipBypass7398727[patch],
                sizeof(LobbyStartMembershipBypass7398727[patch])) == 0) {
            continue;
        }
        if (memcmp(address, LobbyStartMembershipExpected7398727[patch],
                sizeof(LobbyStartMembershipExpected7398727[patch])) != 0) {
            ERR("[MP_SYNTHETIC_LOBBY] event=start_membership_bypass_disabled reason=signature_guard_failed patch=%u rva=0x%llx",
                (unsigned)(patch + 1),
                (unsigned long long)LobbyStartMembershipPatchRvas7398727[patch]);
            return false;
        }
    }

    for (size_t patch = 0; patch < std::size(LobbyStartMembershipPatchRvas7398727); patch++) {
        auto const address = reinterpret_cast<uint8_t*>(
            module + LobbyStartMembershipPatchRvas7398727[patch]);
        for (size_t byte = 0; byte < sizeof(LobbyStartMembershipBypass7398727[patch]); byte++) {
            if (address[byte] == LobbyStartMembershipBypass7398727[patch][byte]) {
                continue;
            }
            if (!WriteExecutableByte(address + byte,
                    LobbyStartMembershipBypass7398727[patch][byte])) {
                auto rollbackSucceeded = true;
                for (size_t rollbackPatch = 0;
                    rollbackPatch < std::size(LobbyStartMembershipPatchRvas7398727);
                    rollbackPatch++) {
                    auto rollbackAddress = reinterpret_cast<uint8_t*>(
                        module + LobbyStartMembershipPatchRvas7398727[rollbackPatch]);
                    for (size_t rollbackByte = 0;
                        rollbackByte < sizeof(LobbyStartMembershipExpected7398727[rollbackPatch]);
                        rollbackByte++) {
                        if (changed[rollbackPatch][rollbackByte]
                            && !WriteExecutableByte(rollbackAddress + rollbackByte,
                                LobbyStartMembershipExpected7398727[rollbackPatch][rollbackByte])) {
                            rollbackSucceeded = false;
                        }
                    }
                }
                ERR("[MP_SYNTHETIC_LOBBY] event=start_membership_bypass_disabled reason=memory_write_failed patch=%u byte=%u rollback_succeeded=%u",
                    (unsigned)(patch + 1),
                    (unsigned)byte,
                    rollbackSucceeded ? 1u : 0u);
                return false;
            }
            changed[patch][byte] = true;
            newlyWritten++;
        }
    }

    INFO("[MP_SYNTHETIC_LOBBY] event=start_membership_bypass_enabled patches=2 newly_written=%u exact_build=4.73.98.727 file_modified=0 scope=synthetic_research_only",
        (unsigned)newlyWritten);
    return true;
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

static net::ProtocolResult (*ResolveJoiningProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        JoiningProtocolProcessMessageRva7398727,
        JoiningProtocolProcessMessagePreamble7398727);
}

static uint8_t (*ResolveLobbyMembershipCheck())(void*, int8_t)
{
    return ResolveExactGameFunction<uint8_t (*)(void*, int8_t)>(
        LobbyMembershipCheckRva7398727,
        LobbyMembershipCheckPreamble7398727);
}

static uint8_t (*ResolveLobbyIsReady())(void*)
{
    return ResolveExactGameFunction<uint8_t (*)(void*)>(
        LobbyIsReadyRva7398727,
        LobbyIsReadyPreamble7398727);
}

static void (*ResolveAbstractPeerSendGeneralMessage())(
    void*, void*, TPeerId, uint8_t, void*, net::Message*)
{
    return ResolveExactGameFunction<void (*)(
        void*, void*, TPeerId, uint8_t, void*, net::Message*)>(
        AbstractPeerSendGeneralMessageRva7398727,
        AbstractPeerSendGeneralMessagePreamble7398727);
}

static bool (*ResolveAbstractPeerReceiveGeneralMessage())(
    void*, net::BitstreamSerializer*, TPeerId, net::Message*)
{
    return ResolveExactGameFunction<bool (*)(
        void*, net::BitstreamSerializer*, TPeerId, net::Message*)>(
        AbstractPeerReceiveGeneralMessageRva7398727,
        AbstractPeerReceiveGeneralMessagePreamble7398727);
}

static net::ProtocolResult (*ResolveClientLoadProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ClientLoadProtocolProcessMessageRva7398727,
        ClientLoadProtocolProcessMessagePreamble7398727);
}

static net::ProtocolResult (*ResolveServerLoadProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ServerLoadProtocolProcessMessageRva7398727,
        ServerLoadProtocolProcessMessagePreamble7398727);
}

static net::ProtocolResult (*ResolveServerCharacterCreationProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ServerCharacterCreationProtocolProcessMessageRva7398727,
        ServerCharacterCreationProtocolProcessMessagePreamble7398727);
}

static void* (*ResolveEntityHandleSetInsert())(void*, void*, uint64_t const*)
{
    return ResolveExactGameFunction<void* (*)(void*, void*, uint64_t const*)>(
        EntityHandleSetInsertRva7398727,
        EntityHandleSetInsertPreamble7398727);
}

static void* (*ResolveAlternateEntityHandleSetInsert())(void*, void*, uint64_t const*)
{
    return ResolveExactGameFunction<void* (*)(void*, void*, uint64_t const*)>(
        AlternateEntityHandleSetInsertRva7398727,
        AlternateEntityHandleSetInsertPreamble7398727);
}

static void* (*ResolveEntityHandleArrayAppend())(void*, uint64_t const*)
{
    return ResolveExactGameFunction<void* (*)(void*, uint64_t const*)>(
        EntityHandleArrayAppendRva7398727,
        EntityHandleArrayAppendPreamble7398727);
}

static void* (*ResolveEntityReplicationCommandSetInsert())(void*, void*, uint64_t const*)
{
    return ResolveExactGameFunction<void* (*)(void*, void*, uint64_t const*)>(
        EntityReplicationCommandSetInsertRva7398727,
        EntityReplicationCommandSetInsertPreamble7398727);
}

static void (*ResolveEntityReplicationCommandBufferReplicate())(void*, uint64_t const*)
{
    return ResolveExactGameFunction<void (*)(void*, uint64_t const*)>(
        EntityReplicationCommandBufferReplicateRva7398727,
        EntityReplicationCommandBufferReplicatePreamble7398727);
}

static void (*ResolveEntityReplicationSystemUpdate())(void*, void*)
{
    return ResolveExactGameFunction<void (*)(void*, void*)>(
        EntityReplicationSystemUpdateRva7398727,
        EntityReplicationSystemUpdatePreamble7398727);
}

static void (*ResolveEntityReplicationCommandBufferFlush())(void*, void*, void*)
{
    return ResolveExactGameFunction<void (*)(void*, void*, void*)>(
        EntityReplicationCommandBufferFlushRva7398727,
        EntityReplicationCommandBufferFlushPreamble7398727);
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
        } else if (IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())
            && !ApplyNativePlayerSlotExpansion7398727(static_cast<uint8_t>(nativePeerLimit))) {
            ERR("[MP_PEER_LIMIT] event=disabled reason=player_slot_expansion_failed target=%u",
                nativePeerLimit);
        } else if (GetStaticSymbols().net__AbstractPeer__BindSocket == nullptr) {
            ERR("[MP_PEER_LIMIT] event=disabled reason=bind_socket_symbol_missing target=%u", nativePeerLimit);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            net__AbstractPeer__BindSocket.Wrap(GetStaticSymbols().net__AbstractPeer__BindSocket);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__BindSocket.SetWrapper(&Hooks::OnAbstractPeerBindSocket, this);
                INFO("[MP_PEER_LIMIT] event=hook_enabled target=%u transport=1 player_capacity=module_info player_slot_tables=1",
                    nativePeerLimit);
            } else {
                ERR("[MP_PEER_LIMIT] event=disabled reason=detour_failed target=%u status=%ld", nativePeerLimit, status);
            }
        }
    }

    auto const enableMessageTrace = gExtender->GetConfig().EnableLocalPeerMessageTrace;
    if (enableMessageTrace) {
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

    bool localPeerTransportHookInstalled{ false };
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
                localPeerTransportHookInstalled = true;
                INFO("[MP_LOCAL_TRANSPORT] event=hook_enabled max_events=%u peer_scope=reserved_pool peer_count=%u proxy_port=51914 payload_logging=disabled address_logging=disabled id_logging=disabled",
                    maxEvents,
                    LocalPeerTransportSyntheticPeerCount);
            } else {
                ERR("[MP_LOCAL_TRANSPORT] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    if (gExtender->GetConfig().EnableSyntheticLobbyBypassPrototype) {
        auto const marker = gExtender->GetConfig().SyntheticLobbyBypassMarker;
        auto const peerLimit = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
        auto const processMessageTarget = ResolveJoiningProtocolProcessMessage();
        auto const membershipCheckTarget = ResolveLobbyMembershipCheck();
        auto const lobbyIsReadyTarget = ResolveLobbyIsReady();
        if (marker == 0) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=invalid_marker marker_must_be_nonzero=true");
        } else if (!localPeerTransportHookInstalled) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=local_transport_not_ready");
        } else if (!IsValidExperimentalNativeMultiplayerPeerLimit(peerLimit)) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=invalid_peer_limit actual=%u required=9-64", peerLimit);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (!ApplySyntheticLobbyCanStartBypass7398727()) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=can_start_bypass_failed");
        } else if (!ApplySyntheticLobbyStartMembershipBypass7398727()) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=start_membership_bypass_failed");
        } else if (processMessageTarget == nullptr || membershipCheckTarget == nullptr
            || lobbyIsReadyTarget == nullptr) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=function_guard_failed joining_protocol=%d membership_check=%d lobby_is_ready=%d",
                processMessageTarget != nullptr,
                membershipCheckTarget != nullptr,
                lobbyIsReadyTarget != nullptr);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            eocnet__JoiningProtocol__ProcessMessage.Wrap(processMessageTarget);
            eocnet__Lobby__CheckMembership.Wrap(membershipCheckTarget);
            eocnet__Lobby__IsReady.Wrap(lobbyIsReadyTarget);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                eocnet__JoiningProtocol__ProcessMessage.SetWrapper(
                    &Hooks::OnJoiningProtocolProcessMessage, this);
                eocnet__Lobby__CheckMembership.SetWrapper(
                    &Hooks::OnLobbyMembershipCheck, this);
                eocnet__Lobby__IsReady.SetWrapper(
                    &Hooks::OnLobbyIsReady, this);
                INFO("[MP_SYNTHETIC_LOBBY] event=hook_enabled scope=marked_local_client_connect peer_range=2-9 ready_bypass=1 identity_logging=disabled marker_logging=disabled");
            } else {
                ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    auto const enableLoadProtocolWireTrace =
        gExtender->GetConfig().EnableLoadProtocolWireTrace;
    auto const enableSyntheticSessionLoadBypass =
        gExtender->GetConfig().EnableSyntheticPeerSessionLoadBypassPrototype;
    auto const enableSyntheticUncompressedLoadReceiveBypass =
        gExtender->GetConfig().EnableSyntheticPeerUncompressedLoadReceiveBypassPrototype;
    if (enableSyntheticSessionLoadBypass || enableLoadProtocolWireTrace) {
        auto const target = ResolveAbstractPeerSendGeneralMessage();
        if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_SYNTHETIC_SESSION_LOAD] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (target == nullptr) {
            ERR("[MP_SYNTHETIC_SESSION_LOAD] event=disabled reason=function_guard_failed rva=0x4061F20");
        } else if (enableLoadProtocolWireTrace
            && (!IsValidLoadProtocolWireTraceMaxEvents(
                    gExtender->GetConfig().LoadProtocolWireTraceMaxEvents)
                || !IsValidLoadProtocolWireTraceMaxPayloadBytes(
                    gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes))) {
            ERR("[MP_LOAD_TRACE] event=disabled reason=invalid_limits max_events=%u max_payload_bytes=%u",
                gExtender->GetConfig().LoadProtocolWireTraceMaxEvents,
                gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            net__AbstractPeer__SendGeneralMessage.Wrap(target);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__SendGeneralMessage.SetWrapper(
                    &Hooks::OnAbstractPeerSendGeneralMessage, this);
                if (enableSyntheticSessionLoadBypass) {
                    INFO("[MP_SYNTHETIC_SESSION_LOAD] event=hook_enabled scope=general_wrapper marked_synthetic_peers=1 msg_id=194 global_compression_unchanged=1");
                }
                if (enableLoadProtocolWireTrace) {
                    INFO("[MP_LOAD_TRACE] event=send_hook_enabled rva=0x4061F20 payload_capture=1 message_mutation=0");
                }
            } else {
                ERR("[MP_SYNTHETIC_SESSION_LOAD] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    if (enableLoadProtocolWireTrace || enableSyntheticUncompressedLoadReceiveBypass) {
        auto const clientTarget = enableLoadProtocolWireTrace
            ? ResolveClientLoadProtocolProcessMessage()
            : nullptr;
        auto const serverTarget = enableLoadProtocolWireTrace
            ? ResolveServerLoadProtocolProcessMessage()
            : nullptr;
        auto const characterCreationServerTarget = enableLoadProtocolWireTrace
            ? ResolveServerCharacterCreationProtocolProcessMessage()
            : nullptr;
        auto const entityHandleSetInsertTarget = enableLoadProtocolWireTrace
            ? ResolveEntityHandleSetInsert()
            : nullptr;
        auto const alternateEntityHandleSetInsertTarget = enableLoadProtocolWireTrace
            ? ResolveAlternateEntityHandleSetInsert()
            : nullptr;
        auto const entityHandleArrayAppendTarget = enableLoadProtocolWireTrace
            ? ResolveEntityHandleArrayAppend()
            : nullptr;
        auto const entityReplicationCommandSetInsertTarget = enableLoadProtocolWireTrace
            ? ResolveEntityReplicationCommandSetInsert()
            : nullptr;
        auto const entityReplicationCommandBufferReplicateTarget = enableLoadProtocolWireTrace
            ? ResolveEntityReplicationCommandBufferReplicate()
            : nullptr;
        auto const entityReplicationSystemUpdateTarget = enableLoadProtocolWireTrace
            ? ResolveEntityReplicationSystemUpdate()
            : nullptr;
        auto const entityReplicationCommandBufferFlushTarget = enableLoadProtocolWireTrace
            ? ResolveEntityReplicationCommandBufferFlush()
            : nullptr;
        auto const receiveTarget = ResolveAbstractPeerReceiveGeneralMessage();
        if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_LOAD_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (receiveTarget == nullptr
            || (enableLoadProtocolWireTrace
                && (clientTarget == nullptr || serverTarget == nullptr
                    || characterCreationServerTarget == nullptr
                    || entityHandleSetInsertTarget == nullptr
                    || alternateEntityHandleSetInsertTarget == nullptr
                    || entityHandleArrayAppendTarget == nullptr
                    || entityReplicationCommandSetInsertTarget == nullptr
                    || entityReplicationCommandBufferReplicateTarget == nullptr
                    || entityReplicationSystemUpdateTarget == nullptr
                    || entityReplicationCommandBufferFlushTarget == nullptr))) {
            ERR("[MP_LOAD_TRACE] event=disabled reason=receive_or_process_guard_failed receive=%u client=%u server=%u character_creation_server=%u entity_handle_set_insert=%u alternate_entity_handle_set_insert=%u entity_handle_array_append=%u replication_command_set_insert=%u replication_command_buffer_replicate=%u replication_system_update=%u replication_command_buffer_flush=%u",
                receiveTarget != nullptr ? 1u : 0u,
                clientTarget != nullptr ? 1u : 0u,
                serverTarget != nullptr ? 1u : 0u,
                characterCreationServerTarget != nullptr ? 1u : 0u,
                entityHandleSetInsertTarget != nullptr ? 1u : 0u,
                alternateEntityHandleSetInsertTarget != nullptr ? 1u : 0u,
                entityHandleArrayAppendTarget != nullptr ? 1u : 0u,
                entityReplicationCommandSetInsertTarget != nullptr ? 1u : 0u,
                entityReplicationCommandBufferReplicateTarget != nullptr ? 1u : 0u,
                entityReplicationSystemUpdateTarget != nullptr ? 1u : 0u,
                entityReplicationCommandBufferFlushTarget != nullptr ? 1u : 0u);
        } else if (!IsValidLoadProtocolWireTraceMaxEvents(
                gExtender->GetConfig().LoadProtocolWireTraceMaxEvents)
            || !IsValidLoadProtocolWireTraceMaxPayloadBytes(
                gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes)) {
            ERR("[MP_LOAD_TRACE] event=disabled reason=invalid_limits max_events=%u max_payload_bytes=%u",
                gExtender->GetConfig().LoadProtocolWireTraceMaxEvents,
                gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            net__AbstractPeer__ReceiveGeneralMessage.Wrap(receiveTarget);
            if (enableLoadProtocolWireTrace) {
                eocnet__ClientLoadProtocol__ProcessMessage.Wrap(clientTarget);
                eocnet__ServerLoadProtocol__ProcessMessage.Wrap(serverTarget);
                eocnet__ServerCharacterCreationProtocol__ProcessMessage.Wrap(characterCreationServerTarget);
                ecs__EntityHandleSet__Insert.Wrap(entityHandleSetInsertTarget);
                ecs__AlternateEntityHandleSet__Insert.Wrap(alternateEntityHandleSetInsertTarget);
                ecs__EntityHandleArray__Append.Wrap(entityHandleArrayAppendTarget);
                ecs__EntityReplicationCommandSet__Insert.Wrap(entityReplicationCommandSetInsertTarget);
                ecs__EntityReplicationCommandBuffer__Replicate.Wrap(entityReplicationCommandBufferReplicateTarget);
                ecs__EntityReplicationSystem__Update.Wrap(entityReplicationSystemUpdateTarget);
                ecs__EntityReplicationCommandBuffer__Flush.Wrap(entityReplicationCommandBufferFlushTarget);
            }
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__ReceiveGeneralMessage.SetWrapper(
                    &Hooks::OnAbstractPeerReceiveGeneralMessage, this);
                if (enableLoadProtocolWireTrace) {
                    eocnet__ClientLoadProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnClientLoadProtocolProcessMessage, this);
                    eocnet__ServerLoadProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnServerLoadProtocolProcessMessage, this);
                    eocnet__ServerCharacterCreationProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnServerCharacterCreationProtocolProcessMessage, this);
                    ecs__EntityHandleSet__Insert.SetWrapper(
                        &Hooks::OnEntityHandleSetInsert, this);
                    ecs__AlternateEntityHandleSet__Insert.SetWrapper(
                        &Hooks::OnAlternateEntityHandleSetInsert, this);
                    ecs__EntityHandleArray__Append.SetWrapper(
                        &Hooks::OnEntityHandleArrayAppend, this);
                    ecs__EntityReplicationCommandSet__Insert.SetWrapper(
                        &Hooks::OnEntityReplicationCommandSetInsert, this);
                    ecs__EntityReplicationCommandBuffer__Replicate.SetWrapper(
                        &Hooks::OnEntityReplicationCommandBufferReplicate, this);
                    ecs__EntityReplicationSystem__Update.SetWrapper(
                        &Hooks::OnEntityReplicationSystemUpdate, this);
                    ecs__EntityReplicationCommandBuffer__Flush.SetWrapper(
                        &Hooks::OnEntityReplicationCommandBufferFlush, this);
                    {
                        std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
                        entityReplicationCommandEnqueueCallerRvas_.clear();
                        entityReplicationCommandEnqueueSourceRvas_.clear();
                        entityReplicationAuthorityInsertCallerRvas_.clear();
                        entityReplicationCommandFlushHistory_.clear();
                        entityReplicationPendingInsertNext_ = 0;
                        entityReplicationPendingInsertCount_ = 0;
                        entityReplicationPendingInsertTotal_ = 0;
                    }
                    entityReplicationCommandBufferMismatchCount_.store(0, std::memory_order_release);
                    entityReplicationServerFlushSequence_.store(0, std::memory_order_release);
                    entityReplicationCommandSetInvalidLayoutCount_.store(0, std::memory_order_release);
                    entityReplicationAlternateInsertMatchCount_.store(0, std::memory_order_release);
                    entityReplicationServerCommandReplicateSet_.store(0, std::memory_order_release);
                    EntityReplicationCountWatchState.store(0, std::memory_order_release);
                    EntityReplicationTraceForCurrentThread = {};
                    entityReplicationPreBindCaptureEnabled_.store(true, std::memory_order_release);
                    INFO("[MP_REPLICATION_TRACE] event=prebind_capture_started phase=hook_install capture_scope=process capacity=%llu capture_enabled=1 message_mutation=0",
                        static_cast<unsigned long long>(entityReplicationPendingInserts_.size()));
                    INFO("[MP_LOAD_TRACE] event=hook_enabled send_rva=0x4061F20 receive_rva=0x4062320 client_process_rva=0x1FEE910 server_process_rva=0x2F9F170 character_creation_server_process_rva=0x373C020 entity_handle_set_insert_rva=0x1135EB0 alternate_entity_handle_set_insert_rva=0x3148D00 entity_handle_array_append_rva=0x7554F0 replication_command_set_insert_rva=0x7200C0 replication_command_buffer_replicate_rva=0x428FF80 replication_system_update_rva=0x3158380 replication_command_buffer_flush_rva=0x4287190 max_events=%u max_payload_bytes=%u payload_directory=localappdata identity_logging=enabled session_logging=enabled character_creation_logging=net_id_resolved_entity replication_enqueue_correlation=command_buffer_flush_history_insert_sources_count_watchpoint_array_append_command_set_insert_and_replicate_callback message_mutation=0",
                        gExtender->GetConfig().LoadProtocolWireTraceMaxEvents,
                        gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
                }
                if (enableSyntheticUncompressedLoadReceiveBypass) {
                    INFO("[MP_SYNTHETIC_SESSION_LOAD] event=receive_bypass_hook_enabled receive_rva=0x4062320 peers=marked_synthetic ids=167,168,172 wrapper_flags=0 scope=message_reliability_guard");
                }
            } else {
                ERR("[MP_LOAD_TRACE] event=disabled reason=process_msg_detour_failed status=%ld", status);
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

    auto const enableInitialSerializerTelemetry =
        gExtender->GetConfig().EnableInitialPeerSerializerTelemetry;
    auto const enableLoadSerializerTrace =
        gExtender->GetConfig().EnableLoadProtocolWireTrace;
    if (enableInitialSerializerTelemetry || enableLoadSerializerTrace) {
        if (enableInitialSerializerTelemetry
            && !IsValidInitialPeerSerializerTelemetryMaxEvents(
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

    if (status == NO_ERROR && enableInitialSerializerTelemetry
        && IsValidInitialPeerSerializerTelemetryMaxEvents(
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents)
        && IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())
        && factory->MessagePools.size() > (unsigned)NetMessage::NETMSG_LOAD_STARTED) {
        INFO("[MP_SERIALIZER_TRACE] event=hook_enabled max_events=%u payload_logging=disabled string_logging=disabled guid_logging=disabled",
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents);
    } else if (status != NO_ERROR && gExtender->GetConfig().EnableInitialPeerSerializerTelemetry) {
        ERR("[MP_SERIALIZER_TRACE] event=disabled reason=detour_failed status=%ld", status);
    }

    if (status == NO_ERROR && enableLoadSerializerTrace
        && IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())
        && factory->MessagePools.size() > (unsigned)NetMessage::NETMSG_LOAD_STARTED) {
        INFO("[MP_LOAD_TRACE] event=serializer_hooks_enabled client_connect=1 handshake=1 peer_activate=1 session_load=1 session_loaded=1 level_load=1 shared_level_descriptor=1 load_start=1 load_started=1");
    } else if (status != NO_ERROR && enableLoadSerializerTrace) {
        ERR("[MP_LOAD_TRACE] event=serializer_hooks_disabled reason=detour_failed status=%ld", status);
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

    uint32_t wireTraceIndex;
    if (BeginLoadProtocolWireTraceEvent(wireTraceIndex)) {
        TraceSerializerSnapshot(
            wireTraceIndex,
            msg,
            serializer,
            bitsBefore,
            offsetBefore,
            gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
    }

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
            && IsLocalPeerTransportSyntheticAddress(transportAddress)) {
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
            && IsLocalPeerTransportSyntheticAddress(transportAddress)) {
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

    uint32_t wireTraceIndex;
    if (BeginLoadProtocolWireTraceEvent(wireTraceIndex)) {
        TraceSerializerSnapshot(
            wireTraceIndex,
            msg,
            serializer,
            bitsBefore,
            offsetBefore,
            gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
    }

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

    uint32_t wireTraceIndex;
    if (BeginLoadProtocolWireTraceEvent(wireTraceIndex)) {
        TraceSerializerSnapshot(
            wireTraceIndex,
            msg,
            serializer,
            bitsBefore,
            offsetBefore,
            gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
    }

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
    auto const disableCompression = gExtender->GetConfig().DisableNetMessageCompressionForResearch;
    auto const eocServer = GetStaticSymbols().GetEoCServer();
    auto const gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;

    if (gameServer != nullptr && static_cast<net::AbstractPeer*>(gameServer) == peer) {
        markedSyntheticPeerMask_.store(0, std::memory_order_release);
        EntityReplicationTraceForCurrentThread = {};
        if (gExtender->GetConfig().EnableLoadProtocolWireTrace) {
            size_t retained{};
            uint64_t total{};
            {
                std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
                retained = entityReplicationPendingInsertCount_;
                total = entityReplicationPendingInsertTotal_;
            }
            INFO("[MP_REPLICATION_TRACE] event=server_bind_history_preserved phase=server_bind capture_scope=process capture_enabled=%u retained=%llu total=%llu overwritten=%u message_mutation=0",
                entityReplicationPreBindCaptureEnabled_.load(std::memory_order_acquire) ? 1u : 0u,
                static_cast<unsigned long long>(retained),
                static_cast<unsigned long long>(total),
                total > entityReplicationPendingInserts_.size() ? 1u : 0u);
        } else {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            entityReplicationCommandEnqueueCallerRvas_.clear();
            entityReplicationCommandEnqueueSourceRvas_.clear();
            entityReplicationAuthorityInsertCallerRvas_.clear();
            entityReplicationCommandFlushHistory_.clear();
            entityReplicationPendingInsertNext_ = 0;
            entityReplicationPendingInsertCount_ = 0;
            entityReplicationPendingInsertTotal_ = 0;
        }

        // Do not detour the NumPlayers getter at RVA 0x3033120. Its optimized caller at
        // RVA 0x30A3D1F relies on RCX surviving the leaf call, which a normal x64 C++
        // wrapper does not guarantee. Changing the field keeps the original code path.
        auto const modManager = GetStaticSymbols().GetModManagerServer();
        if (modManager == nullptr) {
            if (!nativePlayerCapacityUnexpectedValueLogged_) {
                ERR("[MP_PEER_LIMIT] event=player_capacity_not_applied reason=server_mod_manager_missing target=%u",
                    target);
                nativePlayerCapacityUnexpectedValueLogged_ = true;
            }
        } else {
            auto& nativeCapacity = modManager->BaseModule.Info.NumPlayers;
            if ((nativeCapacity == 4 || nativeCapacity == 8) && target > nativeCapacity) {
                auto const native = nativeCapacity;
                nativeCapacity = static_cast<uint8_t>(target);
                INFO("[MP_PEER_LIMIT] event=player_capacity_applied method=module_info native=%u target=%u offset=0x%llx",
                    (unsigned)native,
                    target,
                    (unsigned long long)(reinterpret_cast<uintptr_t>(&nativeCapacity)
                        - reinterpret_cast<uintptr_t>(modManager)));
            } else if (nativeCapacity != target && !nativePlayerCapacityUnexpectedValueLogged_) {
                ERR("[MP_PEER_LIMIT] event=player_capacity_not_applied reason=unexpected_native_value current=%u target=%u",
                    (unsigned)nativeCapacity,
                    target);
                nativePlayerCapacityUnexpectedValueLogged_ = true;
            }
        }

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

    if (disableCompression) {
        auto const previous = peer->Compressor.field_A0;
        peer->Compressor.field_A0 = false;
        auto const role = gameServer != nullptr
            && static_cast<net::AbstractPeer*>(gameServer) == peer
            ? "server"
            : "client_or_other";
        INFO("[MP_PEER_LIMIT] event=net_compression_disabled role=%s previous=%u exact_build_research=1",
            role,
            previous ? 1u : 0u);
    }
    return wrapped(peer, port, socketType);
}

net::ProtocolResult Hooks::OnJoiningProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    uint32_t traceEnterIndex;
    auto const traceJoining = BeginLoadProtocolWireTraceEvent(traceEnterIndex);
    if (traceJoining) {
        INFO("[MP_LOAD_TRACE] event=process_enter index=%u side=server protocol=joining thread=%lu msg_id=%u user_id=%u peer=%u peer_class_count=%u user_count=%u",
            traceEnterIndex,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX,
            context != nullptr ? context->PeerIDClassNames.size() : 0,
            context != nullptr ? context->UserIDs.size() : 0);
    }

    auto matchesSyntheticAdmission = false;
    if (context != nullptr && message != nullptr
        && message->MsgId == NetMessage::NETMSG_CLIENT_CONNECT) {
        auto const connect = static_cast<net::ClientConnectMessage*>(message);
        uint64_t identity{};
        memcpy(&identity, &connect->field_60, sizeof(identity));
        auto const marker = gExtender->GetConfig().SyntheticLobbyBypassMarker;
        auto const peerId = static_cast<uint32_t>(context->UserID.GetPeerId());
        auto const syntheticIndex = static_cast<uint32_t>(identity);
        matchesSyntheticAdmission = marker != 0
            && static_cast<uint32_t>(identity >> 32) == marker
            && syntheticIndex >= 1 && syntheticIndex <= LocalPeerTransportSyntheticPeerCount
            && peerId >= 2 && peerId <= LocalPeerTransportSyntheticPeerCount + 1
            && connect->field_58 == 0
            && connect->field_5C == 1
            && connect->field_70 == 2
            && connect->field_71 == 0
            && connect->field_78.size() == 5
            && connect->field_A8 >= 1 && connect->field_A8 <= 16
            && connect->field_AC == 1;

        if (peerId < 32) {
            auto const peerBit = uint32_t{ 1 } << peerId;
            if (matchesSyntheticAdmission) {
                auto const previous = markedSyntheticPeerMask_.fetch_or(peerBit, std::memory_order_acq_rel);
                if ((previous & peerBit) == 0
                    && gExtender->GetConfig().EnableSyntheticPeerSessionLoadBypassPrototype) {
                    INFO("[MP_SYNTHETIC_SESSION_LOAD] event=peer_marked peer=%u identity_logging=disabled marker_logging=disabled",
                        peerId);
                }
            } else {
                markedSyntheticPeerMask_.fetch_and(~peerBit, std::memory_order_acq_rel);
            }
        }
    }

    auto const previousAdmission = SyntheticLobbyAdmissionActive;
    SyntheticLobbyAdmissionActive = matchesSyntheticAdmission;
    auto const result = wrapped(protocol, unused, context, message);
    SyntheticLobbyAdmissionActive = previousAdmission;
    uint32_t traceExitIndex;
    if (traceJoining && BeginLoadProtocolWireTraceEvent(traceExitIndex)) {
        INFO("[MP_LOAD_TRACE] event=process_exit index=%u call_index=%u side=server protocol=joining thread=%lu msg_id=%u result=%d",
            traceExitIndex,
            traceEnterIndex,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            (int)result);
    }
    return result;
}

net::ProtocolResult Hooks::OnClientLoadProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    return OnLoadProtocolProcessMessage(
        "client", wrapped, protocol, unused, context, message);
}

net::ProtocolResult Hooks::OnServerLoadProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    return OnLoadProtocolProcessMessage(
        "server", wrapped, protocol, unused, context, message);
}

net::ProtocolResult Hooks::OnServerCharacterCreationProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    auto const messageId = message != nullptr ? static_cast<uint32_t>(message->MsgId) : UINT32_MAX;
    auto const traceMessage = messageId >= 238 && messageId <= 240;
    uint32_t enterIndex{};
    auto const trace = traceMessage && BeginLoadProtocolWireTraceEvent(enterIndex);
    uint64_t netId{};
    uint16_t field30{};
    uint32_t field38{};
    uint8_t field3C{};
    if (trace) {
        auto const bytes = reinterpret_cast<uint8_t const*>(message);
        memcpy(&netId, bytes + 0x28, sizeof(netId));
        memcpy(&field30, bytes + 0x30, sizeof(field30));
        memcpy(&field38, bytes + 0x38, sizeof(field38));
        memcpy(&field3C, bytes + 0x3C, sizeof(field3C));
        uint64_t resolvedEntityHandle{};
        auto const eocServer = GetStaticSymbols().GetEoCServer();
        auto const gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;
        if (gameServer != nullptr) {
            auto const entity = gameServer->Replication.NetIdToEntity.try_get(NetId{ netId });
            if (entity != nullptr) {
                resolvedEntityHandle = entity->Handle;
            }
        }
        auto const enqueueCallerRva = resolvedEntityHandle != 0
            ? FindEntityReplicationEnqueueCallerRva(resolvedEntityHandle)
            : 0;
        auto const enqueueSourceRva = resolvedEntityHandle != 0
            ? FindEntityReplicationEnqueueSourceRva(resolvedEntityHandle)
            : 0;
        auto const authorityInsertCallerRva = resolvedEntityHandle != 0
            ? FindEntityReplicationAuthorityInsertCallerRva(resolvedEntityHandle)
            : 0;
        EntityReplicationCommandFlushHistory flushHistory{};
        if (resolvedEntityHandle != 0) {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            auto const it = entityReplicationCommandFlushHistory_.find(resolvedEntityHandle);
            if (it != entityReplicationCommandFlushHistory_.end()) {
                flushHistory = it->second;
            }
        }
        INFO("[MP_CHARACTER_CREATE_TRACE] event=process_enter index=%u side=server protocol=character_creation thread=%lu msg_id=%u user_id=%u peer=%u net_id=0x%016llX resolved_entity_handle=0x%016llX replication_command_enqueue_caller_rva=0x%llX replication_command_enqueue_source_rva=0x%llX replication_authority_insert_caller_rva=0x%llX replication_command_seen_in_flush=%u replication_command_first_flush=%llu replication_command_last_flush=%llu replication_command_flush_occurrences=%u field30=%u field38=%u field3c=%u",
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? static_cast<unsigned>(context->UserID.GetPeerId()) : UINT32_MAX,
            static_cast<unsigned long long>(netId),
            static_cast<unsigned long long>(resolvedEntityHandle),
            static_cast<unsigned long long>(enqueueCallerRva),
            static_cast<unsigned long long>(enqueueSourceRva),
            static_cast<unsigned long long>(authorityInsertCallerRva),
            flushHistory.Occurrences != 0 ? 1u : 0u,
            static_cast<unsigned long long>(flushHistory.FirstSequence),
            static_cast<unsigned long long>(flushHistory.LastSequence),
            flushHistory.Occurrences,
            static_cast<unsigned>(field30),
            static_cast<unsigned>(field38),
            static_cast<unsigned>(field3C));
        if (messageId == 240 && resolvedEntityHandle != 0) {
            entityReplicationPreBindCaptureEnabled_.store(false, std::memory_order_release);
            INFO("[MP_REPLICATION_TRACE] event=prebind_capture_stopped phase=character_create_resolved msg_id=240 entity_handle=0x%016llX capture_scope=process capture_enabled=0 message_mutation=0",
                static_cast<unsigned long long>(resolvedEntityHandle));
        }
    }

    auto const result = wrapped(protocol, unused, context, message);

    uint32_t exitIndex{};
    if (trace && BeginLoadProtocolWireTraceEvent(exitIndex)) {
        INFO("[MP_CHARACTER_CREATE_TRACE] event=process_exit index=%u call_index=%u side=server protocol=character_creation thread=%lu msg_id=%u result=%d user_id=%u net_id=0x%016llX",
            exitIndex,
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            static_cast<int>(result),
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            static_cast<unsigned long long>(netId));
    }
    return result;
}

void* Hooks::OnEntityHandleSetInsert(
    void* (*wrapped)(void*, void*, uint64_t const*),
    void* set,
    void* result,
    uint64_t const* entityHandle)
{
    return OnEntityHandleSetInsertImpl(
        wrapped, set, result, entityHandle, EntityHandleSetInsertRva7398727);
}

void* Hooks::OnAlternateEntityHandleSetInsert(
    void* (*wrapped)(void*, void*, uint64_t const*),
    void* set,
    void* result,
    uint64_t const* entityHandle)
{
    return OnEntityHandleSetInsertImpl(
        wrapped, set, result, entityHandle, AlternateEntityHandleSetInsertRva7398727);
}

void* Hooks::OnEntityHandleArrayAppend(
    void* (*wrapped)(void*, uint64_t const*),
    void* array,
    uint64_t const* entityHandle)
{
    auto const serverSet = entityReplicationServerCommandReplicateSet_.load(
        std::memory_order_acquire);
    auto const trace = serverSet != 0
        && array == reinterpret_cast<void*>(serverSet + 0x20)
        && entityHandle != nullptr;
    auto const handle = trace ? *entityHandle : 0;
    auto const callerRva = trace ? FindGameReturnAddressRva() : 0;
    auto const result = wrapped(array, entityHandle);
    if (trace && result != nullptr) {
        {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            if (entityReplicationCommandEnqueueCallerRvas_.size() < 65536) {
                entityReplicationCommandEnqueueCallerRvas_.try_emplace(
                    handle, callerRva);
                entityReplicationCommandEnqueueSourceRvas_.try_emplace(
                    handle, EntityHandleArrayAppendRva7398727);
            }
        }
        INFO("[MP_REPLICATION_TRACE] event=array_append_target_match thread=%lu array=0x%p entity_handle=0x%016llX caller_rva=0x%llX source_rva=0x%llX direct_set_tracking=1 message_mutation=0",
            GetCurrentThreadId(),
            array,
            static_cast<unsigned long long>(handle),
            static_cast<unsigned long long>(callerRva),
            static_cast<unsigned long long>(EntityHandleArrayAppendRva7398727));
    }
    return result;
}

void* Hooks::OnEntityReplicationCommandSetInsert(
    void* (*wrapped)(void*, void*, uint64_t const*),
    void* set,
    void* result,
    uint64_t const* entityHandle)
{
    auto const serverSet = entityReplicationServerCommandReplicateSet_.load(
        std::memory_order_acquire);
    auto const trace = serverSet != 0
        && set == reinterpret_cast<void*>(serverSet)
        && entityHandle != nullptr;
    auto const handle = trace ? *entityHandle : 0;
    auto const callerRva = trace ? FindGameReturnAddressRva() : 0;
    auto const insertResult = wrapped(set, result, entityHandle);
    if (trace && insertResult != nullptr) {
        {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            if (entityReplicationCommandEnqueueCallerRvas_.size() < 65536) {
                entityReplicationCommandEnqueueCallerRvas_[handle] = callerRva;
                entityReplicationCommandEnqueueSourceRvas_[handle]
                    = EntityReplicationCommandSetInsertRva7398727;
            }
        }
        INFO("[MP_REPLICATION_TRACE] event=command_set_insert_target_match thread=%lu set=0x%p entity_handle=0x%016llX caller_rva=0x%llX source_rva=0x%llX direct_set_tracking=1 message_mutation=0",
            GetCurrentThreadId(),
            set,
            static_cast<unsigned long long>(handle),
            static_cast<unsigned long long>(callerRva),
            static_cast<unsigned long long>(EntityReplicationCommandSetInsertRva7398727));
    }
    return insertResult;
}

void Hooks::OnEntityReplicationCommandBufferReplicate(
    void (*wrapped)(void*, uint64_t const*),
    void* context,
    uint64_t const* entityHandle)
{
    auto const serverSet = entityReplicationServerCommandReplicateSet_.load(
        std::memory_order_acquire);
    auto const commandBuffer = context != nullptr
        ? *reinterpret_cast<uintptr_t const*>(reinterpret_cast<uintptr_t>(context) + 0x18)
        : 0;
    auto const trace = serverSet != 0
        && commandBuffer != 0
        && commandBuffer + 0x48 == serverSet
        && entityHandle != nullptr;
    auto const handle = trace ? *entityHandle : 0;
    uintptr_t stackRvas[8]{};
    auto const stackCount = trace
        ? CaptureGameReturnAddressRvas(stackRvas, std::size(stackRvas))
        : 0;
    auto const callerRva = stackCount != 0 ? stackRvas[0] : 0;
    wrapped(context, entityHandle);
    if (trace) {
        {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            if (entityReplicationCommandEnqueueCallerRvas_.size() < 65536) {
                entityReplicationCommandEnqueueCallerRvas_[handle] = callerRva;
                entityReplicationCommandEnqueueSourceRvas_[handle]
                    = EntityReplicationCommandBufferReplicateRva7398727;
            }
        }
        INFO("[MP_REPLICATION_TRACE] event=command_buffer_replicate_target_match thread=%lu context=0x%p command_buffer=0x%p entity_handle=0x%016llX caller_rva=0x%llX source_rva=0x%llX stack_count=%u stack_rva_0=0x%llX stack_rva_1=0x%llX stack_rva_2=0x%llX stack_rva_3=0x%llX stack_rva_4=0x%llX stack_rva_5=0x%llX stack_rva_6=0x%llX stack_rva_7=0x%llX direct_command_buffer_tracking=1 message_mutation=0",
            GetCurrentThreadId(),
            context,
            reinterpret_cast<void*>(commandBuffer),
            static_cast<unsigned long long>(handle),
            static_cast<unsigned long long>(callerRva),
            static_cast<unsigned long long>(EntityReplicationCommandBufferReplicateRva7398727),
            static_cast<unsigned>(stackCount),
            static_cast<unsigned long long>(stackRvas[0]),
            static_cast<unsigned long long>(stackRvas[1]),
            static_cast<unsigned long long>(stackRvas[2]),
            static_cast<unsigned long long>(stackRvas[3]),
            static_cast<unsigned long long>(stackRvas[4]),
            static_cast<unsigned long long>(stackRvas[5]),
            static_cast<unsigned long long>(stackRvas[6]),
            static_cast<unsigned long long>(stackRvas[7]));
    }
}

void* Hooks::OnEntityHandleSetInsertImpl(
    void* (*wrapped)(void*, void*, uint64_t const*),
    void* set,
    void* result,
    uint64_t const* entityHandle,
    uintptr_t sourceRva)
{
    auto const eocServer = GetStaticSymbols().GetEoCServer();
    auto const gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;
    auto const replicateEntities = gameServer != nullptr
        ? static_cast<void*>(&gameServer->Replication.ReplicateEntities)
        : nullptr;
    auto commandBuffer = EntityReplicationTraceForCurrentThread.ActiveCommandBuffer;
    if (commandBuffer == 0) {
        for (auto const candidate : EntityReplicationTraceForCurrentThread.DerivedCommandBuffers) {
            if (candidate != 0 && set == reinterpret_cast<void*>(candidate + 0x48)) {
                commandBuffer = candidate;
                break;
            }
        }
    }
    auto const commandReplicateEntities = commandBuffer != 0
        ? reinterpret_cast<void*>(commandBuffer + 0x48)
        : nullptr;
    auto const serverCommandReplicateEntities = reinterpret_cast<void*>(
        entityReplicationServerCommandReplicateSet_.load(std::memory_order_acquire));
    auto const traceAuthority = set == replicateEntities && entityHandle != nullptr;
    auto const traceCommand = (set == commandReplicateEntities
        || set == serverCommandReplicateEntities) && entityHandle != nullptr;
    auto const trace = traceAuthority || traceCommand;
    auto const tracePreBind = entityReplicationPreBindCaptureEnabled_.load(std::memory_order_acquire)
        && !trace && entityHandle != nullptr;
    auto const handle = trace || tracePreBind ? *entityHandle : 0;
    auto const callerRva = trace || tracePreBind ? FindGameReturnAddressRva() : 0;

    auto const wrappedResult = wrapped(set, result, entityHandle);
    auto const inserted = result != nullptr && *reinterpret_cast<uint8_t const*>(result) != 0;
    if ((tracePreBind || trace) && inserted) {
        std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
        if (tracePreBind) {
            entityReplicationPendingInserts_[entityReplicationPendingInsertNext_] = {
                set,
                handle,
                callerRva,
                sourceRva,
                GetCurrentThreadId()
            };
            entityReplicationPendingInsertNext_ = (entityReplicationPendingInsertNext_ + 1)
                % entityReplicationPendingInserts_.size();
            entityReplicationPendingInsertCount_ = std::min(
                entityReplicationPendingInsertCount_ + 1,
                entityReplicationPendingInserts_.size());
            entityReplicationPendingInsertTotal_++;
        }
        if (traceCommand && entityReplicationCommandEnqueueCallerRvas_.size() < 65536) {
            entityReplicationCommandEnqueueCallerRvas_.try_emplace(handle, callerRva);
            entityReplicationCommandEnqueueSourceRvas_.try_emplace(handle, sourceRva);
        }
        if (traceAuthority && entityReplicationAuthorityInsertCallerRvas_.size() < 65536) {
            entityReplicationAuthorityInsertCallerRvas_.try_emplace(handle, callerRva);
        }
    }
    if (traceCommand && inserted && sourceRva == AlternateEntityHandleSetInsertRva7398727) {
        auto const matchIndex = entityReplicationAlternateInsertMatchCount_.fetch_add(
            1, std::memory_order_acq_rel);
        if (matchIndex < 64) {
            INFO("[MP_REPLICATION_TRACE] event=alternate_insert_target_match match_index=%u thread=%lu set=0x%p entity_handle=0x%016llX caller_rva=0x%llX source_rva=0x%llX direct_set_tracking=1 message_mutation=0",
                matchIndex,
                GetCurrentThreadId(),
                set,
                static_cast<unsigned long long>(handle),
                static_cast<unsigned long long>(callerRva),
                static_cast<unsigned long long>(sourceRva));
        }
    }
    return wrappedResult;
}

void Hooks::OnEntityReplicationSystemUpdate(
    void (*wrapped)(void*, void*),
    void* replicationSystem,
    void* context)
{
    auto const address = replicationSystem != nullptr
        ? reinterpret_cast<uintptr_t>(replicationSystem) + 0x168
        : 0;
    auto const previousForThread = EntityReplicationTraceForCurrentThread.ActiveCommandBuffer;
    EntityReplicationTraceForCurrentThread.ActiveCommandBuffer = address;

    uint32_t eventIndex{};
    if (MarkEntityReplicationCommandBufferSeen(
            EntityReplicationTraceForCurrentThread.DerivedCommandBuffers,
            address)
        && BeginLoadProtocolWireTraceEvent(eventIndex)) {
        INFO("[MP_REPLICATION_TRACE] event=command_buffer_derived index=%u thread=%lu replication_system=0x%p command_buffer=0x%p replicate_set=0x%p stop_replicate_set=0x%p update_rva=0x3158380 command_buffer_offset=0x168 message_mutation=0",
            eventIndex,
            GetCurrentThreadId(),
            replicationSystem,
            reinterpret_cast<void*>(address),
            reinterpret_cast<void*>(address + 0x48),
            reinterpret_cast<void*>(address + 0x78));
    }

    wrapped(replicationSystem, context);
    EntityReplicationTraceForCurrentThread.ActiveCommandBuffer = previousForThread;
}

void Hooks::OnEntityReplicationCommandBufferFlush(
    void (*wrapped)(void*, void*, void*),
    void* commandBuffer,
    void* host,
    void* replicationAuthority)
{
    auto const address = reinterpret_cast<uintptr_t>(commandBuffer);
    auto const expected = EntityReplicationTraceForCurrentThread.ActiveCommandBuffer;
    auto const eocServer = GetStaticSymbols().GetEoCServer();
    auto const gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;
    auto const serverAuthority = gameServer != nullptr
        ? static_cast<void*>(&gameServer->Replication)
        : nullptr;
    auto const isServerCommandBuffer = serverAuthority != nullptr
        && replicationAuthority == serverAuthority;
    uint32_t eventIndex{};
    if (address != 0 && address == expected
        && MarkEntityReplicationCommandBufferSeen(
            EntityReplicationTraceForCurrentThread.ValidatedCommandBuffers,
            address)
        && BeginLoadProtocolWireTraceEvent(eventIndex)) {
        INFO("[MP_REPLICATION_TRACE] event=command_buffer_confirmed index=%u thread=%lu replication_system=0x%p command_buffer=0x%p update_rva=0x3158380 flush_rva=0x4287190 message_mutation=0",
            eventIndex,
            GetCurrentThreadId(),
            reinterpret_cast<void*>(address - 0x168),
            commandBuffer);
    } else if (address != expected) {
        auto const mismatchIndex = entityReplicationCommandBufferMismatchCount_.fetch_add(
            1, std::memory_order_acq_rel);
        if (mismatchIndex < 16 && BeginLoadProtocolWireTraceEvent(eventIndex)) {
            ERR("[MP_REPLICATION_TRACE] event=command_buffer_mismatch index=%u mismatch_index=%u thread=%lu expected=0x%p actual=0x%p update_rva=0x3158380 flush_rva=0x4287190 message_mutation=0",
                eventIndex,
                mismatchIndex,
                GetCurrentThreadId(),
                reinterpret_cast<void*>(expected),
                commandBuffer);
        }
    }

    auto const commandReplicateEntities = reinterpret_cast<void*>(address + 0x48);
    if (isServerCommandBuffer) {
        auto const previousReplicateSet = entityReplicationServerCommandReplicateSet_.exchange(
            reinterpret_cast<uintptr_t>(commandReplicateEntities), std::memory_order_acq_rel);
        if (previousReplicateSet != reinterpret_cast<uintptr_t>(commandReplicateEntities)) {
            INFO("[MP_REPLICATION_TRACE] event=server_command_replicate_set_learned thread=%lu command_buffer=0x%p replicate_set=0x%p previous_replicate_set=0x%p capture_scope=process direct_set_tracking=1 message_mutation=0",
                GetCurrentThreadId(),
                commandBuffer,
                commandReplicateEntities,
                reinterpret_cast<void*>(previousReplicateSet));
        }
    }

    if (isServerCommandBuffer) {
        auto const flushSequence = entityReplicationServerFlushSequence_.fetch_add(
            1, std::memory_order_acq_rel) + 1;
        auto const watchState = EnsureEntityReplicationCountWatchpoint(
            reinterpret_cast<uintptr_t>(commandReplicateEntities),
            GetCurrentThreadId());
        if (flushSequence == 1) {
            INFO("[MP_REPLICATION_TRACE] event=command_count_watchpoint state=%u thread=%lu set=0x%p count_address=0x%p hardware_slot=dr0 access=write length=4 fail_closed=1 message_mutation=0",
                watchState,
                GetCurrentThreadId(),
                commandReplicateEntities,
                reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(
                    commandReplicateEntities) + 0x2C));
        }
        DumpEntityReplicationCountWriteRecords(flushSequence);
        uint64_t const* entries{};
        int32_t count{};
        auto const setAddress = reinterpret_cast<uintptr_t>(commandReplicateEntities);
        memcpy(&entries, reinterpret_cast<void const*>(setAddress + 0x20), sizeof(entries));
        memcpy(&count, reinterpret_cast<void const*>(setAddress + 0x2C), sizeof(count));
        if (count >= 0 && count <= 65536 && (count == 0 || entries != nullptr)) {
            uint64_t sampleHandle{};
            size_t recorded{};
            {
                std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
                for (int32_t i = 0; i < count; i++) {
                    auto const handle = entries[i];
                    if (handle == 0) {
                        continue;
                    }
                    if (sampleHandle == 0) {
                        sampleHandle = handle;
                    }
                    if (entityReplicationCommandFlushHistory_.size() >= 131072
                        && entityReplicationCommandFlushHistory_.find(handle)
                            == entityReplicationCommandFlushHistory_.end()) {
                        continue;
                    }
                    auto& history = entityReplicationCommandFlushHistory_[handle];
                    if (history.FirstSequence == 0) {
                        history.FirstSequence = flushSequence;
                    }
                    history.LastSequence = flushSequence;
                    history.Occurrences++;
                    recorded++;
                }
            }
            if (count > 0 && BeginLoadProtocolWireTraceEvent(eventIndex)) {
                INFO("[MP_REPLICATION_TRACE] event=server_command_set_snapshot index=%u thread=%lu flush_sequence=%llu command_buffer=0x%p replicate_set=0x%p count=%d recorded=%llu sample_handle=0x%016llX entries=0x%p layout=entries_20_count_2c message_mutation=0",
                    eventIndex,
                    GetCurrentThreadId(),
                    static_cast<unsigned long long>(flushSequence),
                    commandBuffer,
                    commandReplicateEntities,
                    count,
                    static_cast<unsigned long long>(recorded),
                    static_cast<unsigned long long>(sampleHandle),
                    entries);
            }
        } else {
            auto const invalidIndex = entityReplicationCommandSetInvalidLayoutCount_.fetch_add(
                1, std::memory_order_acq_rel);
            if (invalidIndex < 16 && BeginLoadProtocolWireTraceEvent(eventIndex)) {
                ERR("[MP_REPLICATION_TRACE] event=server_command_set_invalid_layout index=%u invalid_index=%u thread=%lu flush_sequence=%llu replicate_set=0x%p entries=0x%p count=%d expected_layout=entries_20_count_2c message_mutation=0",
                    eventIndex,
                    invalidIndex,
                    GetCurrentThreadId(),
                    static_cast<unsigned long long>(flushSequence),
                    commandReplicateEntities,
                    entries,
                    count);
            }
        }
    }

    if (isServerCommandBuffer && entityReplicationPreBindCaptureEnabled_.exchange(
            false, std::memory_order_acq_rel)) {
        size_t scanned{};
        uint64_t total{};
        bool overwritten{};
        size_t matched{};
        size_t promoted{};
        uint32_t firstProducerThread{};
        void* sampleSet{};
        uint64_t sampleHandle{};
        uintptr_t sampleCallerRva{};
        uintptr_t sampleSourceRva{};
        uint32_t sampleThread{};
        {
            std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
            scanned = entityReplicationPendingInsertCount_;
            total = entityReplicationPendingInsertTotal_;
            overwritten = total > entityReplicationPendingInserts_.size();
            for (size_t i = 0; i < entityReplicationPendingInsertCount_; i++) {
                auto const& pending = entityReplicationPendingInserts_[i];
                if (sampleSet == nullptr) {
                    sampleSet = pending.Set;
                    sampleHandle = pending.EntityHandle;
                    sampleCallerRva = pending.CallerRva;
                    sampleSourceRva = pending.SourceRva;
                    sampleThread = pending.ThreadId;
                }
                if (pending.Set == commandReplicateEntities
                    && pending.EntityHandle != 0
                    && entityReplicationCommandEnqueueCallerRvas_.size() < 65536) {
                    matched++;
                    if (firstProducerThread == 0) {
                        firstProducerThread = pending.ThreadId;
                    }
                    auto const [_, inserted] = entityReplicationCommandEnqueueCallerRvas_.try_emplace(
                        pending.EntityHandle,
                        pending.CallerRva);
                    entityReplicationCommandEnqueueSourceRvas_.try_emplace(
                        pending.EntityHandle,
                        pending.SourceRva);
                    if (inserted) {
                        promoted++;
                    }
                }
            }
            entityReplicationPendingInsertNext_ = 0;
            entityReplicationPendingInsertCount_ = 0;
            entityReplicationPendingInsertTotal_ = 0;
        }

        if (total != 0 && BeginLoadProtocolWireTraceEvent(eventIndex)) {
            INFO("[MP_REPLICATION_TRACE] event=pending_inserts_promoted index=%u thread=%lu command_buffer=0x%p replicate_set=0x%p scanned=%llu total=%llu overwritten=%u matched=%llu promoted=%llu producer_thread=%lu sample_set=0x%p sample_handle=0x%016llX sample_caller_rva=0x%llX sample_source_rva=0x%llX sample_thread=%lu authority_scope=server capture_scope=process capture_continues=0 direct_set_tracking=1 message_mutation=0",
                eventIndex,
                GetCurrentThreadId(),
                commandBuffer,
                commandReplicateEntities,
                static_cast<unsigned long long>(scanned),
                static_cast<unsigned long long>(total),
                overwritten ? 1u : 0u,
                static_cast<unsigned long long>(matched),
                static_cast<unsigned long long>(promoted),
                firstProducerThread,
                sampleSet,
                static_cast<unsigned long long>(sampleHandle),
                static_cast<unsigned long long>(sampleCallerRva),
                static_cast<unsigned long long>(sampleSourceRva),
                sampleThread);
        }
    }
    wrapped(commandBuffer, host, replicationAuthority);
}

size_t Hooks::CaptureGameReturnAddressRvas(uintptr_t* rvas, size_t capacity) const
{
    if (rvas == nullptr || capacity == 0) {
        return 0;
    }

    void* frames[32]{};
    auto const count = CaptureStackBackTrace(0, static_cast<DWORD>(std::size(frames)), frames, nullptr);
    auto const module = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    if (module == 0) {
        return 0;
    }

    // The exact BG3 build is below 0x70000000 bytes. Frames in other modules are
    // ignored so Detours and BG3SE wrapper frames do not hide the native caller.
    size_t written = 0;
    for (USHORT i = 0; i < count && written < capacity; i++) {
        auto const address = reinterpret_cast<uintptr_t>(frames[i]);
        if (address >= module && address < module + 0x70000000ull) {
            rvas[written++] = address - module;
        }
    }
    return written;
}

uintptr_t Hooks::FindGameReturnAddressRva() const
{
    uintptr_t rva{};
    return CaptureGameReturnAddressRvas(&rva, 1) != 0 ? rva : 0;
}

uintptr_t Hooks::FindEntityReplicationEnqueueCallerRva(uint64_t entityHandle)
{
    std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
    auto const it = entityReplicationCommandEnqueueCallerRvas_.find(entityHandle);
    return it != entityReplicationCommandEnqueueCallerRvas_.end() ? it->second : 0;
}

uintptr_t Hooks::FindEntityReplicationEnqueueSourceRva(uint64_t entityHandle)
{
    std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
    auto const it = entityReplicationCommandEnqueueSourceRvas_.find(entityHandle);
    return it != entityReplicationCommandEnqueueSourceRvas_.end() ? it->second : 0;
}

uintptr_t Hooks::FindEntityReplicationAuthorityInsertCallerRva(uint64_t entityHandle)
{
    std::lock_guard<std::mutex> lock(entityReplicationTraceMutex_);
    auto const it = entityReplicationAuthorityInsertCallerRvas_.find(entityHandle);
    return it != entityReplicationAuthorityInsertCallerRvas_.end() ? it->second : 0;
}

net::ProtocolResult Hooks::OnLoadProtocolProcessMessage(
    char const* side,
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    uint32_t enterIndex;
    auto const trace = BeginLoadProtocolWireTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_LOAD_TRACE] event=process_enter index=%u side=%s protocol=load thread=%lu msg_id=%u user_id=%u peer=%u peer_class_count=%u user_count=%u",
            enterIndex,
            side,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX,
            context != nullptr ? context->PeerIDClassNames.size() : 0,
            context != nullptr ? context->UserIDs.size() : 0);
    }

    auto const result = wrapped(protocol, unused, context, message);

    uint32_t exitIndex;
    if (trace && BeginLoadProtocolWireTraceEvent(exitIndex)) {
        INFO("[MP_LOAD_TRACE] event=process_exit index=%u call_index=%u side=%s protocol=load thread=%lu msg_id=%u result=%d",
            exitIndex,
            enterIndex,
            side,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            (int)result);
    }
    return result;
}

uint8_t Hooks::OnLobbyMembershipCheck(
    uint8_t (*wrapped)(void*, int8_t),
    void* lobby,
    int8_t backend)
{
    if (SyntheticLobbyAdmissionActive && backend == 0) {
        INFO("[MP_SYNTHETIC_LOBBY] event=membership_granted scope=current_marked_client_connect identity_logging=disabled marker_logging=disabled");
        return 1;
    }

    return wrapped(lobby, backend);
}

uint8_t Hooks::OnLobbyIsReady(uint8_t (*wrapped)(void*), void* lobby)
{
    // Preserve the original readiness function's side effects while allowing
    // synthetic protocol clients (which have no UI) to cross the lobby gate.
    (void)wrapped(lobby);
    return 1;
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
    if (!gExtender->GetConfig().EnableLocalPeerMessageTrace) {
        return false;
    }

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
    if (!gExtender->GetConfig().EnableInitialPeerSerializerTelemetry
        || !IsValidInitialPeerSerializerTelemetryMaxEvents(
            gExtender->GetConfig().InitialPeerSerializerTelemetryMaxEvents)) {
        return false;
    }

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

bool Hooks::BeginLoadProtocolWireTraceEvent(uint32_t& eventIndex)
{
    if (!gExtender->GetConfig().EnableLoadProtocolWireTrace
        || !IsValidLoadProtocolWireTraceMaxEvents(
            gExtender->GetConfig().LoadProtocolWireTraceMaxEvents)) {
        return false;
    }

    eventIndex = loadProtocolWireTraceEventCount_.fetch_add(1, std::memory_order_relaxed);
    return eventIndex < gExtender->GetConfig().LoadProtocolWireTraceMaxEvents;
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

    auto mappingReady = true;
    for (uint32_t peerIndex = 0; peerIndex < LocalPeerTransportSyntheticPeerCount; peerIndex++) {
        LocalPeerTransportAddress transportAddress{
            1,
            7,
            { 0, 0, 0 },
            LocalPeerTransportSyntheticIdBase + peerIndex,
            0
        };
        LocalPeerTransportAddOverride(socketOverride, &transportAddress);

        alignas(16) uint8_t systemAddress[128]{};
        auto transportAddressForLookup = transportAddress;
        if (!LocalPeerTransportMapTransportAddress(
                socketOverride,
                &transportAddressForLookup,
                systemAddress)) {
            mappingReady = false;
            break;
        }
    }
    if (mappingReady) {
        localPeerTransportMappedOverride_ = socketOverride;
    }

    uint32_t eventIndex;
    if (BeginLocalPeerTransportPrototypeEvent(eventIndex)) {
        INFO("[MP_LOCAL_TRANSPORT] event=mapping_attempt index=%u result=%s peer_scope=reserved_pool peer_count=%u payload_logging=disabled address_logging=disabled id_logging=disabled",
            eventIndex,
            mappingReady ? "ready" : "failed",
            LocalPeerTransportSyntheticPeerCount);
    }
    return mappingReady;
}

void Hooks::OnAbstractPeerSendMessageSinglePeer(
    net::AbstractPeerSendMessageSinglePeerProc* wrapped,
    net::AbstractPeer* peer,
    TPeerId peerId,
    net::Message* message)
{
    TraceCharacterLifecycleEnqueue(peer, peerId, message);

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

void Hooks::TraceCharacterLifecycleEnqueue(
    net::AbstractPeer* peer,
    TPeerId peerId,
    net::Message* message)
{
    if (message == nullptr
        || !gExtender->GetConfig().EnableLocalPeerMessageTrace
        || !IsNativePeerLimitResearchBuild(gExtender->GetGameVersion())
        || GetLocalPeerMessageTraceSource(peer) != std::string_view("server")) {
        return;
    }

    auto const messageId = static_cast<uint32_t>(message->MsgId);
    if (messageId != 26 && messageId != 31) {
        return;
    }

    uintptr_t stackRvas[8]{};
    auto const stackCount = CaptureGameReturnAddressRvas(stackRvas, std::size(stackRvas));
    if (messageId == 26) {
        auto const payload = reinterpret_cast<uint8_t const*>(message) + 0x28;
        INFO("[MP_CHARACTER_LIFECYCLE_TRACE] event=enqueue msg_id=26 target_peer=%u field28=%u field29=%u stack_count=%u stack_rva_0=0x%llX stack_rva_1=0x%llX stack_rva_2=0x%llX stack_rva_3=0x%llX stack_rva_4=0x%llX stack_rva_5=0x%llX stack_rva_6=0x%llX stack_rva_7=0x%llX message_mutation=0",
            static_cast<unsigned>(peerId),
            static_cast<unsigned>(payload[0]),
            static_cast<unsigned>(payload[1]),
            static_cast<unsigned>(stackCount),
            static_cast<unsigned long long>(stackRvas[0]),
            static_cast<unsigned long long>(stackRvas[1]),
            static_cast<unsigned long long>(stackRvas[2]),
            static_cast<unsigned long long>(stackRvas[3]),
            static_cast<unsigned long long>(stackRvas[4]),
            static_cast<unsigned long long>(stackRvas[5]),
            static_cast<unsigned long long>(stackRvas[6]),
            static_cast<unsigned long long>(stackRvas[7]));
        return;
    }

    // Exact-build serializer RVA 0x11C6250 receives Message + 0x28 as a
    // LegacyArray<uint64_t>: pointer at +0, capacity at +8, count at +0xC.
    auto const assignment = reinterpret_cast<uint8_t const*>(message) + 0x28;
    auto const entries = *reinterpret_cast<uint64_t const* const*>(assignment);
    auto const capacity = *reinterpret_cast<uint32_t const*>(assignment + 0x8);
    auto const count = *reinterpret_cast<uint32_t const*>(assignment + 0xC);
    uint64_t values[8]{};
    auto const copied = entries != nullptr && count <= capacity && count <= 64
        ? std::min<size_t>(count, std::size(values))
        : 0;
    if (copied != 0) {
        memcpy(values, entries, copied * sizeof(uint64_t));
    }

    INFO("[MP_CHARACTER_LIFECYCLE_TRACE] event=enqueue msg_id=31 target_peer=%u count=%u capacity=%u copied=%u entry_0=0x%016llX entry_1=0x%016llX entry_2=0x%016llX entry_3=0x%016llX entry_4=0x%016llX entry_5=0x%016llX entry_6=0x%016llX entry_7=0x%016llX stack_count=%u stack_rva_0=0x%llX stack_rva_1=0x%llX stack_rva_2=0x%llX stack_rva_3=0x%llX stack_rva_4=0x%llX stack_rva_5=0x%llX stack_rva_6=0x%llX stack_rva_7=0x%llX message_mutation=0",
        static_cast<unsigned>(peerId),
        count,
        capacity,
        static_cast<unsigned>(copied),
        static_cast<unsigned long long>(values[0]),
        static_cast<unsigned long long>(values[1]),
        static_cast<unsigned long long>(values[2]),
        static_cast<unsigned long long>(values[3]),
        static_cast<unsigned long long>(values[4]),
        static_cast<unsigned long long>(values[5]),
        static_cast<unsigned long long>(values[6]),
        static_cast<unsigned long long>(values[7]),
        static_cast<unsigned>(stackCount),
        static_cast<unsigned long long>(stackRvas[0]),
        static_cast<unsigned long long>(stackRvas[1]),
        static_cast<unsigned long long>(stackRvas[2]),
        static_cast<unsigned long long>(stackRvas[3]),
        static_cast<unsigned long long>(stackRvas[4]),
        static_cast<unsigned long long>(stackRvas[5]),
        static_cast<unsigned long long>(stackRvas[6]),
        static_cast<unsigned long long>(stackRvas[7]));
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

void Hooks::OnAbstractPeerSendGeneralMessage(
    void (*wrapped)(void*, void*, TPeerId, uint8_t, void*, net::Message*),
    void* compressor,
    void* output,
    TPeerId peerId,
    uint8_t flags,
    void* input,
    net::Message* message)
{
    uint32_t traceIndex;
    auto const trace = BeginLoadProtocolWireTraceEvent(traceIndex);
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    if (trace) {
        if (message != nullptr && messageId > 14 && input != nullptr) {
            auto const& body = *static_cast<SerializedByteBufferView const*>(input);
            DWORD payloadError{ ERROR_SUCCESS };
            auto const capacityValid = body.Length <= body.Capacity;
            auto const payloadWritten = capacityValid
                && WriteNetworkTracePayload(
                    traceIndex,
                    peerId,
                    messageId,
                    body,
                    gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes,
                    payloadError);
            INFO("[MP_LOAD_TRACE] event=send_serialized index=%u thread=%lu msg_id=%u peer=%u flags=%u compressed=%u body_bytes=%u body_capacity=%u payload_written=%u payload_error=%lu payload_name=trace-pid%lu-event%u-send-id%u-peer%u.bin",
                traceIndex,
                GetCurrentThreadId(),
                messageId,
                (unsigned)peerId,
                (unsigned)flags,
                (unsigned)(flags & 1),
                body.Length,
                body.Capacity,
                payloadWritten ? 1u : 0u,
                payloadError,
                GetCurrentProcessId(),
                traceIndex,
                messageId,
                (unsigned)peerId);
        } else {
            INFO("[MP_LOAD_TRACE] event=send_serialized index=%u thread=%lu msg_id=%u peer=%u flags=%u compressed=%u body_layout=%s payload_written=0",
                traceIndex,
                GetCurrentThreadId(),
                messageId,
                (unsigned)peerId,
                (unsigned)flags,
                (unsigned)(flags & 1),
                messageId <= 14 ? "special_vtable_path" : "unavailable");
        }
    }

    auto const bypassSessionLoad =
        gExtender->GetConfig().EnableSyntheticPeerSessionLoadBypassPrototype
        && message != nullptr
        && message->MsgId == NetMessage::NETMSG_SESSION_LOAD
        && IsMarkedSyntheticPeer(peerId);
    auto const effectiveFlags = bypassSessionLoad
        ? static_cast<uint8_t>(flags & ~uint8_t{ 1 })
        : flags;
    if (bypassSessionLoad) {
        INFO("[MP_SYNTHETIC_SESSION_LOAD] event=compression_bit_cleared peer=%u previous=%u effective=%u",
            (unsigned)peerId,
            (unsigned)(flags & 1),
            (unsigned)(effectiveFlags & 1));
    }
    wrapped(compressor, output, peerId, effectiveFlags, input, message);

    uint32_t traceExitIndex;
    if (trace && BeginLoadProtocolWireTraceEvent(traceExitIndex)) {
        INFO("[MP_LOAD_TRACE] event=send_complete index=%u call_index=%u thread=%lu msg_id=%u peer=%u effective_flags=%u",
            traceExitIndex,
            traceIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            (unsigned)effectiveFlags);
    }
}

bool Hooks::OnAbstractPeerReceiveGeneralMessage(
    bool (*wrapped)(void*, net::BitstreamSerializer*, TPeerId, net::Message*),
    void* compressor,
    net::BitstreamSerializer* input,
    TPeerId peerId,
    net::Message* message)
{
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    auto const traceMessage = messageId == 166
        || messageId == 167
        || messageId == 168
        || messageId == 169
        || messageId == 170
        || messageId == 171
        || messageId == 172
        || messageId == 174
        || messageId == 194
        || messageId == 200;
    auto const bitstream = input != nullptr ? input->Bitstream : nullptr;
    auto const bitsBefore = bitstream != nullptr ? bitstream->NumBits : 0u;
    auto const allocatedBits = bitstream != nullptr ? bitstream->AllocatedBits : 0u;
    auto const offsetBefore = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0u;
    auto const nextByteValid = bitstream != nullptr
        && bitstream->Buf != nullptr
        && offsetBefore % 8u == 0
        && offsetBefore + 8u <= bitsBefore
        && offsetBefore + 8u <= allocatedBits;
    auto const nextByte = nextByteValid
        ? bitstream->Buf[offsetBefore / 8u]
        : uint8_t{ 0 };

    uint32_t enterIndex{ 0 };
    auto const trace = traceMessage && BeginLoadProtocolWireTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_LOAD_TRACE] event=receive_wrapper_enter index=%u thread=%lu msg_id=%u peer=%u marked_synthetic=%u serializer=%s bits=%u allocated_bits=%u offset=%u offset_mod8=%u next_byte_valid=%u next_byte=%u message_mutation=0",
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            IsMarkedSyntheticPeer(peerId) ? 1u : 0u,
            input != nullptr && input->IsWriting ? "write" : "read",
            bitsBefore,
            allocatedBits,
            offsetBefore,
            offsetBefore % 8u,
            nextByteValid ? 1u : 0u,
            (unsigned)nextByte);
    }

    auto const bypassUncompressedCompressionUpdate =
        gExtender->GetConfig().EnableSyntheticPeerUncompressedLoadReceiveBypassPrototype
        && IsMarkedSyntheticPeer(peerId)
        && nextByteValid
        && nextByte == 0
        && message != nullptr
        && (messageId == 167 || messageId == 168 || messageId == 172)
        && message->Reliability == 4;
    auto const originalReliability = message != nullptr ? message->Reliability : 0u;
    if (bypassUncompressedCompressionUpdate) {
        // Exact-build RVA 0x4062320 gates its receive-side PrANS update on
        // Message::Reliability == 4. Incoming Message objects are private to
        // this dispatch; changing only this field for the wrapper call avoids
        // mutating the shared compressor object or the serialized body.
        message->Reliability = 0;
        INFO("[MP_SYNTHETIC_SESSION_LOAD] event=uncompressed_receive_compression_bypass_enter peer=%u msg_id=%u wrapper_flags=%u original_reliability=%u effective_reliability=%u body_mutation=0",
            (unsigned)peerId,
            messageId,
            (unsigned)nextByte,
            originalReliability,
            message->Reliability);
    }

    auto const result = wrapped(compressor, input, peerId, message);

    if (bypassUncompressedCompressionUpdate) {
        message->Reliability = originalReliability;
        INFO("[MP_SYNTHETIC_SESSION_LOAD] event=uncompressed_receive_compression_bypass_exit peer=%u msg_id=%u result=%u restored_reliability=%u body_mutation=0",
            (unsigned)peerId,
            messageId,
            result ? 1u : 0u,
            message->Reliability);
    }
    auto const bitsAfter = bitstream != nullptr ? bitstream->NumBits : 0u;
    auto const offsetAfter = bitstream != nullptr ? bitstream->CurrentOffsetBits : 0u;
    uint32_t exitIndex{ 0 };
    if (trace && BeginLoadProtocolWireTraceEvent(exitIndex)) {
        INFO("[MP_LOAD_TRACE] event=receive_wrapper_exit index=%u call_index=%u thread=%lu msg_id=%u peer=%u result=%u bits=%u offset_before=%u offset_after=%u consumed_bits=%u message_mutation=0",
            exitIndex,
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            result ? 1u : 0u,
            bitsAfter,
            offsetBefore,
            offsetAfter,
            offsetAfter >= offsetBefore ? offsetAfter - offsetBefore : 0u);
    }
    return result;
}

bool Hooks::IsMarkedSyntheticPeer(TPeerId peerId) const
{
    if (peerId >= 32) {
        return false;
    }

    auto const peerBit = uint32_t{ 1 } << peerId;
    return (markedSyntheticPeerMask_.load(std::memory_order_acquire) & peerBit) != 0;
}

END_SE()
