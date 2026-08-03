# Multiplayer capacity telemetry

This research fork adds an opt-in, read-only snapshot to the existing server-side `NetworkManager`. It does not change `MaxPeers`, module player limits, RakNet settings, message contents, or game executable code.

## Enabling it

Add the following settings to `ScriptExtenderSettings.json`:

```json
{
  "CreateConsole": true,
  "EnableMultiplayerCapacityTelemetry": true,
  "MultiplayerCapacityTelemetryIntervalMs": 10000
}
```

Telemetry is disabled by default. The interval has a lower bound of 1000 ms. A snapshot is emitted immediately whenever a measured field changes, regardless of the heartbeat interval.

## Output

Lines have a stable `[MP_CAPACITY]` marker and `key=value` fields, for example:

```text
[MP_CAPACITY] event=snapshot peer=-1 maxPeers=8 modulePlayers=16 initialized=1 connected=4 active=4 session=4 level=4 kicked=0 users=4 peerInfo=4 characterOwners=4 extenderPeers=4 localPeer=1 serverState=4
```

The snapshot includes:

- `AbstractPeer::MaxPeers` and `WasInitialized`;
- `ModManager::BaseModule.Info.NumPlayers`;
- sizes of `ConnectedPeerIds`, `ActivePeerIds`, `SessionPeerIds`, `LevelPeerIds` and `KickedPeerIds`;
- sizes of user mappings, peer info and character-owner mappings;
- number of peers that completed Script Extender protocol negotiation;
- session-local peer ID and numeric server state.

Events currently distinguish periodic/changed snapshots, receipt of `ClientConnectMessage`, Script Extender protocol readiness, and the state immediately before network reset.

No message payloads, build strings, usernames, community IDs, lobby tokens, IP addresses, hostnames, or network packet contents are logged. The numeric peer value is the ephemeral BG3 session peer ID.

## Current limitation

This first instrument observes structures already exposed by BG3SE. It does not yet hook the earlier `AbstractPeer` connection callbacks, `JoiningProtocol`, `LoadProtocol`, RakNet initialization, or `PartyCreateNewNetwork`. Those require separately validated signatures before they can be instrumented safely.
