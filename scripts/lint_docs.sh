#!/usr/bin/env bash
# Created: 2025-12-14 04:39 UTC • Last Modified: 2025-12-22 03:25 UTC
set -euo pipefail

SCRIPT_DIR="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd -- "${SCRIPT_DIR}/.." && pwd)"

python3 "${REPO_ROOT}/scripts/lint_markdown_links.py" \
  --tracked-only \
  --exclude-prefix "SourceFiles" \
  --exclude-prefix "targets" \
  --exclude-prefix "ghidra_projects" \
  --exclude-prefix "AetherDaemon/build" \
  --exclude-prefix "AetherControlEditor/external" \
  --exclude-prefix "Aether_UI/MaschineStudio-Dec3/node_modules" \
  --exclude-prefix "Aether_UI/MaschineStudio-Dec3/dist" \
  --exclude-prefix "Aether_UI/MaschineStudio-Dec3/build" \
  --exclude-prefix "node_modules" \
  --exclude-prefix "tmp" \
  --exclude-prefix "factory/tools/ghidra" \
  --exclude-prefix "publish_repo"
