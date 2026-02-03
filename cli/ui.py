#!/usr/bin/env python3
"""Aetherforge CLI styling helpers.

Design goal: make all CLIs/tools in this repo look consistent and modern.

- Rich is preferred (panels, colors, tables).
- If Rich is not installed, fall back to plain text with no runtime dependency.

Style direction (Aetherforge): high-contrast dark UI with cyan/magenta accents.
"""

from __future__ import annotations

from dataclasses import dataclass
from typing import Any, Optional


@dataclass(frozen=True)
class Theme:
    # Gemini-inspired gradient (hot pink → purple → blue → cyan)
    gradient: tuple = (
        "magenta",           # >
        "bright_magenta",    # A
        "purple",            # E
        "blue_violet",       # T
        "blue",              # H
        "bright_blue",       # E
        "cyan",              # R
        "bright_cyan",       # FORGE
    )
    
    # Status colors
    ok: str = "green"
    warn: str = "yellow"
    err: str = "red"
    dim: str = "bright_black"
    
    # UI elements
    border: str = "cyan"
    highlight: str = "bright_magenta"


def _try_rich():
    try:
        from rich.console import Console  # type: ignore
        from rich.panel import Panel  # type: ignore
        from rich.text import Text  # type: ignore

        return Console, Panel, Text
    except Exception:
        return None


def banner(title: str, subtitle: Optional[str] = None, *, theme: Theme = Theme()) -> None:
    """Display large ASCII art banner with Gemini-inspired gradient."""
    rich = _try_rich()
    if not rich:
        if subtitle:
            print(f">AETHERFORGE  {title} — {subtitle}")
        else:
            print(f">AETHERFORGE  {title}")
        return

    Console, Panel, Text = rich
    console = Console()

    # Cleaner, more readable ASCII art for AETHERFORGE
    ascii_art = [
        "  ▄▀█ █▀▀ ▀█▀ █░█ █▀▀ █▀█ █▀▀ █▀█ █▀█ █▀▀ █▀▀",
        "  █▀█ ██▄ ░█░ █▀█ ██▄ █▀▄ █▀░ █▄█ █▀▄ █▄█ ██▄",
    ]

    gradient = theme.gradient
    
    # Apply gradient character by character across entire ASCII art
    total_chars = sum(len(line) for line in ascii_art)
    char_index = 0
    
    console.print()  # Empty line before
    for line in ascii_art:
        t = Text()
        for char in line:
            color_idx = char_index % len(gradient)
            t.append(char, style=f"bold {gradient[color_idx]}")
            char_index += 1
        console.print(t)
    
    # Add credit line aligned to the right
    credit = Text()
    credit.append(" " * 20)  # Padding to align right
    credit.append("Brought to you by Analog74", style="dim italic")
    console.print(credit)
    
    # Print title and subtitle below with spacing
    console.print()
    if title:
        console.print(f"[bold cyan]{title}[/]")
    if subtitle:
        console.print(f"[dim]{subtitle}[/]")
    console.print()


def kv(key: str, value: Any, *, theme: Theme = Theme()) -> None:
    """Display key-value pair."""
    rich = _try_rich()
    if not rich:
        print(f"{key}: {value}")
        return

    Console, _, Text = rich
    console = Console()

    t = Text()
    t.append(f"{key}", style=f"bold {theme.gradient[6]}")  # cyan
    t.append(" = ", style=theme.dim)
    t.append(str(value), style="bold")
    console.print(t)


def info(msg: str, *, theme: Theme = Theme()) -> None:
    """Display info message."""
    rich = _try_rich()
    if not rich:
        print(msg)
        return

    Console, _, Text = rich
    console = Console()
    console.print(Text(msg, style=theme.gradient[6]))  # cyan


def warn(msg: str, *, theme: Theme = Theme()) -> None:
    rich = _try_rich()
    if not rich:
        print(f"WARNING: {msg}")
        return

    Console, _, Text = rich
    console = Console()
    console.print(Text(msg, style=f"bold {theme.warn}"))


def error(msg: str, *, theme: Theme = Theme()) -> None:
    rich = _try_rich()
    if not rich:
        print(f"ERROR: {msg}")
        return

    Console, _, Text = rich
    console = Console()
    console.print(Text(msg, style=f"bold {theme.err}"))


def success(msg: str, *, theme: Theme = Theme()) -> None:
    """Display success message."""
    rich = _try_rich()
    if not rich:
        print(f"✓ {msg}")
        return

    Console, _, Text = rich
    console = Console()
    t = Text()
    t.append("✓ ", style=f"bold {theme.ok}")
    t.append(msg, style=theme.ok)
    console.print(t)


def progress_bar(total: int, description: str = "Processing", *, theme: Theme = Theme()):
    """Create a progress bar."""
    rich = _try_rich()
    if not rich:
        return None
        
    from rich.progress import Progress, SpinnerColumn, BarColumn, TextColumn, TimeRemainingColumn
    
    return Progress(
        SpinnerColumn(),
        TextColumn("[progress.description]{task.description}"),
        BarColumn(complete_style=theme.gradient[6], finished_style=theme.ok),
        TextColumn("[progress.percentage]{task.percentage:>3.0f}%"),
        TimeRemainingColumn(),
    )


def panel(content: str, title: str = "", *, theme: Theme = Theme()) -> None:
    """Display content in a panel."""
    rich = _try_rich()
    if not rich:
        print(f"\n{title}")
        print(content)
        print("")
        return
        
    Console, Panel, _ = rich
    console = Console()
    console.print(Panel(content, title=title, border_style=theme.border))
