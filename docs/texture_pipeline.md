# Texture Recovery Pipeline

> Created: 2026-02-20 00:00 UTC • Revised: 2026-02-20 00:00 UTC

## Overview

The texture recovery pipeline extracts raw GPU images from macOS binaries that use
`v::TextureAtlas::AddRegion` (the pattern used by TouchOSC and similar JUCE/custom
rendering engines). Images are stored as raw RGBA byte arrays in the binary's
`__DATA` segment — there are no file-magic headers, so `binwalk` carves fail.

The pipeline is two stages:

```
Binary + Ghidra project
      ↓
[Stage A] ExtractTextureAtlas.java     (Ghidra, Java)
      → texture_atlas.json
      ↓
[Stage B] tools/atlas_recover          (Rust CLI)
   or   scripts/reconstruct_textures.py
      → images/*.png
      → reconstruction_report.json
      → contact_sheet.png  (optional)
```

---

## Stage A — `ExtractTextureAtlas.java`

**File:** `factory/ghidra_scripts/ExtractTextureAtlas.java`

### What it does
Groups every callsite of `v::TextureAtlas::AddRegion` by caller function,
decompiles each distinct caller once, then walks the PcodeOpAST def-chain from
each `CALL` instruction to statically recover the pixel-buffer virtual address,
image dimensions, and texture format.

### Run command
```bash
$GHIDRA_HOME/support/analyzeHeadless \
  targets/TouchOSC/exec/TouchOSC/ghidra_projects proj_TouchOSC_* \
  -process TouchOSC \
  -postScript ExtractTextureAtlas.java targets/TouchOSC/textures/texture_atlas.json \
  -scriptPath factory/ghidra_scripts \
  -noanalysis
```

### Output: `texture_atlas.json`

```json
{
  "binary":          "TouchOSC",           // string — binary filename
  "arch":            "arm64",              // "arm64" | "x86_64"
  "add_region_addr": "0x1004b2abc",        // hex string — AddRegion symbol vaddr
  "total_callsites": 850,                  // integer — callsite count before dedup
  "callsites": [
    {
      "call_addr":          "0x100012340", // hex string — CALL instruction address
      "caller_func":        "v::TextureAtlas::Initialize",  // string | null
      "this_ptr":           "0x10000001",  // hex string | null — 'this' arg
      "format":             "RGBA8",       // see Texture Format Values below
      "dims_ptr":           "0x10002000",  // hex string | null — dims struct vaddr
      "width":              64,            // integer OR "UNKNOWN"  ← mixed type!
      "height":             64,            // integer OR "UNKNOWN"  ← mixed type!
      "pixels_ptr":         "0x10020000",  // hex string — pixel buffer vaddr
      "confidence":         "HIGH",        // see Confidence Values below
      "confidence_detail":  "pixels+dims+format resolved"  // string | null
    }
  ]
}
```

#### `width` / `height` — Mixed-Type Contract
**This is the critical schema invariant.** Both fields are either:
- An **integer** (e.g. `64`) — static analysis resolved the value
- The **string** `"UNKNOWN"` — static analysis could not resolve the value

Do not assume they are always integers. Parsers MUST handle both.

#### Texture Format Values (`format` field)
| Value | Bytes/pixel | Notes |
|---|---|---|
| `"A8"` | 1 | Single alpha channel; expand to greyscale RGBA |
| `"R8"` | 1 | Red channel only; expand to `[r, 0, 0, 255]` |
| `"RGB8"` | 3 | 3-channel; append alpha=255 on decode |
| `"RGBA8"` | 4 | Native format; passthrough |
| `"RGBA16F"` | 8 | 4 × `float16` LE; clamp to `[0,255]` |
| `"RGBA32F"` | 16 | 4 × `float32` LE; clamp to `[0,255]` |
| `"UNKNOWN"` | 4 | Fallback to RGBA8 |

Any format may carry an `_INFERRED` suffix (e.g. `"RGBA8_INFERRED"`) — strip it
before matching. Rust trims this with `.trim_end_matches("_INFERRED")`.

#### Confidence Values
| Value | Meaning |
|---|---|
| `"HIGH"` | `pixels_ptr`, `width`, `height`, and `format` all resolved |
| `"MEDIUM"` | `pixels_ptr`, `width`, `height` resolved; format unknown |
| `"LOW"` | Only `pixels_ptr` resolved |
| `"DECOMPILE_FAILED"` | Decompiler failed for this callsite's function |

---

## Stage B — `tools/atlas_recover` / `scripts/reconstruct_textures.py`

Both tools consume `texture_atlas.json` and produce identical output schemas.
The Rust binary is the production executor; the Python script is the reference
implementation and fixture generator.

### Run command (Rust)
```bash
tools/atlas_recover/target/release/atlas_recover \
  --json   targets/TouchOSC/textures/texture_atlas.json \
  --binary targets/TouchOSC/binary/TouchOSC \
  --out    targets/TouchOSC/textures/ \
  --arch arm64 \
  --min-confidence MEDIUM \
  --contact-sheet
```

### Run command (Python, reference)
```bash
python3 scripts/reconstruct_textures.py \
  --json   targets/TouchOSC/textures/texture_atlas.json \
  --binary targets/TouchOSC/binary/TouchOSC \
  --out    targets/TouchOSC/textures/ \
  --contact-sheet
```

### Output: `reconstruction_report.json`

