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
decltype(Hooks::eocnet__ClientJoiningProtocol__ProcessMessage)* decltype(Hooks::eocnet__ClientJoiningProtocol__ProcessMessage)::gHook;
decltype(Hooks::eocnet__ModReconciliation__Classify)* decltype(Hooks::eocnet__ModReconciliation__Classify)::gHook;
decltype(Hooks::eocnet__ModReconciliation__RunGate)* decltype(Hooks::eocnet__ModReconciliation__RunGate)::gHook;
decltype(Hooks::eocnet__ModManifest__Compare)* decltype(Hooks::eocnet__ModManifest__Compare)::gHook;
decltype(Hooks::eocnet__ClientLobbyProtocol__ProcessMessage)* decltype(Hooks::eocnet__ClientLobbyProtocol__ProcessMessage)::gHook;
decltype(Hooks::eocnet__ServerLobbyProtocol__ProcessMessage)* decltype(Hooks::eocnet__ServerLobbyProtocol__ProcessMessage)::gHook;
decltype(Hooks::ecl__DCLobby__Update)* decltype(Hooks::ecl__DCLobby__Update)::gHook;
decltype(Hooks::net__PlatformIdentityMap__Write)* decltype(Hooks::net__PlatformIdentityMap__Write)::gHook;
decltype(Hooks::esv__GameServer__RegisterConnectedPeer)* decltype(Hooks::esv__GameServer__RegisterConnectedPeer)::gHook;
decltype(Hooks::esv__GameServer__SessionMemberAdded)* decltype(Hooks::esv__GameServer__SessionMemberAdded)::gHook;
decltype(Hooks::esv__GameServer__WriteCharacterOwner)* decltype(Hooks::esv__GameServer__WriteCharacterOwner)::gHook;
decltype(Hooks::esv__LobbyManager__ParticipantAdded)* decltype(Hooks::esv__LobbyManager__ParticipantAdded)::gHook;
decltype(Hooks::esv__LobbyManager__WriteRecord)* decltype(Hooks::esv__LobbyManager__WriteRecord)::gHook;
decltype(Hooks::esv__LobbyManager__ReconcileState)* decltype(Hooks::esv__LobbyManager__ReconcileState)::gHook;
decltype(Hooks::esv__LobbyManager__StartGame)* decltype(Hooks::esv__LobbyManager__StartGame)::gHook;
decltype(Hooks::esv__LobbyManager__RecomputeReady)* decltype(Hooks::esv__LobbyManager__RecomputeReady)::gHook;
decltype(Hooks::esv__GameServer__RemoveParticipant)* decltype(Hooks::esv__GameServer__RemoveParticipant)::gHook;
decltype(Hooks::esv__GameServer__OnConnectionStateEvent)* decltype(Hooks::esv__GameServer__OnConnectionStateEvent)::gHook;
decltype(Hooks::stm__SteamMatchMakingManager__SetLobbyVisibility)* decltype(Hooks::stm__SteamMatchMakingManager__SetLobbyVisibility)::gHook;
decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyCreated)* decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyCreated)::gHook;
decltype(Hooks::stm__SteamMatchMakingManager__JoinLobby)* decltype(Hooks::stm__SteamMatchMakingManager__JoinLobby)::gHook;
decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyEntered)* decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyEntered)::gHook;
decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyMatchList)* decltype(Hooks::stm__SteamMatchMakingManager__OnLobbyMatchList)::gHook;
decltype(Hooks::net__PlatformParticipantManager__ResolveMember)* decltype(Hooks::net__PlatformParticipantManager__ResolveMember)::gHook;
decltype(Hooks::net__PlatformParticipantManager__PublishMembershipEvent)* decltype(Hooks::net__PlatformParticipantManager__PublishMembershipEvent)::gHook;
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
decltype(Hooks::eocnet__CharacterAssignment__RouteEntity)* decltype(Hooks::eocnet__CharacterAssignment__RouteEntity)::gHook;
decltype(Hooks::esv__PeersInRange__Add)* decltype(Hooks::esv__PeersInRange__Add)::gHook;
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
static constexpr uintptr_t ClientJoiningProtocolProcessMessageRva7398727 = 0x1C52410;
static constexpr uintptr_t ModReconciliationClassifyRva7398727 = 0x181BBF0;
static constexpr uintptr_t ModReconciliationGateRva7398727 = 0x18077D0;
static constexpr uintptr_t ModManifestCompareRva7398727 = 0x3BC7AF0;
static constexpr uintptr_t ClientLobbyProtocolProcessMessageRva7398727 = 0x1FF8500;
static constexpr uintptr_t ServerLobbyProtocolProcessMessageRva7398727 = 0x2FF79A0;
static constexpr uintptr_t DCLobbyUpdateRva7398727 = 0x15C4A40;
static constexpr uintptr_t PlatformIdentityMapWriteRva7398727 = 0x405E710;
static constexpr uintptr_t ConnectedPeerRegisteredRva7398727 = 0x30A7320;
static constexpr uintptr_t SessionMemberAddedRva7398727 = 0x30A85F0;
static constexpr uintptr_t CharacterOwnerWriteRva7398727 = 0x30A5000;
static constexpr uintptr_t LobbyParticipantAddedRva7398727 = 0x2A95080;
static constexpr uintptr_t ServerLobbyRecordWriteRva7398727 = 0x2A96290;
static constexpr uintptr_t ServerLobbyStateReconcileRva7398727 = 0x2A95C00;
static constexpr uintptr_t LobbyStartGameRva7398727 = 0x2A96420;
static constexpr uintptr_t LobbyReadyRecomputeRva7398727 = 0x2A96D30;
static constexpr uintptr_t ConnectionParticipantRemoveRva7398727 = 0x30A4180;
static constexpr uintptr_t ConnectionStateEventRva7398727 = 0x30A3F80;
static constexpr uintptr_t SteamLobbyVisibilityRva7398727 = 0x21AEB90;
static constexpr uintptr_t SteamLobbyCreatedRva7398727 = 0x21ADCB0;
static constexpr uintptr_t SteamLobbyJoinRequestRva7398727 = 0x21AD5F0;
static constexpr uintptr_t SteamLobbyEnteredRva7398727 = 0x21ADEF0;
static constexpr uintptr_t SteamLobbyMatchListRva7398727 = 0x21ADA40;
static constexpr uintptr_t PlatformMemberResolveRva7398727 = 0x403F6A0;
static constexpr uintptr_t PlatformMembershipEventRva7398727 = 0x403FFC0;
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
static constexpr uintptr_t CharacterAssignmentEntityRouteRva7398727 = 0x30735A0;
static constexpr uintptr_t PeersInRangeAddRva7398727 = 0x30BEBC0;
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

struct JoinModReconciliationGateTraceState
{
    bool Active{ false };
    bool ClassifierObserved{ false };
    bool OutputsValid{ false };
    uint32_t HostCount{ 0 };
    std::array<uint32_t, 5> MismatchCounts{};
    uintptr_t AsyncData{ 0 };
    uint32_t AsyncWord8{ 0 };
    uint32_t AsyncWordC{ 0 };
};

static thread_local JoinModReconciliationGateTraceState
    JoinModReconciliationGateTraceForCurrentThread;

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

// Exact-build ServerLobby layout used by the read-only process inspector:
//   [module + 0x5FF23D0] -> global root
//   [global root + 0x2C0] -> LobbyManager
//   [LobbyManager + 0xA0] -> PlayerRecord[0]
//   PlayerRecord size 0x20; ReadyByte + StateByte are the aligned uint16 at +0x1A.
// DR0 is already reserved for the entity-replication count experiment, so this
// observational watch uses DR1 and DR2 for the first two active lobby records.
static constexpr uintptr_t ServerLobbyGlobalRootRva7398727 = 0x5FF23D0;
static constexpr uintptr_t ServerLobbyManagerOffset7398727 = 0x2C0;
static constexpr uintptr_t ServerLobbyPlayerRecordsOffset7398727 = 0xA0;
static constexpr uintptr_t ServerLobbyPlayerRecordCountOffset7398727 = 0xAC;
static constexpr uintptr_t ServerLobbyPlayerRecordSize7398727 = 0x20;
static constexpr uintptr_t ServerLobbyReadyStateOffset7398727 = 0x1A;

struct LobbyReadyStateWriteRecord
{
    uintptr_t NextInstruction{ 0 };
    uintptr_t WatchAddress{ 0 };
    uint16_t ValueBefore{ 0 };
    uint16_t ValueAfter{ 0 };
    uint32_t ThreadId{ 0 };
    uint8_t PlayerRecordIndex{ 0 };
    uint8_t HardwareSlot{ 0 };
};

static constexpr size_t LobbyReadyStateWriteRecordCapacity = 1024;
static std::array<LobbyReadyStateWriteRecord,
    LobbyReadyStateWriteRecordCapacity> LobbyReadyStateWriteRecords;
static std::atomic<uint32_t> LobbyReadyStateWriteRecordNext{ 0 };
static std::atomic<uint32_t> LobbyReadyStateWriteRecordPublished{ 0 };
static std::atomic<uint32_t> LobbyReadyStateWriteRecordDumped{ 0 };
static std::atomic<uint32_t> LobbyReadyStateWatchState{ 0 };
static std::array<std::atomic<uintptr_t>, 2> LobbyReadyStateWatchAddresses{};
static std::array<std::atomic<uint16_t>, 2> LobbyReadyStateWatchValues{};
static std::atomic<uint32_t> LobbyReadyStateWatchThreadId{ 0 };
static std::atomic<uintptr_t> LobbyReadyStateWatchRecordsBuffer{ 0 };
static void* LobbyReadyStateWatchHandler{ nullptr };
static HANDLE LobbyReadyStateWatchArmEvent{ nullptr };

static LONG WINAPI LobbyReadyStateWatchExceptionHandler(
    EXCEPTION_POINTERS* exceptionPointers)
{
    if (exceptionPointers == nullptr
        || exceptionPointers->ExceptionRecord == nullptr
        || exceptionPointers->ContextRecord == nullptr
        || exceptionPointers->ExceptionRecord->ExceptionCode != EXCEPTION_SINGLE_STEP
        || GetCurrentThreadId()
            != LobbyReadyStateWatchThreadId.load(std::memory_order_relaxed)) {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    auto* context = exceptionPointers->ContextRecord;
    auto const triggered = static_cast<uintptr_t>(context->Dr6);
    bool handled{};
    for (size_t index = 0; index < LobbyReadyStateWatchAddresses.size(); index++) {
        auto const hardwareSlot = static_cast<uint8_t>(index + 1);
        auto const statusBit = uintptr_t(1) << hardwareSlot;
        if ((triggered & statusBit) == 0) {
            continue;
        }

        handled = true;
        context->Dr6 &= ~statusBit;
        auto const watchAddress = LobbyReadyStateWatchAddresses[index].load(
            std::memory_order_relaxed);
        if (watchAddress == 0) {
            continue;
        }

        auto const valueAfter = *reinterpret_cast<volatile uint16_t const*>(
            watchAddress);
        auto const valueBefore = LobbyReadyStateWatchValues[index].exchange(
            valueAfter, std::memory_order_relaxed);
        auto const recordIndex = LobbyReadyStateWriteRecordNext.fetch_add(
            1, std::memory_order_relaxed);
        if (recordIndex < LobbyReadyStateWriteRecords.size()) {
            LobbyReadyStateWriteRecords[recordIndex] = {
                static_cast<uintptr_t>(context->Rip),
                watchAddress,
                valueBefore,
                valueAfter,
                GetCurrentThreadId(),
                static_cast<uint8_t>(index),
                hardwareSlot
            };
            std::atomic_thread_fence(std::memory_order_release);
            LobbyReadyStateWriteRecordPublished.store(
                recordIndex + 1, std::memory_order_release);
        }
    }

    return handled ? EXCEPTION_CONTINUE_EXECUTION : EXCEPTION_CONTINUE_SEARCH;
}

static DWORD WINAPI ArmLobbyReadyStateWatchpoints(void*)
{
    auto const threadId = LobbyReadyStateWatchThreadId.load(
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
                && (context.Dr7 & (uintptr_t(1) << 2)) == 0
                && (context.Dr7 & (uintptr_t(1) << 4)) == 0
                && context.Dr1 == 0
                && context.Dr2 == 0) {
                context.Dr1 = LobbyReadyStateWatchAddresses[0].load(
                    std::memory_order_acquire);
                context.Dr2 = LobbyReadyStateWatchAddresses[1].load(
                    std::memory_order_acquire);
                context.Dr6 = 0;
                // Local enable + write + 2-byte length for DR1 and DR2.
                context.Dr7 &= ~(
                    (uintptr_t(3) << 2) | (uintptr_t(0xF) << 20)
                    | (uintptr_t(3) << 4) | (uintptr_t(0xF) << 24));
                context.Dr7 |=
                    (uintptr_t(1) << 2) | (uintptr_t(1) << 20)
                    | (uintptr_t(1) << 22)
                    | (uintptr_t(1) << 4) | (uintptr_t(1) << 24)
                    | (uintptr_t(1) << 26);
                armed = SetThreadContext(thread, &context) != FALSE;
            }
            ResumeThread(thread);
        }
        CloseHandle(thread);
    }

    LobbyReadyStateWatchState.store(
        armed ? 2u : 3u, std::memory_order_release);
    if (LobbyReadyStateWatchArmEvent != nullptr) {
        SetEvent(LobbyReadyStateWatchArmEvent);
    }
    return 0;
}

static uint32_t EnsureLobbyReadyStateWatchpoints(uint32_t threadId)
{
    uint32_t expected{};
    if (!LobbyReadyStateWatchState.compare_exchange_strong(
            expected, 1u, std::memory_order_acq_rel)) {
        return LobbyReadyStateWatchState.load(std::memory_order_acquire);
    }

    auto const moduleBase = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    auto const globalRoot = *reinterpret_cast<uintptr_t const*>(
        moduleBase + ServerLobbyGlobalRootRva7398727);
    auto const lobbyManager = globalRoot != 0
        ? *reinterpret_cast<uintptr_t const*>(
            globalRoot + ServerLobbyManagerOffset7398727)
        : 0;
    auto const playerRecords = lobbyManager != 0
        ? *reinterpret_cast<uintptr_t const*>(
            lobbyManager + ServerLobbyPlayerRecordsOffset7398727)
        : 0;
    auto const playerRecordCount = lobbyManager != 0
        ? *reinterpret_cast<uint32_t const*>(
            lobbyManager + ServerLobbyPlayerRecordCountOffset7398727)
        : 0;
    if (playerRecords == 0 || playerRecordCount < 2 || playerRecordCount > 64) {
        // The lobby records may not exist at the first replication tick. Keep
        // this retryable; only a debugger/VEH setup failure is terminal.
        LobbyReadyStateWatchState.store(0u, std::memory_order_release);
        return 0u;
    }

    // A two-element allocation exists during bootstrap before it contains the
    // actual host and remote-player records. Arming against that transient
    // buffer leaves stale DR1/DR2 addresses after the vector moves. Ready may
    // still be zero, but both records must already be populated and joined.
    for (size_t index = 0; index < LobbyReadyStateWatchAddresses.size(); index++) {
        auto const record = playerRecords
            + index * ServerLobbyPlayerRecordSize7398727;
        auto const keyToken = *reinterpret_cast<uintptr_t const*>(record);
        auto const joined = *reinterpret_cast<uint16_t const*>(record + 0x18);
        auto const state = *reinterpret_cast<uint8_t const*>(record + 0x1b);
        if (keyToken == 0 || joined == 0 || state == 0) {
            LobbyReadyStateWatchState.store(0u, std::memory_order_release);
            return 0u;
        }
    }

    LobbyReadyStateWriteRecordNext.store(0, std::memory_order_release);
    LobbyReadyStateWriteRecordPublished.store(0, std::memory_order_release);
    LobbyReadyStateWriteRecordDumped.store(0, std::memory_order_release);
    for (size_t index = 0; index < LobbyReadyStateWatchAddresses.size(); index++) {
        auto const address = playerRecords
            + index * ServerLobbyPlayerRecordSize7398727
            + ServerLobbyReadyStateOffset7398727;
        LobbyReadyStateWatchAddresses[index].store(address, std::memory_order_release);
        LobbyReadyStateWatchValues[index].store(
            *reinterpret_cast<uint16_t const*>(address),
            std::memory_order_release);
    }
    LobbyReadyStateWatchThreadId.store(threadId, std::memory_order_release);
    LobbyReadyStateWatchRecordsBuffer.store(playerRecords, std::memory_order_release);

    LobbyReadyStateWatchHandler = AddVectoredExceptionHandler(
        1, LobbyReadyStateWatchExceptionHandler);
    LobbyReadyStateWatchArmEvent = CreateEventW(nullptr, TRUE, FALSE, nullptr);
    if (LobbyReadyStateWatchHandler == nullptr
        || LobbyReadyStateWatchArmEvent == nullptr) {
        LobbyReadyStateWatchState.store(3u, std::memory_order_release);
        return 3u;
    }

    auto worker = CreateThread(
        nullptr, 0, ArmLobbyReadyStateWatchpoints, nullptr, 0, nullptr);
    if (worker == nullptr) {
        LobbyReadyStateWatchState.store(3u, std::memory_order_release);
        return 3u;
    }
    WaitForSingleObject(LobbyReadyStateWatchArmEvent, 1000);
    CloseHandle(worker);
    auto const state = LobbyReadyStateWatchState.load(std::memory_order_acquire);
    INFO("[MP_LOBBY_READY_TRACE] event=watchpoint state=%u thread=%lu player_records=0,1 player_records_buffer=0x%p arm_gate=two_populated_joined_records hardware_slots=dr1,dr2 access=write length=2 layout=ready_1a_state_1b fail_closed=1 message_mutation=0",
        state,
        threadId,
        reinterpret_cast<void*>(playerRecords));
    return state;
}

static void DumpLobbyReadyStateWriteRecords(char const* phase)
{
    auto const published = std::min<uint32_t>(
        LobbyReadyStateWriteRecordPublished.load(std::memory_order_acquire),
        static_cast<uint32_t>(LobbyReadyStateWriteRecords.size()));
    auto dumped = LobbyReadyStateWriteRecordDumped.load(
        std::memory_order_acquire);
    auto const moduleBase = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    while (dumped < published) {
        auto const& record = LobbyReadyStateWriteRecords[dumped];
        auto const dosHeader = reinterpret_cast<IMAGE_DOS_HEADER const*>(moduleBase);
        auto const ntHeader = reinterpret_cast<IMAGE_NT_HEADERS64 const*>(
            moduleBase + dosHeader->e_lfanew);
        auto const moduleEnd = moduleBase + ntHeader->OptionalHeader.SizeOfImage;
        auto const nextInstructionInMainModule = record.NextInstruction >= moduleBase
            && record.NextInstruction < moduleEnd;
        auto const nextInstructionRva = nextInstructionInMainModule
            ? record.NextInstruction - moduleBase
            : 0;
        INFO("[MP_LOBBY_READY_TRACE] event=ready_state_write index=%u phase=%s thread=%u player_record=%u hardware_slot=dr%u ready_before=%u state_before=%u ready_after=%u state_after=%u next_instruction=0x%p next_instruction_module=%s next_instruction_rva=0x%llX watch_address=0x%p player_records_buffer=0x%p access=write length=2 fail_closed=1 message_mutation=0",
            dumped,
            phase,
            record.ThreadId,
            static_cast<unsigned>(record.PlayerRecordIndex),
            static_cast<unsigned>(record.HardwareSlot),
            static_cast<unsigned>(record.ValueBefore & 0xFF),
            static_cast<unsigned>(record.ValueBefore >> 8),
            static_cast<unsigned>(record.ValueAfter & 0xFF),
            static_cast<unsigned>(record.ValueAfter >> 8),
            reinterpret_cast<void*>(record.NextInstruction),
            nextInstructionInMainModule ? "main" : "external_or_stale",
            static_cast<unsigned long long>(nextInstructionRva),
            reinterpret_cast<void*>(record.WatchAddress),
            reinterpret_cast<void*>(LobbyReadyStateWatchRecordsBuffer.load(
                std::memory_order_acquire)));
        dumped++;
    }
    LobbyReadyStateWriteRecordDumped.store(dumped, std::memory_order_release);
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

static constexpr uint8_t ClientJoiningProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0x50, 0xFF, 0xFF, 0xFF,
    0x48, 0x81, 0xEC, 0xB0, 0x01, 0x00, 0x00, 0x48
};

