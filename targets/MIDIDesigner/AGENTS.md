# MIDIDesigner — Target Notes

**Extracted**: 2026-02-21 00:15 UTC
**Source**: iOS IPA-style wrapped bundle (`MIDIDesigner.app/Wrapper/ProX.app/`)
**App**: MIDIDesigner Pro (MIDI controller designer for iPad/iPhone)
**Binary**: `ProX` — ARM64 iOS Mach-O (cannot run on macOS; static analysis only)

---

## Directory Layout

| Path | Contents |
|------|----------|
| `assets/images/` | Loose PNG/JPG assets |
| `assets/icons/` | icon-*.png UI icons |
| `assets/textures/` | texture-*.jpg background textures |
| `assets/ui/` | UI chrome: splashes, buttons, knobs, sliders, etc. |
| `assets/tutorial/` | ipad-tutorial*.png + phone-tutorial*.png (HEIC→PNG converted) |
| `assets/waveforms/` | waveform:*.png LFO waveform graphics |
| `assets/asset_catalog/` | Assets.car metadata + binwalk extraction |
| `assets/bundles/` | LinkKitResources.bundle, Mixpanel.bundle, RevenueCat.bundle contents |
| `audio/` | blank.wav and any other audio |
| `fonts/` | DigitalLCD.ttf |
| `html/` | credits.html |
| `nibs/` | Decompiled .nib → XML (via ibtool) |
| `storyboards/` | Decompiled .storyboardc |
| `plists/` | Info.plist, DR-apps.plist.xml, etc. (binary→XML1) |
| `strings/` | Localizable.strings per locale (en/es/fr/it/ja) |
| `mididesigner/` | .mididesigner preset files converted from binary plist→XML |
| `binary/` | ProX binary copy + analysis (strings, symbols, linked libs, ObjC classes) |
| `frameworks/` | ConfusionUtilFramework / ObjectiveDropboxOfficial / SimpleAlertLib |
| `misc/` | rsa-public-key.txt, SC_Info/, wrapper metadata plists |
| `reports/` | extraction_report.md |

---

## Key Observations

- **Asset catalog** (`Assets.car`): Contains app icons and a small number of programmatic
  assets (colors, gradients). Main UI assets are delivered as loose PNG/JPG files.
- **Fonts**: `DigitalLCD.ttf` — custom LCD-style font used for numeric displays
- **MIDI preset files**: `*.mididesigner` are binary plists converted to readable XML.
  Contains MIDI controller layout definitions.
- **Frameworks**:
  - `ConfusionUtilFramework` — internal utility framework (obfuscated name)
  - `ObjectiveDropboxOfficial` — Dropbox SDK for cloud sync
  - `SimpleAlertLib` — alert presentation utility
  - `Sentry` — crash reporting (binary not fully extracted here)
- **Security**: `rsa-public-key.txt` present — likely for license verification

---

## Analysis TODOs

- [ ] Run Ghidra on `ProX` ARM64 binary (requires Ghidra iOS support / `ghidra_engine.py`)
- [ ] Cross-reference ObjC class dump with MIDI protocol strings
- [ ] Analyze `.mididesigner` XML schema for MIDI mapping format documentation
- [ ] Inspect `ConfusionUtilFramework` for obfuscation patterns
- [ ] Map `Localizable.strings` keys to UI elements
