# Created: 2026-02-20 00:00 UTC
"""
Progress reporting and status tracking for long-running operations.

Provides standardized heartbeat output and machine-readable status artifacts
per the PROGRESS_METER_STANDARD specification.
"""
import json
import os
import sys
import tempfile
import time
from pathlib import Path
from typing import Optional, Dict, Any


class Heartbeat:
    """
    Emits periodic progress heartbeats to stderr.

    Standard format: [stage] running X.Xm | metric: value | target

    Usage:
        heartbeat = Heartbeat("ghidra", target="MSTUpdater", interval_sec=60.0)

        while processing:
            heartbeat.emit(log_size_mb=1.2, idle_sec=5.0)
            time.sleep(0.1)
    """

    def __init__(
        self,
        stage: str,
        target: str,
        interval_sec: Optional[float] = None,
        env_prefix: Optional[str] = None
    ):
        """
        Initialize heartbeat emitter.

        Args:
            stage: Stage name (e.g., "ghidra", "extract", "discover")
            target: Target being processed (e.g., binary name)
            interval_sec: Seconds between heartbeats (default: 60.0)
            env_prefix: Env var prefix for tuning (e.g., "GHIDRA" -> GHIDRA_HEARTBEAT_SEC)
        """
        self.stage = stage
        self.target = target
        self.start_time = time.monotonic()
        self.last_heartbeat = 0.0

        # Allow env var override
        if env_prefix:
            env_var = f"{env_prefix}_HEARTBEAT_SEC"
            interval_sec = float(os.getenv(env_var, interval_sec or 60.0))

        self.interval_sec = interval_sec or 60.0
        self.disabled = os.getenv(f"{env_prefix}_NO_PROGRESS" if env_prefix else "NO_PROGRESS", "0") == "1"
        self.output_stream = sys.stderr
        self.is_tty = sys.stderr.isatty()

    def emit(self, **metrics: Any) -> None:
        """
        Emit heartbeat if interval has elapsed.

        Args:
            **metrics: Key-value pairs for progress metrics
                      (e.g., log_size_mb=1.2, idle_sec=5, items=1234)
        """
        if self.disabled:
            return

        now = time.monotonic()
        if now - self.last_heartbeat < self.interval_sec:
            return

        self.last_heartbeat = now
        elapsed_min = (now - self.start_time) / 60.0

        metric_str = " | ".join(
            f"{k.replace('_', ' ')}: {v:.1f}" if isinstance(v, float) else f"{k.replace('_', ' ')}: {v}"
            for k, v in metrics.items()
        )

        try:
            print(f"[{self.stage}] running {elapsed_min:.1f}m | {metric_str} | {self.target}",
                  file=self.output_stream, flush=True)
        except (BrokenPipeError, AttributeError):
            self.disabled = True

    def force_emit(self, **metrics: Any) -> None:
        """Force immediate heartbeat regardless of interval."""
        self.last_heartbeat = 0.0
        self.emit(**metrics)


