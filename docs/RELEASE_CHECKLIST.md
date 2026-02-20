# Release Checklist

> Created: 2025-12-14 00:00 UTC • Revised: 2026-01-18 03:48 UTC

This is a practical checklist for preparing a clean, shareable release of this repository.

## Repo Safety (must-pass)

- Run repo safety checks (forbidden artifacts are not tracked):

  ```bash
  ./scripts/verify_repo_safety.sh
  ```

- Run docs checks (CI parity):

  ```bash
  ./scripts/check_docs.sh
  ```

- Run tests:

  ```bash
  pytest -q
  ```

## Build/Run Smoke (macOS)

- Build daemon:

  ```bash
  ./run_daemon.sh --build
  ```

- Optional: run display verification pack:

  ```bash
  ./scripts/verify_display_pack.sh --build
  ```

- Build editor:

  ```bash
  ./build_editor.sh
  ```

- Run editor:

  ```bash
  ./run_editor.sh
  ```

## Finalization

- Confirm `.gitignore` still excludes `targets/`, `ghidra_projects/`, and `SourceFiles/`.
- Update `CHANGELOG.md` as needed.
- Tag the release:

  ```bash
  git tag -a vX.Y.Z -m "vX.Y.Z"
  git push origin vX.Y.Z
  ```
