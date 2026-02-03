#!/usr/bin/env python3
"""
Script to add common type definitions header to all C++ source files
and measure compilation success rates before and after.
"""

import os
import subprocess
import sys
from pathlib import Path

def add_common_types_header(file_path):
    """Add the common types header include to a C++ file if not already present."""
    try:
        with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()

        # Check if header is already included
        header_include = '#include "../../../../dynamic_headers/ni_common_types.h"'
        if header_include in content:
            return False, "Already has header"

        # Find the first include line and add our header after it
        lines = content.split('\n')
        insert_index = -1
        for i, line in enumerate(lines):
            if line.strip().startswith('#include'):
                insert_index = i + 1
                break

        if insert_index == -1:
            # No includes found, add at the beginning
            insert_index = 0

        lines.insert(insert_index, header_include)
        new_content = '\n'.join(lines)

        with open(file_path, 'w', encoding='utf-8') as f:
            f.write(new_content)

        return True, "Header added"

    except Exception as e:
        return False, f"Error: {str(e)}"

def test_compilation(file_path, include_paths):
    """Test compilation of a single file and return success/failure."""
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
            cmd,
            cwd=file_path.parent.parent,  # Go up to source directory
            capture_output=True,
            text=True,
            timeout=30
        )

        return result.returncode == 0, result.stderr

    except subprocess.TimeoutExpired:
        return False, "Compilation timeout"
    except Exception as e:
        return False, f"Exception: {str(e)}"

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 add_common_types.py <target_directory>")
        print("Example: python3 add_common_types.py 'targets/Controller Editor/source'")
        sys.exit(1)

    target_dir = Path(sys.argv[1])
    if not target_dir.exists():
        print(f"Target directory {target_dir} does not exist")
        sys.exit(1)

    # Find all C++ files
    cpp_files = list(target_dir.rglob('*.cpp'))
    print(f"Found {len(cpp_files)} C++ files")

    # Test compilation before adding headers
    print("\nTesting compilation before adding headers...")
    before_results = {}
    for i, cpp_file in enumerate(cpp_files[:10]):  # Test first 10 files
        print(f"Testing {i+1}/10: {cpp_file.name}")
        success, error = test_compilation(cpp_file, [])
        before_results[cpp_file] = (success, error)

    before_success = sum(1 for success, _ in before_results.values() if success)
    print(f"Before: {before_success}/{len(before_results)} files compiled successfully")

    # Add headers to all files
    print("\nAdding common types header to all files...")
    added_count = 0
    for cpp_file in cpp_files:
        success, message = add_common_types_header(cpp_file)
        if success:
            added_count += 1
            print(f"Added to {cpp_file.name}")
        else:
            print(f"Skipped {cpp_file.name}: {message}")

    print(f"Added header to {added_count} files")

    # Test compilation after adding headers
    print("\nTesting compilation after adding headers...")
    after_results = {}
    for i, cpp_file in enumerate(list(before_results.keys())):  # Test same files
        print(f"Testing {i+1}/{len(before_results)}: {cpp_file.name}")
        success, error = test_compilation(cpp_file, [])
        after_results[cpp_file] = (success, error)

    after_success = sum(1 for success, _ in after_results.values() if success)
    print(f"After: {after_success}/{len(after_results)} files compiled successfully")

    improvement = after_success - before_success
    print(f"\nImprovement: {improvement} additional files now compile")

    # Show detailed results for files that improved
    print("\nDetailed results:")
    for cpp_file in before_results:
        before_success, before_error = before_results[cpp_file]
        after_success, after_error = after_results[cpp_file]

        if not before_success and after_success:
            print(f"✓ FIXED: {cpp_file.name}")
        elif before_success and not after_success:
            print(f"✗ BROKEN: {cpp_file.name}")
        elif not before_success and not after_success:
            print(f"✗ STILL BROKEN: {cpp_file.name}")

if __name__ == "__main__":
    main()