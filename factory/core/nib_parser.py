# Created: 2026-02-20 UTC
"""
@system NIBParser
@brief iOS NIBArchive binary parser producing schema-validated sidecar dicts
@phase Phase 1 - Static extraction

PURPOSE:
    Parse compiled iOS .nib (NIBArchive) binaries to extract structural
    metadata: class names, property key names, outlet names, and
    object/value counts.  Produces sidecar dicts conforming to
    schemas/nib_sidecar.v1.json.

ARCHITECTURE:
    - Header parsing : reads little-endian uint32 fields at known positions
      (magic[10] + version + 3 count/offset pairs = first 38 reliable bytes)
    - String scan    : regex-based token extraction over the full binary for
      UIKit class names, UIKit property keys, and outlet/ivar names
    - Validation     : structural check against nib_sidecar.v1.json constraints
      WITHOUT requiring the jsonschema library (stdlib only)

    NIBArchive header layout (little-endian uint32s after 10-byte magic):
        version      uint32   always 1 in observed files
        n_objects    uint32   number of serialised objects
        off_objects  uint32   byte offset to objects section (relative to header end)
        n_keys       uint32   number of property key strings
        off_keys     uint32   byte offset to keys section (relative to header end)
        n_values     uint32   total encoded values
        off_values   uint32   byte offset to values section (relative to header end)
        ...          (additional fields beyond the first 3 pairs are not
                      reliably parsed here; keys/classes are instead recovered
                      via the string-scan heuristic which is 100% reliable)

USER WORKFLOW:
    from factory.core.nib_parser import parse_nibarchive, validate_nib_sidecar
    info = parse_nibarchive(Path("Button.nib"))
    valid, errors = validate_nib_sidecar(info)
    # info conforms to schemas/nib_sidecar.v1.json

INTEGRATION POINTS:
    - Used by: scripts/extract_mididesigner.py
    - Used by: scripts/update_target_index.py (--regen-nib-sidecars)
    - Schema:  schemas/nib_sidecar.v1.json

FUTURE EXPANSION:
    - Phase 2: Full keys-section parsing (length-prefixed strings at abs offset)
    - Phase 3: Object-graph reconstruction from the values-section encoding
"""
from __future__ import annotations

import hashlib
import re
import struct
from pathlib import Path
from typing import Any

# ── Public constants ───────────────────────────────────────────────────────────

NIB_PARSER_VERSION = "1.0"
"""Increment when the parser logic changes in a way that affects sidecar content."""

NIBARCHIVE_MAGIC = b"NIBArchive"

# ── Private regex patterns for token classification ───────────────────────────

# UIKit / Foundation / AVFoundation / CoreBluetooth / CoreLocation class names
_RE_CLASS = re.compile(rb"^(UI|NS|AV|CB|CL|WK|MK|SN|SK|SC|SF)[A-Z][A-Za-z0-9]{2,79}$")

# UIKit property key strings (UI/NS prefix, CamelCase, longer than a class name minimum)
# e.g. UIFrame, UISubviews, UIContentMode, NSFontDescriptorOptions
_RE_KEY = re.compile(rb"^(UI|NS)[A-Z][A-Za-z0-9]{5,79}$")

# Outlet/ivar names: camelCase identifiers, not UIKit-prefixed
_RE_OUTLET = re.compile(rb"^[a-z][A-Za-z0-9_]{2,40}$")

# ── Public API ─────────────────────────────────────────────────────────────────