static constexpr uint8_t ModReconciliationClassifyPreamble7398727[] = {
    0x40, 0x55, 0x53, 0x56, 0x57, 0x41, 0x54, 0x41,
    0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x8D, 0x6C,
    0x24, 0xC8, 0x48, 0x81, 0xEC, 0x38, 0x01, 0x00,
    0x00, 0x48, 0x8B, 0x05, 0x50, 0xA1, 0x6A, 0x04
};

static constexpr uint8_t ModReconciliationGatePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0x6C, 0x24, 0xD9, 0x48, 0x81, 0xEC,
    0xC0, 0x00, 0x00, 0x00, 0x4C, 0x8B, 0xE2, 0x4C
};

static constexpr uint8_t ModManifestComparePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x83, 0xEC, 0x20, 0x44, 0x8B, 0x79, 0x14,
    0x4D, 0x8B, 0xF0, 0x8B, 0x42, 0x14, 0x4C, 0x8B
};

static constexpr uint8_t ClientLobbyProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x57, 0x48, 0x83,
    0xEC, 0x20, 0x41, 0x8B, 0x49, 0x08, 0x81, 0xE9,
    0xC7, 0x00, 0x00, 0x00, 0x0F, 0x84, 0xD4, 0x00,
    0x00, 0x00, 0x83, 0xF9, 0x01, 0x74, 0x0D, 0x33
};

static constexpr uint8_t ServerLobbyProtocolProcessMessagePreamble7398727[] = {
    0x48, 0x83, 0xEC, 0x28, 0x41, 0x8B, 0x49, 0x08,
    0x81, 0xE9, 0xC7, 0x00, 0x00, 0x00, 0x74, 0x5E,
    0x83, 0xE9, 0x01, 0x74, 0x2E, 0x83, 0xF9, 0x01,
    0x74, 0x07, 0x33, 0xC0, 0x48, 0x83, 0xC4, 0x28
};

static constexpr uint8_t DCLobbyUpdatePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20, 0x55,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0x20, 0xFF, 0xFF, 0xFF
};

static constexpr uint8_t PlatformIdentityMapWritePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x55, 0x56, 0x57,
    0x48, 0x81, 0xEC, 0x90, 0x00, 0x00, 0x00, 0x48,
    0x8B, 0x05, 0x3A, 0x76, 0xE6, 0x01, 0x48, 0x33,
    0xC4, 0x48, 0x89, 0x84, 0x24, 0x80, 0x00, 0x00
};

static constexpr uint8_t ConnectedPeerRegisteredPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x48,
    0x8D, 0xB9, 0x80, 0x06, 0x00, 0x00, 0x48, 0x8B,
    0xD9, 0x8B, 0x4F, 0x08, 0x48, 0x8B, 0xF2, 0x8B
};

static constexpr uint8_t SessionMemberAddedPreamble7398727[] = {
    0x40, 0x53, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B,
    0x05, 0xB3, 0x4C, 0xF9, 0x02, 0x48, 0x8B, 0xDA,
    0x48, 0x8B, 0x80, 0x90, 0x00, 0x00, 0x00, 0x48,
    0x85, 0xC0, 0x74, 0x7A, 0x48, 0x8B, 0x40, 0x18
};

static constexpr uint8_t CharacterOwnerWritePreamble7398727[] = {
    0x40, 0x55, 0x56, 0x57, 0x41, 0x55, 0x41, 0x56,
    0x48, 0x83, 0xEC, 0x50, 0x8B, 0x81, 0x2C, 0x07,
    0x00, 0x00, 0x45, 0x0F, 0xB6, 0xE9, 0x48, 0x8B,
    0x7A, 0x10, 0x41, 0x8B, 0xF0, 0x48, 0x89, 0xBC
};

static constexpr uint8_t LobbyParticipantAddedPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20, 0x55,
    0x41, 0x56, 0x41, 0x57, 0x48, 0x8B, 0xEC, 0x48,
    0x81, 0xEC, 0x80, 0x00, 0x00, 0x00, 0x48, 0x8B
};

static constexpr uint8_t ServerLobbyRecordWritePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x20, 0x55, 0x56, 0x57,
    0x48, 0x81, 0xEC, 0xA0, 0x00, 0x00, 0x00, 0x48,
    0x8B, 0x05, 0xBA, 0xFA, 0x42, 0x03, 0x48, 0x33,
    0xC4, 0x48, 0x89, 0x84, 0x24, 0x90, 0x00, 0x00
};

static constexpr uint8_t ServerLobbyStateReconcilePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x18, 0x55, 0x56, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0x6C, 0x24, 0xC0, 0x48, 0x81, 0xEC,
    0x40, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x05, 0x3D
};

static constexpr uint8_t LobbyStartGamePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x48, 0x89, 0x7C, 0x24, 0x20, 0x55,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x8D, 0xAC, 0x24, 0x70, 0xFF, 0xFF, 0xFF
};

static constexpr uint8_t LobbyReadyRecomputePreamble7398727[] = {
    0x4C, 0x8B, 0xDC, 0x55, 0x56, 0x41, 0x57, 0x48,
    0x81, 0xEC, 0xB0, 0x00, 0x00, 0x00, 0x48, 0x8B,
    0x05, 0x1B, 0xF0, 0x42, 0x03, 0x48, 0x33, 0xC4,
    0x48, 0x89, 0x84, 0x24, 0x90, 0x00, 0x00, 0x00
};

static constexpr uint8_t ConnectionParticipantRemovePreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x6C,
    0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x83, 0xEC, 0x40, 0x45, 0x8B, 0xE9, 0x4D
};

static constexpr uint8_t ConnectionStateEventPreamble7398727[] = {
    0x4C, 0x8B, 0xDC, 0x49, 0x89, 0x5B, 0x08, 0x49,
    0x89, 0x6B, 0x10, 0x49, 0x89, 0x73, 0x18, 0x57,
    0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57,
    0x48, 0x83, 0xEC, 0x60, 0x48, 0x8B, 0xFA, 0x48
};

static constexpr uint8_t SteamLobbyVisibilityPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x6C,
    0x24, 0x18, 0x48, 0x89, 0x74, 0x24, 0x20, 0x57,
    0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC, 0x40,
    0x4D, 0x8B, 0xF9, 0x44, 0x0F, 0xBE, 0xF2, 0x48
};

static constexpr uint8_t SteamLobbyCreatedPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x6C,
    0x24, 0x18, 0x56, 0x57, 0x41, 0x56, 0x48, 0x83,
    0xEC, 0x50, 0x48, 0x8B, 0x99, 0x10, 0x01, 0x00,
    0x00, 0x45, 0x33, 0xF6, 0x48, 0x8B, 0xF2, 0x48
};

static constexpr uint8_t SteamLobbyJoinRequestPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x57, 0x48, 0x83,
    0xEC, 0x40, 0x8B, 0x82, 0x7C, 0x02, 0x00, 0x00,
    0x48, 0x8B, 0xDA, 0x48, 0x8B, 0xF9, 0x85, 0xC0,
    0x75, 0x0D, 0xB0, 0x0A, 0x48, 0x8B, 0x5C, 0x24
};

static constexpr uint8_t SteamLobbyEnteredPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x74,
    0x24, 0x18, 0x55, 0x57, 0x41, 0x54, 0x41, 0x56,
    0x41, 0x57, 0x48, 0x8D, 0x6C, 0x24, 0xC9, 0x48,
    0x81, 0xEC, 0x90, 0x00, 0x00, 0x00, 0x48, 0x8B
};

static constexpr uint8_t SteamLobbyMatchListPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x48, 0x89, 0x6C,
    0x24, 0x18, 0x56, 0x57, 0x41, 0x54, 0x41, 0x56,
    0x41, 0x57, 0x48, 0x81, 0xEC, 0x90, 0x00, 0x00,
    0x00, 0x4C, 0x8B, 0xF9, 0xC6, 0x81, 0x2A, 0x01
};

static constexpr uint8_t PlatformMemberResolvePreamble7398727[] = {
    0x40, 0x55, 0x56, 0x48, 0x83, 0xEC, 0x28, 0x48,
    0x8B, 0xEA, 0x48, 0x8B, 0xF1, 0xE8, 0x4E, 0xF7,
    0xFF, 0xFF, 0x48, 0x85, 0xC0, 0x0F, 0x85, 0xF3,
    0x00, 0x00, 0x00, 0x48, 0x89, 0x5C, 0x24, 0x40
};

static constexpr uint8_t PlatformMembershipEventPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x10, 0x57, 0x48, 0x83,
    0xEC, 0x30, 0x48, 0x8B, 0xF9, 0x48, 0x8D, 0x05,
    0x6C, 0xC4, 0x8A, 0x01, 0x48, 0x89, 0x44, 0x24,
    0x20, 0x89, 0x54, 0x24, 0x28, 0x44, 0x88, 0x44
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

static constexpr uint8_t CharacterAssignmentEntityRoutePreamble7398727[] = {
    0x48, 0x8B, 0xC4, 0x48, 0x89, 0x58, 0x18, 0x55,
    0x56, 0x57, 0x41, 0x54, 0x41, 0x55, 0x41, 0x56,
    0x41, 0x57, 0x48, 0x8D, 0x68, 0xB8, 0x48, 0x81,
    0xEC, 0x10, 0x01, 0x00, 0x00
};

static constexpr uint8_t PeersInRangeAddPreamble7398727[] = {
    0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83,
    0xEC, 0x20, 0x4C, 0x8B, 0x49, 0x38, 0x48, 0x8B,
    0xF9, 0x48, 0x83, 0xC1, 0x38, 0x48, 0x8B, 0xDA,
    0x4D, 0x85, 0xC9, 0x74, 0x35, 0x48, 0x63, 0x41
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

struct JoinTraceArrayView
{
    uint8_t const* Data;
    uint32_t Capacity;
    uint32_t Count;
};

struct JoinTraceStringView
{
    uint8_t Storage[0x10];
    uint32_t Length;
    uint32_t Capacity;
};

struct JoinTraceLobbyRecord
{
    JoinTraceStringView Key;
    uint16_t PlayerId;
    uint8_t Ready;
    uint8_t Active;
    uint32_t Reserved;
};

struct JoinTracePlatformIdentity
{
    uint32_t Kind;
    uint8_t Subtype;
    uint8_t Reserved[3];
    uint64_t KeyWord0;
    uint64_t KeyWord1;
};

struct JoinTraceManifestView
{
    uint64_t Reserved;
    uint8_t const* Data;
    uint32_t Capacity;
    uint32_t Count;
};

struct JoinTraceGuidWords
{
    uint64_t Word0;
    uint64_t Word1;
};

struct JoinTraceCharacterOwnerNode
{
    JoinTraceCharacterOwnerNode const* Next;
    uint64_t EntityHandle;
    uint32_t UserId;
    uint32_t Reserved;
};

struct JoinTraceCharacterOwnerMapView
{
    uint32_t ItemCount;
    uint32_t HashSize;
    JoinTraceCharacterOwnerNode const* const* HashTable;
};

struct JoinTraceCharacterOwnerEntry
{
    uint32_t Bucket;
    uint64_t EntityHandle;
    uint32_t UserId;
};

struct JoinTraceCharacterOwnerSnapshot
{
    bool GameServerValid;
    bool LayoutValid;
    bool TraversalComplete;
    bool TargetOwnerFound;
    uint32_t ItemCount;
    uint32_t HashSize;
    uint32_t ObservedCount;
    uint32_t TargetOwnerUserId{ UserId::Unassigned };
    JoinTraceCharacterOwnerEntry Entries[64]{};
};

static_assert(sizeof(JoinTraceArrayView) == 0x10);
static_assert(offsetof(JoinTraceArrayView, Count) == 0x0C);
static_assert(sizeof(JoinTraceStringView) == 0x18);
static_assert(offsetof(JoinTraceStringView, Length) == 0x10);
static_assert(offsetof(JoinTraceStringView, Capacity) == 0x14);
static_assert(sizeof(JoinTraceLobbyRecord) == 0x20);
static_assert(offsetof(JoinTraceLobbyRecord, PlayerId) == 0x18);
static_assert(offsetof(JoinTraceLobbyRecord, Ready) == 0x1A);
static_assert(offsetof(JoinTraceLobbyRecord, Active) == 0x1B);
static_assert(sizeof(JoinTracePlatformIdentity) == 0x18);
static_assert(offsetof(JoinTracePlatformIdentity, KeyWord0) == 0x08);
static_assert(sizeof(JoinTraceManifestView) == 0x18);
static_assert(offsetof(JoinTraceManifestView, Data) == 0x08);
static_assert(offsetof(JoinTraceManifestView, Count) == 0x14);
static_assert(sizeof(JoinTraceGuidWords) == 0x10);
static_assert(sizeof(JoinTraceCharacterOwnerNode) == 0x18);
static_assert(offsetof(JoinTraceCharacterOwnerNode, EntityHandle) == 0x08);
static_assert(offsetof(JoinTraceCharacterOwnerNode, UserId) == 0x10);
static_assert(sizeof(JoinTraceCharacterOwnerMapView) == 0x10);
static_assert(offsetof(JoinTraceCharacterOwnerMapView, HashTable) == 0x08);

static bool TryGetJoinTraceString(
    JoinTraceStringView const& value, char const*& data, uint32_t& length)
{
    data = nullptr;
    length = 0;
    if (value.Length > value.Capacity || value.Length > 4096) {
        return false;
    }

    if (value.Capacity < 0x10) {
        data = reinterpret_cast<char const*>(value.Storage);
    } else {
        memcpy(&data, value.Storage, sizeof(data));
    }

    if (value.Length != 0 && data == nullptr) {
        return false;
    }

    length = value.Length;
    return true;
}

static JoinTraceCharacterOwnerSnapshot CaptureJoinTraceCharacterOwners(
    void const* gameServer, uint64_t targetEntityHandle)
{
    JoinTraceCharacterOwnerSnapshot snapshot{};
    snapshot.GameServerValid = gameServer != nullptr;
    if (gameServer == nullptr) {
        return snapshot;
    }

    JoinTraceCharacterOwnerMapView map{};
    memcpy(&map, static_cast<uint8_t const*>(gameServer) + 0x728, sizeof(map));
    snapshot.ItemCount = map.ItemCount;
    snapshot.HashSize = map.HashSize;
    snapshot.LayoutValid = map.ItemCount <= std::size(snapshot.Entries)
        && map.HashSize <= 4096
        && ((map.HashSize == 0 && map.ItemCount == 0)
            || (map.HashSize != 0 && map.HashTable != nullptr));
    if (!snapshot.LayoutValid) {
        return snapshot;
    }

    if (map.HashSize == 0) {
        snapshot.TraversalComplete = true;
        return snapshot;
    }

    bool truncated{};
    for (uint32_t bucket = 0; bucket < map.HashSize; bucket++) {
        auto node = map.HashTable[bucket];
        while (node != nullptr) {
            if (snapshot.ObservedCount >= std::size(snapshot.Entries)) {
                truncated = true;
                break;
            }

            auto& entry = snapshot.Entries[snapshot.ObservedCount++];
            entry.Bucket = bucket;
            entry.EntityHandle = node->EntityHandle;
            entry.UserId = node->UserId;
            if (!snapshot.TargetOwnerFound
                && targetEntityHandle != 0
                && entry.EntityHandle == targetEntityHandle) {
                snapshot.TargetOwnerFound = true;
                snapshot.TargetOwnerUserId = entry.UserId;
            }
            node = node->Next;
        }

        if (truncated) {
            break;
        }
    }

    snapshot.TraversalComplete = !truncated
        && snapshot.ObservedCount == snapshot.ItemCount;
    return snapshot;
}

static bool IsJoinLifecycleTraceMessage(uint32_t messageId)
{
    return messageId == 2
        || messageId == 3
        || messageId == 6
        || messageId == 7
        || messageId == 8
        || messageId == 166
        || messageId == 167
        || messageId == 168
        || messageId == 169
        || messageId == 170
        || messageId == 171
        || messageId == 172
        || messageId == 174
        || messageId == 194
        || messageId == 199
        || messageId == 200
        || messageId == 201
        || messageId == 239
        || messageId == 240
        || messageId == 324
        || messageId == 325;
}

static bool IsLoadOrCharacterCreationTraceMessage(uint32_t messageId)
{
    return messageId == 166
        || messageId == 167
        || messageId == 168
        || messageId == 169
        || messageId == 170
        || messageId == 171
        || messageId == 172
        || messageId == 174
        || messageId == 194
        || messageId == 199
        || messageId == 200
        || messageId == 201
        || messageId == 239
        || messageId == 240
        || messageId == 324
        || messageId == 325;
}

static bool WriteNetworkTracePayload(
    uint32_t eventIndex,
    TPeerId peerId,
    uint32_t messageId,
    SerializedByteBufferView const& body,
    uint32_t maxPayloadBytes,
    wchar_t const* direction,
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
    swprintf_s(filename, L"\\trace-pid%lu-event%u-%ls-id%u-peer%u.bin",
        GetCurrentProcessId(), eventIndex, direction, messageId,
        static_cast<uint32_t>(peerId));
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
             L"send",
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

static net::ProtocolResult (*ResolveClientJoiningProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ClientJoiningProtocolProcessMessageRva7398727,
        ClientJoiningProtocolProcessMessagePreamble7398727);
}

static void (*ResolveModReconciliationClassify())(
    void*, void*, void*, void*, void*, void*, void*, void*)
{
    return ResolveExactGameFunction<void (*)(
        void*, void*, void*, void*, void*, void*, void*, void*)>(
        ModReconciliationClassifyRva7398727,
        ModReconciliationClassifyPreamble7398727);
}

static void (*ResolveModReconciliationGate())(void*, void*)
{
    return ResolveExactGameFunction<void (*)(void*, void*)>(
        ModReconciliationGateRva7398727,
        ModReconciliationGatePreamble7398727);
}

static uint32_t (*ResolveModManifestCompare())(void*, void*, void*)
{
    return ResolveExactGameFunction<uint32_t (*)(void*, void*, void*)>(
        ModManifestCompareRva7398727,
        ModManifestComparePreamble7398727);
}

static net::ProtocolResult (*ResolveClientLobbyProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ClientLobbyProtocolProcessMessageRva7398727,
        ClientLobbyProtocolProcessMessagePreamble7398727);
}

static net::ProtocolResult (*ResolveServerLobbyProtocolProcessMessage())(
    net::Protocol*, void*, net::MessageContext*, net::Message*)
{
    return ResolveExactGameFunction<net::ProtocolResult (*)(
        net::Protocol*, void*, net::MessageContext*, net::Message*)>(
        ServerLobbyProtocolProcessMessageRva7398727,
        ServerLobbyProtocolProcessMessagePreamble7398727);
}

static void (*ResolveDCLobbyUpdate())(void*)
{
    return ResolveExactGameFunction<void (*)(void*)>(
        DCLobbyUpdateRva7398727,
        DCLobbyUpdatePreamble7398727);
}

static void (*ResolvePlatformIdentityMapWrite())(void*, int32_t, void const*)
{
    return ResolveExactGameFunction<void (*)(void*, int32_t, void const*)>(
        PlatformIdentityMapWriteRva7398727,
        PlatformIdentityMapWritePreamble7398727);
}

static void (*ResolveConnectedPeerRegistered())(void*, int32_t const*)
{
    return ResolveExactGameFunction<void (*)(void*, int32_t const*)>(
        ConnectedPeerRegisteredRva7398727,
        ConnectedPeerRegisteredPreamble7398727);
}

static uint8_t (*ResolveSessionMemberAdded())(void*, int32_t const*)
{
    return ResolveExactGameFunction<uint8_t (*)(void*, int32_t const*)>(
        SessionMemberAddedRva7398727,
        SessionMemberAddedPreamble7398727);
}

static void (*ResolveCharacterOwnerWrite())(void*, void const*, uint32_t, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, void const*, uint32_t, uint8_t)>(
        CharacterOwnerWriteRva7398727,
        CharacterOwnerWritePreamble7398727);
}

static uint8_t (*ResolveLobbyParticipantAdded())(void*, uint32_t const*)
{
    return ResolveExactGameFunction<uint8_t (*)(void*, uint32_t const*)>(
        LobbyParticipantAddedRva7398727,
        LobbyParticipantAddedPreamble7398727);
}

