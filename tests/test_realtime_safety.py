"""Tests to catch real-time safety regressions in decompiled code.

These tests scan decompiled C++ for known unsafe patterns running on audio-thread
(e.g. allocations, heap-resize, blocking mutexes, file I/O). They intentionally
fail when patterns are present so issues are visible to a solo developer locally.
"""
from pathlib import Path
import re
import pytest

AUDIO_SIG_RE = re.compile(r'ProcessSamples|Process_double|Process_float|GetSamples|AudioStreamer|PCM_|BufferSwitch|VST3_Process', re.I)
DANGER_PATTERNS = {
    'alloc': re.compile(r'\b(malloc|calloc|realloc|new)\b', re.I),
    'heap_resize': re.compile(r'Resize\(|WDL_HeapBuf::Resize', re.I),
    'locks': re.compile(r'(_pthread_mutex_lock|pthread_mutex_lock|pthread_mutex|\bLOCK\()', re.I),
    'file_io': re.compile(r'\b(fopen|fwrite|fread|fclose)\b', re.I),
}

DECOMPILED_DIR = Path('targets/REAPER/exec/REAPER/decompiled_real')


def _collect_audio_candidates():
    if not DECOMPILED_DIR.exists():
        pytest.skip('decompiled_real not present for REAPER')
    for cpp in DECOMPILED_DIR.glob('*.cpp'):
        text = cpp.read_text(encoding='utf-8', errors='ignore')
        # match by filename or by content (function bodies / comments)
        if AUDIO_SIG_RE.search(cpp.stem) or AUDIO_SIG_RE.search(text):
            yield cpp, text


def test_no_allocs_or_blocking_in_audio_callbacks():
    """Fail if audio-thread callbacks contain alloc/resize/locks/file-IO."""
    offenders = []
    for path, src in _collect_audio_candidates():
        matches = []
        for name, pat in DANGER_PATTERNS.items():
            if pat.search(src):
                matches.append(name)
        if matches:
            offenders.append((str(path.relative_to(Path.cwd())), matches))

    if offenders:
        lines = ['Realtime-safety violations found (audio-thread candidates):']
        for fn, muts in offenders:
            lines.append(f'- {fn}: {", ".join(muts)}')
        pytest.fail('\n'.join(lines))
