#!/usr/bin/env python3
# Created: 2026-01-08 06:17 UTC • Last Modified: 2026-01-08 07:30 UTC
"""Extract Lua API bindings from decompiled code."""
import re
import json
from pathlib import Path
from collections import defaultdict
import sys

def extract_lua_bindings(decompiled_dir: Path) -> dict:
    """Extract Lua API function bindings from decompiled C++."""
    bindings = defaultdict(list)
    
    # Look for sol::state registration patterns
    patterns = [
        (r'\.set_function\("([^"]+)"', 'function'),
        (r'\.new_usertype<([^>]+)>', 'usertype'),
        (r'\["([^"]+)"\]\s*=\s*&', 'method'),
        (r'sol::property\(&([^,\)]+)', 'property'),
    ]
    
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    print(f"Scanning {len(cpp_files)} files for Lua bindings...")
    
    for cpp_file in cpp_files:
        try:
            content = cpp_file.read_text(encoding='utf-8', errors='ignore')
            
            # Check if this file contains Lua bindings
            if 'sol::' not in content and 'lua_' not in content:
                continue
            
            # Extract function signature for context
            sig_match = re.search(r'/\*\s*([^|]+)', content)
            context = sig_match.group(1).strip() if sig_match else cpp_file.stem
            
            # Look for binding patterns
            for pattern, binding_type in patterns:
                for match in re.finditer(pattern, content):
                    name = match.group(1)
                    bindings[binding_type].append({
                        'name': name,
                        'context': context,
                        'file': cpp_file.name
                    })
        except Exception as e:
            print(f"Error processing {cpp_file}: {e}", file=sys.stderr)
    
    return dict(bindings)

def extract_osc_handlers(decompiled_dir: Path) -> list:
    """Extract OSC message handlers."""
    handlers = []
    
    cpp_files = list(decompiled_dir.glob('*.cpp'))
    
    for cpp_file in cpp_files:
        try:
            content = cpp_file.read_text(encoding='utf-8', errors='ignore')
            
            # Look for OSC path strings near message handling
            for match in re.finditer(r'["\']/([\w/]+)["\']', content):
                path = '/' + match.group(1)
                
                # Check if it's near OSC-related code
                snippet = content[max(0, match.start()-200):match.end()+200]
                if any(kw in snippet for kw in ['OSC', 'osc', 'Message', 'Address', 'Bundle']):
                    handlers.append({
                        'path': path,
                        'file': cpp_file.name,
                        'context_snippet': snippet[:100]
                    })
        except Exception:
            pass
    
    return handlers

def main():
    if len(sys.argv) < 2:
        print("Usage: extract_lua_api.py <exec_dir>")
        sys.exit(1)
    
    exec_dir = Path(sys.argv[1])
    decompiled_dir = exec_dir / 'decompiled_real'
    
    if not decompiled_dir.exists():
        print(f"Error: {decompiled_dir} does not exist")
        sys.exit(1)
    
    print("Extracting Lua API bindings...")
    bindings = extract_lua_bindings(decompiled_dir)
    
    print("Extracting OSC handlers...")
    handlers = extract_osc_handlers(decompiled_dir)
    
    output_dir = exec_dir / 'analysis' / 'lua_api'
    output_dir.mkdir(parents=True, exist_ok=True)
    
    # Save bindings
    bindings_json = output_dir / 'lua_bindings.json'
    with bindings_json.open('w') as f:
        json.dump(bindings, f, indent=2)
    print(f"Saved Lua bindings to {bindings_json}")
    
    # Save OSC handlers
    handlers_json = output_dir / 'osc_handlers.json'
    with handlers_json.open('w') as f:
        json.dump(handlers, f, indent=2)
    print(f"Saved OSC handlers to {handlers_json}")
    
    # Generate readable report
    report_path = output_dir / 'lua_api_report.txt'
    with report_path.open('w') as f:
        f.write("Lua API Bindings Report\n")
        f.write("=" * 80 + "\n\n")
        
        for binding_type, items in bindings.items():
            f.write(f"\n{binding_type.upper()} ({len(items)} found)\n")
            f.write("-" * 80 + "\n")
            for item in sorted(items, key=lambda x: x['name'])[:50]:
                f.write(f"  {item['name']}\n")
                f.write(f"    Context: {item['context']}\n")
        
        f.write(f"\n\nOSC MESSAGE HANDLERS ({len(handlers)} found)\n")
        f.write("-" * 80 + "\n")
        unique_paths = sorted(set(h['path'] for h in handlers))
        for path in unique_paths[:100]:
            f.write(f"  {path}\n")
    
    print(f"Generated report: {report_path}")
    print(f"\nFound {sum(len(v) for v in bindings.values())} Lua bindings")
    print(f"Found {len(handlers)} OSC handler references")

if __name__ == '__main__':
    main()