static void (*ResolveServerLobbyRecordWrite())(void*, void const*, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, void const*, uint8_t)>(
        ServerLobbyRecordWriteRva7398727,
        ServerLobbyRecordWritePreamble7398727);
}

static void (*ResolveServerLobbyStateReconcile())(void*, void*, uint8_t, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, void*, uint8_t, uint8_t)>(
        ServerLobbyStateReconcileRva7398727,
        ServerLobbyStateReconcilePreamble7398727);
}

static void (*ResolveLobbyStartGame())(void*)
{
    return ResolveExactGameFunction<void (*)(void*)>(
        LobbyStartGameRva7398727,
        LobbyStartGamePreamble7398727);
}

static void (*ResolveLobbyReadyRecompute())(void*)
{
    return ResolveExactGameFunction<void (*)(void*)>(
        LobbyReadyRecomputeRva7398727,
        LobbyReadyRecomputePreamble7398727);
}

static void (*ResolveConnectionParticipantRemove())(
    void*, int32_t const*, void const*, uint32_t)
{
    return ResolveExactGameFunction<void (*)(
        void*, int32_t const*, void const*, uint32_t)>(
        ConnectionParticipantRemoveRva7398727,
        ConnectionParticipantRemovePreamble7398727);
}

static void (*ResolveConnectionStateEvent())(void*, void const*)
{
    return ResolveExactGameFunction<void (*)(void*, void const*)>(
        ConnectionStateEventRva7398727,
        ConnectionStateEventPreamble7398727);
}

static uint8_t (*ResolveSteamLobbyVisibility())(
    void*, uint8_t, uint8_t*, uint8_t*)
{
    return ResolveExactGameFunction<uint8_t (*)(
        void*, uint8_t, uint8_t*, uint8_t*)>(
        SteamLobbyVisibilityRva7398727,
        SteamLobbyVisibilityPreamble7398727);
}

static void (*ResolveSteamLobbyCreated())(void*, void const*, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, void const*, uint8_t)>(
        SteamLobbyCreatedRva7398727,
        SteamLobbyCreatedPreamble7398727);
}

static uint8_t (*ResolveSteamLobbyJoinRequest())(void*, void const*)
{
    return ResolveExactGameFunction<uint8_t (*)(void*, void const*)>(
        SteamLobbyJoinRequestRva7398727,
        SteamLobbyJoinRequestPreamble7398727);
}

static void (*ResolveSteamLobbyEntered())(void*, void const*, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, void const*, uint8_t)>(
        SteamLobbyEnteredRva7398727,
        SteamLobbyEnteredPreamble7398727);
}

static void (*ResolveSteamLobbyMatchList())(
    void*, uint32_t const*, uint8_t, void*)
{
    return ResolveExactGameFunction<void (*)(
        void*, uint32_t const*, uint8_t, void*)>(
        SteamLobbyMatchListRva7398727,
        SteamLobbyMatchListPreamble7398727);
}

static void* (*ResolvePlatformMemberResolve())(void*, void const*)
{
    return ResolveExactGameFunction<void* (*)(void*, void const*)>(
        PlatformMemberResolveRva7398727,
        PlatformMemberResolvePreamble7398727);
}

