# GitHub Copilot Agent Instructions for Aether RE Project

> Created: 2026-02-20 00:00 UTC • Revised: 2026-02-20 00:00 UTC

**Last Updated**: February 20, 2026
**Applies to**: All development in the `aether-re` toolkit

---

## Agent Rules

### Rule 1: No Hardcoded Paths

**Never hardcode absolute or machine-specific paths in code.**

Use instead:
- Environment variables: `GHIDRA_HOME`, `AETHER_TARGETS_DIR`, etc.
- Repo-relative paths: `Path(__file__).parents[N] / "sub/path"` for paths relative to the repo root
- CLI arguments: let callers pass paths in rather than baking them in
- `os.getenv("VAR", default)` with a sensible fallback when the env var is optional

Only exception: documentation **examples** showing placeholder paths must be clearly labelled as such (e.g., `/path/to/ghidra`, `<your-targets-dir>`). Never use a real machine path even as an example.

**Wrong:**
```python
ghidra_path = Path("/Users/tp/tools/ghidra_11.0_PUBLIC")
targets_dir = Path("/Volumes/Samples/_Projects/targets")
```

**Right:**
```python
ghidra_path = Path(os.environ["GHIDRA_HOME"])
targets_dir = Path(os.getenv("AETHER_TARGETS_DIR", "targets"))
```

### Rule 2: Single Branch Policy (`main` only)

**All work goes directly to `main`.** Do not create feature branches, hotfix branches, personal branches, or any other named branches unless ALL of the following are true:

1. The need for a branch has been explicitly discussed with the user
2. The user has explicitly approved creating that branch
3. There is a clear plan for merging it back to `main` and deleting it

When in doubt: commit to `main`. If you find yourself on a non-`main` branch without explicit approval, raise it immediately rather than continuing.

---

## Documentation Requirements

When creating ANY new system, structure, class, or significant feature:

### 1. Code Documentation (REQUIRED)

**Every class must have**:
```python
"""
@system SystemName
@brief One-line description
@phase Phase X - When implemented, Phase Y - When expanded

PURPOSE:
  Why this system exists, what problem it solves

ARCHITECTURE:
  - Component A: Role
  - Component B: Role

USER WORKFLOW:
  1. User does X
  2. System responds with Y
  3. Result is Z

INTEGRATION POINTS:
  - Depends on: ModuleA, ModuleB
  - Used by: ModuleC, ModuleD

FUTURE EXPANSION:
  - Phase X: Feature A
  - Phase Y: Feature B
"""
class SystemName:
    # Implementation
```

**Every public function must have**:
```python
def function_name(param1: Type, param2: Type) -> ReturnType:
    """
    What this function does (one sentence).

    Args:
        param1: Description, valid values, units
        param2: Description, constraints

    Returns:
        What it returns, when it fails

    Side effects:
        - Modifies X
        - May raise ValueError if Y
    """
```

### 2. Markdown Documentation (REQUIRED for new systems)

For every new system, create `docs/[system_name].md` covering:
- Quick Overview
- Purpose (with problems solved)
- Architecture (with ASCII or mermaid diagram)
- User Workflow
- Code Examples (that actually work)
- Integration Points
- Future Expansion

### 3. Update Related Docs

When adding/changing systems:
- ✅ Update `docs/ARCHITECTURE.md` if affects overall architecture
- ✅ Update `README.md` if changes how to install/run/use
- ✅ Update `CHANGELOG.md` with change description (if it exists)

---

## Documentation-First Workflow

### BEFORE implementing:

1. **Understand the PURPOSE** — why does this need to exist?
2. **Write public API doc-strings** for classes/functions
3. **Implement** following approved design
4. **Update related docs** if architecture changes

### NEVER:

❌ Implement first, document later
❌ Skip docstrings because "code is self-documenting"
❌ Create code without explaining WHY it exists
❌ Leave TODOs or placeholders in docstrings
❌ Hardcode any absolute paths
❌ Create a new branch without explicit user approval

---

## Code Style

- Python 3.9+, type-annotated where practical
- `Path` objects over string paths everywhere
- `pathlib` for all file operations
- `argparse` for CLI (not click, unless already used in the file)
- `rich` for terminal output formatting
- `pytest` for tests
- `ruff` for linting (configured in `pyproject.toml`)

## File Organization

```
aether-re/
├── analysis/          # Call graph and static analysis tools
├── bin/               # CLI entry points (thin wrappers)
├── capture/           # Dynamic tracing utilities
├── cli/               # UI styling helpers (Rich-based)
├── factory/
│   ├── core/          # Core engines (Ghidra, Frida, discovery, extraction, progress)
│   └── ghidra_scripts/# Ghidra Java scripts
├── fixup/             # Decompilation post-processors
├── schemas/           # JSON schemas
├── scripts/           # One-off analysis and utility scripts
└── tests/             # pytest test suite
```

---

## Performance Documentation

When documenting performance-critical code:

```python
"""
PERFORMANCE NOTES:
  - Target: < 2ms per call
  - Bottleneck: subprocess spawn for Ghidra
  - Optimization: caches project dir between runs
"""
```

---

## Quick Reference

**Adding a new engine?** → Subclass or follow the pattern in `factory/core/ghidra_engine.py`
**Adding a CLI command?** → Add to `bin/`, register in `pyproject.toml` entry_points
**Paths in code?** → Always `Path(os.environ["VAR"])` or `Path(__file__).parents[N]`
**New branch?** → Ask the user first. Default answer is no.

---

**Remember**: Every path you hardcode breaks someone else's machine. Every new branch is debt unless it has an approved plan to merge.
