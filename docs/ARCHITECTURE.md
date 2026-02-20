# Aether RE — Architecture

> Created: 2026-02-20 00:00 UTC • Revised: 2026-02-20 00:00 UTC

## Overview

`aether-re` is a Python toolkit for automated reverse engineering of macOS binaries. It orchestrates Ghidra headless analysis, Frida dynamic tracing, and a post-processing pipeline to produce readable, analyzable decompiled output from closed-source binaries.

---

## Layer Diagram

```
┌─────────────────────────────────────────────────────────┐
│                      CLI Layer                          │
│  bin/reverse.py    bin/trace.py    bin/cross_analyze.py │
└─────────────────────┬───────────────────────────────────┘
                      │
┌─────────────────────▼───────────────────────────────────┐
│                   Core Engines                          │
│  factory/core/ghidra_engine.py   (headless Ghidra)     │
│  factory/core/frida_engine.py    (Frida orchestration)  │
│  factory/core/macho_discovery.py (binary scanning)      │
│  factory/core/asset_extractor.py (resource extraction)  │
│  factory/core/bundle_inventory.py(bundle cataloging)    │
│  factory/core/encryption_analyzer.py (crypto detection) │
│  factory/core/progress.py        (heartbeat/status)     │
└─────────────────────┬───────────────────────────────────┘
                      │
┌─────────────────────▼───────────────────────────────────┐
│                 Post-Processing                         │
│  fixup/fix_decompilation_issues.py                     │
│  fixup/fix_missing_parameters.py                       │
│  fixup/add_common_types.py                             │
└─────────────────────┬───────────────────────────────────┘
                      │
┌─────────────────────▼───────────────────────────────────┐
│               Analysis & Reporting                      │
│  analysis/analyze_call_graph.py                        │
│  factory/core/reporting.py                             │
│  factory/core/verifier.py                              │
└─────────────────────────────────────────────────────────┘
```

---

## Core Engines

### `ghidra_engine.py`
Orchestrates Ghidra headless analysis via `analyzeHeadless`. Handles:
- Spawning Ghidra subprocess with `ExportEverything.java`
- Infinite-loop detection: tracks repetitive WARN patterns, kills stuck process
- Heartbeat monitoring via `Heartbeat` from `progress.py`
- Reads Ghidra install from `factory/tools/ghidra/` (resolved relative to repo root)

Configuration via environment:
- `GHIDRA_HOME` — path to Ghidra installation (override for `factory/tools/ghidra`)
- `GHIDRA_HEARTBEAT_SEC` — heartbeat interval (default: 60s)
- `GHIDRA_NO_PROGRESS=1` — suppress heartbeat output

### `frida_engine.py`
Dynamic binary instrumentation via Frida. Handles:
- Spawning or attaching to processes
- Loading JavaScript hooks
- Event capture and result serialization

Frida is an **optional dependency** — install with `pip install aether-re[frida]`.

### `macho_discovery.py`
Scans a directory tree for Mach-O binaries (executables, dylibs, frameworks). Produces a catalog of discovered binaries for downstream analysis.

### `bundle_inventory.py`
Tier A of the extraction pipeline: catalogs every file in an app bundle with BLAKE3 hashes, size, kind classification, symlink detection, and container-candidate flagging. Writes `BUNDLE_INDEX.json`.

Modes:
- `explore` (default) — fast scan, may skip large files, allows SHA256 fallback
- `ingest` — strict mode: all files hashed with BLAKE3, validates self-containment

### `asset_extractor.py` / `asset_extractor_v2.py`
Tier B: extracts embedded assets (images, strings, data blobs) from binaries and container files identified by the bundle inventory.

### `encryption_analyzer.py`
Frida-based detection of cryptographic operations at runtime. Subclasses `FridaEngine`.

### `progress.py`
Standardized progress reporting for long-running operations.
- `Heartbeat` — periodic stderr heartbeat with elapsed time and metrics
- `StatusWriter` — atomic machine-readable status files (txt or JSON)
- `get_poll_interval()` — env-configurable poll interval helper

---

## Data Flow

### Static Analysis Path
```
target binary
    → macho_discovery  (enumerate binaries)
    → bundle_inventory (catalog files + hashes → BUNDLE_INDEX.json)
    → ghidra_engine    (decompile → .cpp/.h per function)
    → fixup/*          (post-process decompiled output)
    → analyze_call_graph (build call graph → call_graph.json)
    → reporting        (generate reports)
```

### Dynamic Tracing Path
```
target process (running)
    → frida_engine     (attach + load hooks)
    → encryption_analyzer (detect crypto ops)
    → capture/         (record events)
    → reporting        (generate trace reports)
```

---

## Target Layout

Each target lives under `targets/<TargetName>/` with a standard structure managed by `factory/core/target_layout.py`:

```
targets/<TargetName>/
├── MANIFEST.json           # target metadata and pointers to outputs
├── AGENTS.md               # per-target agent notes
├── bundle/                 # extracted app bundle (gitignored)
├── inventory/
│   └── BUNDLE_INDEX.json   # Tier A: bundle catalog
├── decompiled/             # Ghidra output (.cpp/.h files)
├── cache/                  # run status files, logs
│   ├── bundle_status_*.json
│   └── ghidra_stderr_*.log
└── reports/                # analysis reports
```

---

## Progress & Status Infrastructure

All long-running engines use `factory.core.progress`:

```python
from factory.core.progress import Heartbeat, StatusWriter

heartbeat = Heartbeat("ghidra", target="MyBinary", interval_sec=60.0, env_prefix="GHIDRA")
status = StatusWriter("ghidra", target="MyBinary", cache_dir=target_dir / "cache", use_json=True)

status.set_running()
while processing:
    heartbeat.emit(items=count)
status.set_completed(exit_code=0)
```

Heartbeat output goes to stderr (unaffected by stdout pipes). Status files are written atomically.

---

## Environment Variables

| Variable | Used by | Default |
|---|---|---|
| `GHIDRA_HOME` | `ghidra_engine.py` | `factory/tools/ghidra` (repo-relative) |
| `AETHER_TARGETS_DIR` | CLI tools | `targets/` (repo-relative) |
| `GHIDRA_HEARTBEAT_SEC` | `ghidra_engine.py` | 60 |
| `BUNDLE_HEARTBEAT_SEC` | `bundle_inventory.py` | 2 |
| `NO_PROGRESS=1` | all engines | off |

---

## Package Structure

```
aether-re/
├── analysis/          # Call graph and static analysis
├── bin/               # CLI entry points (thin wrappers over core engines)
├── capture/           # Dynamic tracing utilities (placeholder)
├── cli/               # Terminal UI helpers (Rich-based)
├── dynamic_headers/   # Objective-C/system header stubs for Ghidra
├── factory/
│   ├── core/          # All core engines and progress infrastructure
│   └── ghidra_scripts/# ExportEverything.java — Ghidra post-script
├── fixup/             # Decompilation post-processors
├── schemas/           # JSON schemas for MANIFEST.json, BUNDLE_INDEX.json, etc.
├── scripts/           # Standalone analysis and utility scripts
├── targets/           # Per-target workspaces (mostly gitignored)
└── tests/             # pytest test suite
```


## Core Components

### 1. HID Manager (`HIDManager`)
The central component responsible for USB communication.
- **Backend**: Uses `IOHIDManager` (macOS IOKit) for HID I/O and uses libusb for the display bulk endpoint.
- **Threading Model**:
    - **Input Thread**: Runs the `CFRunLoop` for IOKit callbacks. Handles incoming reports (Buttons, Encoders, Pads).
    - **Output Thread**: A dedicated thread for sending reports to the device. This is critical for performance.
- **Async Output Engine**:
    - To prevent input blocking (latency), all output requests (`setLED`, `sendDisplay`) are pushed to a thread-safe queue.
    - **State Coalescing**: The output loop intelligently merges pending updates. If multiple updates for the same Report ID (e.g., Pad LEDs) accumulate while the USB bus is busy, only the latest state is sent. This prevents "death spirals" of lag.

### 2. Protocol Handler (`ProtocolHandler`)
Parses raw HID reports into high-level events.
- **Input**: Receives raw byte arrays from `HIDManager`.
- **Processing**: Decodes Report 0x01 (Buttons/Encoders) and Report 0x20 (Pad Pressure).
- **Output**: Dispatches events to registered listeners (e.g., MIDI bridge, Lua scripts).

### 3. Device Abstraction
- **`MaschineStudioController`**: Represents the specific logic for the Maschine Studio.
- **`MaschineStudio::LEDColor`**: Enum for the hardware's specific color palette.

## Data Flow

### Input Path (Latency < 1ms)
1.  **Hardware**: User presses a pad.
2.  **USB**: Device sends HID Report 0x20 (Pad Pressure).
3.  **OS**: macOS IOKit receives the interrupt.
4.  **HIDManager**: `onInputReport` callback is triggered on the Input Thread.
5.  **ProtocolHandler**: Parses the 12-bit pressure values.
6.  **Application**: Triggers MIDI Note On/Off or internal logic.

### Output Path (Non-Blocking)
1.  **Application**: Logic decides to light up a pad (`setLED`).
2.  **HIDManager**: `queueReport` pushes the request to `m_outputQueue`. **Returns immediately.**
3.  **Output Thread**: Wakes up, checks the queue.
4.  **Coalescer**: Merges duplicate report types.
5.  **USB**:
    - For **Interface 2 HID reports** (LED output, backlight/contrast control), the daemon uses `IOHIDDeviceSetReport`.
    - For **Interface 4 display pixels**, the daemon uses a libusb bulk transfer to the display OUT endpoint.

