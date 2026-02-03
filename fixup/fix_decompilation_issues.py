#!/usr/bin/env python3
"""
Enhanced script to fix missing function parameters in decompiled C++ code.
Handles complex patterns and edge cases.
"""

import re
import os
from pathlib import Path
from collections import defaultdict

def analyze_function_signatures(content):
    """Analyze function signatures and identify missing parameters."""
    # Find function definitions
    func_pattern = r'(\w+(?:\s*\*)?)\s+(\w+)\s*\(([^)]*)\)\s*{'
    functions = re.findall(func_pattern, content, re.MULTILINE | re.DOTALL)

    missing_params = []

    for return_type, func_name, params in functions:
        if not params.strip() or params.strip() == 'void':
            # Check if function body uses param_X variables
            func_start = content.find(f'{return_type} {func_name}({params})')
            if func_start == -1:
                continue

            brace_start = content.find('{', func_start)
            if brace_start == -1:
                continue

            # Find matching closing brace
            brace_count = 1
            pos = brace_start + 1
            func_end = -1
            while pos < len(content) and brace_count > 0:
                if content[pos] == '{':
                    brace_count += 1
                elif content[pos] == '}':
                    brace_count -= 1
                    if brace_count == 0:
                        func_end = pos
                        break
                pos += 1

            if func_end == -1:
                continue

            func_body = content[brace_start+1:func_end]

            # Find all param_X usages
            param_usages = re.findall(r'\bparam_(\d+)\b', func_body)
            if param_usages:
                param_nums = sorted(set(int(x) for x in param_usages))
                max_param = max(param_nums)

                # Try to infer types from usage patterns
                inferred_params = []
                for i in range(1, max_param + 1):
                    param_name = f'param_{i}'
                    param_type = infer_parameter_type(func_body, param_name)
                    inferred_params.append(f'{param_type} {param_name}')

                missing_params.append({
                    'function': f'{return_type} {func_name}',
                    'original_sig': f'{return_type} {func_name}({params})',
                    'inferred_params': inferred_params,
                    'start_pos': func_start,
                    'end_pos': func_end
                })

    return missing_params

def infer_parameter_type(func_body, param_name):
    """Try to infer the type of a parameter from its usage."""
    # Look for common usage patterns
    patterns = [
        # Pointer arithmetic: param_X + offset, param_X[offset]
        (r'param_\d+\s*\+\s*\d+', 'char*'),
        (r'param_\d+\s*\[\s*\d+\s*\]', 'char*'),
        # Function calls: some_func(param_X)
        (r'\w+\s*\(\s*param_\d+\s*\)', 'void*'),
        # Assignments: *param_X = value
        (r'\*\s*param_\d+\s*=', 'void*'),
        # Comparisons: param_X == value, param_X > value
        (r'param_\d+\s*[=!<>]+\s*\d+', 'int'),
        # String operations: strlen(param_X), strcpy(param_X, ...)
        (r'strlen\s*\(\s*param_\d+\s*\)', 'const char*'),
        (r'strcpy\s*\(\s*param_\d+\s*,', 'char*'),
        # Default fallback
        (r'.*', 'void*')
    ]

    for pattern, param_type in patterns:
        if re.search(pattern.replace('param_\\d+', param_name), func_body):
            return param_type

    return 'void*'  # Default fallback

def fix_missing_parameters(content, missing_params):
    """Fix missing parameters in function signatures."""
    # Sort by position (reverse order to avoid offset issues)
    missing_params.sort(key=lambda x: x['start_pos'], reverse=True)

    for param_info in missing_params:
        original_sig = param_info['original_sig']
        inferred_params = param_info['inferred_params']

        if not inferred_params:
            continue

        # Create new signature
        params_str = ', '.join(inferred_params)
        new_sig = original_sig.replace('()', f'({params_str})')

        # Replace in content
        content = content.replace(original_sig, new_sig)

    return content

def fix_void_pointer_arithmetic(content):
    """Fix void pointer arithmetic by casting to char*."""
    # Pattern: PTR_something + 0x10
    pattern = r'(PTR_[a-zA-Z0-9_]+)\s*\+\s*(0x[0-9a-fA-F]+|\d+)'
    replacement = r'(char*)\1 + \2'

    content = re.sub(pattern, replacement, content)
    return content

def fix_malformed_new_calls(content):
    """Fix malformed new() calls."""
    # Pattern: new(size) -> new char[size]
    pattern = r'\bnew\s*\(\s*([^)]+)\s*\)'
    def replacement(match):
        size = match.group(1)
        return f'new char[{size}]'

    content = re.sub(pattern, replacement, content)
    return content

def fix_assembly_labels(content):
    """Remove or fix assembly-style labels."""
    # Remove LAB_ labels that are just markers
    lines = content.split('\n')
    fixed_lines = []

    for line in lines:
        # Remove standalone labels
        if re.match(r'^\s*LAB_[0-9a-fA-F]+:\s*$', line):
            continue
        # Fix goto statements to labels (convert to return or remove)
        if 'goto LAB_' in line:
            # Replace with return statement
            line = line.replace(re.search(r'goto LAB_[0-9a-fA-F]+', line).group(), 'return')
        fixed_lines.append(line)

    return '\n'.join(fixed_lines)

def apply_fixes_to_file(file_path):
    """Apply all fixes to a single file."""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        original_content = content

        # Apply fixes in order
        content = fix_void_pointer_arithmetic(content)
        content = fix_malformed_new_calls(content)
        content = fix_assembly_labels(content)

        # Analyze and fix missing parameters
        missing_params = analyze_function_signatures(content)
        if missing_params:
            content = fix_missing_parameters(content, missing_params)

        # Only write if changed
        if content != original_content:
            with open(file_path, 'w', encoding='utf-8') as f:
                f.write(content)
            return True, len(missing_params)

    except Exception as e:
        return False, f"Error: {str(e)}"

    return False, 0

def main():
    target_dir = Path("targets/Controller Editor/source")
    if not target_dir.exists():
        print("Target directory not found")
        return

    cpp_files = list(target_dir.rglob('*.cpp'))
    print(f"Processing {len(cpp_files)} files...")

    fixed_count = 0
    total_params_added = 0

    for i, cpp_file in enumerate(cpp_files):
        if (i+1) % 100 == 0:  # Progress every 100 files
            print(f"Processed {i+1}/{len(cpp_files)} files...")
        success, result = apply_fixes_to_file(cpp_file)
        if success:
            fixed_count += 1
            total_params_added += result

    print(f"\nSummary: Fixed {fixed_count} files, added {total_params_added} parameters total")

if __name__ == "__main__":
    main()