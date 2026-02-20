# Aether RE

> Generic reverse engineering toolkit — Ghidra headless automation, Frida tracing, binary analysis, decompilation post-processing.

[![License](https://img.shields.io/badge/License-Apache%202.0%20OR%20MIT-blue.svg)](LICENSE)
[![Python](https://img.shields.io/badge/python-3.9%2B-blue.svg)](https://www.python.org/)

## Features

- **Ghidra Headless Engine** — Run Ghidra analysis and decompilation without GUI. Includes infinite-loop detection, heartbeat monitoring, and automatic timeout recovery.
- **Frida Tracing** — Dynamic binary instrumentation for runtime analysis. Capture function calls, hook APIs, inspect memory.
- **Mach-O Discovery** — Automated scanning and cataloging of macOS binaries (dylibs, frameworks, executables).
- **Decompilation Fixup** — Post-process Ghidra output to fix common issues: missing parameters, type inference, bracket normalization.
- **Call Graph Analysis** — Build and visualize function call graphs from decompiled output.
- **Asset Extraction** — Extract embedded resources (images, strings, data blobs) from binaries.

## Installation

```bash
# From source (recommended for development)
git clone https://github.com/Analog74/Aether_Reversal_Engine.git
cd Aether_Reversal_Engine
pip install -e .

# With optional dependencies
pip install -e ".[frida,imaging,dev]"
```

## Quick Start

```bash
# Discover and catalog binaries in a directory
aether-reverse discover /path/to/binaries

# Run Ghidra decompilation on a target
aether-reverse decompile /path/to/binary.dylib --output ./decompiled/

# Trace a running process with Frida
aether-trace --pid 12345 --script hooks.js

# Build call graph from decompiled functions
aether-analyze /path/to/decompiled/ --output call_graph.json
```

## CLI Reference

| Command | Description |
|---------|-------------|
| `aether-reverse discover <path>` | Scan directory for Mach-O/PE binaries |
| `aether-reverse decompile <binary>` | Run Ghidra headless decompilation |
| `aether-reverse extract <binary>` | Extract embedded assets |
| `aether-trace --pid <pid>` | Attach Frida to running process |
| `aether-trace --binary <path>` | Spawn and trace binary |
| `aether-analyze <decompiled/>` | Build call graph from `.cpp` output |

## Architecture

```
┌─────────────────────────────────────────────────────────┐
│                      CLI Layer                          │
│  bin/reverse.py    bin/trace.py    analysis/analyze_*  │
└─────────────────────┬───────────────────────────────────┘
                      │
┌─────────────────────▼───────────────────────────────────┐
│                   Core Engines                          │
│  factory/core/ghidra_engine.py   (headless Ghidra)     │
│  factory/core/macho_discovery.py (binary scanning)      │
│  factory/core/asset_extractor.py (resource extraction)  │
│  factory/core/frida_engine.py    (Frida orchestration)  │
└─────────────────────┬───────────────────────────────────┘
                      │
┌─────────────────────▼───────────────────────────────────┐
│                 Post-Processing                         │
│  fixup/fix_decompilation_issues.py                     │
│  fixup/fix_missing_parameters.py                       │
│  fixup/add_common_types.py                             │
└─────────────────────────────────────────────────────────┘
```

## Package Structure

```
aether-re/
├── analysis/          # Call graph and static analysis
├── bin/               # CLI entry points
├── capture/           # Dynamic tracing utilities (placeholder)
├── cli/               # UI styling helpers (Rich-based)
├── factory/
│   ├── core/          # Core engines (Ghidra, Frida, discovery, extraction)
│   └── ghidra_scripts/# Ghidra Java scripts
└── fixup/             # Decompilation post-processors
```

## Requirements

- Python 3.9+
- Ghidra 10.0+ (for headless decompilation)
- Optional: Frida (for dynamic tracing)

### Dependencies

**Core** (installed automatically):
- `rich` — Terminal formatting
- `pyyaml` — Configuration files

**Optional**:
- `frida-tools` — Dynamic instrumentation (`pip install aether-re[frida]`)
- `pillow` — Image asset extraction (`pip install aether-re[imaging]`)

## Configuration

Set `GHIDRA_HOME` environment variable to your Ghidra installation:

```bash
export GHIDRA_HOME=/Applications/ghidra_11.0_PUBLIC
```

## Contributing

1. Fork the repository
2. Work directly on `main` (no feature branches unless explicitly discussed)
3. Run tests (`pytest`)
4. Submit a pull request

## License

Dual-licensed under Apache 2.0 OR MIT. See [LICENSE](LICENSE) for details.

SPDX-License-Identifier: Apache-2.0 OR MIT