class StatusWriter:
    """
    Writes machine-readable status artifacts to a cache directory.

    Supports both simple text (RUNNING/COMPLETED) and detailed JSON.

    Usage:
        status = StatusWriter(stage="ghidra", target="MSTUpdater",
                              cache_dir=Path("targets/MyTarget/cache"))
        status.set_running()

        # Update progress
        status.update_json(progress=0.35, items_processed=1234)

        # Mark complete
        status.set_completed(exit_code=0)
    """

    def __init__(
        self,
        stage: str,
        target: str,
        cache_dir: Path,
        use_json: bool = False
    ):
        """
        Initialize status writer.

        Args:
            stage: Stage name (e.g., "ghidra", "extract")
            target: Target being processed
            cache_dir: Directory to write status files (created if absent)
            use_json: Use JSON format instead of simple text (default: False)
        """
        self.stage = stage
        self.target = target
        self.cache_dir = Path(cache_dir)
        self.cache_dir.mkdir(parents=True, exist_ok=True)
        self.use_json = use_json

        safe_target = target.replace("/", "_").replace(" ", "_")

        if use_json:
            self.status_file = self.cache_dir / f"{stage}_status_{safe_target}.json"
        else:
            self.status_file = self.cache_dir / f"{stage}_status_{safe_target}.txt"

        self.start_time = time.time()
        self.data: Dict[str, Any] = {}

    def set_running(self) -> None:
        """Mark status as RUNNING."""
        if self.use_json:
            self._write_json({
                "status": "RUNNING",
                "stage": self.stage,
                "target": self.target,
                "start_time": self.start_time,
                "last_update": time.time()
            })
        else:
            self._write_text("RUNNING")

    def set_completed(self, exit_code: int = 0) -> None:
        """Mark status as COMPLETED with exit code."""
        if self.use_json:
            elapsed = time.time() - self.start_time
            self._write_json({
                "status": "COMPLETED",
                "exit_code": exit_code,
                "stage": self.stage,
                "target": self.target,
                "start_time": self.start_time,
                "end_time": time.time(),
                "elapsed_seconds": elapsed
            })
        else:
            self._write_text(f"COMPLETED_EXIT_CODE_{exit_code}")

    def set_killed(self, reason: str, details: Optional[str] = None) -> None:
        """Mark status as KILLED with reason."""
        if self.use_json:
            elapsed = time.time() - self.start_time
            data: Dict[str, Any] = {
                "status": "KILLED",
                "reason": reason,
                "stage": self.stage,
                "target": self.target,
                "start_time": self.start_time,
                "end_time": time.time(),
                "elapsed_seconds": elapsed
            }
            if details:
                data["details"] = details
            self._write_json(data)
        else:
            suffix = f"_{details}" if details else ""
            self._write_text(f"KILLED_{reason.upper()}{suffix}")

    def set_failed(self, error: str) -> None:
        """Mark status as FAILED with error message."""
        if self.use_json:
            elapsed = time.time() - self.start_time
            self._write_json({
                "status": "FAILED",
                "error": error,
                "stage": self.stage,
                "target": self.target,
                "start_time": self.start_time,
                "end_time": time.time(),
                "elapsed_seconds": elapsed
            })
        else:
            self._write_text("FAILED")

    def update_json(self, **kwargs: Any) -> None:
        """
        Update JSON status with additional fields (JSON mode only).

        Args:
            **kwargs: Additional fields to merge into the JSON status blob
        """
        if not self.use_json:
            return

        self.data.update(kwargs)
        self.data["last_update"] = time.time()
        self._write_json(self.data)

    def _write_json(self, data: Dict[str, Any]) -> None:
        """Write JSON status file atomically."""
        self.data = data
        content = json.dumps(data, indent=2)
        fd, tmp_path = tempfile.mkstemp(dir=self.cache_dir, prefix=".status_", suffix=".tmp")
        try:
            os.write(fd, content.encode("utf-8"))
            os.close(fd)
            os.replace(tmp_path, self.status_file)
        except Exception:
            os.close(fd)
            if os.path.exists(tmp_path):
                os.unlink(tmp_path)
            raise

    def _write_text(self, content: str) -> None:
        """Write text status file atomically."""
        fd, tmp_path = tempfile.mkstemp(dir=self.cache_dir, prefix=".status_", suffix=".tmp")
        try:
            os.write(fd, content.encode("utf-8"))
            os.close(fd)
            os.replace(tmp_path, self.status_file)
        except Exception:
            os.close(fd)
            if os.path.exists(tmp_path):
                os.unlink(tmp_path)
            raise


def get_poll_interval(env_prefix: Optional[str] = None, default: float = 0.1) -> float:
    """
    Get poll interval from environment with a sensible default.

    Args:
        env_prefix: Env var prefix (e.g., "GHIDRA" -> GHIDRA_POLL_SEC)
        default: Default interval in seconds if env var not set (default: 0.1)

    Returns:
        Poll interval in seconds
    """
    if env_prefix:
        env_var = f"{env_prefix}_POLL_SEC"
        return float(os.getenv(env_var, default))
    return default
