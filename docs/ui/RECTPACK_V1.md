# RectPack v1 (AFRP)

> Created: 2025-12-15 00:00 UTC • Revised: 2026-01-18 03:48 UTC

RectPack is the fast-playback companion to Aetherforge Scene JSON.

- **A (authoring):** `*.scene.json` (editable, reviewable)
- **B (playback):** `*.rectpack` (binary, compact, no parsing cost)

This document defines **RectPack v1** and the corresponding IPC send framing used by AetherDaemon.

## Binary format

All integers are **big-endian**.

### Header

| Field | Type | Value |
|---|---:|---|
| magic | bytes[4] | `AFRP` |
| version | u16 | `1` |
| reserved | u16 | `0` |
| rect_count | u32 | number of rect entries |

### Rect entry

Repeated `rect_count` times.

| Field | Type | Notes |
|---|---:|---|
| screen | u8 | 0..N (device-specific) |
| fmt | u8 | `0x20` = RGB565BE |
| reserved | u16 | `0` |
| x | u16 | pixels |
| y | u16 | pixels |
| w | u16 | pixels |
| h | u16 | pixels |
| payload_len | u32 | bytes |
| payload | bytes[payload_len] | raw pixel data |

For `fmt=0x20`, payload is `w*h*2` bytes, RGB565 **big-endian**.

## IPC send framing (AetherDaemon)

The daemon IPC uses a simple 4-byte length prefix framing.

For each rect:

1. Send a framed JSON metadata object:

```json
{"v":1,"type":"cmd.display.rect","ts_ms":123,"msg_id":1,"screen":0,"x":0,"y":0,"w":480,"h":272,"format":32,"len":261120}
```

2. Send a framed binary payload (`len` bytes).

Each frame is:

- `u32be length`
- `length` bytes payload

## Reference implementation

See:

- `scripts/aether_scene_tool.py` (`build_rectpack`, `parse_rectpack`, `send_rects_over_ipc`)
