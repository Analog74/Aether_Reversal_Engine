import json
import shutil
from pathlib import Path
import pytest

SCHEMAS = Path('schemas')


def _load(path: Path):
    return json.loads(path.read_text())


@pytest.fixture()
def reaper_target(tmp_path: Path) -> Path:
    src = Path('targets') / 'REAPER'
    dst = tmp_path / 'targets' / 'REAPER'
    shutil.copytree(src, dst)
    return dst


def test_manifest_matches_schema(reaper_target: Path):
    manifest = _load(reaper_target / 'MANIFEST.json')
    schema = _load(SCHEMAS / 'manifest.v1.json')
    try:
        import jsonschema
        jsonschema.validate(instance=manifest, schema=schema)
    except ImportError:
        pytest.skip('jsonschema not installed')


def test_extraction_index_matches_schema(reaper_target: Path):
    ex = _load(reaper_target / 'exec' / 'REAPER' / 'EXTRACTION_INDEX.json')
    schema = _load(SCHEMAS / 'extraction_index.v1.json')
    try:
        import jsonschema
        jsonschema.validate(instance=ex, schema=schema)
    except ImportError:
        pytest.skip('jsonschema not installed')


def test_targets_index_contains_reaper_and_matches_schema(tmp_path: Path, reaper_target: Path):
    # isolate test by creating a temp 'targets' dir containing only REAPER
    tmp_targets = tmp_path / 'targets'
    tmp_targets.mkdir()
    shutil.copytree(reaper_target, tmp_targets / 'REAPER')
    from factory.core import target_layout
    target_layout.write_index(tmp_targets)
    idx = _load(tmp_targets / 'INDEX.json')
    schema = _load(SCHEMAS / 'targets_index.v1.json')
    try:
        import jsonschema
        jsonschema.validate(instance=idx, schema=schema)
    except ImportError:
        pytest.skip('jsonschema not installed')
    # ensure REAPER target entry exists
    assert any(e.get('target') == 'REAPER' for e in idx.get('entries', []))

def test_bundle_index_matches_schema_and_strict(reaper_target: Path):
    bundle = _load(reaper_target / 'inventory' / 'BUNDLE_INDEX.json')
    schema = _load(SCHEMAS / 'bundle_index.v1.json')
    try:
        import jsonschema
        jsonschema.validate(instance=bundle, schema=schema)
    except ImportError:
        pytest.skip('jsonschema not installed')

    # Structural strict-mode checks:
    for f in bundle.get('files', []):
        assert not f.get('hash_skipped', False), "strict-mode: found file with hash_skipped == True"
        assert f.get('hash_algo') == 'blake3', f"strict-mode: expected hash_algo 'blake3' but got {f.get('hash_algo')}"
        assert f.get('hash'), "strict-mode: missing 'hash' digest for a file"
    bad = [k for k in bundle.get('summary', {}).get('hash_algo_counts', {}).keys() if k != 'blake3']
    assert bad == []
    total = bundle.get('summary', {}).get('total_files', 0)
    skipped = bundle.get('summary', {}).get('files_hash_skipped', 0)
    if total:
        assert skipped == 0
