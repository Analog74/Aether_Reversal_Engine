# Fugue Machine Rubato — Decompile Notes

This target contains the extracted Mach-O slices and Ghidra exports for the **Fugue Machine Rubato.app** bundle.

## What we learned (high-signal)

### Bundle structure (3 binaries × 2 arches)
The app bundle ships multiple executables, each sliced into `arm64` and `x86_64` and decompiled separately:

- Main app: `Fugue Machine Rubato`
- AudioUnit component: `FugueMachineRubatoAU`
- QuickLook extension: `FugueMachineRubatoQuickLookExtension`

See [MANIFEST.json](MANIFEST.json) for the canonical list and per-slice `exec_dir` mappings.

### Audio engine design (AVAudioEngine graph)
From decompiled control flow in the main app (arm64):

- Uses `AVAudioEngine` and constructs an audio graph with nodes that include:
  - a `sourceNode`
  - a `mixerNode`
  - a `reverbNode`
  - a `limiterNode`
  - a `samplerArray` of one-or-more sampler nodes
- On rebuild, it detaches existing nodes from the engine and then re-attaches them.
- The graph is gated by a runtime `synthEnabled` flag.

Representative decompile:
- [buildAudioEngineWithPostTeardownBlock:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__buildAudioEngineWithPostTeardownBlock_.cpp)

### MIDI + network MIDI
MIDI is built around a `PGMidi` wrapper that directly uses CoreMIDI:

- Creates a CoreMIDI client and both input/output ports.
- Scans existing devices and connects/disconnects sources/destinations.
- References `MIDINetworkSession`, indicating support for network MIDI endpoints.

Representative decompiles:
- [initializeMidi](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__initializeMidi.cpp)
- [PGMidi init](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/PGMidi__init.cpp)

### Tempo/clock sources + Ableton Link
The main app supports multiple clock/tempo sources:

- A Link-driven transport manager (tempo read from `linkTransportManager` state when `cppClockSource < 2`).
- A MIDI-driven clock source (`cppClockSource == 2` reads tempo from a `midiInputRingBuffer`).
- A fallback path logs when an unexpected clock source is selected.

More detail (arm64 main app):

- **Tempo selection** is centralized in `tempoForSequencerView:`:
  - If `cppClockSource < 2`, tempo is a double stored in `linkTransportManager + 0x60`.
  - If `cppClockSource == 2`, tempo is computed from the MIDI clock ring buffer.
    - The ring buffer keeps a measured *seconds-per-MIDI-clock-tick* at offset `+0x28` and converts it to BPM:
      - $\text{BPM} = 60 / (\text{secondsPerTick} \cdot 24)$

- **Phase selection** is centralized in `linkPhaseForSequencerView:`:
  - If `cppClockSource == 1`, phase is a double stored in `linkTransportManager + 0x68`.
  - If `cppClockSource == 2`, phase is computed from `midiClockTransportManager`.
    - The MIDI transport manager keeps a MIDI-clock tick counter at offset `+0x40` and a *ticks-per-cycle* divisor at offset `+0x50`.
    - The returned value is effectively “cycles progressed” (integer-ish) as `tickCounter / ticksPerCycle`.
    - Internally it also uses `tickCounter % ticksPerCycle == 0` to detect cycle boundaries.
  - If `cppClockSource == 0`, phase returns `0.0` even though tempo still comes from the Link transport manager.

- **Clock source switching** flows through `updateClockSource:` and a pair of blocks:
  - `FUN_10005200c` (first block) stops the sequencer if running and updates `ViewController::_pendingCppClockSource`.
  - `FUN_100052074` (second block) toggles the Link transport manager’s internal mode:
    - `objcClockSource == 1` => Link enabled flag `1`
    - `objcClockSource == 0` or `2` => Link enabled flag `0`
    - Then it triggers a sequencerView refresh (writes param `0x28`).

- **MIDI clock source changes** (choosing which MIDI clock source/endpoint to follow) flow through `sequencerView:midiClockSourceDidChange:` which updates `ViewController::_midiClockSourceRef` (weak) and schedules reconfiguration.

