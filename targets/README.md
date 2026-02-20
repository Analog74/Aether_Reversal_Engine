# Targets

Reverse-engineered binary targets analyzed with the Aether RE toolkit.

Each target folder is the analysis output for one binary (application, dylib, firmware, or plugin).
This folder is tracked in the repo for **metadata and source reconstruction only**.
All generated, binary, and extracted content is gitignored and lives locally.

---

## What Agents Should Know

This directory is structured for agent/LLM consumption. Start here:

1. **`INDEX.json`** — machine-readable index of all targets; use this to enumerate and filter targets
2. **`<Target>/AGENTS.md`** — per-target LLM landing doc: purpose, key findings, symbols of interest, status
3. **`<Target>/MANIFEST.json`** — structured metadata: name, version, platform, binary inventory, tags
4. **`<Target>/source/`** — hand-reconstructed headers and source (the highest-value committed artifact)
5. **`<Target>/specs/`** — research CSVs, diagrams, measurements (when present)
6. **`<Target>/reports/`** — analysis summaries and findings documents

Do NOT look for decompiled C++ in this repo — `decompiled/` is local-only and gitignored.
Do NOT look for binary assets — `assets/` content is local-only and gitignored.

---

## Standard Target Structure

```
targets/<Target Name>/
├── MANIFEST.json          machine-readable metadata
├── AGENTS.md              LLM landing doc
├── source/                reconstructed headers + source (committed)
│   ├── include/
│   └── src/
├── specs/                 research artifacts: CSVs, diagrams, SVGs (committed)
├── reports/               analysis findings documents (committed)
├── decompiled/            Ghidra C++ output  ← GITIGNORED / local only
├── assets/                extracted binaries ← GITIGNORED / local only
│   ├── graphics/          icons, UI textures, images
│   ├── audio/             samples, audio files
│   ├── models/            3D meshes, model data
│   └── data/              firmware, encoded blobs, raw data
├── build/                 ← GITIGNORED
├── cache/                 ← GITIGNORED
├── exec/                  ← GITIGNORED
├── bundle/                ← GITIGNORED
└── binary/                ← GITIGNORED
```

---

## MANIFEST.json Schema

Defined in `../schemas/manifest.v1.json`. Key fields:

| Field | Type | Description |
|---|---|---|
| `target` | string | Human-readable target name |
| `binary_name` | string | Primary binary filename |
| `platform` | string | `macos-arm64`, `macos-x64`, `windows-x64`, etc. |
| `version` | string | Binary version if known |
| `status` | string | `not-started`, `in-progress`, `analyzed`, `complete` |
| `tags` | string[] | e.g. `["ni", "maschine", "audio-plugin", "daw", "firmware"]` |
| `decompiled_cpp` | int | Count of decompiled C++ files (local only) |
| `has_assets` | bool | Whether asset extraction has been run locally |

---

## INDEX.json Schema

Defined in `../schemas/targets_index.v1.json`. Array of lightweight target summaries with relative paths.
Use this to enumerate, filter by status/tag, or locate a specific target's folder.

---

## Navigating with an Agent

```python
import json, pathlib

root = pathlib.Path("targets")
index = json.loads((root / "INDEX.json").read_text())

# Filter to in-progress NI targets
ni_targets = [t for t in index if "ni" in t.get("tags", [])]

# Read a target's landing doc
target_path = root / ni_targets[0]["target"]
agents_doc = (target_path / "AGENTS.md").read_text()
```

---

## Adding a New Target

1. Run `scripts/ingest_target.py --binary /path/to/Binary.app` — creates the folder, MANIFEST.json, AGENTS.md stub
2. Fill out `AGENTS.md` purpose + tags as you learn what the binary does
3. Commit `MANIFEST.json`, `AGENTS.md`, and any `source/` or `specs/` you produce
4. All generated content (decompiled/, assets/) stays local