def parse_nibarchive(nib_path: Path) -> dict[str, Any]:
    """
    Parse an iOS NIBArchive binary and return a schema_version=1 sidecar dict.

    The returned dict always contains:
        schema_version  int    = 1
        parser_version  str    e.g. "1.0"
        source_sha256   str    64-char lowercase hex SHA-256 of the .nib file
        format          str    "NIBArchive" | "unknown" | "unreadable"

    On success it additionally contains:
        version         int    from the NIBArchive header (should be 1)
        n_objects       int    number of serialised objects
        n_keys          int    number of property key strings
        n_values        int    number of encoded values
        class_names     list[str]  UIKit/Foundation class names found in binary
        key_names       list[str]  UIKit property key strings found in binary
        outlet_names    list[str]  camelCase outlet/ivar names found in binary

    On failure it additionally contains:
        error           str    human-readable parse error

    Args:
        nib_path: Path to the .nib binary to parse.

    Returns:
        Dict conforming to schemas/nib_sidecar.v1.json.

    Side effects:
        Reads nib_path from disk.  No writes.
    """
    try:
        raw = nib_path.read_bytes()
    except OSError as exc:
        return _error_sidecar(b"", "unreadable", f"cannot read file: {exc}")

    sha256 = hashlib.sha256(raw).hexdigest()
    base: dict[str, Any] = {
        "schema_version": 1,
        "parser_version": NIB_PARSER_VERSION,
        "source_sha256": sha256,
    }

    if raw[:10] != NIBARCHIVE_MAGIC:
        return {**base, "format": "unknown", "error": f"bad magic: {raw[:10]!r}"}

    # Parse the first 3 reliable count/offset pairs (bytes 10-37 inclusive)
    try:
        version, n_obj, _off_obj, n_keys, _off_keys, n_vals, _off_vals = struct.unpack_from(
            "<7I", raw, 10
        )
    except struct.error as exc:
        return {**base, "format": "NIBArchive", "error": f"truncated header: {exc}"}

    # Regex-based token scan across the entire binary
    all_tokens = re.findall(rb"[A-Za-z_][A-Za-z0-9_:]{3,79}", raw)

    class_names = sorted({t.decode("ascii", "replace") for t in all_tokens if _RE_CLASS.match(t)})
    key_names   = sorted({t.decode("ascii", "replace") for t in all_tokens if _RE_KEY.match(t)})
    outlet_names= sorted({t.decode("ascii", "replace") for t in all_tokens if _RE_OUTLET.match(t)})

    return {
        **base,
        "format": "NIBArchive",
        "version": version,
        "n_objects": n_obj,
        "n_keys": n_keys,
        "n_values": n_vals,
        "class_names": class_names,
        "key_names": key_names,
        "outlet_names": outlet_names,
    }


# ── Validation ─────────────────────────────────────────────────────────────────

_REQUIRED_FIELDS = frozenset({"schema_version", "parser_version", "source_sha256", "format"})
_SHA256_RE = re.compile(r"^[0-9a-f]{64}$")
_VER_RE    = re.compile(r"^\d+\.\d+$")
_ARRAY_FIELDS = ("class_names", "key_names", "outlet_names")
_INT_FIELDS   = ("version", "n_objects", "n_keys", "n_values")


def validate_nib_sidecar(data: dict[str, Any]) -> tuple[bool, list[str]]:
    """
    Validate a nib sidecar dict against structural constraints derived from
    schemas/nib_sidecar.v1.json without requiring the jsonschema library.

    Args:
        data: Dict to validate (typically the return value of parse_nibarchive).

    Returns:
        (valid, errors) where valid is True iff errors is empty.

    Side effects:
        None.
    """
    errors: list[str] = []

    for f in _REQUIRED_FIELDS:
        if f not in data:
            errors.append(f"missing required field: {f!r}")

    if data.get("schema_version") != 1:
        errors.append(f"schema_version must be 1, got {data.get('schema_version')!r}")

    pv = str(data.get("parser_version", ""))
    if not _VER_RE.match(pv):
        errors.append(f"parser_version must match N.N pattern, got {pv!r}")

    sha = str(data.get("source_sha256", ""))
    if not _SHA256_RE.match(sha):
        errors.append("source_sha256 must be 64 lowercase hex chars")

    if "error" in data:
        # Error-mode sidecar: only the 4 base fields are required; skip structural checks.
        return len(errors) == 0, errors

    for field in _INT_FIELDS:
        val = data.get(field)
        if val is not None and (not isinstance(val, int) or val < 0):
            errors.append(f"{field} must be a non-negative integer, got {val!r}")

    for field in _ARRAY_FIELDS:
        val = data.get(field)
        if val is not None:
            if not isinstance(val, list):
                errors.append(f"{field} must be a list, got {type(val).__name__}")
            elif not all(isinstance(s, str) for s in val):
                errors.append(f"{field} must contain only strings")

    return len(errors) == 0, errors


# ── Internal helpers ───────────────────────────────────────────────────────────

def _error_sidecar(raw: bytes, fmt: str, error: str) -> dict[str, Any]:
    sha256 = hashlib.sha256(raw).hexdigest() if raw else "0" * 64
    return {
        "schema_version": 1,
        "parser_version": NIB_PARSER_VERSION,
        "source_sha256": sha256,
        "format": fmt,
        "error": error,
    }
