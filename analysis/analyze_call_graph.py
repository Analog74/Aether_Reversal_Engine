#!/usr/bin/env python3
# Created: 2026-01-08 06:00 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Build call graph from decompiled C++ files."""
import re
import json
from pathlib import Path
from collections import defaultdict
import sys

def extract_function_calls(cpp_content: str, source_func: str) -> list[str]:
    """Extract function calls from decompiled C++ body."""
    calls = []
    # Match function calls: identifier followed by (
    # Look for patterns like: namespace::Class::method(, FunctionName(
    patterns = [
        r'([a-zA-Z_][a-zA-Z0-9_]*(?:::[a-zA-Z_][a-zA-Z0-9_]*)+)\s*\(',  # namespace::func
        r'\b([A-Z][a-zA-Z0-9_]*)\s*\(',  # CapitalizedFunc (likely class methods)
    ]
    for pattern in patterns:
        for match in re.finditer(pattern, cpp_content):
            call_name = match.group(1)
            if call_name and call_name != source_func:
                calls.append(call_name)
    return list(set(calls))

def parse_cpp_file(cpp_path: Path) -> dict:
    """Parse a decompiled .cpp file and extract function info."""
    try:
        content = cpp_path.read_text(encoding='utf-8', errors='ignore')
        # Extract function signature from comment header
        sig_match = re.search(r'/\*\s*([^|]+?)\s*\|', content)
        if not sig_match:
            return None
        
        signature = sig_match.group(1).strip()
        # Extract function name (last part before opening paren)
        name_match = re.search(r'([a-zA-Z_][a-zA-Z0-9_:]*)\s*\(', signature)
        func_name = name_match.group(1) if name_match else cpp_path.stem
        
        # Extract calls from function body
        calls = extract_function_calls(content, func_name)
        
        return {
            'file': str(cpp_path),
            'name': func_name,
            'signature': signature,
            'calls': calls,
            'call_count': len(calls)
        }
    except Exception as e:
        print(f"Error parsing {cpp_path}: {e}", file=sys.stderr)
        return None

def build_call_graph(exec_dir: Path) -> dict:
    """Build call graph from all decompiled files in exec directory."""
    decompiled_dir = exec_dir / 'decompiled_real'
    if not decompiled_dir.exists():
        print(f"No decompiled_real directory in {exec_dir}")
        return {}
    
    print(f"Scanning {decompiled_dir}...")
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    print(f"Found {len(cpp_files)} .cpp files")
    
    graph = {}
    callers = defaultdict(list)  # reverse mapping: who calls this function
    
    for i, cpp_file in enumerate(cpp_files):
        if (i + 1) % 1000 == 0:
            print(f"  Processed {i+1}/{len(cpp_files)}...")
        
        info = parse_cpp_file(cpp_file)
        if info:
            graph[info['name']] = info
            # Build reverse mapping
            for called_func in info['calls']:
                callers[called_func].append(info['name'])
    
    # Add caller info to each function
    for func_name in graph:
        graph[func_name]['called_by'] = callers.get(func_name, [])
        graph[func_name]['caller_count'] = len(callers.get(func_name, []))
    
    return graph

def generate_report(graph: dict, output_dir: Path):
    """Generate call graph analysis reports."""
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # Save full graph as JSON
    json_path = output_dir / 'call_graph.json'
    with json_path.open('w') as f:
        json.dump(graph, f, indent=2)
    print(f"Wrote call graph to {json_path}")
    
    # Generate top callers report
    top_callers = sorted(graph.values(), key=lambda x: x['call_count'], reverse=True)[:100]
    callers_path = output_dir / 'top_callers.txt'
    with callers_path.open('w') as f:
        f.write("Top 100 Functions by Outgoing Calls\n")
        f.write("=" * 80 + "\n\n")
        for func in top_callers:
            f.write(f"{func['name']} → {func['call_count']} calls\n")
            f.write(f"  Signature: {func['signature']}\n")
            if func['calls'][:5]:
                f.write(f"  Calls: {', '.join(func['calls'][:5])}\n")
            f.write("\n")
    print(f"Wrote top callers to {callers_path}")
    
    # Generate top callees report (most called functions)
    top_callees = sorted(graph.values(), key=lambda x: x['caller_count'], reverse=True)[:100]
    callees_path = output_dir / 'top_callees.txt'
    with callees_path.open('w') as f:
        f.write("Top 100 Most-Called Functions\n")
        f.write("=" * 80 + "\n\n")
        for func in top_callees:
            f.write(f"{func['name']} ← {func['caller_count']} callers\n")
            f.write(f"  Signature: {func['signature']}\n")
            if func['called_by'][:5]:
                f.write(f"  Called by: {', '.join(func['called_by'][:5])}\n")
            f.write("\n")
    print(f"Wrote top callees to {callees_path}")
    
    # Stats summary
    stats_path = output_dir / 'call_graph_stats.txt'
    with stats_path.open('w') as f:
        f.write(f"Call Graph Statistics\n")
        f.write("=" * 80 + "\n\n")
        f.write(f"Total functions: {len(graph)}\n")
        f.write(f"Functions making calls: {sum(1 for x in graph.values() if x['call_count'] > 0)}\n")
        f.write(f"Functions being called: {sum(1 for x in graph.values() if x['caller_count'] > 0)}\n")
        total_calls = sum(x['call_count'] for x in graph.values())
        f.write(f"Total call relationships: {total_calls}\n")
        f.write(f"Average calls per function: {total_calls / len(graph):.2f}\n")
    print(f"Wrote stats to {stats_path}")

def main():
    if len(sys.argv) < 2:
        print("Usage: analyze_call_graph.py <exec_dir>")
        print("Example: analyze_call_graph.py targets/TouchOSC/exec/TouchOSC")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    if not exec_dir.exists():
        print(f"Error: {exec_dir} does not exist")
        sys.exit(1)
    
    print(f"Building call graph for {exec_dir}...")
    graph = build_call_graph(exec_dir)
    
    if not graph:
        print("No functions found!")
        sys.exit(1)
    
    output_dir = exec_dir / 'analysis' / 'call_graph'
    generate_report(graph, output_dir)
    print(f"\nCall graph analysis complete! Results in {output_dir}")

if __name__ == '__main__':
    main()
