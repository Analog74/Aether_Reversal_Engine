# AetherDaemon Architecture

> Created: 2025-12-13 05:50 UTC • Revised: 2026-01-18 03:48 UTC


## Overview
AetherDaemon is a userspace driver for Native Instruments hardware (specifically Maschine Studio) on macOS. It replaces the proprietary `NIHardwareAgent` and `NIUSBAudio` kernel extensions, communicating directly with the hardware via the OS HID stack (IOKit) and (for display streaming) libusb.

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
