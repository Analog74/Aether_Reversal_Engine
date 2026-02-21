# TouchOSC — Target Notes

**Extracted**: 2026-02-21 00:57 UTC
**Source**: macOS universal binary app bundle
**App**: TouchOSC 1.4.8 (`net.hexler.lex`)
**Binaries**: Universal Mach-O (x86_64 + arm64)

---

## Directory Layout

| Path | Contents |
|------|----------|
| `binary/` | TouchOSC main binary + `analysis/` (strings/symbols/otool outputs) |
| `frameworks/Sparkle/` | Sparkle.framework binary + NIBs + strings + Info.xml + `analysis/` |
| `apps/Autoupdate/` | Autoupdate + fileop binaries + NIBs + strings + analysis dirs |
| `resources/nibs/` | Base.lproj/MainMenu.nib (main app UI — ibtool decompiled) |
| `resources/asset_catalog/` | Assets.car metadata (xcrun assetutil JSON) |
| `resources/misc/` | AppIcon.icns, document icons, dsa_pub.pem, PkgInfo |
| `plists/` | Info.plists converted to XML1 (app + Sparkle + Autoupdate) |
| `strings/` | Placeholder (app has no separate localized strings dir) |
| `reports/` | extraction_report.md |

---

## Binary Summary

| Binary | Stats |
|--------|-------|
| `TouchOSC` | 359993 strings, 161974 symbols, 56 ObjC classes |
| `Sparkle` | 5240 strings, 5974 symbols, 90 ObjC classes |
| `Autoupdate` | 2027 strings, 1839 symbols, 36 ObjC classes |
| `fileop` | 589 strings, 403 symbols, 4 ObjC classes |

---

## Key Architecture Observations

- **JUCE Framework** — primary UI/audio framework (C++ templates in symbol table)
- **POCO Libraries** — networking, threading, utilities
- **OpenGL/GLM** — graphics rendering with math library
- **Lua scripting** — embedded scripting engine (BindLX / BindGLM symbols)
- **OSC Protocol** — /ping, /pong, /connections/osc, /connections/midi, etc.
- **Full MIDI I/O** — SysEx, bridge, gamepad support
- **Sparkle** — macOS software update framework (dsa_pub.pem for signature verification)
- **HTTP server** — embedded web UI for configuration (preferences menus found in strings)

---

## Document Formats

| Extension | Format | Contents |
|-----------|--------|----------|
| `.tosc` | ZIP archive containing XML | TouchOSC layout (new format) |
| `.touchosc` | Binary plist | TouchOSC Classic layout |

---

## Analysis TODOs

- [ ] Run Ghidra on `binary/TouchOSC` (universal; target `arm64` slice)
- [ ] Extract ObjC class hierarchy (`otool -ov` → `analysis/objc_classes.txt`)
- [ ] Cross-reference OSC/MIDI strings with call graph
- [ ] Decompile Lua bytecode modules embedded in binary
- [ ] Extract 420+ JPEG images via deeper binary carving
- [ ] Map HTTP server UI config to settings schema
- [ ] Document `.tosc` XML schema from strings evidence
