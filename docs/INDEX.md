# Docs Index

> Created: 2025-12-13 06:07 UTC • Revised: 2026-01-18 03:48 UTC

This is the navigation entrypoint for protocol and architecture docs.

## Start Here

- Project + workflows: `README.md`
- New agent onboarding: `Agent.Handoff.md`
- Protocol reference (living): `docs/protocol/PROTOCOL_REFERENCE.md`
- Protocol API quick reference: `docs/protocol/PROTOCOL_REFERENCE.md#api-quick-reference`
- Daemon ↔ Bridge IPC (v1): `docs/protocol/IPC_REFERENCE.md`
- Release checklist: `docs/RELEASE_CHECKLIST.md`

## Display (Maschine Studio)

- Display protocol (hybrid transport): `docs/knowledge_base/Maschine_Studio_Display_Protocol.md`
- Verification playbook (evidence-first repros): `docs/knowledge_base/Maschine_Studio_Display_Verification_Playbook.md`
- DataFormat notes (`0x20` raw vs `0x60/0x61` encoded): `docs/knowledge_base/Maschine_Studio_Display_DataFormat_Notes.md`

## UI / Presets

- Screen presets (A+B): `AetherDaemon/README.md` (Scene JSON + RectPack + watch/preview helpers)
- RectPack spec (v1): `docs/ui/RECTPACK_V1.md`

## Protocol / Mapping

- Protocol definition (V7): `docs/PROTOCOL_FINAL_V7.md`
- Mapping & protocol surfaces (overview): `docs/MAPPING_OVERVIEW.md`
- Buttons: `docs/BUTTON_INPUT_MAPPING.md`
- Encoders/knobs: `docs/ENCODER_MAPPING.md`
- Master mapping: `docs/MASCHINE_STUDIO_MASTER_MAPPING.md`
- LED mapping (verified): `docs/LED_OUTPUT_MAPPING_VERIFIED.md`

## Touchstrips

- Touchstrips (end-to-end spec + templates integration): `docs/TOUCHSTRIPS.md`
- Maschine Jam touchstrip HID facts: `docs/JAM_HID_PROTOCOL.md`
- Maschine Jam mapping playbook: `docs/JAM_MAPPING.md`

## Architecture / Factory

- Architecture: `docs/ARCHITECTURE.md`
- Factory rules: `docs/FACTORY_RULES.md`
- Target template: `docs/TARGET_TEMPLATE.md`

## Templates

- Templates overview + charts: `docs/TEMPLATES_OVERVIEW.md`
- NI templates format + converter tooling: `docs/NI_TEMPLATES.md`
- Maschine Studio deep parse (Controller Editor): `docs/research/NI_MASCHINESTUDIO_TEMPLATE_DEEP_PARSE.md`
- Maschine Studio template stats (installed templates): `docs/research/NI_MASCHINESTUDIO_TEMPLATE_STATS.md`

## External References

- Third-party pattern notes (TouchOSC/Lemur): `docs/research/EXTERNAL_REFERENCE_PATTERNS.md`

## Historical / Evidence Trails

These can be useful context, but should be treated as evidence trails and validated against current behavior:
- Archived docs index: `docs/archive/README.md`
- Fix reports: `docs/archive/fix_reports/`
	- `docs/archive/fix_reports/FIX_REPORT.md`
	- `docs/archive/fix_reports/FIX_REPORT_V7_ASYNC_LEDS.md`
	- `docs/archive/fix_reports/FIX_REPORT_V9_DISPLAY_HYBRID.md`
	- `docs/archive/fix_reports/HID_OUTPUT_FIX_V8.md`
	- `docs/archive/fix_reports/SUCCESS_REPORT_V1.md`
- Decompiled-vs-doc correlation: `docs/archive/historical/PROTOCOL_VS_DECOMPILED.md`
- Legacy protocol drafts: `docs/archive/legacy_protocol/PROTOCOL_FINAL_V6.md`