- **MIDI clock ingestion** happens in `midiSource:midiReceived:`:
  - It only processes packets from the selected `_midiClockSourceRef` and only when both `cppClockSource == 2` and `objcClockSource == 2`.
  - It scans MIDI bytes for system realtime messages:
    - `0xF8` (MIDI clock tick) => enqueue clock events into the ring buffer
    - `0xFA` (start) / `0xFB` (continue) => enqueue start/continue into the ring buffer
    - `0xFC` (stop) => enqueue stop into the ring buffer

- **MIDI ring buffer drain (the missing link)** happens on the audio thread:
  - The audio render callback (block) drains queued MIDI realtime events when `cppClockSource == 2`.
    - x86_64: `FUN_100063ed3` calls `FUN_100151c84(midiInputRingBuffer, renderAudioTime)`.
    - arm64: `FUN_1000523e0` calls `FUN_10010c318(midiInputRingBuffer, renderAudioTime)`.
  - The drain routine drives the MIDI transport manager:
    - start/stop/continue routes through the transport manager start/stop helpers (arm64: `FUN_1000ee558`)
    - clock ticks route through the transport tick helper (arm64: `FUN_1000ee604`) which increments the tick counter at `+0x40` and checks the cycle boundary against the divisor at `+0x50`.

- **MIDI clock overflow UX:** the UI checks the ring buffer’s overflow flag (byte at offset `+8`) and shows a “Missed MIDI Clock Messages” alert.

