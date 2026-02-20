# Target: [NAME]

> Created: 2025-12-13 05:50 UTC • Revised: 2026-01-18 03:48 UTC

# Date: 2025-11-22 07:15 UTC
# Status: In Progress / Complete / Verified
# Original SHA256: 
# Rebuilt SHA256: 
# Notes:

## Bridge Mapping Mode

Record which mapping behavior the target expects:

- `--mapping-mode hybrid|template|internal`
	- `template` = template-driven “automap” (CC-keyed semantics, uses `--button-cc-map`)
	- `internal` = internal/legacy behavior (per-button semantics, ignores `--button-cc-map`)
	- `hybrid` = per-button override, else template semantics (default)

Runtime toggle over OSC:

- `/aether/settings/automap = 0|1`
- `/aether/settings/mapping_mode = 0|1|2`
- `/aether/settings/query = 1` (re-publish current values)

Helper:

```bash
python3 scripts/osc_settings_client.py query --listen
```