static void (*ResolvePlatformMembershipEvent())(void*, uint32_t, uint8_t)
{
    return ResolveExactGameFunction<void (*)(void*, uint32_t, uint8_t)>(
        PlatformMembershipEventRva7398727,
        PlatformMembershipEventPreamble7398727);
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

static uint64_t (*ResolveCharacterAssignmentEntityRoute())(void*, void*)
{
    return ResolveExactGameFunction<uint64_t (*)(void*, void*)>(
        CharacterAssignmentEntityRouteRva7398727,
        CharacterAssignmentEntityRoutePreamble7398727);
}

static void (*ResolvePeersInRangeAdd())(void*, int32_t const*)
{
    return ResolveExactGameFunction<void (*)(void*, int32_t const*)>(
        PeersInRangeAddRva7398727,
        PeersInRangeAddPreamble7398727);
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

    auto const enableJoinLifecycleTrace =
        gExtender->GetConfig().EnableJoinLifecycleTrace;
    auto const enableSyntheticLobbyBypass =
        gExtender->GetConfig().EnableSyntheticLobbyBypassPrototype;
    bool joiningProtocolHookInstalled{ false };
    if (enableJoinLifecycleTrace || enableSyntheticLobbyBypass) {
        auto const processMessageTarget = ResolveJoiningProtocolProcessMessage();
        auto const clientProcessMessageTarget = enableJoinLifecycleTrace
            ? ResolveClientJoiningProtocolProcessMessage()
            : nullptr;
        auto const modReconciliationClassifyTarget = enableJoinLifecycleTrace
            ? ResolveModReconciliationClassify()
            : nullptr;
        auto const modReconciliationGateTarget = enableJoinLifecycleTrace
            ? ResolveModReconciliationGate()
            : nullptr;
        auto const modManifestCompareTarget = enableJoinLifecycleTrace
            ? ResolveModManifestCompare()
            : nullptr;
        auto const clientLobbyProcessMessageTarget = enableJoinLifecycleTrace
            ? ResolveClientLobbyProtocolProcessMessage()
            : nullptr;
        auto const serverLobbyProcessMessageTarget = enableJoinLifecycleTrace
            ? ResolveServerLobbyProtocolProcessMessage()
            : nullptr;
        auto const dcLobbyUpdateTarget = enableJoinLifecycleTrace
            ? ResolveDCLobbyUpdate()
            : nullptr;
        auto const platformIdentityMapWriteTarget = enableJoinLifecycleTrace
            ? ResolvePlatformIdentityMapWrite()
            : nullptr;
        auto const connectedPeerRegisteredTarget = enableJoinLifecycleTrace
            ? ResolveConnectedPeerRegistered()
            : nullptr;
        auto const sessionMemberAddedTarget = enableJoinLifecycleTrace
            ? ResolveSessionMemberAdded()
            : nullptr;
        auto const characterOwnerWriteTarget = enableJoinLifecycleTrace
            ? ResolveCharacterOwnerWrite()
            : nullptr;
        auto const lobbyParticipantAddedTarget = enableJoinLifecycleTrace
            ? ResolveLobbyParticipantAdded()
            : nullptr;
        auto const serverLobbyRecordWriteTarget = enableJoinLifecycleTrace
            ? ResolveServerLobbyRecordWrite()
            : nullptr;
        auto const serverLobbyStateReconcileTarget = enableJoinLifecycleTrace
            ? ResolveServerLobbyStateReconcile()
            : nullptr;
        auto const lobbyStartGameTarget = enableJoinLifecycleTrace
            ? ResolveLobbyStartGame()
            : nullptr;
        auto const lobbyReadyRecomputeTarget = enableJoinLifecycleTrace
            ? ResolveLobbyReadyRecompute()
            : nullptr;
        auto const connectionParticipantRemoveTarget = enableJoinLifecycleTrace
            ? ResolveConnectionParticipantRemove()
            : nullptr;
        auto const connectionStateEventTarget = enableJoinLifecycleTrace
            ? ResolveConnectionStateEvent()
            : nullptr;
        auto const steamLobbyVisibilityTarget = enableJoinLifecycleTrace
            ? ResolveSteamLobbyVisibility()
            : nullptr;
        auto const steamLobbyCreatedTarget = enableJoinLifecycleTrace
            ? ResolveSteamLobbyCreated()
            : nullptr;
        auto const steamLobbyJoinRequestTarget = enableJoinLifecycleTrace
            ? ResolveSteamLobbyJoinRequest()
            : nullptr;
        auto const steamLobbyEnteredTarget = enableJoinLifecycleTrace
            ? ResolveSteamLobbyEntered()
            : nullptr;
        auto const steamLobbyMatchListTarget = enableJoinLifecycleTrace
            ? ResolveSteamLobbyMatchList()
            : nullptr;
        auto const platformMemberResolveTarget = enableJoinLifecycleTrace
            ? ResolvePlatformMemberResolve()
            : nullptr;
        auto const platformMembershipEventTarget = enableJoinLifecycleTrace
            ? ResolvePlatformMembershipEvent()
            : nullptr;
        if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_JOIN_TRACE] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (enableJoinLifecycleTrace
            && !IsValidJoinLifecycleTraceMaxEvents(
                gExtender->GetConfig().JoinLifecycleTraceMaxEvents)) {
            ERR("[MP_JOIN_TRACE] event=disabled reason=invalid_max_events actual=%u allowed=1-4096",
                gExtender->GetConfig().JoinLifecycleTraceMaxEvents);
        } else if (processMessageTarget == nullptr
            || (enableJoinLifecycleTrace && (clientProcessMessageTarget == nullptr
                || modReconciliationClassifyTarget == nullptr
                || modReconciliationGateTarget == nullptr
                || modManifestCompareTarget == nullptr
                || clientLobbyProcessMessageTarget == nullptr
                || serverLobbyProcessMessageTarget == nullptr
                || dcLobbyUpdateTarget == nullptr
                 || platformIdentityMapWriteTarget == nullptr
                 || connectedPeerRegisteredTarget == nullptr
                 || sessionMemberAddedTarget == nullptr
                 || characterOwnerWriteTarget == nullptr
                 || lobbyParticipantAddedTarget == nullptr
                || serverLobbyRecordWriteTarget == nullptr
                || serverLobbyStateReconcileTarget == nullptr
                || lobbyStartGameTarget == nullptr
                || lobbyReadyRecomputeTarget == nullptr
                || connectionParticipantRemoveTarget == nullptr
                || connectionStateEventTarget == nullptr
                || steamLobbyVisibilityTarget == nullptr
                || steamLobbyCreatedTarget == nullptr
                || steamLobbyJoinRequestTarget == nullptr
                || steamLobbyEnteredTarget == nullptr
                || steamLobbyMatchListTarget == nullptr
                || platformMemberResolveTarget == nullptr
                || platformMembershipEventTarget == nullptr))) {
            ERR("[MP_JOIN_TRACE] event=disabled reason=function_preamble_mismatch server_rva=0x%llx server=%u client_rva=0x%llx client=%u mod_reconciliation_rva=0x%llx mod_reconciliation=%u semantic_group_valid=%u",
                (unsigned long long)JoiningProtocolProcessMessageRva7398727,
                processMessageTarget != nullptr ? 1u : 0u,
                (unsigned long long)ClientJoiningProtocolProcessMessageRva7398727,
                clientProcessMessageTarget != nullptr ? 1u : 0u,
                (unsigned long long)ModReconciliationClassifyRva7398727,
                modReconciliationClassifyTarget != nullptr ? 1u : 0u,
                modReconciliationGateTarget != nullptr
                    && modManifestCompareTarget != nullptr
                    && clientLobbyProcessMessageTarget != nullptr
                    && serverLobbyProcessMessageTarget != nullptr
                    && dcLobbyUpdateTarget != nullptr
                     && platformIdentityMapWriteTarget != nullptr
                     && connectedPeerRegisteredTarget != nullptr
                     && sessionMemberAddedTarget != nullptr
                     && characterOwnerWriteTarget != nullptr
                     && lobbyParticipantAddedTarget != nullptr
                    && serverLobbyRecordWriteTarget != nullptr
                    && serverLobbyStateReconcileTarget != nullptr
                    && lobbyStartGameTarget != nullptr
                    && lobbyReadyRecomputeTarget != nullptr
                    && connectionParticipantRemoveTarget != nullptr
                    && connectionStateEventTarget != nullptr
                    && steamLobbyVisibilityTarget != nullptr
                    && steamLobbyCreatedTarget != nullptr
                    && steamLobbyJoinRequestTarget != nullptr
                    && steamLobbyEnteredTarget != nullptr
                    && steamLobbyMatchListTarget != nullptr
                    && platformMemberResolveTarget != nullptr
                    && platformMembershipEventTarget != nullptr ? 1u : 0u);
            if (enableJoinLifecycleTrace) {
                ERR("[MP_JOIN_TRACE] event=semantic_guard_status mod_gate=%u mod_compare=%u client_lobby=%u server_lobby=%u dc_lobby_update=%u identity_map=%u connected_peer=%u session_member_added=%u character_owner_write=%u participant_added=%u record_write=%u reconcile=%u start_game=%u ready_recompute=%u participant_remove=%u connection_event=%u steam_visibility=%u steam_created=%u steam_join=%u steam_entered=%u steam_match_list=%u platform_member_resolve=%u platform_membership_event=%u",
                    modReconciliationGateTarget != nullptr ? 1u : 0u,
                    modManifestCompareTarget != nullptr ? 1u : 0u,
                    clientLobbyProcessMessageTarget != nullptr ? 1u : 0u,
                    serverLobbyProcessMessageTarget != nullptr ? 1u : 0u,
                    dcLobbyUpdateTarget != nullptr ? 1u : 0u,
                    platformIdentityMapWriteTarget != nullptr ? 1u : 0u,
                    connectedPeerRegisteredTarget != nullptr ? 1u : 0u,
                    sessionMemberAddedTarget != nullptr ? 1u : 0u,
                    characterOwnerWriteTarget != nullptr ? 1u : 0u,
                    lobbyParticipantAddedTarget != nullptr ? 1u : 0u,
                    serverLobbyRecordWriteTarget != nullptr ? 1u : 0u,
                    serverLobbyStateReconcileTarget != nullptr ? 1u : 0u,
                    lobbyStartGameTarget != nullptr ? 1u : 0u,
                    lobbyReadyRecomputeTarget != nullptr ? 1u : 0u,
                    connectionParticipantRemoveTarget != nullptr ? 1u : 0u,
                    connectionStateEventTarget != nullptr ? 1u : 0u,
                    steamLobbyVisibilityTarget != nullptr ? 1u : 0u,
                    steamLobbyCreatedTarget != nullptr ? 1u : 0u,
                    steamLobbyJoinRequestTarget != nullptr ? 1u : 0u,
                    steamLobbyEnteredTarget != nullptr ? 1u : 0u,
                    steamLobbyMatchListTarget != nullptr ? 1u : 0u,
                    platformMemberResolveTarget != nullptr ? 1u : 0u,
                    platformMembershipEventTarget != nullptr ? 1u : 0u);
            }
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            eocnet__JoiningProtocol__ProcessMessage.Wrap(processMessageTarget);
            if (enableJoinLifecycleTrace) {
                eocnet__ClientJoiningProtocol__ProcessMessage.Wrap(clientProcessMessageTarget);
                eocnet__ModReconciliation__Classify.Wrap(modReconciliationClassifyTarget);
                eocnet__ModReconciliation__RunGate.Wrap(modReconciliationGateTarget);
                eocnet__ModManifest__Compare.Wrap(modManifestCompareTarget);
                eocnet__ClientLobbyProtocol__ProcessMessage.Wrap(clientLobbyProcessMessageTarget);
                eocnet__ServerLobbyProtocol__ProcessMessage.Wrap(serverLobbyProcessMessageTarget);
                ecl__DCLobby__Update.Wrap(dcLobbyUpdateTarget);
                net__PlatformIdentityMap__Write.Wrap(platformIdentityMapWriteTarget);
                esv__GameServer__RegisterConnectedPeer.Wrap(connectedPeerRegisteredTarget);
                esv__GameServer__SessionMemberAdded.Wrap(sessionMemberAddedTarget);
                esv__GameServer__WriteCharacterOwner.Wrap(characterOwnerWriteTarget);
                esv__LobbyManager__ParticipantAdded.Wrap(lobbyParticipantAddedTarget);
                esv__LobbyManager__WriteRecord.Wrap(serverLobbyRecordWriteTarget);
                esv__LobbyManager__ReconcileState.Wrap(serverLobbyStateReconcileTarget);
                esv__LobbyManager__StartGame.Wrap(lobbyStartGameTarget);
                esv__LobbyManager__RecomputeReady.Wrap(lobbyReadyRecomputeTarget);
                esv__GameServer__RemoveParticipant.Wrap(connectionParticipantRemoveTarget);
                esv__GameServer__OnConnectionStateEvent.Wrap(connectionStateEventTarget);
                stm__SteamMatchMakingManager__SetLobbyVisibility.Wrap(steamLobbyVisibilityTarget);
                stm__SteamMatchMakingManager__OnLobbyCreated.Wrap(steamLobbyCreatedTarget);
                stm__SteamMatchMakingManager__JoinLobby.Wrap(steamLobbyJoinRequestTarget);
                stm__SteamMatchMakingManager__OnLobbyEntered.Wrap(steamLobbyEnteredTarget);
                stm__SteamMatchMakingManager__OnLobbyMatchList.Wrap(steamLobbyMatchListTarget);
                net__PlatformParticipantManager__ResolveMember.Wrap(platformMemberResolveTarget);
                net__PlatformParticipantManager__PublishMembershipEvent.Wrap(platformMembershipEventTarget);
            }
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                eocnet__JoiningProtocol__ProcessMessage.SetWrapper(
                    &Hooks::OnJoiningProtocolProcessMessage, this);
                if (enableJoinLifecycleTrace) {
                    eocnet__ClientJoiningProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnClientJoiningProtocolProcessMessage, this);
                    eocnet__ModReconciliation__Classify.SetWrapper(
                        &Hooks::OnModReconciliationClassify, this);
                    eocnet__ModReconciliation__RunGate.SetWrapper(
                        &Hooks::OnModReconciliationGate, this);
                    eocnet__ModManifest__Compare.SetWrapper(
                        &Hooks::OnModManifestCompare, this);
                    eocnet__ClientLobbyProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnClientLobbyProtocolProcessMessage, this);
                    eocnet__ServerLobbyProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnServerLobbyProtocolProcessMessage, this);
                    ecl__DCLobby__Update.SetWrapper(&Hooks::OnDCLobbyUpdate, this);
                    net__PlatformIdentityMap__Write.SetWrapper(
                        &Hooks::OnPlatformIdentityMapWrite, this);
                    esv__GameServer__RegisterConnectedPeer.SetWrapper(
                        &Hooks::OnConnectedPeerRegistered, this);
                    esv__GameServer__SessionMemberAdded.SetWrapper(
                        &Hooks::OnSessionMemberAdded, this);
                    esv__GameServer__WriteCharacterOwner.SetWrapper(
                        &Hooks::OnCharacterOwnerWrite, this);
                    esv__LobbyManager__ParticipantAdded.SetWrapper(
                        &Hooks::OnLobbyParticipantAdded, this);
                    esv__LobbyManager__WriteRecord.SetWrapper(
                        &Hooks::OnServerLobbyRecordWrite, this);
                    esv__LobbyManager__ReconcileState.SetWrapper(
                        &Hooks::OnServerLobbyStateReconcile, this);
                    esv__LobbyManager__StartGame.SetWrapper(
                        &Hooks::OnLobbyStartGame, this);
                    esv__LobbyManager__RecomputeReady.SetWrapper(
                        &Hooks::OnLobbyReadyRecompute, this);
                    esv__GameServer__RemoveParticipant.SetWrapper(
                        &Hooks::OnConnectionParticipantRemove, this);
                    esv__GameServer__OnConnectionStateEvent.SetWrapper(
                        &Hooks::OnConnectionStateEvent, this);
                    stm__SteamMatchMakingManager__SetLobbyVisibility.SetWrapper(
                        &Hooks::OnSteamLobbyVisibility, this);
                    stm__SteamMatchMakingManager__OnLobbyCreated.SetWrapper(
                        &Hooks::OnSteamLobbyCreated, this);
                    stm__SteamMatchMakingManager__JoinLobby.SetWrapper(
                        &Hooks::OnSteamLobbyJoinRequest, this);
                    stm__SteamMatchMakingManager__OnLobbyEntered.SetWrapper(
                        &Hooks::OnSteamLobbyEntered, this);
                    stm__SteamMatchMakingManager__OnLobbyMatchList.SetWrapper(
                        &Hooks::OnSteamLobbyMatchList, this);
                    net__PlatformParticipantManager__ResolveMember.SetWrapper(
                        &Hooks::OnPlatformMemberResolve, this);
                    net__PlatformParticipantManager__PublishMembershipEvent.SetWrapper(
                        &Hooks::OnPlatformMembershipEvent, this);
                }
                joiningProtocolHookInstalled = true;
                if (enableJoinLifecycleTrace) {
                    INFO("[MP_JOIN_TRACE] event=hook_enabled server_rva=0x%llx client_rva=0x%llx mod_reconciliation_rva=0x%llx mod_gate_rva=0x%llx semantic_hook_count=26 max_events=%u synthetic_bypass_active=0 argument_mutation=0 payload_mutation=0 result_mutation=0",
                        (unsigned long long)JoiningProtocolProcessMessageRva7398727,
                        (unsigned long long)ClientJoiningProtocolProcessMessageRva7398727,
                        (unsigned long long)ModReconciliationClassifyRva7398727,
                        (unsigned long long)ModReconciliationGateRva7398727,
                        gExtender->GetConfig().JoinLifecycleTraceMaxEvents);
                }
            } else {
                ERR("[MP_JOIN_TRACE] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    if (enableSyntheticLobbyBypass) {
        auto const marker = gExtender->GetConfig().SyntheticLobbyBypassMarker;
        auto const peerLimit = gExtender->GetConfig().ExperimentalNativeMultiplayerPeerLimit;
        auto const membershipCheckTarget = ResolveLobbyMembershipCheck();
        auto const lobbyIsReadyTarget = ResolveLobbyIsReady();
        if (marker == 0) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=invalid_marker marker_must_be_nonzero=true");
        } else if (!localPeerTransportHookInstalled) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=local_transport_not_ready");
        } else if (peerLimit != 0
            && !IsValidExperimentalNativeMultiplayerPeerLimit(peerLimit)) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=invalid_peer_limit actual=%u allowed=0_or_9-64", peerLimit);
        } else if (!IsSocketOverrideTelemetryResearchBuild(gExtender->GetGameVersion())) {
            auto const& version = gExtender->GetGameVersion();
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=unsupported_game_version actual=%u.%u.%u.%u supported=4.73.98.727",
                (unsigned)version.Major,
                (unsigned)version.Minor,
                (unsigned)version.Revision,
                (unsigned)version.Build);
        } else if (!joiningProtocolHookInstalled || membershipCheckTarget == nullptr
            || lobbyIsReadyTarget == nullptr) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=function_guard_failed joining_protocol=%d membership_check=%d lobby_is_ready=%d",
                joiningProtocolHookInstalled,
                membershipCheckTarget != nullptr,
                lobbyIsReadyTarget != nullptr);
        } else if (!ApplySyntheticLobbyCanStartBypass7398727()) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=can_start_bypass_failed");
        } else if (!ApplySyntheticLobbyStartMembershipBypass7398727()) {
            ERR("[MP_SYNTHETIC_LOBBY] event=disabled reason=start_membership_bypass_failed");
        } else {
            DetourTransactionBegin();
            DetourUpdateThread(GetCurrentThread());
            eocnet__Lobby__CheckMembership.Wrap(membershipCheckTarget);
            eocnet__Lobby__IsReady.Wrap(lobbyIsReadyTarget);
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                eocnet__Lobby__CheckMembership.SetWrapper(
                    &Hooks::OnLobbyMembershipCheck, this);
                eocnet__Lobby__IsReady.SetWrapper(
                    &Hooks::OnLobbyIsReady, this);
                syntheticLobbyBypassActive_.store(true, std::memory_order_release);
                INFO("[MP_SYNTHETIC_LOBBY] event=hook_enabled scope=marked_local_client_connect peer_range=2-9 capacity_mode=%s ready_bypass=1 identity_logging=disabled marker_logging=disabled",
                    peerLimit == 0 ? "native" : "expanded");
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
    if (enableSyntheticSessionLoadBypass || enableLoadProtocolWireTrace
        || enableJoinLifecycleTrace) {
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
                if (enableJoinLifecycleTrace) {
                    INFO("[MP_JOIN_TRACE] event=send_hook_enabled rva=0x4061F20 semantic_fields=1 low_id_body_decode=handler_specific message_mutation=0");
                }
            } else {
                ERR("[MP_SYNTHETIC_SESSION_LOAD] event=disabled reason=detour_failed status=%ld", status);
            }
        }
    }

    auto const enableSemanticLifecycleProtocols =
        enableLoadProtocolWireTrace || enableJoinLifecycleTrace;
    if (enableSemanticLifecycleProtocols || enableSyntheticUncompressedLoadReceiveBypass) {
        auto const clientTarget = enableSemanticLifecycleProtocols
            ? ResolveClientLoadProtocolProcessMessage()
            : nullptr;
        auto const serverTarget = enableSemanticLifecycleProtocols
            ? ResolveServerLoadProtocolProcessMessage()
            : nullptr;
        auto const characterCreationServerTarget = enableSemanticLifecycleProtocols
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
        auto const characterAssignmentEntityRouteTarget = enableLoadProtocolWireTrace
            ? ResolveCharacterAssignmentEntityRoute()
            : nullptr;
        auto const peersInRangeAddTarget = enableLoadProtocolWireTrace
            ? ResolvePeersInRangeAdd()
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
            || (enableSemanticLifecycleProtocols
                && (clientTarget == nullptr || serverTarget == nullptr
                    || characterCreationServerTarget == nullptr))
            || (enableLoadProtocolWireTrace
                && (entityHandleSetInsertTarget == nullptr
                    || alternateEntityHandleSetInsertTarget == nullptr
                    || entityHandleArrayAppendTarget == nullptr
                    || entityReplicationCommandSetInsertTarget == nullptr
                    || entityReplicationCommandBufferReplicateTarget == nullptr
                    || entityReplicationSystemUpdateTarget == nullptr
                    || entityReplicationCommandBufferFlushTarget == nullptr
                    || characterAssignmentEntityRouteTarget == nullptr
                    || peersInRangeAddTarget == nullptr))) {
            ERR("[MP_LOAD_TRACE] event=disabled reason=receive_or_process_guard_failed receive=%u client=%u server=%u character_creation_server=%u entity_handle_set_insert=%u alternate_entity_handle_set_insert=%u entity_handle_array_append=%u replication_command_set_insert=%u replication_command_buffer_replicate=%u replication_system_update=%u replication_command_buffer_flush=%u character_assignment_entity_route=%u peers_in_range_add=%u",
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
                entityReplicationCommandBufferFlushTarget != nullptr ? 1u : 0u,
                characterAssignmentEntityRouteTarget != nullptr ? 1u : 0u,
                peersInRangeAddTarget != nullptr ? 1u : 0u);
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
            net__AbstractPeer__ReceiveGeneralMessage.Wrap(receiveTarget);
            if (enableSemanticLifecycleProtocols) {
                eocnet__ClientLoadProtocol__ProcessMessage.Wrap(clientTarget);
                eocnet__ServerLoadProtocol__ProcessMessage.Wrap(serverTarget);
                eocnet__ServerCharacterCreationProtocol__ProcessMessage.Wrap(characterCreationServerTarget);
            }
            if (enableLoadProtocolWireTrace) {
                ecs__EntityHandleSet__Insert.Wrap(entityHandleSetInsertTarget);
                ecs__AlternateEntityHandleSet__Insert.Wrap(alternateEntityHandleSetInsertTarget);
                ecs__EntityHandleArray__Append.Wrap(entityHandleArrayAppendTarget);
                ecs__EntityReplicationCommandSet__Insert.Wrap(entityReplicationCommandSetInsertTarget);
                ecs__EntityReplicationCommandBuffer__Replicate.Wrap(entityReplicationCommandBufferReplicateTarget);
                ecs__EntityReplicationSystem__Update.Wrap(entityReplicationSystemUpdateTarget);
                ecs__EntityReplicationCommandBuffer__Flush.Wrap(entityReplicationCommandBufferFlushTarget);
                eocnet__CharacterAssignment__RouteEntity.Wrap(characterAssignmentEntityRouteTarget);
                esv__PeersInRange__Add.Wrap(peersInRangeAddTarget);
            }
            auto const status = DetourTransactionCommit();
            if (status == NO_ERROR) {
                net__AbstractPeer__ReceiveGeneralMessage.SetWrapper(
                    &Hooks::OnAbstractPeerReceiveGeneralMessage, this);
                if (enableSemanticLifecycleProtocols) {
                    eocnet__ClientLoadProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnClientLoadProtocolProcessMessage, this);
                    eocnet__ServerLoadProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnServerLoadProtocolProcessMessage, this);
                    eocnet__ServerCharacterCreationProtocol__ProcessMessage.SetWrapper(
                        &Hooks::OnServerCharacterCreationProtocolProcessMessage, this);
                }
                if (enableLoadProtocolWireTrace) {
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
                    eocnet__CharacterAssignment__RouteEntity.SetWrapper(
                        &Hooks::OnCharacterAssignmentEntityRoute, this);
                    esv__PeersInRange__Add.SetWrapper(
                        &Hooks::OnPeersInRangeAdd, this);
                    characterAssignmentEntityRouteTraceEventCount_.store(0, std::memory_order_release);
                    peersInRangeAddTraceEventCount_.store(0, std::memory_order_release);
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
                    INFO("[MP_LOAD_TRACE] event=hook_enabled send_rva=0x4061F20 receive_rva=0x4062320 client_process_rva=0x1FEE910 server_process_rva=0x2F9F170 character_creation_server_process_rva=0x373C020 entity_handle_set_insert_rva=0x1135EB0 alternate_entity_handle_set_insert_rva=0x3148D00 entity_handle_array_append_rva=0x7554F0 replication_command_set_insert_rva=0x7200C0 replication_command_buffer_replicate_rva=0x428FF80 replication_system_update_rva=0x3158380 replication_command_buffer_flush_rva=0x4287190 character_assignment_entity_route_rva=0x30735A0 peers_in_range_add_rva=0x30BEBC0 max_events=%u max_payload_bytes=%u payload_directory=localappdata identity_logging=enabled session_logging=enabled character_creation_logging=net_id_resolved_entity character_assignment_logging=peer_entity_access peers_in_range_logging=add_before_after replication_enqueue_correlation=command_buffer_flush_history_insert_sources_count_watchpoint_array_append_command_set_insert_and_replicate_callback message_mutation=0",
                        gExtender->GetConfig().LoadProtocolWireTraceMaxEvents,
                        gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes);
                }
                if (enableJoinLifecycleTrace) {
                    INFO("[MP_JOIN_TRACE] event=lifecycle_protocol_hooks_enabled receive_rva=0x4062320 client_load_process_rva=0x1FEE910 server_load_process_rva=0x2F9F170 character_creation_server_process_rva=0x373C020 argument_mutation=0 payload_mutation=0 result_mutation=0");
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

void Hooks::TraceJoinMessageSemantics(
    char const* side,
    char const* direction,
    TPeerId peerId,
    net::Message* message,
    uint32_t callIndex)
{
    if (message == nullptr
        || !IsJoinLifecycleTraceMessage(static_cast<uint32_t>(message->MsgId))) {
        return;
    }

    auto const bytes = reinterpret_cast<uint8_t const*>(message);
    auto const messageId = static_cast<uint32_t>(message->MsgId);
    uint32_t eventIndex;

    switch (messageId) {
    case 2: {
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        auto const attempt = *reinterpret_cast<uint32_t const*>(bytes + 0x28);
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=2 concrete=HostWelcomeMessage concrete_name_va=0x14554C728 constructor_rva=0x11D75E0 serializer_rva=0x11ABDB0 peer=%u attempt=%u special_vtable_path=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId, attempt);
        break;
    }

    case 3: {
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        auto const refusalReason = *reinterpret_cast<uint32_t const*>(bytes + 0x28);
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=3 concrete=HostRefuseMessage concrete_name_va=0x14554C6F0 constructor_rva=0x11B0C10 serializer_rva=0x11B0BA0 peer=%u reason=%u has_mod_mismatch=%u special_vtable_path=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            refusalReason, refusalReason == 5 || refusalReason == 6 ? 1u : 0u);
        break;
    }

    case 6: {
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        auto const connect = static_cast<net::ClientConnectMessage const*>(message);
        uint64_t identityWord0{};
        uint64_t identityWord1{};
        memcpy(&identityWord0, &connect->field_60, sizeof(identityWord0));
        memcpy(&identityWord1,
            reinterpret_cast<uint8_t const*>(&connect->field_60) + sizeof(identityWord0),
            sizeof(identityWord1));
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=6 concrete=ClientConnectMessage concrete_name_va=0x14554CAB0 constructor_rva=0x11CB790 serializer_rva=0x11CB900 peer=%u platform_kind=%d platform_subtype=%u platform_key_word0=0x%016llX platform_key_word1=0x%016llX compatibility_count=%u generation=%d identity_tail_kind=%u identity_tail_subtype=%u field_ac=%u special_vtable_path=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            connect->field_58,
            (unsigned)connect->field_5C,
            (unsigned long long)identityWord0,
            (unsigned long long)identityWord1,
            connect->field_78.size(),
            connect->field_A8,
            (unsigned)connect->field_70,
            (unsigned)connect->field_71,
            (unsigned)connect->field_AC);
        break;
    }

    case 7:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=7 concrete=ClientAcceptMessage concrete_name_va=0x14554CA78 constructor_rva=0x11CB6E0 serializer_rva=0x579D90 body=empty peer=%u special_vtable_path=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 8: {
        auto const& peers = *reinterpret_cast<JoinTraceArrayView const*>(bytes + 0x28);
        auto const valid = peers.Count <= peers.Capacity
            && peers.Count <= 64
            && (peers.Count == 0 || peers.Data != nullptr);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=connected_peer_list index=%u call_index=%u side=%s direction=%s msg_id=8 concrete=ClientJoinedMessage concrete_name_va=0x14554CB60 constructor_rva=0x11CBCB0 serializer_rva=0x11CBDB0 peer=%u count=%u capacity=%u layout_valid=%u record_stride=0x30 special_vtable_path=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            peers.Count, peers.Capacity, valid ? 1u : 0u);
        if (!valid) return;

        for (uint32_t i = 0; i < peers.Count; i++) {
            auto const record = peers.Data + static_cast<size_t>(i) * 0x30;
            auto const& className = *reinterpret_cast<JoinTraceStringView const*>(record);
            char const* classNameData{};
            uint32_t classNameLength{};
            auto const classNameValid = TryGetJoinTraceString(
                className, classNameData, classNameLength);
            auto const identityKind = *reinterpret_cast<uint32_t const*>(record + 0x18);
            auto const identitySubtype = *reinterpret_cast<uint32_t const*>(record + 0x1C);
            auto const identityValue = *reinterpret_cast<uint64_t const*>(record + 0x20);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=connected_peer_record index=%u call_index=%u side=%s direction=%s msg_id=8 peer=%u ordinal=%u class_name_valid=%u class_name=%.*s platform_kind=%u platform_subtype=%u platform_value=0x%016llX message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId, i,
                classNameValid ? 1u : 0u,
                classNameValid ? static_cast<int>(classNameLength) : 0,
                classNameValid && classNameData != nullptr ? classNameData : "",
                identityKind,
                identitySubtype,
                (unsigned long long)identityValue);
        }
        break;
    }

    case 199: {
        auto const body = bytes + 0x28;
        auto const fieldMask = *reinterpret_cast<uint32_t const*>(body + 0x94);
        auto const slotCount = *reinterpret_cast<uint8_t const*>(body + 0x38);
        auto const& records = *reinterpret_cast<JoinTraceArrayView const*>(body + 0x98);
        auto const valid = records.Count <= records.Capacity
            && records.Count <= 64
            && (records.Count == 0 || records.Data != nullptr);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=lobby_state_message index=%u call_index=%u side=%s direction=%s msg_id=199 concrete=LobbyDataUpdateMessage concrete_name_va=0x145550140 constructor_rva=0x11DC660 serializer_rva=0x11DC700 peer=%u field_mask=0x%08X slot_count=%u record_count=%u record_capacity=%u record_layout_valid=%u record_stride=0x20 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            fieldMask, (unsigned)slotCount, records.Count, records.Capacity,
            valid ? 1u : 0u);
        if (!valid) return;

        for (uint32_t i = 0; i < records.Count; i++) {
            auto const& record = *reinterpret_cast<JoinTraceLobbyRecord const*>(
                records.Data + static_cast<size_t>(i) * sizeof(JoinTraceLobbyRecord));
            char const* keyData{};
            uint32_t keyLength{};
            auto const keyValid = TryGetJoinTraceString(record.Key, keyData, keyLength);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=lobby_message_record index=%u call_index=%u side=%s direction=%s msg_id=199 peer=%u slot=%u key_valid=%u key=%.*s player_id=%u ready=%u active=%u message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId, i,
                keyValid ? 1u : 0u,
                keyValid ? static_cast<int>(keyLength) : 0,
                keyValid && keyData != nullptr ? keyData : "",
                (unsigned)record.PlayerId,
                (unsigned)record.Ready,
                (unsigned)record.Active);
        }
        break;
    }

    case 200: {
        auto const& record = *reinterpret_cast<JoinTraceLobbyRecord const*>(bytes + 0x28);
        auto const slot = *reinterpret_cast<uint8_t const*>(bytes + 0x48);
        char const* keyData{};
        uint32_t keyLength{};
        auto const keyValid = TryGetJoinTraceString(record.Key, keyData, keyLength);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=lobby_message_record index=%u call_index=%u side=%s direction=%s msg_id=200 concrete=LobbyUserUpdateMessage concrete_name_va=0x145550100 constructor_rva=0x11DCFB0 serializer_rva=0x11DD030 peer=%u slot=%u key_valid=%u key=%.*s player_id=%u ready=%u active=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned)slot,
            keyValid ? 1u : 0u,
            keyValid ? static_cast<int>(keyLength) : 0,
            keyValid && keyData != nullptr ? keyData : "",
            (unsigned)record.PlayerId,
            (unsigned)record.Ready,
            (unsigned)record.Active);
        break;
    }

    case 201: {
        auto const field0 = *reinterpret_cast<uint8_t const*>(bytes + 0x28);
        auto const field1 = *reinterpret_cast<uint8_t const*>(bytes + 0x29);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=201 concrete=LobbyStartGameMessage concrete_name_va=0x1455500C0 constructor_rva=0x11DC320 serializer_rva=0x11DC360 peer=%u field28=%u field29=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned)field0, (unsigned)field1);
        break;
    }

    case 239: {
        auto const netId = *reinterpret_cast<uint64_t const*>(bytes + 0x28);
        auto const field30 = *reinterpret_cast<uint16_t const*>(bytes + 0x30);
        auto const field38 = *reinterpret_cast<uint32_t const*>(bytes + 0x38);
        auto const field3C = *reinterpret_cast<uint8_t const*>(bytes + 0x3C);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=creator_message_fields index=%u call_index=%u side=%s direction=%s msg_id=239 concrete=CharacterCreationReadyUpdateMessage concrete_name_va=0x1455507E8 constructor_rva=0x11C2890 serializer_rva=0x11C28F0 peer=%u net_id=0x%016llX player_index=%u ready_stage=%u ready_value=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned long long)netId,
            (unsigned)field30,
            field38,
            (unsigned)field3C);
        break;
    }

    case 240: {
        auto const netId = *reinterpret_cast<uint64_t const*>(bytes + 0x28);
        auto const playerIndex = *reinterpret_cast<uint16_t const*>(bytes + 0x30);
        auto const payload = bytes + 0x38;
        auto const discriminator = *reinterpret_cast<uint8_t const*>(bytes + 0x2C0);
        auto const tailField2C8 = *reinterpret_cast<uint32_t const*>(bytes + 0x2C8);
        auto const tailField2CC = *reinterpret_cast<uint32_t const*>(bytes + 0x2CC);
        auto const tailField2D0 = *reinterpret_cast<uint8_t const*>(bytes + 0x2D0);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=creator_update_message index=%u call_index=%u side=%s direction=%s msg_id=240 concrete=CharacterCreationUpdateMessage concrete_name_va=0x145550790 constructor_rva=0x11C2B50 serializer_rva=0x11C2C80 peer=%u net_id=0x%016llX player_index=%u discriminator=%u tail_field_2c8=%u tail_field_2cc=%u tail_field_2d0=%u message_size=0x2D8 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned long long)netId,
            (unsigned)playerIndex,
            (unsigned)discriminator,
            tailField2C8,
            tailField2CC,
            (unsigned)tailField2D0);

        if (discriminator == 0) {
            auto const definitionField0 = *reinterpret_cast<uint32_t const*>(payload);
            auto const& name = *reinterpret_cast<JoinTraceStringView const*>(payload + 0x08);
            char const* nameData{};
            uint32_t nameLength{};
            auto const nameValid = TryGetJoinTraceString(name, nameData, nameLength);
            auto const& origin = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x20);
            auto const& race = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x30);
            auto const& subrace = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x40);
            auto const bodyType = *(payload + 0x50);
            auto const bodyShape = *(payload + 0x51);
            auto const& rootTemplate = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x58);
            auto const& background = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x68);
            auto const& deity = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x78);
            auto const& voice = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x88);
            auto const definitionFieldA8 = *(payload + 0xA8);
            auto const abilities = reinterpret_cast<int32_t const*>(payload + 0x18C);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=creator_character_definition index=%u call_index=%u side=%s direction=%s msg_id=240 peer=%u net_id=0x%016llX player_index=%u discriminator=0 variant=CharacterDefinition variant_serializer_rva=0x11C1E10 semantic_role=player_character_definition definition_field0=%u name_valid=%u name=%.*s origin_word0=0x%016llX origin_word1=0x%016llX race_word0=0x%016llX race_word1=0x%016llX subrace_word0=0x%016llX subrace_word1=0x%016llX body_type=%u body_shape=%u root_template_word0=0x%016llX root_template_word1=0x%016llX background_word0=0x%016llX background_word1=0x%016llX deity_word0=0x%016llX deity_word1=0x%016llX voice_word0=0x%016llX voice_word1=0x%016llX definition_field_a8=%u ability_count_serialized=6 ability_0=%d ability_1=%d ability_2=%d ability_3=%d ability_4=%d ability_5=%d vo_lines_serialized=0 message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId,
                (unsigned long long)netId,
                (unsigned)playerIndex,
                definitionField0,
                nameValid ? 1u : 0u,
                nameValid ? static_cast<int>(nameLength) : 0,
                nameValid && nameData != nullptr ? nameData : "",
                (unsigned long long)origin.Word0,
                (unsigned long long)origin.Word1,
                (unsigned long long)race.Word0,
                (unsigned long long)race.Word1,
                (unsigned long long)subrace.Word0,
                (unsigned long long)subrace.Word1,
                (unsigned)bodyType,
                (unsigned)bodyShape,
                (unsigned long long)rootTemplate.Word0,
                (unsigned long long)rootTemplate.Word1,
                (unsigned long long)background.Word0,
                (unsigned long long)background.Word1,
                (unsigned long long)deity.Word0,
                (unsigned long long)deity.Word1,
                (unsigned long long)voice.Word0,
                (unsigned long long)voice.Word1,
                (unsigned)definitionFieldA8,
                abilities[0], abilities[1], abilities[2],
                abilities[3], abilities[4], abilities[5]);
        } else if (discriminator == 1) {
            auto const& race = *reinterpret_cast<JoinTraceGuidWords const*>(payload);
            auto const& subrace = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x10);
            auto const bodyType = *(payload + 0x20);
            auto const bodyShape = *(payload + 0x21);
            auto const& rootTemplate = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x28);
            auto const& voice = *reinterpret_cast<JoinTraceGuidWords const*>(payload + 0x110);
            auto const field130 = *(payload + 0x130);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=creator_companion_definition index=%u call_index=%u side=%s direction=%s msg_id=240 peer=%u net_id=0x%016llX player_index=%u discriminator=1 variant=CompanionDefinition variant_serializer_rva=0x11C6350 semantic_role=guardian_companion_definition runtime_role_confidence=medium race_word0=0x%016llX race_word1=0x%016llX subrace_word0=0x%016llX subrace_word1=0x%016llX body_type=%u body_shape=%u root_template_word0=0x%016llX root_template_word1=0x%016llX voice_word0=0x%016llX voice_word1=0x%016llX field_130=%u vo_lines_serialized=0 message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId,
                (unsigned long long)netId,
                (unsigned)playerIndex,
                (unsigned long long)race.Word0,
                (unsigned long long)race.Word1,
                (unsigned long long)subrace.Word0,
                (unsigned long long)subrace.Word1,
                (unsigned)bodyType,
                (unsigned)bodyShape,
                (unsigned long long)rootTemplate.Word0,
                (unsigned long long)rootTemplate.Word1,
                (unsigned long long)voice.Word0,
                (unsigned long long)voice.Word1,
                (unsigned)field130);
        } else {
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=creator_update_unknown_variant index=%u call_index=%u side=%s direction=%s msg_id=240 peer=%u net_id=0x%016llX player_index=%u discriminator=%u known_discriminators=0,1 semantic_decode=refused_unknown_discriminator message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId,
                (unsigned long long)netId,
                (unsigned)playerIndex,
                (unsigned)discriminator);
        }
        break;
    }

    case 166: {
        auto const& field28 = *reinterpret_cast<JoinTraceStringView const*>(bytes + 0x28);
        auto const& field40 = *reinterpret_cast<JoinTraceStringView const*>(bytes + 0x40);
        char const* field28Data{};
        char const* field40Data{};
        uint32_t field28Length{};
        uint32_t field40Length{};
        auto const field28Valid = TryGetJoinTraceString(
            field28, field28Data, field28Length);
        auto const field40Valid = TryGetJoinTraceString(
            field40, field40Data, field40Length);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=166 phase=level_load concrete=LevelLoadMessage concrete_name_va=0x14554CC40 constructor_rva=0x1199F30 serializer_rva=0x1199F90 peer=%u field28_valid=%u field28=%.*s field40_valid=%u field40=%.*s body_semantic=two_strings message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            field28Valid ? 1u : 0u,
            field28Valid ? static_cast<int>(field28Length) : 0,
            field28Valid && field28Data != nullptr ? field28Data : "",
            field40Valid ? 1u : 0u,
            field40Valid ? static_cast<int>(field40Length) : 0,
            field40Valid && field40Data != nullptr ? field40Data : "");
        break;
    }

    case 167:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=167 phase=level_created concrete=LevelCreatedMessage concrete_name_va=0x14554CC00 constructor_rva=0x11AFEE0 serializer_rva=0x11AFA10 peer=%u descriptor_offset=0x28 descriptor_semantic=opaque_exact_serializer message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 168:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=168 phase=level_loaded concrete=LevelLoadedMessage concrete_name_va=0x14554CBC0 constructor_rva=0x11AFE20 serializer_rva=0x11AFA10 peer=%u descriptor_offset=0x28 descriptor_semantic=opaque_exact_serializer message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 169: {
        auto const tailWordD8 = *reinterpret_cast<uint16_t const*>(bytes + 0xD8);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=169 phase=load_start concrete=LoadStartMessage concrete_name_va=0x14554CB80 constructor_rva=0x11AFD30 serializer_rva=0x11AFCE0 peer=%u descriptor_offset=0x28 tail_word_d8=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned)tailWordD8);
        break;
    }

    case 170:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=170 phase=load_started concrete=LoadStartedMessage concrete_name_va=0x14554D3B8 constructor_rva=0x11AFBC0 serializer_rva=0x579D90 peer=%u body=empty message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 171:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=171 phase=level_instantiate_swap concrete=LevelInstantiateSwapMessage concrete_name_va=0x14554D368 constructor_rva=0x11AFAE0 serializer_rva=0x11AFA10 peer=%u descriptor_offset=0x28 descriptor_semantic=opaque_exact_serializer message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 172:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=172 phase=level_swap_ready concrete=LevelSwapReadyMessage concrete_name_va=0x14554D328 constructor_rva=0x11AFA20 serializer_rva=0x11AFA10 peer=%u descriptor_offset=0x28 descriptor_semantic=opaque_exact_serializer message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 174: {
        auto const startValue = *(bytes + 0x28);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=174 phase=level_start concrete=LevelStartMessage concrete_name_va=0x14554D298 constructor_rva=0x11AF810 serializer_rva=0x11AF7C0 peer=%u start_value=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            (unsigned)startValue);
        break;
    }

    case 194:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=load_axis_message_seen index=%u call_index=%u side=%s direction=%s msg_id=194 phase=session_load_runtime peer=%u semantic_decode=protocol_context_only message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 324:
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=message_fields index=%u call_index=%u side=%s direction=%s msg_id=324 concrete=ClientRequestModList concrete_name_va=0x145551F88 constructor_rva=0x11A2160 serializer_rva=0x579D90 body=empty peer=%u message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId);
        break;

    case 325: {
        auto const& manifest = *reinterpret_cast<JoinTraceArrayView const*>(bytes + 0x28);
        auto const valid = manifest.Count <= manifest.Capacity
            && manifest.Count <= 4096
            && (manifest.Count == 0 || manifest.Data != nullptr);
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=mod_manifest index=%u call_index=%u side=%s direction=%s msg_id=325 concrete=HostModListMessage concrete_name_va=0x145551F48 constructor_rva=0x11D73E0 serializer_rva=0x11D74C0 record_serializer_rva=0x3BF38F0 peer=%u count=%u capacity=%u layout_valid=%u record_stride=0x78 ordered=1 message_mutation=0",
            eventIndex, callIndex, side, direction, (unsigned)peerId,
            manifest.Count, manifest.Capacity, valid ? 1u : 0u);
        if (!valid) return;

        for (uint32_t i = 0; i < manifest.Count; i++) {
            auto const record = manifest.Data + static_cast<size_t>(i) * 0x78;
            auto const uuidWord0 = *reinterpret_cast<uint64_t const*>(record + 0x08);
            auto const uuidWord1 = *reinterpret_cast<uint64_t const*>(record + 0x10);
            auto const version = *reinterpret_cast<uint64_t const*>(record + 0x30);
            auto const flags = *reinterpret_cast<uint64_t const*>(record + 0x70);
            auto const& name = *reinterpret_cast<JoinTraceStringView const*>(record + 0x18);
            auto const& hash = *reinterpret_cast<JoinTraceStringView const*>(record + 0x40);
            auto const& field58 = *reinterpret_cast<JoinTraceStringView const*>(record + 0x58);
            char const* nameData{};
            char const* hashData{};
            char const* field58Data{};
            uint32_t nameLength{};
            uint32_t hashLength{};
            uint32_t field58Length{};
            auto const nameValid = TryGetJoinTraceString(name, nameData, nameLength);
            auto const hashValid = TryGetJoinTraceString(hash, hashData, hashLength);
            auto const field58Valid = TryGetJoinTraceString(
                field58, field58Data, field58Length);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=mod_manifest_record index=%u call_index=%u side=%s direction=%s msg_id=325 peer=%u ordinal=%u uuid_word0=0x%016llX uuid_word1=0x%016llX name_valid=%u name=%.*s version=%llu hash_valid=%u hash=%.*s field58_valid=%u field58=%.*s flags=0x%016llX message_mutation=0",
                eventIndex, callIndex, side, direction, (unsigned)peerId, i,
                (unsigned long long)uuidWord0,
                (unsigned long long)uuidWord1,
                nameValid ? 1u : 0u,
                nameValid ? static_cast<int>(nameLength) : 0,
                nameValid && nameData != nullptr ? nameData : "",
                (unsigned long long)version,
                hashValid ? 1u : 0u,
                hashValid ? static_cast<int>(hashLength) : 0,
                hashValid && hashData != nullptr ? hashData : "",
                field58Valid ? 1u : 0u,
                field58Valid ? static_cast<int>(field58Length) : 0,
                field58Valid && field58Data != nullptr ? field58Data : "",
                (unsigned long long)flags);
        }
        break;
    }

    default:
        break;
    }
}

