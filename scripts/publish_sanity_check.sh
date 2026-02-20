#!/usr/bin/env bash
# Created: 2025-12-14 04:31 UTC • Last Modified: 2025-12-14 04:31 UTC
set -euo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT_DIR"

FORBIDDEN_PATH_PREFIXES=(
  "SourceFiles/"
  "dynamic_headers/"
  "ghidra_projects/"
  "targets/"
  "tmp/"
  "factory/tools/ghidra/"
)

# Sanity check: forbidden folders should not even exist in the publish snapshot
for prefix in "${FORBIDDEN_PATH_PREFIXES[@]}"; do
  if [[ -e "$prefix" ]]; then
    echo "ERROR: Forbidden path exists in publish snapshot: $prefix" >&2
    exit 2
  fi
done

if [[ -d .git ]]; then
  echo "== Git tracked-path checks =="
  for prefix in "${FORBIDDEN_PATH_PREFIXES[@]}"; do
    if git ls-files | grep -q "^${prefix}"; then
      echo "ERROR: Forbidden path is tracked by git: $prefix" >&2
      exit 3
    fi
  done

  echo "== Large tracked files =="
  # List tracked files > 20MB (tweak threshold if needed)
  threshold_bytes=$((20 * 1024 * 1024))
  large_count=0
  while IFS= read -r path; do
    [[ -f "$path" ]] || continue
    size=$(stat -f%z "$path" 2>/dev/null || echo 0)
    if [[ "$size" -ge "$threshold_bytes" ]]; then
      printf 'LARGE: %s (%0.1f MB)\n' "$path" "$(awk "BEGIN{print $size/1024/1024}")"
      large_count=$((large_count + 1))
    fi
  done < <(git ls-files)

  if [[ "$large_count" -gt 0 ]]; then
    echo "ERROR: Found $large_count large tracked file(s). Consider removing or using Git LFS." >&2
    exit 4
  fi

  echo "OK: No forbidden tracked paths; no huge tracked files."
else
  echo "OK: No forbidden folders present (git not initialized yet)."
fi