```json
{
  "binary":     "/path/to/TouchOSC",      // string — absolute path
  "arch":       "arm64",                  // "arm64" | "x86_64"
  "json_input": "/path/to/texture_atlas.json",
  "stats": {
    "attempted":          800,
    "succeeded":          750,
    "rejected_sanity":     30,
    "skipped_confidence":  50,
    "errors":              20
  },
  "comparison": {},                       // populated when --compare is passed
  "results": [
    {
      "call_addr":  "0x100012340",        // hex string — matches callsite call_addr
      "status":     "OK",                 // see Status Values below
      "reason":     "ok: entropy=4.23 variance=892.1",  // human-readable detail
      "width":      64,                   // integer | null
      "height":     64,                   // integer | null
      "format":     "RGBA8",             // string | null
      "confidence": "HIGH",              // mirrors callsite confidence
      "out_path":   "images/0x100012340.png"  // string | null (relative to --out)
    }
  ]
}
```

#### Status Values
| Value | Meaning |
|---|---|
| `"OK"` | Reconstructed, passed sanity check, PNG written |
| `"REJECTED_SANITY"` | PNG written but fails entropy or variance gate; exclude from use |
| `"SKIPPED"` | Not attempted (below `--min-confidence`, missing required fields) |
| `"ERROR"` | Reconstruction failed (bad vaddr, file read error, etc.) |

#### Sanity Gates (both implementations)
| Check | Pass condition | Rejects |
|---|---|---|
| Entropy (BT.601 luma) | `0.05 ≤ entropy ≤ 7.8` | Solid colour (`< 0.05`), pure noise (`> 7.8`) |
| Pixel variance | `variance ≥ 1.0` | All-same-luma images |

**REJECTED_SANITY images are still written to disk** for manual inspection.

#### `comparison` object (when `--compare frida_dump.json` is used)
```json
{
  "matched_callsites":   500,     // callsites found in both static + dynamic results
  "dimension_agreement": 480,     // callsites where width+height agree
  "agreement_pct":       96.0,    // matched/agree * 100
  "only_in_dynamic":     [...],   // callsites present in Frida but not static
  "dim_mismatches":      [...]    // first N dimension disagreements
}
```

---

## Fixture Schema — `fixtures/manifest.json`

Generated by `scripts/reconstruct_textures.py --export-fixtures`. Used as the
ground-truth input for `scripts/check_texture_parity.py`.

```json
[
  {
    "call_addr":    "0x100012340",       // hex string — primary key
    "status":       "OK",                // always "OK" in fixture manifest
    "width":        64,                  // integer | null
    "height":       64,                  // integer | null
    "format":       "RGBA8",             // string | null
    "confidence":   "HIGH",              // string — mirrors callsite confidence
    "pixel_sha256": "abc123def456...",   // SHA-256 hexdigest of the reference PNG
    "filename":     "0x100012340.png"    // basename under fixtures/expected/
  }
]
```

The companion files at `fixtures/expected/<filename>` are the reference PNGs.
Both the manifest and the expected/ directory **must be committed** to act as a
stable golden baseline.

---

## Parity Gate — `scripts/check_texture_parity.py`

Verifies Rust output matches Python golden fixtures.

```bash
# 1. Generate Python gold standard
python3 scripts/reconstruct_textures.py \
    --json    targets/TouchOSC/textures/texture_atlas.json \
    --binary  targets/TouchOSC/binary/TouchOSC \
    --out     targets/TouchOSC/textures/ \
    --export-fixtures

# 2. Run parity gate (fails on any hash mismatch)
python3 scripts/check_texture_parity.py \
    --fixtures targets/TouchOSC/textures/fixtures/manifest.json \
    --json     targets/TouchOSC/textures/texture_atlas.json \
    --binary   targets/TouchOSC/binary/TouchOSC
```

#### Exit codes
| Code | Meaning |
|---|---|
| `0` | All checked hashes match (or no testable entries) |
| `1` | One or more SHA-256 mismatches |
| `2` | Usage or argument error |
| `3` | atlas_recover binary not found or crashed |

#### Output: `parity_report.json`
```json
{
  "fixtures_path":  "/path/to/fixtures/manifest.json",
  "binary":         "/path/to/TouchOSC",
  "arch":           "arm64",
  "min_confidence": "HIGH",
  "total_testable": 750,
  "matched":        750,
  "mismatched":     0,
  "pass":           true,
  "mismatches":     []
}
```

---

## Mach-O Address Translation

Both implementations use the same virtual-address-to-file-offset formula:

```
file_offset = fat_offset + segment.fileoff + (vaddr − segment.vmaddr)
```

Where:
- `fat_offset` = byte offset of the arch slice in the FAT binary (`0` for single-arch)
- `segment.fileoff` = segment's file offset **relative to slice start** (from `LC_SEGMENT_64`)
- `segment.vmaddr` = segment's base virtual address

The `segment_command_64` struct is **72 bytes** (not 64; the "64" in the name refers to
the address width, not the command size).

---

## Extending the Pipeline

### Adding a new pixel format
1. Add enum variant to `Rust: formats::PixelFormat` + `bytes_per_pixel` match arm + `decode_to_rgba8` match arm
2. Add corresponding entry to Python `BYTES_PER_PIXEL` / `PIL_MODES` dicts
3. Add a unit test in `src/formats.rs` covering the new format
4. Update the format table in this document

### Adding a new Stage A extractor (different API)
The Stage B tools are agnostic to the AddRegion calling convention — they only
need valid `texture_atlas.json`. To support a different API:
1. Write a new Ghidra script (or Python script) that emits the same JSON schema
2. Ensure `width`/`height` may be integer or `"UNKNOWN"` per the mixed-type contract
3. Run Stage B unchanged

### Adding a confidence level
1. Add to `Confidence` enum in `tools/atlas_recover/src/reconstruct.rs`
2. Add to Python `CONFIDENCE_RANK` dict
3. Update the confidence table in this document