net::ProtocolResult Hooks::OnClientJoiningProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    return OnJoiningProtocolProcessMessageImpl(
        "client", false, wrapped, protocol, unused, context, message);
}

net::ProtocolResult Hooks::OnJoiningProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    return OnJoiningProtocolProcessMessageImpl(
        "server", true, wrapped, protocol, unused, context, message);
}

net::ProtocolResult Hooks::OnJoiningProtocolProcessMessageImpl(
    char const* side,
    bool allowSyntheticAdmission,
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    uint32_t traceEnterIndex;
    auto const traceJoining = BeginJoinLifecycleTraceEvent(traceEnterIndex);
    auto const syntheticLobbyBypassActive =
        allowSyntheticAdmission
        && syntheticLobbyBypassActive_.load(std::memory_order_acquire);
    if (traceJoining) {
        INFO("[MP_JOIN_TRACE] event=process_enter index=%u side=%s direction=receive protocol=joining thread=%lu msg_id=%u user_id=%u peer=%u peer_class_count=%u user_count=%u synthetic_bypass_active=%u",
            traceEnterIndex,
            side,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX,
            context != nullptr ? context->PeerIDClassNames.size() : 0,
            context != nullptr ? context->UserIDs.size() : 0,
            syntheticLobbyBypassActive ? 1u : 0u);
    }
    TraceJoinMessageSemantics(
        side,
        "receive",
        context != nullptr
            ? static_cast<TPeerId>(context->UserID.GetPeerId())
            : static_cast<TPeerId>(-1),
        message,
        traceJoining ? traceEnterIndex : UINT32_MAX);

    auto matchesSyntheticAdmission = false;
    if (syntheticLobbyBypassActive && context != nullptr && message != nullptr
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

    net::ProtocolResult result;
    if (syntheticLobbyBypassActive) {
        auto const previousAdmission = SyntheticLobbyAdmissionActive;
        SyntheticLobbyAdmissionActive = matchesSyntheticAdmission;
        result = wrapped(protocol, unused, context, message);
        SyntheticLobbyAdmissionActive = previousAdmission;
    } else {
        result = wrapped(protocol, unused, context, message);
    }
    uint32_t traceExitIndex;
    if (traceJoining && BeginJoinLifecycleTraceEvent(traceExitIndex)) {
        INFO("[MP_JOIN_TRACE] event=process_exit index=%u call_index=%u side=%s direction=receive protocol=joining thread=%lu msg_id=%u result=%d synthetic_bypass_active=%u",
            traceExitIndex,
            traceEnterIndex,
            side,
            GetCurrentThreadId(),
            message != nullptr ? (unsigned)message->MsgId : UINT32_MAX,
            (int)result,
            syntheticLobbyBypassActive ? 1u : 0u);
    }
    return result;
}

void Hooks::OnModReconciliationClassify(
    void (*wrapped)(void*, void*, void*, void*, void*, void*, void*, void*),
    void* manager,
    void* hostManifest,
    void* asyncState,
    void* mismatch0,
    void* mismatch1,
    void* mismatch2,
    void* mismatch3,
    void* mismatch4)
{
    auto readCount = [](void const* array, uint32_t& capacity, uint32_t& count) {
        capacity = 0;
        count = 0;
        if (array == nullptr) return false;
        auto const& view = *static_cast<JoinTraceArrayView const*>(array);
        capacity = view.Capacity;
        count = view.Count;
        return count <= capacity && count <= 4096
            && (count == 0 || view.Data != nullptr);
    };

    auto readAsyncState = [](void const* state, uintptr_t& data,
        uint32_t& word8, uint32_t& wordC) {
        data = 0;
        word8 = 0;
        wordC = 0;
        if (state == nullptr) return false;
        memcpy(&data, state, sizeof(data));
        memcpy(&word8, static_cast<uint8_t const*>(state) + 0x08, sizeof(word8));
        memcpy(&wordC, static_cast<uint8_t const*>(state) + 0x0C, sizeof(wordC));
        return true;
    };

    uint32_t hostCapacity{};
    uint32_t hostCount{};
    auto const hostValid = readCount(hostManifest, hostCapacity, hostCount);
    uint32_t capacitiesBefore[5]{};
    uint32_t countsBefore[5]{};
    void* mismatchCollections[5]{ mismatch0, mismatch1, mismatch2, mismatch3, mismatch4 };
    bool outputsValidBefore{ true };
    for (size_t i = 0; i < std::size(mismatchCollections); i++) {
        outputsValidBefore = readCount(
            mismatchCollections[i], capacitiesBefore[i], countsBefore[i])
            && outputsValidBefore;
    }
    uintptr_t asyncDataBefore{};
    uint32_t asyncWord8Before{};
    uint32_t asyncWordCBefore{};
    auto const asyncValidBefore = readAsyncState(
        asyncState, asyncDataBefore, asyncWord8Before, asyncWordCBefore);

    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=mod_reconciliation_enter index=%u side=client direction=local classifier_rva=0x181BBF0 host_count=%u host_capacity=%u host_layout_valid=%u mismatch0_before=%u mismatch1_before=%u mismatch2_before=%u mismatch3_before=%u mismatch4_before=%u outputs_layout_valid=%u async_state_valid=%u async_data_before=0x%p async_word8_before=%u async_wordc_before=%u async_words_semantic=structural_only argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            hostCount,
            hostCapacity,
            hostValid ? 1u : 0u,
            countsBefore[0],
            countsBefore[1],
            countsBefore[2],
            countsBefore[3],
            countsBefore[4],
            outputsValidBefore ? 1u : 0u,
            asyncValidBefore ? 1u : 0u,
            reinterpret_cast<void*>(asyncDataBefore),
            asyncWord8Before,
            asyncWordCBefore);
    }

    wrapped(
        manager,
        hostManifest,
        asyncState,
        mismatch0,
        mismatch1,
        mismatch2,
        mismatch3,
        mismatch4);

    uint32_t capacitiesAfter[5]{};
    uint32_t countsAfter[5]{};
    bool outputsValidAfter{ true };
    uint64_t totalMismatches{};
    for (size_t i = 0; i < std::size(mismatchCollections); i++) {
        outputsValidAfter = readCount(
            mismatchCollections[i], capacitiesAfter[i], countsAfter[i])
            && outputsValidAfter;
        totalMismatches += countsAfter[i];
    }
    uintptr_t asyncDataAfter{};
    uint32_t asyncWord8After{};
    uint32_t asyncWordCAfter{};
    auto const asyncValidAfter = readAsyncState(
        asyncState, asyncDataAfter, asyncWord8After, asyncWordCAfter);

    auto& gateTrace = JoinModReconciliationGateTraceForCurrentThread;
    if (gateTrace.Active) {
        gateTrace.ClassifierObserved = true;
        gateTrace.OutputsValid = outputsValidAfter;
        gateTrace.HostCount = hostCount;
        for (size_t i = 0; i < gateTrace.MismatchCounts.size(); i++) {
            gateTrace.MismatchCounts[i] = countsAfter[i];
        }
        gateTrace.AsyncData = asyncDataAfter;
        gateTrace.AsyncWord8 = asyncWord8After;
        gateTrace.AsyncWordC = asyncWordCAfter;
    }

    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=mod_reconciliation_exit index=%u call_index=%u side=client direction=local classifier_rva=0x181BBF0 mismatch0_after=%u mismatch1_after=%u mismatch2_after=%u mismatch3_after=%u mismatch4_after=%u mismatch_total=%llu outputs_layout_valid=%u async_state_valid=%u async_data_after=0x%p async_word8_after=%u async_wordc_after=%u async_words_semantic=structural_only decision=%s argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            countsAfter[0],
            countsAfter[1],
            countsAfter[2],
            countsAfter[3],
            countsAfter[4],
            (unsigned long long)totalMismatches,
            outputsValidAfter ? 1u : 0u,
            asyncValidAfter ? 1u : 0u,
            reinterpret_cast<void*>(asyncDataAfter),
            asyncWord8After,
            asyncWordCAfter,
            outputsValidAfter && totalMismatches == 0
                ? "client_connect_allowed"
                : "reconciliation_required");
    }
}