## Protocols

### Button & LED Protocol
- **Input**: Report 0x01 (Bitmask for buttons, 16-bit for encoders).
- **Output**: Reports 0x80, 0x81, 0x82, 0x83 (Mapped to specific physical regions).
- **Reference**: `docs/PROTOCOL_FINAL_V7.md`

### Display Protocol
- **Type**: Dual 480x272 LCDs.
- **Format**: RGB565 Pixel Data.
- **Transport (Control)**: HID-style control reports `0xF8` (Left) and `0xF9` (Right) for backlight/contrast/inversion (and possibly “unlock”).
- **Transport (Pixels)**: USB bulk stream over Interface 4 using `0x84` (write-rect) + pixel payload + `0x40` (commit).
- **DataFormat byte (bulk header byte 3)**:
    - **Verified**: `0x20` renders raw RGB565 big-endian payloads.
    - **Verified**: `0x60` is an encoded/tokenized stream mode:
        - Uses the same base RGB565 MSB-first packing as `0x20` for pixel emission (the decompiled pixel packer masks off `0x40`).
        - Enforces even alignment of X/width for updates.
        - Encoded payload is a u32 token stream with an explicit terminator token (`0x03...`).
        - Current decoder tooling supports opcodes `0x00/0x01/0x02/0x03` on captured blobs.

- **References**:
    - `docs/knowledge_base/Maschine_Studio_Display_Protocol.md`
    - `docs/archive/historical/PROTOCOL_VS_DECOMPILED.md` (decompile correlation + evidence links)
    - `archive/fmt60_decode.py` (decode captured `0x60` blobs to images; `--ops-csv` for opcode-run correlation)

### Hardware-Verified Display Workflows

- **Synthetic mixer demo (raw write-rect)**: `--display-mixer` renders a simple “mixer” UI (4 channels per screen) using raw `DataFormat=0x20` write-rect updates.
- **Evidence capture + offline verification**: with `--display-mixer-record-dir`, the daemon records the exact `0x84 ... 0x40` blobs it sends; `archive/replay_fmt20_rects.py` reassembles those rect updates into per-display PPM images for offline inspection.

## UI Component Architecture (Phase 1)

### Overview
AetherForge UI components use a hybrid build system that supports both standalone applications and embedded panels within AetherForge Studio. Components can be built as static libraries (release) or dynamic plugins (development hot-reload).

### Component System
- **Base Classes**:
  - `Panel`: Abstract interface for dockable panels
  - `Component`: Metadata interface for component registry
- **Core Components**:
  - `RadialMenuPanel`: Context-sensitive radial menu (Development)
  - `InspectorPanel`: Property editor with presets (Development)
  - `DeviceViewPanel`: Interactive device editor (Prototype)
- **Registry**: `ComponentRegistry` for discovery, filtering, and instantiation
- **Build Modes**:
  - `AETHER_DEV_MODE=OFF`: Static libraries (.a) - Release builds
  - `AETHER_DEV_MODE=ON`: Shared libraries (.dylib) - Hot-reload

### Data Flow
1. **Component Registration**: Components register in `component_registry.json`
2. **Discovery**: Studio/apps query registry for available components
3. **Instantiation**: Factory pattern creates component instances
4. **Integration**: Components embed as panels or run standalone

### Directory Structure (UI)
- `AetherControlEditor/src/ui/`: UI component source
  - `core/`: Base classes (Panel, Component)
  - `components/`: Concrete implementations (menus/, panels/, widgets/)
  - `managers/`: Coordination systems (PanelManager, ThemeManager)
  - `registry/`: Component discovery (ComponentRegistry)
- `AetherControlEditor/data/ui/`: Component metadata and configs
  - `component_registry.json`: Central component catalog
- `docs/ui_catalog/`: Component documentation
  - `00_UI_Map.md`: Visual hierarchy and tracking
  - `components/*.md`: Per-component documentation

### References
- **UI Architecture**: `docs/ui_catalog/00_UI_Map.md`
- **Component Registry**: `AetherControlEditor/data/ui/component_registry.json`
- **Radial Menu**: `docs/ui_catalog/components/radial_menu.md`

## Directory Structure
- `src/daemon/`: Core C++ source code.
- `src/daemon/hid_manager.cpp`: Low-level USB handling.
- `docs/`: Protocol documentation and mappings.
- `targets/`: Local-only analysis workspace (ignored by git; do not commit).
- `AetherControlEditor/`: UI component system and device editor.
- `AetherControlEditor/src/ui/`: UI component libraries (Phase 1+).
- `docs/ui_catalog/`: UI component documentation and tracking.
