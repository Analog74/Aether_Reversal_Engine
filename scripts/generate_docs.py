#!/usr/bin/env python3
# Created: 2026-01-08 06:00 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Generate searchable HTML documentation from decompiled code."""
import re
from pathlib import Path
from collections import defaultdict
import sys
import html

def parse_cpp_metadata(cpp_path: Path) -> dict:
    """Extract metadata from decompiled .cpp file."""
    try:
        content = cpp_path.read_text(encoding='utf-8', errors='ignore')
        
        # Extract signature
        sig_match = re.search(r'/\*\s*([^|]+?)\s*\|', content)
        signature = sig_match.group(1).strip() if sig_match else cpp_path.stem
        
        # Extract entry point
        entry_match = re.search(r'Entry:\s*([0-9a-fA-Fx]+)', content)
        entry = entry_match.group(1) if entry_match else None
        
        # Extract namespace/class
        namespace = None
        if '::' in signature:
            parts = signature.split('::')
            namespace = '::'.join(parts[:-1])
        
        # Get first 20 lines of body as preview
        lines = content.splitlines()
        body_start = next((i for i, line in enumerate(lines) if line.strip() and not line.strip().startswith('/*')), 0)
        preview = '\n'.join(lines[body_start:body_start+20])
        
        return {
            'file': cpp_path.name,
            'path': str(cpp_path),
            'signature': signature,
            'entry': entry,
            'namespace': namespace,
            'preview': preview
        }
    except Exception as e:
        print(f"Error parsing {cpp_path}: {e}", file=sys.stderr)
        return None

def generate_html_index(functions: list, output_path: Path):
    """Generate main HTML index page."""
    # Group by namespace
    by_namespace = defaultdict(list)
    for func in functions:
        ns = func.get('namespace') or 'Global'
        by_namespace[ns].append(func)
    
    html_content = f"""<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Decompiled Code Documentation</title>
    <style>
        body {{ font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif; margin: 0; padding: 20px; background: #f5f5f5; }}
        .header {{ background: white; padding: 20px; border-radius: 8px; margin-bottom: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }}
        .header h1 {{ margin: 0 0 10px 0; color: #333; }}
        .stats {{ color: #666; font-size: 14px; }}
        .search {{ margin: 20px 0; }}
        .search input {{ width: 100%; padding: 12px; font-size: 16px; border: 1px solid #ddd; border-radius: 4px; }}
        .namespace {{ background: white; margin-bottom: 20px; border-radius: 8px; padding: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }}
        .namespace h2 {{ margin-top: 0; color: #0066cc; cursor: pointer; }}
        .namespace h2:hover {{ color: #0052a3; }}
        .function-list {{ display: none; margin-top: 15px; }}
        .function-list.expanded {{ display: block; }}
        .function-item {{ padding: 8px; margin: 4px 0; background: #f9f9f9; border-left: 3px solid #0066cc; border-radius: 4px; cursor: pointer; }}
        .function-item:hover {{ background: #eef; }}
        .function-sig {{ font-family: 'Monaco', 'Courier New', monospace; font-size: 13px; color: #333; }}
        .function-entry {{ color: #666; font-size: 11px; margin-left: 10px; }}
        .hidden {{ display: none; }}
    </style>
    <script>
        function toggleNamespace(id) {{
            var list = document.getElementById('ns-' + id);
            list.classList.toggle('expanded');
        }}
        function searchFunctions() {{
            var input = document.getElementById('search').value.toLowerCase();
            var items = document.getElementsByClassName('function-item');
            for (var i = 0; i < items.length; i++) {{
                var sig = items[i].getAttribute('data-sig').toLowerCase();
                if (sig.includes(input)) {{
                    items[i].classList.remove('hidden');
                }} else {{
                    items[i].classList.add('hidden');
                }}
            }}
        }}
        function showFunction(path) {{
            window.location.href = 'functions/' + path.replace('.cpp', '.html');
        }}
    </script>
</head>
<body>
    <div class="header">
        <h1>📚 Decompiled Code Documentation</h1>
        <div class="stats">Total Functions: {len(functions)} | Namespaces: {len(by_namespace)}</div>
    </div>
    
    <div class="search">
        <input type="text" id="search" placeholder="Search functions..." onkeyup="searchFunctions()">
    </div>
"""
    
    for ns_idx, (ns, funcs) in enumerate(sorted(by_namespace.items())):
        html_content += f"""
    <div class="namespace">
        <h2 onclick="toggleNamespace({ns_idx})">{html.escape(ns)} ({len(funcs)} functions) ▼</h2>
        <div class="function-list" id="ns-{ns_idx}">
"""
        for func in sorted(funcs, key=lambda x: x['signature']):
            sig_escaped = html.escape(func['signature'])
            html_content += f"""
            <div class="function-item" data-sig="{sig_escaped}" onclick="showFunction('{func['file']}')">
                <span class="function-sig">{sig_escaped}</span>
                <span class="function-entry">{func.get('entry', 'N/A')}</span>
            </div>
"""
        html_content += """
        </div>
    </div>
"""
    
    html_content += """
</body>
</html>
"""
    
    output_path.write_text(html_content)

