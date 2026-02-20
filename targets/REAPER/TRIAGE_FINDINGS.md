TRIAGE SUMMARY — REAPER (short)

Generated: 2026-02-19 UTC
Location of detailed artifacts: `exec/REAPER/analysis/triage/`

High‑priority runtime risks found (keep triage artifacts for follow-up):

1) Heap allocation / resize inside audio callback
- Function: audioStreamer_CoreAudio::onsamples
- File: `exec/REAPER/decompiled_real/audioStreamer_CoreAudio__onsamples.cpp`
- Issue: calls to `WDL_HeapBuf::Resize` (runtime heap growth inside audio path)
- Severity: Critical (real‑time safety) — recommend immediate design review and pre‑allocation

2) Blocking synchronization in audio processing
- Function: VST_HostedPlugin::ProcessSamples
- File: `exec/REAPER/decompiled_real/VST_HostedPlugin__ProcessSamples.cpp`
- Issue: `_pthread_mutex_lock` / `LOCK()` / `UNLOCK()` observed inside processing path
- Severity: High — replace blocking waits with non‑blocking or move work off audio thread

3) State mutation / file I/O sinks (audit caller contexts)
- Functions: ReaProject::CommitPooledEnvEdits, SaveProject
- Files: `ReaProject__CommitPooledEnvEdits.cpp`, `SaveProject.cpp`
- Issue: persistent-state commits & file writes — verify not reachable from audio thread
- Severity: Medium — ensure proper locking and defer non‑critical I/O

Recommended immediate follow-ups (separate task):
- Add unit/integration tests that assert: no allocations/locks/file I/O inside audio-thread functions.
- Trace callers for the flagged functions to confirm thread context.
- Replace or mitigate blocking primitives in audio path and pre‑allocate buffers.

Notes:
- All triage outputs and call‑graph summaries are preserved under `exec/REAPER/analysis/`.
- A `PACKAGE_FREEZE.json` placeholder was added to `exec/REAPER/`. Run `python3 scripts/generate_package_freeze.py --target targets/REAPER` to compute and populate SHA256 checksums for the key files and validate the freeze.