void Hooks::OnModReconciliationGate(
    void (*wrapped)(void*, void*),
    void* coordinator,
    void* hostManifest)
{
    uint32_t hostCapacity{};
    uint32_t hostCount{};
    bool hostLayoutValid{};
    if (hostManifest != nullptr) {
        auto const& view = *static_cast<JoinTraceArrayView const*>(hostManifest);
        hostCapacity = view.Capacity;
        hostCount = view.Count;
        hostLayoutValid = view.Count <= view.Capacity
            && view.Count <= 4096
            && (view.Count == 0 || view.Data != nullptr);
    }
    auto const notificationGuardBefore = coordinator != nullptr
        ? *(static_cast<uint8_t const*>(coordinator) + 0x5BC)
        : 0u;

    auto const previousTrace = JoinModReconciliationGateTraceForCurrentThread;
    JoinModReconciliationGateTraceForCurrentThread = {};
    JoinModReconciliationGateTraceForCurrentThread.Active = true;

    uint32_t enterIndex{};
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=mod_gate_enter index=%u side=client direction=local gate_rva=0x18077D0 classifier_rva=0x181BBF0 mismatch_callback_rva=0x5EC760 client_connect_builder_rva=0x1C55380 coordinator_valid=%u host_count=%u host_capacity=%u host_layout_valid=%u notification_guard_before=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            coordinator != nullptr ? 1u : 0u,
            hostCount,
            hostCapacity,
            hostLayoutValid ? 1u : 0u,
            (unsigned)notificationGuardBefore);
    }

    wrapped(coordinator, hostManifest);

    auto const gateTrace = JoinModReconciliationGateTraceForCurrentThread;
    JoinModReconciliationGateTraceForCurrentThread = previousTrace;
    auto const notificationGuardAfter = coordinator != nullptr
        ? *(static_cast<uint8_t const*>(coordinator) + 0x5BC)
        : 0u;
    uint64_t mismatchTotal{};
    for (auto const count : gateTrace.MismatchCounts) {
        mismatchTotal += count;
    }
    auto const nativeBranch = !gateTrace.ClassifierObserved
        ? "classifier_not_observed"
        : !gateTrace.OutputsValid
            ? "invalid_layout_no_semantic_inference"
            : mismatchTotal == 0
                ? "client_connect_builder_called"
                : "mismatch_callback_called";

    uint32_t exitIndex{};
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=mod_gate_exit index=%u call_index=%u side=client direction=local gate_rva=0x18077D0 classifier_observed=%u host_count=%u mismatch0=%u mismatch1=%u mismatch2=%u mismatch3=%u mismatch4=%u mismatch_total=%llu outputs_layout_valid=%u async_data=0x%p async_word8=%u async_wordc=%u async_words_semantic=structural_only notification_guard_after=%u native_branch=%s argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            gateTrace.ClassifierObserved ? 1u : 0u,
            gateTrace.HostCount,
            gateTrace.MismatchCounts[0],
            gateTrace.MismatchCounts[1],
            gateTrace.MismatchCounts[2],
            gateTrace.MismatchCounts[3],
            gateTrace.MismatchCounts[4],
            (unsigned long long)mismatchTotal,
            gateTrace.OutputsValid ? 1u : 0u,
            reinterpret_cast<void*>(gateTrace.AsyncData),
            gateTrace.AsyncWord8,
            gateTrace.AsyncWordC,
            (unsigned)notificationGuardAfter,
            nativeBranch);
    }
}

void Hooks::TraceGameServerSessionSnapshot(
    char const* event,
    uint32_t callIndex,
    void const* gameServer)
{
    uint32_t eventIndex;
    if (gameServer == nullptr) {
        if (BeginJoinLifecycleTraceEvent(eventIndex)) {
            INFO("[MP_JOIN_TRACE] event=session_snapshot index=%u call_index=%u source=%s game_server_valid=0 argument_mutation=0 payload_mutation=0 result_mutation=0",
                eventIndex, callIndex, event);
        }
        return;
    }

    auto const bytes = static_cast<uint8_t const*>(gameServer);
    auto const& connected = *reinterpret_cast<JoinTraceArrayView const*>(bytes + 0x680);
    auto const& members = *reinterpret_cast<JoinTraceArrayView const*>(bytes + 0x6F8);
    auto const connectedValid = connected.Count <= connected.Capacity
        && connected.Count <= 64
        && (connected.Count == 0 || connected.Data != nullptr);
    auto const membersValid = members.Count <= members.Capacity
        && members.Count <= 64
        && (members.Count == 0 || members.Data != nullptr);

    if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
    INFO("[MP_JOIN_TRACE] event=session_snapshot index=%u call_index=%u source=%s game_server_valid=1 connected_count=%u connected_capacity=%u connected_layout_valid=%u session_member_count=%u session_member_capacity=%u session_member_layout_valid=%u member_stride=4 argument_mutation=0 payload_mutation=0 result_mutation=0",
        eventIndex,
        callIndex,
        event,
        connected.Count,
        connected.Capacity,
        connectedValid ? 1u : 0u,
        members.Count,
        members.Capacity,
        membersValid ? 1u : 0u);

    if (connectedValid) {
        for (uint32_t i = 0; i < connected.Count; i++) {
            auto const peer = *reinterpret_cast<int32_t const*>(
                connected.Data + static_cast<size_t>(i) * sizeof(int32_t));
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=connected_peer_snapshot_record index=%u call_index=%u source=%s ordinal=%u peer_id=%d mutation=0",
                eventIndex, callIndex, event, i, peer);
        }
    }

    if (membersValid) {
        for (uint32_t i = 0; i < members.Count; i++) {
            auto const member = *reinterpret_cast<int32_t const*>(
                members.Data + static_cast<size_t>(i) * sizeof(int32_t));
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=session_member_snapshot_record index=%u call_index=%u source=%s ordinal=%u member_id=%d mutation=0",
                eventIndex, callIndex, event, i, member);
        }
    }
}

void Hooks::TraceCreatorStateSnapshot(
    char const* event,
    uint32_t callIndex,
    void const* gameServer,
    uint64_t netId,
    uint64_t expectedEntityHandle,
    uint32_t targetUserId)
{
    uint64_t resolvedEntityHandle{};
    if (gameServer != nullptr && netId != 0) {
        auto const server = static_cast<net::GameServer const*>(gameServer);
        auto const entity = server->Replication.NetIdToEntity.try_get(NetId{ netId });
        if (entity != nullptr) {
            resolvedEntityHandle = entity->Handle;
        }
    }

    auto const targetEntityHandle = resolvedEntityHandle != 0
        ? resolvedEntityHandle
        : expectedEntityHandle;
    auto const owners = CaptureJoinTraceCharacterOwners(
        gameServer, targetEntityHandle);
    uint32_t eventIndex;
    if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
    INFO("[MP_JOIN_TRACE] event=creator_state_snapshot index=%u call_index=%u source=%s game_server_valid=%u net_id=0x%016llX resolved_entity_handle=0x%016llX expected_entity_handle=0x%016llX resolved_matches_expected=%u target_user_id=%u target_peer_id=%u target_player_index=%u character_owners_offset=0x728 owner_count=%u owner_hash_size=%u owner_layout_valid=%u owner_observed_count=%u owner_traversal_complete=%u target_owner_found=%u target_owner_user_id=%u target_owner_peer_id=%u target_owner_player_index=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
        eventIndex,
        callIndex,
        event,
        owners.GameServerValid ? 1u : 0u,
        (unsigned long long)netId,
        (unsigned long long)resolvedEntityHandle,
        (unsigned long long)expectedEntityHandle,
        resolvedEntityHandle != 0 && expectedEntityHandle != 0
            && resolvedEntityHandle == expectedEntityHandle ? 1u : 0u,
        targetUserId,
        targetUserId >> 16,
        targetUserId & 0xFFFFu,
        owners.ItemCount,
        owners.HashSize,
        owners.LayoutValid ? 1u : 0u,
        owners.ObservedCount,
        owners.TraversalComplete ? 1u : 0u,
        owners.TargetOwnerFound ? 1u : 0u,
        owners.TargetOwnerUserId,
        owners.TargetOwnerUserId >> 16,
        owners.TargetOwnerUserId & 0xFFFFu);

    for (uint32_t i = 0; i < owners.ObservedCount; i++) {
        auto const& owner = owners.Entries[i];
        if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
        INFO("[MP_JOIN_TRACE] event=character_owner_record index=%u call_index=%u source=%s ordinal=%u bucket=%u entity_handle=0x%016llX user_id=%u peer_id=%u player_index=%u target_entity=%u mutation=0",
            eventIndex,
            callIndex,
            event,
            i,
            owner.Bucket,
            (unsigned long long)owner.EntityHandle,
            owner.UserId,
            owner.UserId >> 16,
            owner.UserId & 0xFFFFu,
            targetEntityHandle != 0 && owner.EntityHandle == targetEntityHandle ? 1u : 0u);
    }
}

void Hooks::TraceServerLobbySnapshot(
    char const* event,
    uint32_t callIndex,
    void const* lobbyManager)
{
    uint32_t eventIndex;
    if (lobbyManager == nullptr) {
        if (BeginJoinLifecycleTraceEvent(eventIndex)) {
            INFO("[MP_JOIN_TRACE] event=server_lobby_snapshot index=%u call_index=%u source=%s lobby_manager_valid=0 mutation=0",
                eventIndex, callIndex, event);
        }
        return;
    }

    auto const bytes = static_cast<uint8_t const*>(lobbyManager);
    auto const& records = *reinterpret_cast<JoinTraceArrayView const*>(bytes + 0xA0);
    auto const recordsValid = records.Count <= records.Capacity
        && records.Count <= 64
        && (records.Count == 0 || records.Data != nullptr);
    void const* gameServer{};
    memcpy(&gameServer, bytes + 0xC8, sizeof(gameServer));

    if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
    INFO("[MP_JOIN_TRACE] event=server_lobby_snapshot index=%u call_index=%u source=%s lobby_manager_valid=1 record_count=%u record_capacity=%u record_layout_valid=%u record_stride=0x20 game_server_valid=%u mutation=0",
        eventIndex,
        callIndex,
        event,
        records.Count,
        records.Capacity,
        recordsValid ? 1u : 0u,
        gameServer != nullptr ? 1u : 0u);

    if (recordsValid) {
        for (uint32_t i = 0; i < records.Count; i++) {
            auto const& record = *reinterpret_cast<JoinTraceLobbyRecord const*>(
                records.Data + static_cast<size_t>(i) * sizeof(JoinTraceLobbyRecord));
            char const* keyData{};
            uint32_t keyLength{};
            auto const keyValid = TryGetJoinTraceString(record.Key, keyData, keyLength);
            if (!BeginJoinLifecycleTraceEvent(eventIndex)) return;
            INFO("[MP_JOIN_TRACE] event=server_lobby_record index=%u call_index=%u source=%s slot=%u key_valid=%u key=%.*s player_id=%u ready=%u active=%u mutation=0",
                eventIndex,
                callIndex,
                event,
                i,
                keyValid ? 1u : 0u,
                keyValid ? static_cast<int>(keyLength) : 0,
                keyValid && keyData != nullptr ? keyData : "",
                (unsigned)record.PlayerId,
                (unsigned)record.Ready,
                (unsigned)record.Active);
        }
    }

    TraceGameServerSessionSnapshot(event, callIndex, gameServer);
}

uint32_t Hooks::OnModManifestCompare(
    uint32_t (*wrapped)(void*, void*, void*),
    void* firstManifest,
    void* secondManifest,
    void* mismatchOutput)
{
    auto readManifest = [](void const* manifest, uint32_t& capacity, uint32_t& count) {
        capacity = 0;
        count = 0;
        if (manifest == nullptr) return false;
        auto const& view = *static_cast<JoinTraceManifestView const*>(manifest);
        capacity = view.Capacity;
        count = view.Count;
        return count <= capacity && count <= 4096
            && (count == 0 || view.Data != nullptr);
    };
    auto readOutput = [](void const* output, uint32_t& capacity, uint32_t& count) {
        capacity = 0;
        count = 0;
        if (output == nullptr) return true;
        auto const& view = *static_cast<JoinTraceArrayView const*>(output);
        capacity = view.Capacity;
        count = view.Count;
        return count <= capacity && count <= 4096
            && (count == 0 || view.Data != nullptr);
    };

    uint32_t firstCapacity{};
    uint32_t firstCount{};
    uint32_t secondCapacity{};
    uint32_t secondCount{};
    uint32_t outputCapacityBefore{};
    uint32_t outputCountBefore{};
    auto const firstValid = readManifest(firstManifest, firstCapacity, firstCount);
    auto const secondValid = readManifest(secondManifest, secondCapacity, secondCount);
    auto const outputValidBefore = readOutput(
        mismatchOutput, outputCapacityBefore, outputCountBefore);
    auto const callerRva = FindGameReturnAddressRva();
    auto const gate = callerRva == 0x1C52FC2
        ? "joining"
        : callerRva == 0x2FA2BB1
            ? "handle_module_loaded"
            : "other";

    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=mod_compare_enter index=%u gate=%s caller_rva=0x%llX compare_rva=0x3BC7AF0 first_count=%u first_capacity=%u first_layout_valid=%u second_count=%u second_capacity=%u second_layout_valid=%u mismatch_before=%u mismatch_capacity_before=%u mismatch_layout_valid_before=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            gate,
            (unsigned long long)callerRva,
            firstCount,
            firstCapacity,
            firstValid ? 1u : 0u,
            secondCount,
            secondCapacity,
            secondValid ? 1u : 0u,
            outputCountBefore,
            outputCapacityBefore,
            outputValidBefore ? 1u : 0u);
    }

    auto const result = wrapped(firstManifest, secondManifest, mismatchOutput);

    uint32_t outputCapacityAfter{};
    uint32_t outputCountAfter{};
    auto const outputValidAfter = readOutput(
        mismatchOutput, outputCapacityAfter, outputCountAfter);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=mod_compare_exit index=%u call_index=%u gate=%s caller_rva=0x%llX compare_rva=0x3BC7AF0 result=%u decision=%s mismatch_after=%u mismatch_capacity_after=%u mismatch_layout_valid_after=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            gate,
            (unsigned long long)callerRva,
            result,
            result == 0 ? "match"
                : result == 1 ? "count_name_or_order_mismatch"
                : result == 2 ? "version_mismatch"
                : result == 3 ? "hash_mismatch"
                : "unknown",
            outputCountAfter,
            outputCapacityAfter,
            outputValidAfter ? 1u : 0u);
    }
    return result;
}

net::ProtocolResult Hooks::OnClientLobbyProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_process_enter index=%u side=client direction=receive protocol=lobby handler_rva=0x1FF8500 thread=%lu msg_id=%u user_id=%u peer=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX);
    }
    TraceJoinMessageSemantics(
        "client",
        "receive",
        context != nullptr
            ? static_cast<TPeerId>(context->UserID.GetPeerId())
            : static_cast<TPeerId>(-1),
        message,
        trace ? enterIndex : UINT32_MAX);

    auto const result = wrapped(protocol, unused, context, message);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=lobby_process_exit index=%u call_index=%u side=client direction=receive protocol=lobby handler_rva=0x1FF8500 thread=%lu msg_id=%u result=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            (int)result);
    }
    return result;
}

net::ProtocolResult Hooks::OnServerLobbyProtocolProcessMessage(
    net::ProtocolResult (*wrapped)(net::Protocol*, void*, net::MessageContext*, net::Message*),
    net::Protocol* protocol,
    void* unused,
    net::MessageContext* context,
    net::Message* message)
{
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_process_enter index=%u side=server direction=receive protocol=lobby handler_rva=0x2FF79A0 thread=%lu msg_id=%u user_id=%u peer=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX);
    }
    TraceJoinMessageSemantics(
        "server",
        "receive",
        context != nullptr
            ? static_cast<TPeerId>(context->UserID.GetPeerId())
            : static_cast<TPeerId>(-1),
        message,
        trace ? enterIndex : UINT32_MAX);

    auto const result = wrapped(protocol, unused, context, message);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=lobby_process_exit index=%u call_index=%u side=server direction=receive protocol=lobby handler_rva=0x2FF79A0 thread=%lu msg_id=%u result=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            (int)result);
    }
    return result;
}

void Hooks::OnDCLobbyUpdate(void (*wrapped)(void*), void* lobby)
{
    uint8_t dirtyBefore{};
    uint8_t canStartBefore{};
    if (lobby != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(lobby);
        dirtyBefore = *(bytes + 0x9A4);
        canStartBefore = *(bytes + 0x838);
    }

    wrapped(lobby);

    uint8_t dirtyAfter{};
    uint8_t canStartAfter{};
    if (lobby != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(lobby);
        dirtyAfter = *(bytes + 0x9A4);
        canStartAfter = *(bytes + 0x838);
    }
    if ((dirtyBefore & 2u) == 0 && canStartBefore == canStartAfter) return;

    uint32_t eventIndex;
    if (BeginJoinLifecycleTraceEvent(eventIndex)) {
        INFO("[MP_JOIN_TRACE] event=dc_lobby_can_start_update index=%u side=client source_rva=0x15C4A40 lobby_valid=%u dirty_before=0x%02X dirty_after=0x%02X readiness_dirty_before=%u can_start_before=%u can_start_after=%u changed=%u derivation=virtual_model_ready_result_equals_zero argument_mutation=0 payload_mutation=0 result_mutation=0",
            eventIndex,
            lobby != nullptr ? 1u : 0u,
            (unsigned)dirtyBefore,
            (unsigned)dirtyAfter,
            (dirtyBefore & 2u) != 0 ? 1u : 0u,
            (unsigned)canStartBefore,
            (unsigned)canStartAfter,
            canStartBefore != canStartAfter ? 1u : 0u);
    }
}

void Hooks::OnPlatformIdentityMapWrite(
    void (*wrapped)(void*, int32_t, void const*),
    void* identityMap,
    int32_t peerId,
    void const* identity)
{
    JoinTracePlatformIdentity value{};
    if (identity != nullptr) {
        memcpy(&value, identity, sizeof(value));
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=identity_map_write_enter index=%u side=server writer_rva=0x405E710 peer_id=%d identity_valid=%u platform_kind=%u platform_subtype=%u platform_key_word0=0x%016llX platform_key_word1=0x%016llX argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            peerId,
            identity != nullptr ? 1u : 0u,
            value.Kind,
            (unsigned)value.Subtype,
            (unsigned long long)value.KeyWord0,
            (unsigned long long)value.KeyWord1);
    }
    wrapped(identityMap, peerId, identity);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=identity_map_write_exit index=%u call_index=%u side=server writer_rva=0x405E710 peer_id=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, peerId);
    }
}

void Hooks::OnConnectedPeerRegistered(
    void (*wrapped)(void*, int32_t const*),
    void* gameServer,
    int32_t const* peerId)
{
    auto const value = peerId != nullptr ? *peerId : -1;
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=connected_peer_register_enter index=%u side=server writer_rva=0x30A7320 peer_pointer_valid=%u peer_id=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex, peerId != nullptr ? 1u : 0u, value);
    }
    wrapped(gameServer, peerId);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=connected_peer_register_exit index=%u call_index=%u side=server writer_rva=0x30A7320 peer_id=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, value);
    }
    TraceGameServerSessionSnapshot(
        "connected_peer_register_after",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
}

uint8_t Hooks::OnSessionMemberAdded(
    uint8_t (*wrapped)(void*, int32_t const*),
    void* listener,
    int32_t const* membershipEvent)
{
    // Exact build 4.73.98.727 registers this listener at GameServer+0x418.
    // The handler's listener+0x2E0 int32 vector is therefore
    // GameServer+0x6F8, with its count at GameServer+0x704.
    auto const gameServer = listener != nullptr
        ? static_cast<void*>(static_cast<uint8_t*>(listener) - 0x418)
        : nullptr;
    auto const memberId = membershipEvent != nullptr
        ? membershipEvent[0]
        : -1;
    auto const sessionScopeId = membershipEvent != nullptr
        ? membershipEvent[1]
        : -1;
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=session_member_add_enter index=%u side=server writer_rva=0x30A85F0 listener_valid=%u membership_event_valid=%u member_id=%d session_scope_id=%d listener_offset=0x418 member_vector_offset=0x6F8 member_count_offset=0x704 argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            listener != nullptr ? 1u : 0u,
            membershipEvent != nullptr ? 1u : 0u,
            memberId,
            sessionScopeId);
    }
    TraceGameServerSessionSnapshot(
        "session_member_add_before",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
    auto const result = wrapped(listener, membershipEvent);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=session_member_add_exit index=%u call_index=%u side=server writer_rva=0x30A85F0 member_id=%d session_scope_id=%d result=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            memberId,
            sessionScopeId,
            (unsigned)result);
    }
    TraceGameServerSessionSnapshot(
        "session_member_add_after",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
    return result;
}

