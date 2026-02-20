#!/usr/bin/env python3
"""Module triage for decompiled exec trees.

Produces for a given exec directory and module-name pattern:
 - entry->sink call paths (depth-limited)
 - thread-boundary map (heuristic)
 - state-mutation map (heuristic)
 - hotspots / risk summary (allocs/locks on audio thread, unguarded writes)

Usage: triage_module.py <exec_dir> <module_pattern>
Example: triage_module.py targets/REAPER/exec/REAPER ReaProject

This is heuristic/static analysis over decompiled filenames + symbol text.
"""
from pathlib import Path
import re
import json
import sys
from collections import deque, defaultdict

AUDIO_HINTS = [
    r'ProcessSamples', r'Process_double', r'Process_float', r'GetSamples', r'AudioStreamer',
    r'PCM_', r'pcm_', r'Sink', r'Source', r'OnSample', r'Render_ProcessMasterSamples', r'VST3_Process',
    r'buffer_switch', r'BufferSwitch', r'IsAudioThread', r'clap_host_is_audio_thread'
]
UI_HINTS = [r'WndProc', r'OnCommand', r'OnPaint', r'Dlg', r'Wnd', r'UI', r'Display', r'RunIdle', r'View']
WORKER_HINTS = [r'threadProc', r'thread', r'Worker', r'RunWork', r'pool', r'worker', r'RunPreviewFromWorker']

SINK_PATTERNS = [
    r'^Set', r'^Save', r'^Write', r'^Store', r'^Add', r'^Remove', r'^Delete', r'^Insert',
    r'Alloc|Malloc|free|fopen|fwrite|fclose|fread|Create', r'Lock|Unlock|pthread_mutex|pthread_cond',
]

ALLOC_HINTS = [r'alloc', r'Alloc', r'malloc', r'new', r'WDL_HeapBuf', r'calloc', r'realloc']
LOCK_HINTS = [r'pthread_mutex_lock', r'_pthread_mutex_lock', r'Lock', r'Mutex']
PARSE_HINTS = [r'parse', r'load', r'Read', r'FromArchive', r'Import', r'Unpack']

MAX_PATH_DEPTH = 6


def build_graph_from_decompiled(exec_dir: Path) -> dict:
    d = {}
    decompiled = exec_dir / 'decompiled_real'
    if not decompiled.exists():
        raise SystemExit(f"decompiled_real not found in {exec_dir}")

    cpp_files = list(decompiled.glob('*.cpp'))
    stems = {p.stem for p in cpp_files}

    # Precompile regex to find calls to any known stem (word boundary + stem + \()
    # To keep it fast, only consider stems longer than 3 chars.
    candidate_stems = [s for s in stems if len(s) > 3]
    candidate_stems.sort(key=len, reverse=True)
    call_regex = re.compile(r'\b(' + '|'.join(re.escape(s) for s in candidate_stems[:20000]) + r')\s*\(')

    for p in cpp_files:
        text = p.read_text(encoding='utf-8', errors='ignore')
        name = p.stem
        calls = set(m.group(1) for m in call_regex.finditer(text))
        d[name] = {
            'file': str(p),
            'calls': sorted(calls),
            'text_snippet': text[:400]
        }
    # build reverse map
    callers = defaultdict(list)
    for fn, info in d.items():
        for cal in info['calls']:
            if cal in d:
                callers[cal].append(fn)
    for fn in d:
        d[fn]['called_by'] = sorted(callers.get(fn, []))
        d[fn]['caller_count'] = len(d[fn]['called_by'])
        d[fn]['call_count'] = len(d[fn]['calls'])
    return d


def label_thread(fn_name: str, text_snippet: str) -> str:
    # audio
    for pat in AUDIO_HINTS:
        if re.search(pat, fn_name, re.I) or re.search(pat, text_snippet, re.I):
            return 'audio'
    # ui/main
    for pat in UI_HINTS:
        if re.search(pat, fn_name, re.I) or re.search(pat, text_snippet, re.I):
            return 'main'
    # worker
    for pat in WORKER_HINTS:
        if re.search(pat, fn_name, re.I) or re.search(pat, text_snippet, re.I):
            return 'worker'
    return 'unknown'


def is_sink(fn_name: str, text_snippet: str) -> bool:
    for pat in SINK_PATTERNS:
        if re.search(pat, fn_name) or re.search(pat, text_snippet, re.I):
            return True
    return False


def detects_alloc(text: str) -> bool:
    t = text
    return any(re.search(p, t) for p in ALLOC_HINTS)


def detects_lock(text: str) -> bool:
    t = text
    return any(re.search(p, t) for p in LOCK_HINTS)


def detects_parse(text: str) -> bool:
    t = text
    return any(re.search(p, t, re.I) for p in PARSE_HINTS)


def find_entry_functions(graph: dict, module_pattern: str) -> list:
    # Entries: functions in module with low caller_count OR functions that look like initializers/Load/Init
    entries = []
    for fn, info in graph.items():
        if module_pattern in fn:
            if info['caller_count'] == 0:
                entries.append(fn)
            elif re.search(r'Init|Load|Create|Open|Start|Run|ReaProject__ReaProject', fn):
                entries.append(fn)
    # de-dupe
    return sorted(set(entries))