def generate_function_page(func: dict, output_path: Path):
    """Generate individual function documentation page."""
    sig_escaped = html.escape(func['signature'])
    preview_escaped = html.escape(func['preview'])
    
    html_content = f"""<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>{sig_escaped}</title>
    <style>
        body {{ font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', sans-serif; margin: 0; padding: 20px; background: #f5f5f5; }}
        .header {{ background: white; padding: 20px; border-radius: 8px; margin-bottom: 20px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }}
        .back {{ color: #0066cc; text-decoration: none; font-size: 14px; }}
        .back:hover {{ text-decoration: underline; }}
        h1 {{ margin: 10px 0; font-size: 18px; font-family: 'Monaco', 'Courier New', monospace; }}
        .meta {{ color: #666; font-size: 14px; margin: 10px 0; }}
        .code {{ background: white; padding: 20px; border-radius: 8px; box-shadow: 0 2px 4px rgba(0,0,0,0.1); }}
        pre {{ margin: 0; font-family: 'Monaco', 'Courier New', monospace; font-size: 13px; line-height: 1.5; overflow-x: auto; }}
    </style>
</head>
<body>
    <div class="header">
        <a href="../index.html" class="back">← Back to Index</a>
        <h1>{sig_escaped}</h1>
        <div class="meta">
            Entry Point: {func.get('entry', 'N/A')} | 
            Source: {func['file']}
        </div>
    </div>
    <div class="code">
        <pre>{preview_escaped}</pre>
    </div>
</body>
</html>
"""
    
    output_path.write_text(html_content)

def main():
    if len(sys.argv) < 2:
        print("Usage: generate_docs.py <exec_dir>")
        print("Example: generate_docs.py targets/TouchOSC/exec/TouchOSC")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    decompiled_dir = exec_dir / 'decompiled_real'
    
    if not decompiled_dir.exists():
        print(f"Error: {decompiled_dir} does not exist")
        sys.exit(1)
    
    print(f"Generating documentation for {exec_dir}...")
    
    # Parse all functions
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    print(f"Processing {len(cpp_files)} functions...")
    
    functions = []
    for i, cpp_file in enumerate(cpp_files):
        if (i + 1) % 1000 == 0:
            print(f"  {i+1}/{len(cpp_files)}...")
        
        func = parse_cpp_metadata(cpp_file)
        if func:
            functions.append(func)
    
    # Generate output
    output_dir = exec_dir / 'analysis' / 'docs'
    output_dir.mkdir(parents=True, exist_ok=True)
    functions_dir = output_dir / 'functions'
    functions_dir.mkdir(exist_ok=True)
    
    print("Generating HTML pages...")
    # Main index
    generate_html_index(functions, output_dir / 'index.html')
    
    # Individual function pages (limit to save time/space)
    for func in functions[:500]:  # First 500 for now
        func_html = functions_dir / func['file'].replace('.cpp', '.html')
        generate_function_page(func, func_html)
    
    print(f"\nDocumentation generated! Open {output_dir / 'index.html'} in a browser")

if __name__ == '__main__':
    main()
