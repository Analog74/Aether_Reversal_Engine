#!/usr/bin/env bash
# Created: 2025-12-14 04:47 UTC • Last Modified: 2025-12-14 05:16 UTC
set -euo pipefail

# Fails if forbidden artifacts are tracked by git.
# Intended to run in CI and locally.

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$repo_root"

if ! git rev-parse --is-inside-work-tree >/dev/null 2>&1; then
  echo "[verify_repo_safety] ERROR: not inside a git work tree" >&2
  exit 2
fi

echo "[verify_repo_safety] Checking tracked files for forbidden artifacts..."

fail=0
check_pattern() {
  local label="$1"
  local pattern="$2"

  local matches
  matches="$(git ls-files | grep -E "$pattern" || true)"
  if [[ -n "$matches" ]]; then
    echo "[verify_repo_safety] ERROR: tracked forbidden content: $label" >&2
    echo "$matches" | sed 's/^/  - /' >&2
    fail=1
  fi
}

# Never include these (non-negotiable)
check_pattern "decomp targets" '^targets/'
check_pattern "ghidra projects" '^ghidra_projects/'
check_pattern "decompiled source dumps" '^SourceFiles/'

# Avoid bundling tool distributions
check_pattern "bundled ghidra distribution" '^factory/tools/ghidra/'

# Avoid committing local helper repos / checkouts / build artifacts
check_pattern "embedded helper repo" '^publish_repo/'
check_pattern "local JUCE checkout" '^AetherControlEditor/external/JUCE/'

# Frontend deps/build outputs must not be tracked
check_pattern "node_modules" '(^|/)node_modules/'
check_pattern "vite/dist outputs" '(^|/)(dist|\.vite)/'
check_pattern "frontend build outputs" '^Aether_UI/.*/build/'

if [[ "$fail" -ne 0 ]]; then
  echo "[verify_repo_safety] FAIL" >&2
  exit 1
fi

echo "[verify_repo_safety] OK"