- **MIDI launch quantization settings (what `+0x58` and `+0x49` are):**
  - The MIDI transport manager keeps a *quantization selector* at offset `+0x58`.
    - arm64: `FUN_1000ee488(transport, value)` writes `*(transport + 0x58) = value` and recomputes the divisor.
    - This is driven from the sequencer param callback when `param_4 == 0x880` (and `value` is in the range `3..8`).
  - It also keeps a 1-byte toggle at offset `+0x49` that is explicitly labeled **Upsample** in settings (param ID `0x858`).
    - In the divisor recompute, this flag selects between two divisor tables that differ by exactly 4×.
    - arm64: `FUN_1000ee480(transport, flag)` writes `*(transport + 0x49) = flag` and recomputes the divisor.
    - This is driven from the sequencer param callback when `param_4 == 0x858`.
    - **Implementation detail (how upsampling actually happens):** the MIDI clock *ingestion* path consults this flag and, when nonzero, inserts three extra “synthetic tick” events between each real incoming MIDI clock tick.
      - On each received `0xF8` tick, `midiSource:midiReceived:` calls `FUN_10010c198(midiInputRingBuffer, midiPacketTimestamp, now)`.
      - `FUN_10010c198` checks the flag via `FUN_1000ee490(*param_1)` (a getter for `transport + 0x49`). If nonzero, it enqueues three additional events (type `4`) spaced by roughly `(deltaTime / 4)` when the tick interval is small.
      - The audio-thread drain `FUN_10010c318` dispatches event type `3` (real tick) vs type `4` (synthetic tick) differently by passing `param_4 = 1` for type `3` and `param_4 = 0` for type `4` into `FUN_10010c3f8`.
      - `FUN_10010c3f8` ultimately calls the transport tick helper `FUN_1000ee604(..., param_4, param_5)`.
        - `FUN_1000ee604` only increments the transport tick counter at `+0x40` when `param_4 != 0`.
        - The phase fraction helper (`FUN_1000ee4a0`) is based on `(+0x40 % +0x50) / +0x50`, so synthetic ticks do **not** advance phase/cycle position.
        - The synthetic ticks still advance the transport’s *timestamped update path* (because `FUN_1000ee604` computes a timestamp `uVar1` from the event times and can emit callbacks keyed off `uVar1`), which matches the settings description that upsampling improves “tick resolution” for driving the timeline.

  - **What consumes those timestamped updates (what becomes higher-resolution under Upsample):** both the Link and MIDI clock transport managers are built around the same callback receiver: the `FMTransport*` passed into `initializeTransportManagersWithTransportRef:`.
    - In practice, this `FMTransport*` is the app’s C++ sequencer/manager object stored as `ViewController::_seqManagerRef`.
      - It is provided via the SequencerView callback `sequencerView:didLoadCppSequencer:` (the `param_4` “cpp sequencer” pointer) and stored directly.
      - Evidence: [ViewController__sequencerView_didLoadCppSequencer_, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/ViewController__sequencerView_didLoadCppSequencer_.cpp)
      - That C++ object is created by `FMSequencerView` during `initWithFrame:delegate:` as `FMSequencerView::_seqManager` (a C++ allocation + constructor call), then handed to the delegate.
        - Evidence: [FMSequencerView__initWithFrame_delegate_, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FMSequencerView__initWithFrame_delegate_.cpp)
    - The initializer constructs a Link transport manager and a MIDI clock transport manager and stores the same `FMTransport*` at offset `+0x08` in each manager.
      - arm64: `ViewController::initializeTransportManagersWithTransportRef_` calls `thunk_FUN_100101e54(..., param_3, ...)` (Link) and `thunk_FUN_1000ee33c(..., param_3, ...)` (MIDI).
    - The Link transport manager’s tick/update routine (`FUN_100101ef0`) shows the intended “high resolution” update model:
      - It maintains an internal counter in units of `96.0` per quarter note and iterates forward in a loop.
      - It calls the `FMTransport` vtable at `+0x10` *for each increment* (high-frequency, timestamped callback).
      - It only calls the `FMTransport` vtable at `+0x60` every 4 increments (i.e. 24 times per quarter note, matching MIDI clock ticks).
    - The MIDI clock transport tick helper (`FUN_1000ee604`) uses the same `FMTransport` receiver, and synthetic ticks specifically target the *high-frequency* callback path:
      - Real ticks (event type `3`) call `FUN_1000ee604(..., param_4 = 1, param_5 = ...)`, which increments the tick counter (`+0x40`) and may also emit high-frequency callbacks.
      - Synthetic ticks (event type `4`) call `FUN_1000ee604(..., param_4 = 0, param_5 = 1)`.
        - This does **not** increment `+0x40` (so it does not advance phase/cycle position).
        - It *can still* emit the `FMTransport` vtable `+0x10` callback using the synthetic tick’s computed timestamp `uVar1`.
    - Net effect: **Upsample increases the cadence of the timestamped `FMTransport` update callback(s) (notably vtable `+0x10`) toward a Link-like 96-steps-per-quarter model, while leaving the tick-counter-based phase math unchanged.**

    - One concrete subsystem inside this C++ manager is a CoreMIDI sender layer that can emit timestamped MIDI messages:
      - The low-level send helper builds a `MIDIPacketList` with a provided timestamp (`MIDIPacketListAdd(..., timestamp, ...)`) and sends it via `MIDISend` or `MIDIReceived`.
        - Evidence: [FUN_100122294 (CoreMIDI send), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100122294.cpp)
      - There are single-byte realtime helpers for at least:
        - `0xFA` (Start): [FUN_100122508, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100122508.cpp)
        - `0xF8` (Clock tick): [FUN_100122568, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100122568.cpp)
        - `0xFC` (Stop): [FUN_100122538, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100122538.cpp)
      - The C++ manager contains a vector-like container at `+0x58` and fanout helpers that broadcast these realtime messages to every registered output (each element provides a sender object at `+0x10`).
        - Start broadcast: [FUN_10014b1ec, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b1ec.cpp)
        - Tick broadcast: [FUN_10014b2b4, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b2b4.cpp)
        - Stop broadcast: [FUN_10014b250, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b250.cpp)
      - That `+0x58` broadcast list is populated via the SequencerView’s “updated MIDI destination for output” pathway:
        - ObjC entrypoint: [FMSequencerView__sequencerData_updatedMidiDestinationForOutput_, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FMSequencerView__sequencerData_updatedMidiDestinationForOutput_.cpp)
        - It enqueues blocks onto the audio thread (via `performBlockOnAudioThread:completionBlock:`) which call into the C++ manager:
          - Disable output index: [FUN_1000d0c84, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000d0c84.cpp) → [FUN_10014adfc, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014adfc.cpp)
          - Update+enable output index (and set fields at `+0x30/+0x34/+0x38` on the per-output object): [FUN_1000d0c54, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000d0c54.cpp) → [FUN_10014ae40, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014ae40.cpp)
        - Both of those call the same “rebuild/refresh” routine, which reconstructs/dedupes the active output target list at `+0x58` based on enabled per-output slots:
          - Evidence: [FUN_10014aa90, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014aa90.cpp)
        - There are also param-driven updates that modify other per-output-slot fields (and then trigger the same rebuild) via `FMSequencerView::paramDataValueDidChange:`:
          - Evidence: [FMSequencerView__paramDataValueDidChange_, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FMSequencerView__paramDataValueDidChange_.cpp)
          - These queue audio-thread blocks that call:
            - [FUN_1000c161c → FUN_10014aa5c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000c161c.cpp)
            - [FUN_1000c163c → FUN_10014ad04, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000c163c.cpp)
          - Based on how the rebuild binds per-slot config into the live sender objects (`FUN_1000af7f4`), these two params appear to be per-output “sender settings”:
            - `param 0x80d` updates the per-output MIDI channel nibble (stored in the slot at `+0x28`, copied into the sender at `+0x20`). The sender uses this to form status bytes like `0x90 + channel` (note on), `0xB0 + channel` (CC), and `0xE0 + channel` (pitch bend).
              - Evidence: [FUN_10014aa5c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014aa5c.cpp), [FUN_1000af7f4, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000af7f4.cpp), [FUN_1001221f0 (note on), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1001221f0.cpp)
            - `param 0x83c` updates a per-output selector/mode (stored in the slot at `+0x3c`, copied into the sender at `+0x48`). The setter maps UI-ish values `0..9` into an internal `0..8` range, and `0` also disables the output slot.
              - Evidence: [FUN_10014ad04, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014ad04.cpp), [FUN_1000af7f4, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000af7f4.cpp)
      - This is now confirmed at least for MIDI realtime clocking: the `FMTransport` vtable slots used by the transport managers resolve to the C++ manager’s broadcast helpers for `0xFA` (Start), `0xFC` (Stop), and `0xF8` (Clock tick) on arm64.

    - The same `_seqManagerRef` object is also explicitly driven from the audio render callback (separate from the transport callbacks):
      - Start-of-render: calls a `_seqManagerRef` virtual method (vtable slot `+0x00`).
      - When clock source changes: updates `(_seqManagerRef + 0x20)` to point at the active transport manager (Link vs MIDI) and calls `_seqManagerRef` vtable slot `+0x20` with a flag indicating the active source.
      - End-of-render: calls `_seqManagerRef` vtable slot `+0x08`.
      - Evidence: [Audio render callback (FUN_1000523e0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000523e0.cpp)
  - The divisor itself is stored at `+0x50` and is recomputed in `FUN_1000ee3c0`.
    - The divisor is “transport ticks per launch-quantization cycle”. The recompute produces the following `ticksPerCycle` values (and these correspond to the app’s quantization labels like `"1/32".."4/1"` used by `FMStrings::stringForQuantizationType:`):
      - When `*(transport + 0x49) != 0`:
        - `+0x58 == 3` => `+0x50 = 3` ticks ("1/32")
        - `+0x58 == 4` => `+0x50 = 6` ticks ("1/16")
        - `+0x58 == 5` => `+0x50 = 12` ticks ("1/8")
        - `+0x58 == 6` => `+0x50 = 24` ticks ("1/4")
        - `+0x58 == 7` => `+0x50 = 48` ticks ("1/2")
        - `+0x58 == 8` => `+0x50 = 96` ticks ("1/1")
      - When `*(transport + 0x49) == 0`:
        - `+0x58 == 3` => `+0x50 = 12` ticks ("1/8")
        - `+0x58 == 4` => `+0x50 = 24` ticks ("1/4")
        - `+0x58 == 5` => `+0x50 = 48` ticks ("1/2")
        - `+0x58 == 6` => `+0x50 = 96` ticks ("1/1")
        - `+0x58 == 7` => `+0x50 = 192` ticks ("2/1")
        - `+0x58 == 8` => `+0x50 = 384` ticks ("4/1")

#### FMTransport callback slots (arm64: partially confirmed)

The transport managers call a delegate-like object stored at `transportManager + 0x08` (the `FMTransport*` passed into `initializeTransportManagersWithTransportRef:`). In the main app, that pointer is `ViewController::_seqManagerRef` (the C++ sequencer/manager provided by `sequencerView:didLoadCppSequencer:`). Symbols are stripped, but the Link and MIDI paths are consistent enough to infer the meaning of several vtable slots.

Some slots are now **confirmed** by decoding dyld chained fixups for the C++ manager’s vtable region (see [exec/Fugue Machine Rubato__arm64/reports/seqManager_vtable_fixups_arm64.txt](exec/Fugue%20Machine%20Rubato__arm64/reports/seqManager_vtable_fixups_arm64.txt)).

Confirmed mappings below assume the object’s vptr is the address-point at `0x10029FB58`, so `vtable +offset` corresponds to `0x10029FB58 + offset`.

The following slots are confirmed on arm64 via dyld fixups:
- `+0x00` → [FUN_10014a858, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a858.cpp)
- `+0x08` → [FUN_10014a884, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a884.cpp)
- `+0x10` → [FUN_10014a88c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a88c.cpp)
- `+0x18` → [FUN_10014a754, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a754.cpp)
- `+0x20` → [FUN_100121384, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100121384.cpp)
- `+0x28` → [FUN_10014a7c8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a7c8.cpp)
- `+0x30` → [FUN_10014a7d8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a7d8.cpp)
- `+0x38` → [FUN_100121394, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100121394.cpp)
- `+0x40` → [FUN_10014a688, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a688.cpp)
- `+0x48` → [FUN_10014a698, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a698.cpp)
- `+0x50` → [FUN_10014b1ec (broadcast MIDI Start 0xFA), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b1ec.cpp)
- `+0x58` → [FUN_10014b250 (broadcast MIDI Stop 0xFC), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b250.cpp)
- `+0x60` → [FUN_10014b2b4 (broadcast MIDI Clock 0xF8), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b2b4.cpp)
- `+0x68` → [FUN_10012139c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10012139c.cpp)
- `+0x70` → [FUN_1001213c4, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1001213c4.cpp)
- `+0x78` → [FUN_10014a730, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a730.cpp)

- `vtable +0x00` / `vtable +0x08` (audio-render lifecycle) — **confirmed implementations**
  - `+0x00` → [FUN_10014a858, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a858.cpp)
  - `+0x08` → [FUN_10014a884, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a884.cpp)
  - Called by the audio render callback once per render quantum: `+0x00` near the start, `+0x08` near the end.
  - Evidence: [Audio render callback (FUN_1000523e0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000523e0.cpp)

- `vtable +0x20` (clock-source/transport switch)
  - Called when the app switches between Link-driven and MIDI-driven clocking; takes a flag (`1` for Link, `0` for MIDI).
  - `+0x20` → [FUN_100121384, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100121384.cpp) (stores the flag at `this+0x09`).
  - Evidence: [Audio render callback (FUN_1000523e0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000523e0.cpp)

- `vtable +0x40` (shutdown/teardown)
  - Called during `applicationWillTerminate:` with a `1` argument.
  - `+0x40` is a small wrapper that forwards to `vtable +0x48` and passes an extra per-instance pointer stored at `this+0xB0`.
    - `+0x40` → [FUN_10014a688, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a688.cpp)
    - `+0x48` → [FUN_10014a698, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a698.cpp)
  - Evidence: [ViewController__applicationWillTerminate, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/ViewController__applicationWillTerminate.cpp)

- `vtable +0x10` (high-frequency, timestamped “update”) — **confirmed implementation**
  - Signature-like usage: `(+0x10)(transport, hostTime, 0, sampleOffsetInt, 0)`
  - Link: called in the 96-steps-per-quarter loop in `FUN_100101ef0`.
  - MIDI: called from `FUN_1000ee604` when `param_5 != 0` (including synthetic ticks where `param_4 = 0`).
  - `+0x10` → [FUN_10014a88c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a88c.cpp)
  - Evidence: [FUN_100101ef0, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp), [FUN_1000ee604, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp)

- `vtable +0x60` (24-PPQN tick) — **confirmed implementation**
  - Signature-like usage: `(+0x60)(transport, hostTime)`
  - Link: called every 4 substeps (`step & 3 == 0`) in `FUN_100101ef0`.
  - MIDI: called only on real ticks (`param_4 != 0`) in `FUN_1000ee604`.
  - `+0x60` → [FUN_10014b2b4 (broadcast MIDI Clock 0xF8), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b2b4.cpp)
  - Evidence: [FUN_100101ef0, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp), [FUN_1000ee604, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp)

- `vtable +0x28` / `vtable +0x30` (quantization pending state)
  - Used as `(+0x28)(transport, 1)` when a quantization boundary is reached, and `(+0x28)(transport, 0)` when cleared.
  - `+0x28` is a wrapper that forwards to `+0x30` and passes an extra per-instance pointer stored at `this+0xB0`.
    - `+0x28` → [FUN_10014a7c8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a7c8.cpp)
    - `+0x30` → [FUN_10014a7d8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014a7d8.cpp)
  - Evidence: [FUN_1000ee604, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp), [FUN_1000ee4d8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4d8.cpp), [FUN_100101ef0, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp)

- `vtable +0x50` / `vtable +0x58` (quantization boundary callbacks) — **confirmed implementations**
  - Both are called with a single host-time argument from the transport managers’ “pending quantization” logic (paired with `+0x28(1)` / `+0x28(0)`).
  - `+0x50` → [FUN_10014b1ec (broadcast MIDI Start 0xFA), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b1ec.cpp)
  - `+0x58` → [FUN_10014b250 (broadcast MIDI Stop 0xFC), arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10014b250.cpp)
  - Evidence: [FUN_1000ee604, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp), [FUN_1000ee4d8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4d8.cpp), [FUN_100101ef0, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp)

- `vtable +0x68` / `vtable +0x70` (gating predicates) — **confirmed implementations**
  - `+0x68` is consulted before doing the “clear pending quantization” path.
    - `+0x68` → [FUN_10012139c, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10012139c.cpp)
  - `+0x70` gates whether `FUN_1000ee4d8` performs its clear/reset actions.
    - `+0x70` → [FUN_1001213c4, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1001213c4.cpp)
  - Evidence: [FUN_1000ee604, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp), [FUN_1000ee4d8, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4d8.cpp), [FUN_100101ef0, arm64](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp)

Representative decompiles:
- [tempoForSequencerView:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__tempoForSequencerView_.cpp)
- [linkPhaseForSequencerView:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__linkPhaseForSequencerView_.cpp)
- [initializeTransportManagersWithTransportRef:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__initializeTransportManagersWithTransportRef_.cpp)
- [updateClockSource:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__updateClockSource_.cpp)
- [sequencerView:midiClockSourceDidChange:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__sequencerView_midiClockSourceDidChange_.cpp)
- [midiSource:midiReceived:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__midiSource_midiReceived_.cpp)
- [MIDI tempo from ring buffer (FUN_100151ab8, x86_64)](exec/Fugue%20Machine%20Rubato__x86_64/decompiled_best/FUN_100151ab8.cpp)
- [MIDI phase cycles from transport manager (FUN_10012b81e, x86_64)](exec/Fugue%20Machine%20Rubato__x86_64/decompiled_best/FUN_10012b81e.cpp)
- [MIDI clock divisor update (FUN_10012b742, x86_64)](exec/Fugue%20Machine%20Rubato__x86_64/decompiled_best/FUN_10012b742.cpp)
- [MIDI ring buffer drain (FUN_100151c84, x86_64)](exec/Fugue%20Machine%20Rubato__x86_64/decompiled_best/FUN_100151c84.cpp)
- [Audio render callback driving transport (FUN_100063ed3, x86_64)](exec/Fugue%20Machine%20Rubato__x86_64/decompiled_best/FUN_100063ed3.cpp)
- [MIDI tempo from ring buffer (FUN_10010c170, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10010c170.cpp)
- [MIDI phase fraction from transport manager (FUN_1000ee4a0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4a0.cpp)
- [MIDI clock divisor update (FUN_1000ee3c0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee3c0.cpp)
- [MIDI quantization selector setter (FUN_1000ee488, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee488.cpp)
- [MIDI quantization x4 toggle setter (FUN_1000ee480, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee480.cpp)
- [Upsample flag getter (FUN_1000ee490, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee490.cpp)
- [MIDI tick enqueue + synthetic tick insertion (FUN_10010c198, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10010c198.cpp)
- [Param→audio-thread wiring for selector (FUN_10004fcb0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10004fcb0.cpp)
- [Param→audio-thread wiring for toggle (FUN_10004fc60, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10004fc60.cpp)
- [Param callback containing both IDs (ViewController__sequencerView_changedParam_value_source_, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/ViewController__sequencerView_changedParam_value_source_.cpp)
- [Settings UI naming + describing `0x858` as “Upsample” (FMSetting__configureWithParamDataRef_sourceObjectRef_pageReloadTime_, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FMSetting__configureWithParamDataRef_sourceObjectRef_pageReloadTime_.cpp)
- [MIDI ring buffer drain (FUN_10010c318, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10010c318.cpp)
- [Ring-buffer event dispatch into transport tick helper (FUN_10010c3f8, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_10010c3f8.cpp)
- [Transport tick helper (FUN_1000ee604, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee604.cpp)
- [Transport phase fraction (FUN_1000ee4a0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4a0.cpp)
- [Transport “reset pending quantization” helper (FUN_1000ee4d8, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4d8.cpp)
- [Transport “flush update at end of drain” wrapper (FUN_1000ee4c0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000ee4c0.cpp)
- [Audio render callback driving transport (FUN_1000523e0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_1000523e0.cpp)
- [Link transport manager init (thunk_FUN_100101e54, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/thunk_FUN_100101e54.cpp)
- [Link transport manager tick/update loop (FUN_100101ef0, arm64)](exec/Fugue%20Machine%20Rubato__arm64/decompiled_best/FUN_100101ef0.cpp)
- [linkEnabledChanged:](exec/Fugue%20Machine%20Rubato__arm64/decompiled_real/ViewController__linkEnabledChanged_.cpp)

The symbol reports also show heavy `ableton::link::*` and embedded `link_asio_*` networking/async code.

### “Obfuscation” posture
No strong evidence of a commercial packer/virtualizer.

- Many symbols are stripped, but Objective-C selectors survive (hence readable `Class__method_` exports).
- Some C++ symbols remain demangle-able (notably Ableton Link / ASIO / `std::__1`).

## Output coverage
Both `decompiled_real/` (baseline) and `decompiled_best/` (best-effort shared-project) are populated for all slices:

- `Fugue Machine Rubato__arm64`: 12,929 functions
- `Fugue Machine Rubato__x86_64`: 8,974 functions
- `FugueMachineRubatoAU__arm64`: 11,464 functions
- `FugueMachineRubatoAU__x86_64`: 7,668 functions
- `FugueMachineRubatoQuickLookExtension__arm64`: 237 functions
- `FugueMachineRubatoQuickLookExtension__x86_64`: 215 functions

Tip: regenerate counts safely with:

- `python3 scripts/audit_decompile_outputs.py "targets/Fugue Machine Rubato/exec"`
