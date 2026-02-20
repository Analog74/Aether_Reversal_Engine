#!/usr/bin/env bash
# Created: 2025-12-14 04:31 UTC • Last Modified: 2025-12-14 04:31 UTC
set -euo pipefail

# Local docs hygiene checks (matches CI policy).

repo_root="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$repo_root"

echo "[check_docs] Checking Markdown Created/Revised stamps..."
python3 scripts/stamp_markdown_timestamps.py --all-tracked --check

echo "[check_docs] Checking local Markdown links..."
./scripts/lint_docs.sh

echo "[check_docs] OK"
