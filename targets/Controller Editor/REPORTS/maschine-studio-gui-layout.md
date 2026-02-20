# Maschine Studio — GUI layout summary 📐

This document extracts exact, concrete layout values I found in the Controller Editor codebase and visualizes them. It includes the numeric values, the rendering functions that use them, and small ASCII visuals to show how the metrics map on screen.

---

## Quick summary (top findings) ✅
- Pad cell stride (per-grid cell): **64 × 16 px**
  - Source: `Graphics::renderPadsMatrix` (`decompiled_real/renderPadsMatrix.cpp`)
- Pad inner (drawable) rectangle inside the cell: **~62 × 14 px** (margins 1–2 px)
  - Source: same function (`renderPadsMatrix`) — uses offsets `x+1`..`x+0x3e` and `y+2`..`y+0xF`.
- Top/header small buttons: **42 × 11 px** (`0x2a × 0x0b`)
  - Source: `drawControls` / `Maschine::Graphics::renderTextExt` drawing header rectangles (`decompiled_real/drawControls.cpp`)
- Value gauge / bar lengths: up to **66 px** for small bars (uses `ROUND(value * 66.0)`)
  - Source: `MapUpdateThread::renderValueArea` (`decompiled_real/renderValueArea.cpp`)
- Other box sizes used in value areas: **70 × 14 px** (`0x46 × 0x0e`) and **46 × 14 px** (`0x2e × 0x0e` variants)
  - Source: `renderValueArea` and `renderPad` / rounded box implementations
- MCU / display text buffers: line/stride numbers like **0x37 (55)** bytes and **0x1c (28)** characters per line
  - Source: `MCUDisplay::copyAndSplitTextLineToDisplayBuffers` (`source/src/MCUDisplay.cpp`)

---

## Detailed table 🧾

| UI element | Numeric size / formula | Source (file / function) | Notes |
|---|---:|---|---|
| Pad cell stride (grid cell) | 64 × 16 px (x = col * 0x40, y = row * 0x10) | `renderPadsMatrix` (`decompiled_real/renderPadsMatrix.cpp`) | Grid cell used to place pads; margin applied inside it |
| Pad inner box | x+1 .. x+0x3e (≈62) × y+2 .. y+0xF (≈14) | `renderPadsMatrix` | Inner drawable area (pad face) after 1–2 px margins |
| Pad visual rendering | Uses rounded boxes or sprite tiles (stretched) | `MaschineStudio::DisplayDrawer::renderPad` (`decompiled_real/renderPad.cpp`) | Chooses style by pad state (colors/rounded box or sprite index)
| Header small rects / buttons | 0x2a × 0x0b (42 × 11 px) | `drawControls` (`decompiled_real/drawControls.cpp`) | Three small header blocks drawn with offsets and text overlays |
| Value gauge (bar length) | length = ROUND(value * 66.0) — max ≈ **66 px** | `renderValueArea` (`decompiled_real/renderValueArea.cpp`) | Used for progress bars and small gauges in value areas |
| Value area boxes | 0x46 × 0x0e (70 × 14 px), other boxes like 0x2e, 0x32, etc. | `renderValueArea` and `renderPad` | Multiple box sizes used for different value styles
| Text display buffer | per-line stride: 0x37 bytes (55), chars per line: 0x1c (28) | `MCUDisplay.cpp` | Used for splitting long lines for hardware displays

---

## Visual representations (ASCII) 🖼️

Pad cell (64 × 16) with inner pad (~62 × 14):

```
Column 0 x = col*64 (0)         Column 1 x = 64             Column 2 x = 128
+-------------------------------+-------------------------------+
|  +-------------------------+  |  +-------------------------+  |
|  |   Pad inner area ~62×14 |  |  |   Pad inner area ~62×14 |  |
|  |   (x+1 .. x+62)         |  |  |   (x+65 .. x+127)      |  |
|  +-------------------------+  |  +-------------------------+  |
+-------------------------------+-------------------------------+
(Height per cell = 16 px)         (vertical cell stride = 16 px)
```

Header / top buttons (example — 3 blocks each 42×11):

```
+-----------------------------------------------+
| [  Button 1  ] [  Button 2  ] [  Button 3  ]  <- each ~42×11
+-----------------------------------------------+
```

Value gauge example (bar length up to 66 px):

```
[Label] [========================>         ]  <-- stretched fill, max 66px length
```

---

## Where the values are computed (snippets & guidance) 🔎
- Pads: see `Graphics::renderPadsMatrix` (calculates `uVar4 = param_2 * 0x40` and `uVar5 = param_3 * 0x10`, then draws inside x+1..x+0x3e and y+2..y+0xF)
- Pad visuals: `MaschineStudio::DisplayDrawer::renderPad` chooses sprite index or calls `renderRoundedBox`.
- Header bars and corner pixels: `MapUpdateThreadBase::drawControls` uses `UIA::Picture::drawRectangle(..., 0x2a, 0xb)` and `renderCornerPixels` for the small header areas.
- Value areas: `MapUpdateThread::renderValueArea` draws rectangles, calculates bar fill with `ROUND(value * 66.0)` and draws fills with `fillArea`.
- MCU text: `MCUDisplay::copyAndSplitTextLineToDisplayBuffers` uses `param_1 * 0x37` (55) and `0x1c` characters per line.

---

## Notes & next steps 💡
- These metrics come from the controller renderer and reflect how on-screen previews are composed — they are exact integers used by code (suitable for building precise mockups or verifying a hardware overlay).
- If you want, I can:
  - Export a CSV of these values with file/line references for designers. ✅
  - Generate small reference PNGs (mockups) to scale for a design spec. 🔧

---

If you'd like any group-specific extractions (e.g., all pad-related constants or all display dims for Maschine Studio vs MK3), tell me which subset and I’ll produce a compact table or CSV.