def bfs_paths_to_sinks(graph: dict, start_fns: list, sink_pred, max_depth=MAX_PATH_DEPTH):
    results = defaultdict(list)  # start->list of paths (each path is list of fn names)
    for start in start_fns:
        q = deque()
        q.append((start, [start]))
        visited = set()
        while q:
            cur, path = q.popleft()
            if len(path) > max_depth:
                continue
            if sink_pred(cur, graph[cur]['text_snippet']):
                results[start].append(path)
                # do not expand sinks further
                continue
            for cal in graph[cur]['calls']:
                if cal not in graph:
                    continue
                if (cur, cal) in visited:
                    continue
                visited.add((cur, cal))
                if cal in path:
                    continue  # avoid cycles
                q.append((cal, path + [cal]))
    return results


def rank_hotspots(graph: dict, module_pattern: str, top_n=10) -> list:
    scores = []
    for fn, info in graph.items():
        if module_pattern in fn:
            score = info.get('caller_count', 0) + info.get('call_count', 0)
            scores.append((score, info['caller_count'], info['call_count'], fn))
    scores.sort(reverse=True)
    return scores[:top_n]


def build_thread_map(graph: dict) -> dict:
    out = {}
    for fn, info in graph.items():
        out[fn] = label_thread(fn, info['text_snippet'])
    return out


def build_state_mutation_map(graph: dict) -> dict:
    out = {}
    for fn, info in graph.items():
        text = info['text_snippet']
        mutates = False
        reasons = []
        if is_sink(fn, text):
            mutates = True
            reasons.append('name_matches_sink_pattern')
        if detects_alloc(text):
            mutates = True
            reasons.append('allocates_memory')
        if detects_lock(text):
            mutates = True
            reasons.append('uses_lock')
        if detects_parse(text):
            reasons.append('parsing_or_loading')
        out[fn] = {
            'mutates': mutates,
            'reasons': reasons,
            'caller_count': info.get('caller_count', 0),
            'call_count': info.get('call_count', 0)
        }
    return out


def find_no_go_paths(graph: dict, thread_map: dict, state_map: dict, module_pattern: str):
    issues = {'alloc_on_audio_thread': [], 'lock_on_audio_thread': [], 'unguarded_writes_on_audio_thread': [], 'parse_on_audio_thread': []}
    for fn, info in graph.items():
        if module_pattern not in fn:
            continue
        thr = thread_map.get(fn, 'unknown')
        if thr == 'audio':
            if detects_alloc(info['text_snippet']):
                issues['alloc_on_audio_thread'].append(fn)
            if detects_lock(info['text_snippet']):
                issues['lock_on_audio_thread'].append(fn)
            # unguarded writes: state_map marks mutates but function body doesn't show locks
            if state_map[fn]['mutates'] and not detects_lock(info['text_snippet']):
                issues['unguarded_writes_on_audio_thread'].append(fn)
            if detects_parse(info['text_snippet']):
                issues['parse_on_audio_thread'].append(fn)
    return issues


def triage(exec_dir: Path, module_pattern: str):
    graph = build_graph_from_decompiled(exec_dir)
    output_dir = exec_dir / 'analysis' / 'triage' / module_pattern
    output_dir.mkdir(parents=True, exist_ok=True)

    entries = find_entry_functions(graph, module_pattern)
    entry_sink_paths = bfs_paths_to_sinks(graph, entries, is_sink)

    thread_map = build_thread_map(graph)
    state_map = build_state_mutation_map(graph)
    hotspots = rank_hotspots(graph, module_pattern)
    issues = find_no_go_paths(graph, thread_map, state_map, module_pattern)

    # Write outputs
    (output_dir / 'entry_sink_paths.json').write_text(json.dumps(entry_sink_paths, indent=2))
    (output_dir / 'thread_map.json').write_text(json.dumps({k: v for k, v in thread_map.items() if module_pattern in k}, indent=2))
    (output_dir / 'state_map.json').write_text(json.dumps({k: v for k, v in state_map.items() if module_pattern in k}, indent=2))
    (output_dir / 'hotspots.json').write_text(json.dumps([{ 'score': s, 'caller_count': c, 'call_count': cc, 'fn': fn } for s,c,cc,fn in hotspots], indent=2))
    (output_dir / 'no_go_issues.json').write_text(json.dumps(issues, indent=2))

    # human-readable summary
    with (output_dir / 'summary.txt').open('w') as f:
        f.write(f"Module triage summary for {module_pattern}\n\n")
        f.write(f"Entries discovered: {len(entries)} (example 10)\n")
        for e in entries[:10]:
            f.write(f"  - {e}\n")
        f.write('\nTop hotspots:\n')
        for score, callers, calls, fn in hotspots:
            f.write(f"  - {fn}: score={score} (callers={callers}, calls={calls})\n")
        f.write('\nNo-go issues:\n')
        for k, v in issues.items():
            f.write(f"  {k}: {len(v)}\n")
            for item in v[:10]:
                f.write(f"    - {item}\n")

    print(f"Triage artifacts written to {output_dir}")


if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: triage_module.py <exec_dir> <module_pattern>")
        sys.exit(1)
    triage(Path(sys.argv[1]), sys.argv[2])