void Hooks::OnCharacterOwnerWrite(
    void (*wrapped)(void*, void const*, uint32_t, uint8_t),
    void* gameServer,
    void const* entityObject,
    uint32_t proposedUserId,
    uint8_t assignImmediately)
{
    uint64_t entityHandle{};
    if (entityObject != nullptr) {
        memcpy(&entityHandle,
            static_cast<uint8_t const*>(entityObject) + 0x10,
            sizeof(entityHandle));
    }
    auto const callerRva = FindGameReturnAddressRva();
    auto const source = callerRva == 0x35F827D
        ? "entity_registration_path"
        : callerRva == 0x373740F
            ? "character_creation_existing_entity_scan"
            : "other_native_caller";
    auto const before = CaptureJoinTraceCharacterOwners(
        gameServer, entityHandle);
    uint32_t enterIndex{};
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=character_owner_write_enter index=%u side=server writer_rva=0x30A5000 caller_return_rva=0x%llX source=%s direct_caller_35f8100_return_rva=0x35F827D direct_caller_37372a0_return_rva=0x373740F game_server_valid=%u entity_object_valid=%u entity_handle=0x%016llX proposed_user_id=%u proposed_peer_id=%u proposed_player_index=%u assign_immediately=%u owner_count_before=%u owner_layout_valid_before=%u owner_found_before=%u owner_user_id_before=%u exact_semantics=insert_if_absent argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            (unsigned long long)callerRva,
            source,
            gameServer != nullptr ? 1u : 0u,
            entityObject != nullptr ? 1u : 0u,
            (unsigned long long)entityHandle,
            proposedUserId,
            proposedUserId >> 16,
            proposedUserId & 0xFFFFu,
            (unsigned)assignImmediately,
            before.ItemCount,
            before.LayoutValid ? 1u : 0u,
            before.TargetOwnerFound ? 1u : 0u,
            before.TargetOwnerUserId);
    }
    TraceCreatorStateSnapshot(
        "character_owner_write_before",
        trace ? enterIndex : UINT32_MAX,
        gameServer,
        0,
        entityHandle,
        proposedUserId);

    wrapped(gameServer, entityObject, proposedUserId, assignImmediately);

    auto const after = CaptureJoinTraceCharacterOwners(
        gameServer, entityHandle);
    uint32_t exitIndex{};
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=character_owner_write_exit index=%u call_index=%u side=server writer_rva=0x30A5000 caller_return_rva=0x%llX source=%s entity_handle=0x%016llX proposed_user_id=%u owner_count_after=%u owner_layout_valid_after=%u owner_found_after=%u owner_user_id_after=%u inserted=%u owner_changed=%u assigned_to_proposed=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            (unsigned long long)callerRva,
            source,
            (unsigned long long)entityHandle,
            proposedUserId,
            after.ItemCount,
            after.LayoutValid ? 1u : 0u,
            after.TargetOwnerFound ? 1u : 0u,
            after.TargetOwnerUserId,
            after.ItemCount > before.ItemCount ? 1u : 0u,
            before.TargetOwnerFound != after.TargetOwnerFound
                || before.TargetOwnerUserId != after.TargetOwnerUserId ? 1u : 0u,
            after.TargetOwnerFound && after.TargetOwnerUserId == proposedUserId ? 1u : 0u);
    }
    TraceCreatorStateSnapshot(
        "character_owner_write_after",
        trace ? enterIndex : UINT32_MAX,
        gameServer,
        0,
        entityHandle,
        proposedUserId);
}

uint8_t Hooks::OnLobbyParticipantAdded(
    uint8_t (*wrapped)(void*, uint32_t const*),
    void* callback,
    uint32_t const* compositeId)
{
    auto const composite = compositeId != nullptr ? *compositeId : UINT32_MAX;
    auto const peerId = composite != UINT32_MAX ? composite >> 16 : UINT32_MAX;
    auto const playerId = composite != UINT32_MAX ? composite & 0xFFFFu : UINT32_MAX;
    auto const lobbyManager = callback != nullptr
        ? static_cast<void*>(static_cast<uint8_t*>(callback) - 0xB0)
        : nullptr;
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=participant_added_enter index=%u side=server callback_rva=0x2A95080 composite_valid=%u composite_id=0x%08X peer_id=%u player_id=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            compositeId != nullptr ? 1u : 0u,
            composite,
            peerId,
            playerId);
    }
    TraceServerLobbySnapshot(
        "participant_added_before",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
    auto const result = wrapped(callback, compositeId);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=participant_added_exit index=%u call_index=%u side=server callback_rva=0x2A95080 composite_id=0x%08X peer_id=%u player_id=%u result=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, composite, peerId, playerId, (unsigned)result);
    }
    TraceServerLobbySnapshot(
        "participant_added_after",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
    return result;
}

void Hooks::OnServerLobbyRecordWrite(
    void (*wrapped)(void*, void const*, uint8_t),
    void* lobbyManager,
    void const* record,
    uint8_t slot)
{
    JoinTraceLobbyRecord value{};
    if (record != nullptr) {
        memcpy(&value, record, sizeof(value));
    }
    char const* keyData{};
    uint32_t keyLength{};
    auto const keyValid = record != nullptr
        && TryGetJoinTraceString(value.Key, keyData, keyLength);
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_record_write_enter index=%u side=server writer_rva=0x2A96290 slot=%u record_valid=%u key_valid=%u key=%.*s player_id=%u ready=%u active=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            (unsigned)slot,
            record != nullptr ? 1u : 0u,
            keyValid ? 1u : 0u,
            keyValid ? static_cast<int>(keyLength) : 0,
            keyValid && keyData != nullptr ? keyData : "",
            (unsigned)value.PlayerId,
            (unsigned)value.Ready,
            (unsigned)value.Active);
    }
    wrapped(lobbyManager, record, slot);
    TraceServerLobbySnapshot(
        "lobby_record_write_after",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
}

void Hooks::OnServerLobbyStateReconcile(
    void (*wrapped)(void*, void*, uint8_t, uint8_t),
    void* lobbyManager,
    void* body,
    uint8_t notify,
    uint8_t reserved)
{
    auto const fieldMask = body != nullptr
        ? *reinterpret_cast<uint32_t const*>(static_cast<uint8_t const*>(body) + 0x94)
        : 0u;
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_reconcile_enter index=%u side=server handler_rva=0x2A95C00 body_valid=%u field_mask=0x%08X notify=%u reserved=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            body != nullptr ? 1u : 0u,
            fieldMask,
            (unsigned)notify,
            (unsigned)reserved);
    }
    TraceServerLobbySnapshot(
        "lobby_reconcile_before",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
    wrapped(lobbyManager, body, notify, reserved);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=lobby_reconcile_exit index=%u call_index=%u side=server handler_rva=0x2A95C00 field_mask=0x%08X argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, fieldMask);
    }
    TraceServerLobbySnapshot(
        "lobby_reconcile_after",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
}

void Hooks::OnLobbyStartGame(void (*wrapped)(void*), void* lobbyManager)
{
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_start_enter index=%u side=server handler_rva=0x2A96420 membership_bypass_active=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            syntheticLobbyBypassActive_.load(std::memory_order_acquire) ? 1u : 0u);
    }
    TraceServerLobbySnapshot(
        "lobby_start_before",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
    wrapped(lobbyManager);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=lobby_start_exit index=%u call_index=%u side=server handler_rva=0x2A96420 argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex);
    }
    TraceServerLobbySnapshot(
        "lobby_start_after",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
}

void Hooks::OnLobbyReadyRecompute(void (*wrapped)(void*), void* lobbyManager)
{
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=lobby_ready_recompute_enter index=%u side=server writer_rva=0x2A96D30 argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex);
    }
    TraceServerLobbySnapshot(
        "lobby_ready_recompute_before",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
    wrapped(lobbyManager);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=lobby_ready_recompute_exit index=%u call_index=%u side=server writer_rva=0x2A96D30 argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex);
    }
    TraceServerLobbySnapshot(
        "lobby_ready_recompute_after",
        trace ? enterIndex : UINT32_MAX,
        lobbyManager);
}

void Hooks::OnConnectionParticipantRemove(
    void (*wrapped)(void*, int32_t const*, void const*, uint32_t),
    void* gameServer,
    int32_t const* peerId,
    void const* displayName,
    uint32_t reason)
{
    auto const peer = peerId != nullptr ? *peerId : -1;
    char const* nameData{};
    uint32_t nameLength{};
    auto const nameValid = displayName != nullptr
        && TryGetJoinTraceString(
            *static_cast<JoinTraceStringView const*>(displayName),
            nameData,
            nameLength);
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=participant_remove_enter index=%u side=server handler_rva=0x30A4180 peer_pointer_valid=%u peer_id=%d name_valid=%u name=%.*s reason=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            peerId != nullptr ? 1u : 0u,
            peer,
            nameValid ? 1u : 0u,
            nameValid ? static_cast<int>(nameLength) : 0,
            nameValid && nameData != nullptr ? nameData : "",
            reason);
    }
    TraceGameServerSessionSnapshot(
        "participant_remove_before",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
    wrapped(gameServer, peerId, displayName, reason);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=participant_remove_exit index=%u call_index=%u side=server handler_rva=0x30A4180 peer_id=%d reason=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, peer, reason);
    }
    TraceGameServerSessionSnapshot(
        "participant_remove_after",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
}

void Hooks::OnConnectionStateEvent(
    void (*wrapped)(void*, void const*),
    void* gameServer,
    void const* event)
{
    int32_t peerId{ -1 };
    uint32_t state{ UINT32_MAX };
    uint8_t localOrSuppressed{};
    char const* nameData{};
    uint32_t nameLength{};
    bool nameValid{};
    if (event != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(event);
        peerId = *reinterpret_cast<int32_t const*>(bytes + 0x08);
        state = *reinterpret_cast<uint32_t const*>(bytes + 0x28);
        localOrSuppressed = *(bytes + 0x2C);
        nameValid = TryGetJoinTraceString(
            *reinterpret_cast<JoinTraceStringView const*>(bytes + 0x10),
            nameData,
            nameLength);
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=connection_state_enter index=%u side=server handler_rva=0x30A3F80 event_valid=%u peer_id=%d name_valid=%u name=%.*s state=%u state_name=%s local_or_suppressed=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            event != nullptr ? 1u : 0u,
            peerId,
            nameValid ? 1u : 0u,
            nameValid ? static_cast<int>(nameLength) : 0,
            nameValid && nameData != nullptr ? nameData : "",
            state,
            state == 2 ? "closed" : state == 3 ? "active_or_ignored" : "lost_or_other",
            (unsigned)localOrSuppressed);
    }
    TraceGameServerSessionSnapshot(
        "connection_state_before",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
    wrapped(gameServer, event);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=connection_state_exit index=%u call_index=%u side=server handler_rva=0x30A3F80 peer_id=%d state=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex, enterIndex, peerId, state);
    }
    TraceGameServerSessionSnapshot(
        "connection_state_after",
        trace ? enterIndex : UINT32_MAX,
        gameServer);
}

uint8_t Hooks::OnSteamLobbyVisibility(
    uint8_t (*wrapped)(void*, uint8_t, uint8_t*, uint8_t*),
    void* manager,
    uint8_t requestedVisibility,
    uint8_t* previousVisibility,
    uint8_t* effectiveVisibility)
{
    uint64_t lobbyIdBefore{};
    uint8_t currentVisibilityBefore{};
    if (manager != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(manager);
        memcpy(&lobbyIdBefore, bytes + 0x108, sizeof(lobbyIdBefore));
        currentVisibilityBefore = *(bytes + 0x128);
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_visibility_enter index=%u side=platform backend=steam handler_rva=0x21AEB90 manager_valid=%u requested_visibility=%u current_visibility=%u current_lobby_id=0x%016llX previous_output_valid=%u effective_output_valid=%u operation=%s argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            manager != nullptr ? 1u : 0u,
            (unsigned)requestedVisibility,
            (unsigned)currentVisibilityBefore,
            (unsigned long long)lobbyIdBefore,
            previousVisibility != nullptr ? 1u : 0u,
            effectiveVisibility != nullptr ? 1u : 0u,
            lobbyIdBefore == 0 && requestedVisibility != 0
                ? "create_and_publish_request"
                : "visibility_update");
    }

    auto const result = wrapped(
        manager,
        requestedVisibility,
        previousVisibility,
        effectiveVisibility);

    uint64_t lobbyIdAfter{};
    uint8_t currentVisibilityAfter{};
    if (manager != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(manager);
        memcpy(&lobbyIdAfter, bytes + 0x108, sizeof(lobbyIdAfter));
        currentVisibilityAfter = *(bytes + 0x128);
    }
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_visibility_exit index=%u call_index=%u side=platform backend=steam handler_rva=0x21AEB90 result=%u previous_visibility=%u effective_visibility=%u current_visibility=%u current_lobby_id=0x%016llX argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            (unsigned)result,
            previousVisibility != nullptr ? (unsigned)*previousVisibility : UINT32_MAX,
            effectiveVisibility != nullptr ? (unsigned)*effectiveVisibility : UINT32_MAX,
            (unsigned)currentVisibilityAfter,
            (unsigned long long)lobbyIdAfter);
    }
    return result;
}

void Hooks::OnSteamLobbyCreated(
    void (*wrapped)(void*, void const*, uint8_t),
    void* manager,
    void const* callback,
    uint8_t ioFailure)
{
    uint32_t steamResult{ UINT32_MAX };
    uint64_t lobbyId{};
    if (callback != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(callback);
        memcpy(&steamResult, bytes, sizeof(steamResult));
        memcpy(&lobbyId, bytes + 0x08, sizeof(lobbyId));
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_created_callback_enter index=%u side=platform backend=steam handler_rva=0x21ADCB0 callback_valid=%u io_failure=%u steam_result=%u lobby_id=0x%016llX argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            callback != nullptr ? 1u : 0u,
            (unsigned)ioFailure,
            steamResult,
            (unsigned long long)lobbyId);
    }
    wrapped(manager, callback, ioFailure);

    uint64_t currentLobbyId{};
    uint8_t currentVisibility{};
    if (manager != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(manager);
        memcpy(&currentLobbyId, bytes + 0x108, sizeof(currentLobbyId));
        currentVisibility = *(bytes + 0x128);
    }
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_created_callback_exit index=%u call_index=%u side=platform backend=steam handler_rva=0x21ADCB0 callback_valid=%u io_failure=%u steam_result=%u lobby_id=0x%016llX current_lobby_id=0x%016llX current_visibility=%u published=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            callback != nullptr ? 1u : 0u,
            (unsigned)ioFailure,
            steamResult,
            (unsigned long long)lobbyId,
            (unsigned long long)currentLobbyId,
            (unsigned)currentVisibility,
            callback != nullptr && ioFailure == 0 && steamResult == 1
                && currentLobbyId == lobbyId ? 1u : 0u);
    }
}

uint8_t Hooks::OnSteamLobbyJoinRequest(
    uint8_t (*wrapped)(void*, void const*),
    void* manager,
    void const* lobbyRecord)
{
    uint64_t lobbyId{};
    uint32_t lobbyState{ UINT32_MAX };
    uint8_t joinable{};
    if (lobbyRecord != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(lobbyRecord);
        memcpy(&lobbyId, bytes + 0x250, sizeof(lobbyId));
        memcpy(&lobbyState, bytes + 0x27C, sizeof(lobbyState));
        joinable = *(bytes + 0x280);
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_join_request_enter index=%u side=platform backend=steam handler_rva=0x21AD5F0 lobby_record_valid=%u lobby_id=0x%016llX lobby_state=%u joinable=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            lobbyRecord != nullptr ? 1u : 0u,
            (unsigned long long)lobbyId,
            lobbyState,
            (unsigned)joinable);
    }
    auto const result = wrapped(manager, lobbyRecord);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_join_request_exit index=%u call_index=%u side=platform backend=steam handler_rva=0x21AD5F0 lobby_id=0x%016llX result=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            (unsigned long long)lobbyId,
            (unsigned)result);
    }
    return result;
}

void Hooks::OnSteamLobbyEntered(
    void (*wrapped)(void*, void const*, uint8_t),
    void* manager,
    void const* callback,
    uint8_t ioFailure)
{
    uint64_t lobbyId{};
    uint32_t enterResponse{ UINT32_MAX };
    if (callback != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(callback);
        memcpy(&lobbyId, bytes, sizeof(lobbyId));
        memcpy(&enterResponse, bytes + 0x10, sizeof(enterResponse));
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_entered_callback_enter index=%u side=platform backend=steam handler_rva=0x21ADEF0 callback_valid=%u lobby_id=0x%016llX enter_response=%u io_failure=%u membership_enumeration=inside_original argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            callback != nullptr ? 1u : 0u,
            (unsigned long long)lobbyId,
            enterResponse,
            (unsigned)ioFailure);
    }
    wrapped(manager, callback, ioFailure);

    uint64_t currentLobbyId{};
    uint8_t currentVisibility{};
    if (manager != nullptr) {
        auto const bytes = static_cast<uint8_t const*>(manager);
        memcpy(&currentLobbyId, bytes + 0x108, sizeof(currentLobbyId));
        currentVisibility = *(bytes + 0x128);
    }
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_entered_callback_exit index=%u call_index=%u side=platform backend=steam handler_rva=0x21ADEF0 callback_valid=%u lobby_id=0x%016llX enter_response=%u io_failure=%u current_lobby_id=0x%016llX current_visibility=%u membership_enumeration_completed=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            callback != nullptr ? 1u : 0u,
            (unsigned long long)lobbyId,
            enterResponse,
            (unsigned)ioFailure,
            (unsigned long long)currentLobbyId,
            (unsigned)currentVisibility,
            callback != nullptr && ioFailure == 0 && enterResponse == 1 ? 1u : 0u);
    }
}

void Hooks::OnSteamLobbyMatchList(
    void (*wrapped)(void*, uint32_t const*, uint8_t, void*),
    void* manager,
    uint32_t const* matchCount,
    uint8_t ioFailure,
    void* context)
{
    auto const count = matchCount != nullptr ? *matchCount : 0u;
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_match_list_enter index=%u side=platform backend=steam handler_rva=0x21ADA40 count_pointer_valid=%u match_count=%u io_failure=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            matchCount != nullptr ? 1u : 0u,
            count,
            (unsigned)ioFailure);
    }
    wrapped(manager, matchCount, ioFailure, context);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_lobby_match_list_exit index=%u call_index=%u side=platform backend=steam handler_rva=0x21ADA40 match_count=%u io_failure=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            count,
            (unsigned)ioFailure);
    }
}

void* Hooks::OnPlatformMemberResolve(
    void* (*wrapped)(void*, void const*),
    void* participantManager,
    void const* identity)
{
    JoinTracePlatformIdentity value{};
    if (identity != nullptr) {
        memcpy(&value, identity, sizeof(value));
    }
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_member_resolve_enter index=%u side=platform handler_rva=0x403F6A0 manager_valid=%u identity_valid=%u platform_kind=%u platform_subtype=%u platform_key_word0=0x%016llX platform_key_word1=0x%016llX argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            participantManager != nullptr ? 1u : 0u,
            identity != nullptr ? 1u : 0u,
            value.Kind,
            (unsigned)value.Subtype,
            (unsigned long long)value.KeyWord0,
            (unsigned long long)value.KeyWord1);
    }
    auto const result = wrapped(participantManager, identity);
    auto const internalMemberId = result != nullptr
        ? *static_cast<uint32_t const*>(result)
        : UINT32_MAX;
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_member_resolve_exit index=%u call_index=%u side=platform handler_rva=0x403F6A0 result_valid=%u internal_member_id=%u platform_kind=%u platform_subtype=%u platform_key_word0=0x%016llX platform_key_word1=0x%016llX argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            result != nullptr ? 1u : 0u,
            internalMemberId,
            value.Kind,
            (unsigned)value.Subtype,
            (unsigned long long)value.KeyWord0,
            (unsigned long long)value.KeyWord1);
    }
    return result;
}

