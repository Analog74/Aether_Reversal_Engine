#!/usr/bin/env python3
"""
Script to analyze common compilation errors in decompiled C++ files
and identify the most impactful fixes.
"""

import os
import subprocess
import re
from pathlib import Path
from collections import Counter

def analyze_compilation_errors(file_path, include_paths):
    """Analyze compilation errors for a single file and categorize them."""
    try:
        cmd = [
            'clang++', '-std=c++17',
            '-I../../../dynamic_headers',
            '-Iinclude'
        ] + include_paths + [
            '-c', str(file_path),
            '-o', '/tmp/test_compilation.o'
        ]

        result = subprocess.run(
            cmd, cwd=file_path.parent.parent,
            capture_output=True, text=True, timeout=10
        )

        errors = []
        for line in result.stderr.split('\n'):
            if 'error:' in line:
                # Extract error type
                if 'use of undeclared identifier' in line:
                    errors.append('undeclared_identifier')
                elif 'cannot convert' in line:
                    errors.append('conversion_error')
                elif 'arithmetic on a pointer to void' in line:
                    errors.append('void_pointer_arithmetic')
                elif 'expected' in line:
                    errors.append('syntax_error')
                elif 'called object type' in line and 'is not a function' in line:
                    errors.append('invalid_function_call')
                elif 'no member named' in line:
                    errors.append('missing_member')
                elif 'redefinition' in line:
                    errors.append('redefinition')
                elif 'incomplete type' in line:
                    errors.append('incomplete_type')
                else:
                    errors.append('other')

        return errors

    except subprocess.TimeoutExpired:
        return ['timeout']
    except Exception as e:
        return ['exception']

def analyze_file_content(file_path):
    """Analyze the content of a file for common decompilation patterns."""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        patterns = {
            'void_pointer_arithmetic': len(re.findall(r'PTR_[a-zA-Z0-9_]+ \+ 0x[0-9a-fA-F]+', content)),
            'goto_labels': len(re.findall(r'\bLAB_[0-9a-fA-F]+\b', content)),
            'throw_exception_malformed': len(re.findall(r'throw_exception<[^>]*$', content)),
            'function_pointer_calls': len(re.findall(r'\(\*[^)]+\)\(\);', content)),
            'missing_returns': len(re.findall(r'void function.*should not return a value', content)),
            'param_variables': len(re.findall(r'\bparam_[0-9]+\b', content)),
            'local_variables': len(re.findall(r'\blocal_[0-9]+\b', content)),
            'undefined_types': len(re.findall(r'\b(byte|uint|ulong|ullong)\b', content)),
        }

        return patterns

    except Exception as e:
        return {}

def main():
    target_dir = Path("targets/Controller Editor/source")
    if not target_dir.exists():
        print(f"Target directory {target_dir} does not exist")
        sys.exit(1)

    # Sample a subset of files for analysis
    cpp_files = list(target_dir.rglob('*.cpp'))[:50]  # Analyze first 50 files

    print(f"Analyzing {len(cpp_files)} files for common error patterns...")

    error_counts = Counter()
    pattern_counts = Counter()

    for i, cpp_file in enumerate(cpp_files):
        print(f"Analyzing {i+1}/{len(cpp_files)}: {cpp_file.name}")

        # Analyze compilation errors
        errors = analyze_compilation_errors(cpp_file, [])
        error_counts.update(errors)

        # Analyze content patterns
        patterns = analyze_file_content(cpp_file)
        for pattern, count in patterns.items():
            if count > 0:
                pattern_counts[f"{pattern}_{count}"] += 1

    print("\n=== COMPILATION ERROR ANALYSIS ===")
    print("Most common errors:")
    for error, count in error_counts.most_common(10):
        print(f"  {error}: {count} occurrences")

    print("\n=== CODE PATTERN ANALYSIS ===")
    print("Most common decompilation patterns:")
    for pattern, count in pattern_counts.most_common(15):
        pattern_name, pattern_count = pattern.rsplit('_', 1)
        print(f"  {pattern_name}: {pattern_count} (in {count} files)")

    print("\n=== RECOMMENDATIONS ===")
    if error_counts.get('undeclared_identifier', 0) > error_counts.get('void_pointer_arithmetic', 0):
        print("- Focus on missing type definitions (highest impact)")
    else:
        print("- Focus on void pointer arithmetic fixes")

    if pattern_counts.get('goto_labels_1', 0) > 10:
        print("- Assembly-style goto labels are common - need structured replacement")

    if pattern_counts.get('throw_exception_malformed_1', 0) > 5:
        print("- Malformed throw_exception calls need fixing")

if __name__ == "__main__":
    main()