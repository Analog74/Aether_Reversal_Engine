#!/usr/bin/env python3
"""Safer/faster triage that avoids giant regex alternations.

Same outputs as triage_module.py but uses per-file token scanning + set lookups.
"""
from pathlib import Path
import re
import json
import sys
from collections import defaultdict, deque

TOKEN_CALL_RE = re.compile(r'\b([A-Za-z_][A-Za-z0-9_:]*)\s*\(')

def build_graph(exec_dir: Path):
    decompiled = exec_dir / 'decompiled_real'
    if not decompiled.exists():
        raise SystemExit('decompiled_real missing')
    cpp_files = list(decompiled.glob('*.cpp'))
    stems = {p.stem for p in cpp_files}
    graph = {}
    for p in cpp_files:
        name = p.stem
        text = p.read_text(encoding='utf-8', errors='ignore')
        calls = set(m.group(1) for m in TOKEN_CALL_RE.finditer(text))
        # keep only calls that match known stems (fast set lookup)
        calls = sorted(c for c in calls if c in stems)
        graph[name] = {'file': str(p), 'calls': calls, 'text': text[:500]}
    # reverse map
    callers = defaultdict(list)
    for fn, info in graph.items():
        for cal in info['calls']:
            callers[cal].append(fn)
    for fn in graph:
        graph[fn]['called_by'] = sorted(callers.get(fn, []))
        graph[fn]['caller_count'] = len(graph[fn]['called_by'])
        graph[fn]['call_count'] = len(graph[fn]['calls'])
    return graph


def label_thread(fn, text):
    if re.search(r'ProcessSamples|Process_double|Process_float|GetSamples|AudioStreamer|PCM_|BufferSwitch|VST3_Process', fn, re.I) or re.search(r'ProcessSamples|GetSamples|AudioStreamer|PCM_|BufferSwitch', text, re.I):
        return 'audio'
    if re.search(r'WndProc|OnCommand|OnPaint|Dlg|Wnd|UI|Display|RunIdle', fn, re.I) or re.search(r'WndProc|OnCommand|OnPaint|Dlg|Wnd|UI|Display', text, re.I):
        return 'main'
    if re.search(r'threadProc|thread|Worker|pool|worker', fn, re.I) or re.search(r'threadProc|thread|Worker|pool|worker', text, re.I):
        return 'worker'
    return 'unknown'


def is_sink(fn, text):
    return bool(re.search(r'^(Set|Save|Write|Store|Add|Remove|Delete|Insert)|alloc|malloc|fopen|fwrite|pthread_mutex', fn) or re.search(r'\b(Set|Save|Write|Store|Add|Remove|Delete|Insert)\b', text))


def triage(exec_dir: Path, module_pattern: str):
    graph = build_graph(exec_dir)
    # select module fns
    module_fns = [fn for fn in graph if module_pattern in fn]
    entries = [fn for fn in module_fns if graph[fn]['caller_count'] == 0 or re.search(r'Init|Load|Create|Start|Run', fn)]

    # find entry->sink paths (BFS up to depth 6)
    def sink_pred(fn):
        return is_sink(fn, graph[fn]['text'])
    results = defaultdict(list)
    for start in entries:
        q = deque([(start, [start])])
        seen = set()
        while q:
            cur, path = q.popleft()
            if len(path) > 6:
                continue
            if sink_pred(cur):
                results[start].append(path)
                continue
            for cal in graph[cur]['calls']:
                if cal in path: continue
                q.append((cal, path+[cal]))
    # thread map / state map / hotspots
    thread_map = {fn: label_thread(fn, graph[fn]['text']) for fn in module_fns}
    state_map = {}
    for fn in module_fns:
        text = graph[fn]['text']
        mut = bool(re.search(r'\b(Set|Save|Write|Store|Add|Remove|Delete|Insert)\b', fn) or re.search(r'\b(Set|Save|Write|Store|Add|Remove|Delete|Insert)\b', text) or re.search(r'alloc|malloc|new|pthread_mutex', text))
        reasons = []
        if re.search(r'\b(Set|Save|Write|Store|Add|Remove|Delete|Insert)\b', fn) or re.search(r'\b(Set|Save|Write|Store|Add|Remove|Delete|Insert)\b', text):
            reasons.append('name_write_pattern')
        if re.search(r'alloc|malloc|new', text):
            reasons.append('alloc')
        if re.search(r'pthread_mutex|_pthread_mutex', text):
            reasons.append('uses_lock')
        state_map[fn] = {'mutates': mut, 'reasons': reasons}
    hotspots = sorted([(graph[fn]['caller_count']+graph[fn]['call_count'], fn, graph[fn]['caller_count'], graph[fn]['call_count']) for fn in module_fns], reverse=True)[:20]

    out = exec_dir / 'analysis' / 'triage' / module_pattern
    out.mkdir(parents=True, exist_ok=True)
    (out / 'call_graph_partial.json').write_text(json.dumps({fn: graph[fn] for fn in module_fns}, indent=2))
    (out / 'entry_sink.json').write_text(json.dumps(results, indent=2))
    (out / 'thread_map.json').write_text(json.dumps(thread_map, indent=2))
    (out / 'state_map.json').write_text(json.dumps(state_map, indent=2))
    (out / 'hotspots.json').write_text(json.dumps([{'score':s,'fn':fn,'caller_count':cc,'call_count':c} for s,fn,cc,c in hotspots], indent=2))
    print('wrote', out)

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print('usage: triage_fast.py <exec_dir> <module_pattern>')
        sys.exit(1)
    triage(Path(sys.argv[1]), sys.argv[2])