void Hooks::OnPlatformMembershipEvent(
    void (*wrapped)(void*, uint32_t, uint8_t),
    void* participantManager,
    uint32_t internalMemberId,
    uint8_t eventFlag)
{
    auto const callerRva = FindGameReturnAddressRva();
    uint32_t enterIndex;
    auto const trace = BeginJoinLifecycleTraceEvent(enterIndex);
    if (trace) {
        INFO("[MP_JOIN_TRACE] event=platform_membership_event_enter index=%u side=platform handler_rva=0x403FFC0 caller_rva=0x%llX manager_valid=%u internal_member_id=%u event_flag=%u semantic=queued_platform_participant_event argument_mutation=0 payload_mutation=0 result_mutation=0",
            enterIndex,
            (unsigned long long)callerRva,
            participantManager != nullptr ? 1u : 0u,
            internalMemberId,
            (unsigned)eventFlag);
    }
    wrapped(participantManager, internalMemberId, eventFlag);
    uint32_t exitIndex;
    if (trace && BeginJoinLifecycleTraceEvent(exitIndex)) {
        INFO("[MP_JOIN_TRACE] event=platform_membership_event_exit index=%u call_index=%u side=platform handler_rva=0x403FFC0 caller_rva=0x%llX internal_member_id=%u event_flag=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            exitIndex,
            enterIndex,
            (unsigned long long)callerRva,
            internalMemberId,
            (unsigned)eventFlag);
    }
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
    uint32_t joinEnterIndex{};
    auto const joinTrace = traceMessage && BeginJoinLifecycleTraceEvent(joinEnterIndex);
    uint64_t netId{};
    uint16_t field30{};
    uint32_t field38{};
    uint8_t field3C{};
    uint8_t updateDiscriminator{};
    uint32_t updateTailField2C8{};
    uint32_t updateTailField2CC{};
    uint8_t updateTailField2D0{};
    uint32_t targetUserId{ UserId::Unassigned };
    uint64_t resolvedEntityHandle{};
    net::GameServer* gameServer{};
    if (trace || joinTrace) {
        auto const bytes = reinterpret_cast<uint8_t const*>(message);
        memcpy(&netId, bytes + 0x28, sizeof(netId));
        memcpy(&field30, bytes + 0x30, sizeof(field30));
        memcpy(&field38, bytes + 0x38, sizeof(field38));
        memcpy(&field3C, bytes + 0x3C, sizeof(field3C));
        if (messageId == 240) {
            memcpy(&updateDiscriminator, bytes + 0x2C0, sizeof(updateDiscriminator));
            memcpy(&updateTailField2C8, bytes + 0x2C8, sizeof(updateTailField2C8));
            memcpy(&updateTailField2CC, bytes + 0x2CC, sizeof(updateTailField2CC));
            memcpy(&updateTailField2D0, bytes + 0x2D0, sizeof(updateTailField2D0));
        }
        if (context != nullptr) {
            targetUserId = (context->UserID.Id & 0xFFFF0000u)
                | static_cast<uint32_t>(field30);
        }
        auto const eocServer = GetStaticSymbols().GetEoCServer();
        gameServer = eocServer != nullptr ? eocServer->GameServer : nullptr;
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
        if (trace) {
            INFO("[MP_CHARACTER_CREATE_TRACE] event=process_enter index=%u side=server protocol=character_creation thread=%lu msg_id=%u user_id=%u peer=%u target_user_id=%u target_peer_id=%u target_player_index=%u net_id=0x%016llX resolved_entity_handle=0x%016llX replication_command_enqueue_caller_rva=0x%llX replication_command_enqueue_source_rva=0x%llX replication_authority_insert_caller_rva=0x%llX replication_command_seen_in_flush=%u replication_command_first_flush=%llu replication_command_last_flush=%llu replication_command_flush_occurrences=%u field30=%u payload_word38=%u payload_byte3c=%u update_discriminator=%u update_tail_field_2c8=%u update_tail_field_2cc=%u update_tail_field_2d0=%u",
                enterIndex,
                GetCurrentThreadId(),
                messageId,
                context != nullptr ? context->UserID.Id : UserId::Unassigned,
                context != nullptr ? static_cast<unsigned>(context->UserID.GetPeerId()) : UINT32_MAX,
                targetUserId,
                targetUserId >> 16,
                targetUserId & 0xFFFFu,
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
                static_cast<unsigned>(field3C),
                static_cast<unsigned>(updateDiscriminator),
                updateTailField2C8,
                updateTailField2CC,
                static_cast<unsigned>(updateTailField2D0));
        }
        if (joinTrace) {
            INFO("[MP_JOIN_TRACE] event=creator_process_enter index=%u side=server direction=receive protocol=character_creation handler_rva=0x373C020 update_apply_rva=0x373CAC0 update_queue_rva=0x37948A0 thread=%lu msg_id=%u user_id=%u peer=%u target_user_id=%u target_peer_id=%u target_player_index=%u target_user_composition=context_peer_high16_plus_message_player_low16 net_id=0x%016llX resolved_entity_handle=0x%016llX field30=%u payload_word38=%u payload_byte3c=%u update_discriminator=%u update_tail_field_2c8=%u update_tail_field_2cc=%u update_tail_field_2d0=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
                joinEnterIndex,
                GetCurrentThreadId(),
                messageId,
                context != nullptr ? context->UserID.Id : UserId::Unassigned,
                context != nullptr ? static_cast<unsigned>(context->UserID.GetPeerId()) : UINT32_MAX,
                targetUserId,
                targetUserId >> 16,
                targetUserId & 0xFFFFu,
                static_cast<unsigned long long>(netId),
                static_cast<unsigned long long>(resolvedEntityHandle),
                static_cast<unsigned>(field30),
                static_cast<unsigned>(field38),
                static_cast<unsigned>(field3C),
                static_cast<unsigned>(updateDiscriminator),
                updateTailField2C8,
                updateTailField2CC,
                static_cast<unsigned>(updateTailField2D0));
            TraceJoinMessageSemantics(
                "server",
                "receive",
                context != nullptr
                    ? static_cast<TPeerId>(context->UserID.GetPeerId())
                    : static_cast<TPeerId>(-1),
                message,
                joinEnterIndex);
            TraceCreatorStateSnapshot(
                "creator_process_before",
                joinEnterIndex,
                gameServer,
                netId,
                resolvedEntityHandle,
                targetUserId);
        }
        if (trace && messageId == 240 && resolvedEntityHandle != 0) {
            entityReplicationPreBindCaptureEnabled_.store(false, std::memory_order_release);
            INFO("[MP_REPLICATION_TRACE] event=prebind_capture_stopped phase=character_create_resolved msg_id=240 entity_handle=0x%016llX capture_scope=process capture_enabled=0 message_mutation=0",
                static_cast<unsigned long long>(resolvedEntityHandle));
        }
    }

    auto const result = wrapped(protocol, unused, context, message);
    uint64_t resolvedEntityHandleAfter{};
    if ((trace || joinTrace) && gameServer != nullptr && netId != 0) {
        auto const entity = gameServer->Replication.NetIdToEntity.try_get(NetId{ netId });
        if (entity != nullptr) {
            resolvedEntityHandleAfter = entity->Handle;
        }
    }

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
    uint32_t joinExitIndex{};
    if (joinTrace && BeginJoinLifecycleTraceEvent(joinExitIndex)) {
        INFO("[MP_JOIN_TRACE] event=creator_process_exit index=%u call_index=%u side=server direction=receive protocol=character_creation handler_rva=0x373C020 thread=%lu msg_id=%u result=%d user_id=%u peer=%u target_user_id=%u target_peer_id=%u target_player_index=%u net_id=0x%016llX resolved_entity_handle_before=0x%016llX resolved_entity_handle_after=0x%016llX update_discriminator=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinExitIndex,
            joinEnterIndex,
            GetCurrentThreadId(),
            messageId,
            static_cast<int>(result),
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? static_cast<unsigned>(context->UserID.GetPeerId()) : UINT32_MAX,
            targetUserId,
            targetUserId >> 16,
            targetUserId & 0xFFFFu,
            static_cast<unsigned long long>(netId),
            static_cast<unsigned long long>(resolvedEntityHandle),
            static_cast<unsigned long long>(resolvedEntityHandleAfter),
            static_cast<unsigned>(updateDiscriminator));
    }
    if (joinTrace) {
        TraceCreatorStateSnapshot(
            "creator_process_after",
            joinEnterIndex,
            gameServer,
            netId,
            resolvedEntityHandleAfter != 0
                ? resolvedEntityHandleAfter
                : resolvedEntityHandle,
            targetUserId);
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
        auto const lobbyWatchState = EnsureLobbyReadyStateWatchpoints(
            GetCurrentThreadId());
        if (flushSequence == 1) {
            INFO("[MP_LOBBY_READY_TRACE] event=watchpoint state=%u thread=%lu player_records=0,1 hardware_slots=dr1,dr2 access=write length=2 layout=ready_1a_state_1b fail_closed=1 message_mutation=0",
                lobbyWatchState,
                GetCurrentThreadId());
        }
        DumpLobbyReadyStateWriteRecords("replication_flush");
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
    if (isServerCommandBuffer) {
        DumpLobbyReadyStateWriteRecords("replication_flush_post");
    }
}

uint64_t Hooks::OnCharacterAssignmentEntityRoute(
    uint64_t (*wrapped)(void*, void*),
    void* peerContext,
    void* entityContext)
{
    uint32_t peerId{ UINT32_MAX };
    uint64_t entityKey{};
    uint32_t accessCount{ UINT32_MAX };
    uint32_t accessPeers[8]{};
    uint32_t copied{};
    bool containsPeer{};

    if (peerContext != nullptr) {
        auto const peerIdAddress = *reinterpret_cast<void* const*>(peerContext);
        if (peerIdAddress != nullptr) {
            peerId = *reinterpret_cast<uint32_t const*>(peerIdAddress);
        }
    }
    if (entityContext != nullptr) {
        auto const entityBytes = reinterpret_cast<uint8_t const*>(entityContext);
        entityKey = *reinterpret_cast<uint64_t const*>(entityBytes + 0x10);
        auto const accessList = *reinterpret_cast<uint32_t const* const*>(entityBytes + 0x38);
        accessCount = *reinterpret_cast<uint32_t const*>(entityBytes + 0x44);
        if (accessCount <= 64 && (accessCount == 0 || accessList != nullptr)) {
            copied = static_cast<uint32_t>(std::min<size_t>(accessCount, std::size(accessPeers)));
            for (uint32_t i = 0; i < copied; i++) {
                accessPeers[i] = accessList[i];
                containsPeer = containsPeer || accessPeers[i] == peerId;
            }
            for (uint32_t i = copied; i < accessCount && !containsPeer; i++) {
                containsPeer = accessList[i] == peerId;
            }
        }
    }

    auto const result = wrapped(peerContext, entityContext);
    if (peerId >= 1 && peerId <= 9
        && accessCount <= 64
        && (accessCount != 0 || result != 0)) {
        auto const index = characterAssignmentEntityRouteTraceEventCount_.fetch_add(
            1, std::memory_order_acq_rel);
        if (index < 4096) {
            INFO("[MP_CHARACTER_ASSIGNMENT_ROUTE] event=entity index=%u thread=%lu peer=%u entity_key=0x%016llX access_count=%u access_contains_peer=%u access_0=%u access_1=%u access_2=%u access_3=%u access_4=%u access_5=%u access_6=%u access_7=%u result=%llu router_rva=0x30735A0 message_mutation=0",
                index,
                GetCurrentThreadId(),
                peerId,
                static_cast<unsigned long long>(entityKey),
                accessCount,
                containsPeer ? 1u : 0u,
                accessPeers[0], accessPeers[1], accessPeers[2], accessPeers[3],
                accessPeers[4], accessPeers[5], accessPeers[6], accessPeers[7],
                static_cast<unsigned long long>(result));
        }
    }
    return result;
}

void Hooks::OnPeersInRangeAdd(
    void (*wrapped)(void*, int32_t const*),
    void* entityContext,
    int32_t const* peerIdAddress)
{
    struct PeerListSnapshot
    {
        uint64_t EntityHandle{};
        uint32_t Count{ UINT32_MAX };
        uint32_t Peers[8]{};
        bool Valid{};
        bool ContainsPeer{};
    };

    auto const peerId = peerIdAddress != nullptr ? *peerIdAddress : -1;
    auto capture = [peerId](void* context) {
        PeerListSnapshot snapshot;
        if (context == nullptr) {
            return snapshot;
        }

        auto const bytes = reinterpret_cast<uint8_t const*>(context);
        snapshot.EntityHandle = *reinterpret_cast<uint64_t const*>(bytes + 0x10);
        auto const peers = *reinterpret_cast<uint32_t const* const*>(bytes + 0x38);
        snapshot.Count = *reinterpret_cast<uint32_t const*>(bytes + 0x44);
        snapshot.Valid = snapshot.Count <= 64 && (snapshot.Count == 0 || peers != nullptr);
        if (!snapshot.Valid) {
            return snapshot;
        }

        auto const copied = static_cast<uint32_t>(
            std::min<size_t>(snapshot.Count, std::size(snapshot.Peers)));
        for (uint32_t i = 0; i < copied; i++) {
            snapshot.Peers[i] = peers[i];
        }
        for (uint32_t i = 0; i < snapshot.Count; i++) {
            snapshot.ContainsPeer = snapshot.ContainsPeer
                || peers[i] == static_cast<uint32_t>(peerId);
        }
        return snapshot;
    };

    auto const before = capture(entityContext);
    auto const callerRva = FindGameReturnAddressRva();
    wrapped(entityContext, peerIdAddress);
    auto const after = capture(entityContext);

    if (peerId >= 1 && peerId <= 9 && (before.Valid || after.Valid)) {
        auto const index = peersInRangeAddTraceEventCount_.fetch_add(
            1, std::memory_order_acq_rel);
        if (index < 4096) {
            INFO("[MP_PEERS_IN_RANGE] event=add index=%u thread=%lu peer=%d entity_handle=0x%016llX before_valid=%u before_count=%u before_contains_peer=%u after_valid=%u after_count=%u after_contains_peer=%u added=%u duplicate=%u after_0=%u after_1=%u after_2=%u after_3=%u after_4=%u after_5=%u after_6=%u after_7=%u caller_rva=0x%llX writer_rva=0x30BEBC0 message_mutation=0",
                index,
                GetCurrentThreadId(),
                peerId,
                static_cast<unsigned long long>(after.Valid
                    ? after.EntityHandle
                    : before.EntityHandle),
                before.Valid ? 1u : 0u,
                before.Count,
                before.ContainsPeer ? 1u : 0u,
                after.Valid ? 1u : 0u,
                after.Count,
                after.ContainsPeer ? 1u : 0u,
                !before.ContainsPeer && after.ContainsPeer ? 1u : 0u,
                before.ContainsPeer && after.ContainsPeer ? 1u : 0u,
                after.Peers[0], after.Peers[1], after.Peers[2], after.Peers[3],
                after.Peers[4], after.Peers[5], after.Peers[6], after.Peers[7],
                static_cast<unsigned long long>(callerRva));
        }
    }
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
    uint32_t joinEnterIndex;
    auto const joinTrace = BeginJoinLifecycleTraceEvent(joinEnterIndex);
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
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
    if (joinTrace) {
        INFO("[MP_JOIN_TRACE] event=load_process_enter index=%u side=%s direction=receive protocol=load thread=%lu msg_id=%u user_id=%u peer=%u peer_class_count=%u user_count=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinEnterIndex,
            side,
            GetCurrentThreadId(),
            messageId,
            context != nullptr ? context->UserID.Id : UserId::Unassigned,
            context != nullptr ? (unsigned)context->UserID.GetPeerId() : UINT32_MAX,
            context != nullptr ? context->PeerIDClassNames.size() : 0,
            context != nullptr ? context->UserIDs.size() : 0);
    }
    TraceJoinMessageSemantics(
        side,
        "receive",
        context != nullptr
            ? static_cast<TPeerId>(context->UserID.GetPeerId())
            : static_cast<TPeerId>(-1),
        message,
        joinTrace ? joinEnterIndex : UINT32_MAX);

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
    uint32_t joinExitIndex;
    if (joinTrace && BeginJoinLifecycleTraceEvent(joinExitIndex)) {
        INFO("[MP_JOIN_TRACE] event=load_process_exit index=%u call_index=%u side=%s direction=receive protocol=load thread=%lu msg_id=%u result=%d argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinExitIndex,
            joinEnterIndex,
            side,
            GetCurrentThreadId(),
            messageId,
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

bool Hooks::BeginJoinLifecycleTraceEvent(uint32_t& eventIndex)
{
    if (!gExtender->GetConfig().EnableJoinLifecycleTrace
        || !IsValidJoinLifecycleTraceMaxEvents(
            gExtender->GetConfig().JoinLifecycleTraceMaxEvents)) {
        return false;
    }

    auto const maxEvents = gExtender->GetConfig().JoinLifecycleTraceMaxEvents;
    eventIndex = joinLifecycleTraceEventCount_.fetch_add(1, std::memory_order_relaxed);
    if (eventIndex < maxEvents) {
        return true;
    }

    if (eventIndex == maxEvents) {
        INFO("[MP_JOIN_TRACE] event=limit_reached max_events=%u", maxEvents);
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
    auto const messageId = message != nullptr
        ? static_cast<uint32_t>(message->MsgId)
        : UINT32_MAX;
    uint32_t joinTraceIndex;
    auto const joinTrace = IsJoinLifecycleTraceMessage(messageId)
        && BeginJoinLifecycleTraceEvent(joinTraceIndex);
    if (joinTrace) {
        INFO("[MP_JOIN_TRACE] event=send_message index=%u side=transport direction=send thread=%lu msg_id=%u peer=%u flags=%u compressed=%u special_vtable_path=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinTraceIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            (unsigned)flags,
            (unsigned)(flags & 1),
            messageId <= 14 ? 1u : 0u);
    }
    TraceJoinMessageSemantics(
        "transport", "send", peerId, message,
        joinTrace ? joinTraceIndex : UINT32_MAX);

    auto const trace = IsLoadOrCharacterCreationTraceMessage(messageId)
        && BeginLoadProtocolWireTraceEvent(traceIndex);
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
                    L"send",
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
    uint32_t joinTraceExitIndex;
    if (joinTrace && BeginJoinLifecycleTraceEvent(joinTraceExitIndex)) {
        INFO("[MP_JOIN_TRACE] event=send_complete index=%u call_index=%u side=transport direction=send thread=%lu msg_id=%u peer=%u effective_flags=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinTraceExitIndex,
            joinTraceIndex,
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
    auto const traceMessage = IsLoadOrCharacterCreationTraceMessage(messageId);
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
    uint32_t joinEnterIndex{ 0 };
    auto const joinTrace = IsJoinLifecycleTraceMessage(messageId)
        && BeginJoinLifecycleTraceEvent(joinEnterIndex);
    if (trace) {
        auto const capacityBytes = (allocatedBits + 7u) / 8u;
        auto const lengthBytes = (bitsBefore + 7u) / 8u;
        SerializedByteBufferView snapshot{
            bitstream != nullptr ? bitstream->Buf : nullptr,
            capacityBytes,
            lengthBytes
        };
        DWORD payloadError{ ERROR_SUCCESS };
        auto const payloadWritten = lengthBytes <= capacityBytes
            && WriteNetworkTracePayload(
                enterIndex,
                peerId,
                messageId,
                snapshot,
                gExtender->GetConfig().LoadProtocolWireTraceMaxPayloadBytes,
                L"receive",
                payloadError);
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
        INFO("[MP_LOAD_TRACE] event=receive_serialized_snapshot index=%u thread=%lu msg_id=%u peer=%u bits=%u allocated_bits=%u offset=%u snapshot_bytes=%u payload_written=%u payload_error=%lu payload_name=trace-pid%lu-event%u-receive-id%u-peer%u.bin message_mutation=0",
            enterIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            bitsBefore,
            allocatedBits,
            offsetBefore,
            lengthBytes,
            payloadWritten ? 1u : 0u,
            payloadError,
            GetCurrentProcessId(),
            enterIndex,
            messageId,
            (unsigned)peerId);
    }
    if (joinTrace) {
        INFO("[MP_JOIN_TRACE] event=receive_wrapper_enter index=%u thread=%lu direction=receive msg_id=%u peer=%u bits=%u allocated_bits=%u offset=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinEnterIndex,
            GetCurrentThreadId(),
            messageId,
            (unsigned)peerId,
            bitsBefore,
            allocatedBits,
            offsetBefore);
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
    TraceJoinMessageSemantics(
        "unknown",
        "receive",
        peerId,
        message,
        joinTrace ? joinEnterIndex : UINT32_MAX);
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
    uint32_t joinExitIndex{ 0 };
    if (joinTrace && BeginJoinLifecycleTraceEvent(joinExitIndex)) {
        INFO("[MP_JOIN_TRACE] event=receive_wrapper_exit index=%u call_index=%u thread=%lu direction=receive msg_id=%u peer=%u result=%u bits=%u offset_before=%u offset_after=%u consumed_bits=%u argument_mutation=0 payload_mutation=0 result_mutation=0",
            joinExitIndex,
            joinEnterIndex,
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
