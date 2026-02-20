#!/usr/bin/env python3
"""
Aether Verification Dashboard
Visualizes the hardware inputs and the resulting mapped actions.
"""
import sys
import threading
import time
import argparse
from pythonosc import dispatcher, osc_server

# ANSI Colors
C_RED = "\033[91m"
C_GRN = "\033[92m"
C_YEL = "\033[93m"
C_BLU = "\033[94m"
C_MAG = "\033[95m"
C_CYN = "\033[96m"
C_WHT = "\033[97m"
C_RST = "\033[0m"
C_GRY = "\033[90m"
HOME = "\033[H"
CLEAR = "\033[2J"
HIDE = "\033[?25l"
SHOW = "\033[?25h"

# Dashboard State
input_state = {
    'pads': [0] * 16,
    'buttons': {},
    'encoders': [0] * 8,
    'mod_shift': False,
    'mod_play': False
}
mapped_state = {
    'last_action': "None",
    'midi_out': "Waiting...",
    'osc_out': "Waiting..."
}
hw_status = {
    'connected': False,
    'device': "Searching..."
}

def handle_status_connected(addr, *args):
    # /aether/status/connected 0/1
    if len(args) > 0:
        hw_status['connected'] = (args[0] > 0)
        if not hw_status['connected']:
            hw_status['device'] = "Disconnected"

def handle_status_device(addr, *args):
    # /aether/status/device_type "MaschineStudio"
    if len(args) > 0:
        hw_status['device'] = str(args[0])

def handle_pad(addr, *args):
    # /aether/pad/{id}/pressure raw_val
    try:
        parts = addr.split('/')
        if len(parts) >= 5:
            pid = int(parts[3])
            val = args[0]
            if 0 <= pid < 16:
                input_state['pads'][pid] = val
    except: pass

def handle_button(addr, *args):
    # /aether/button/{id} val
    try:
        parts = addr.split('/')
        if len(parts) >= 4:
            bid = int(parts[3])
            val = args[0]
            is_pressed = (val > 0.5)
            input_state['buttons'][bid] = is_pressed
            
            # Simple Modifier Tracking for logic verification
            if bid == 26: input_state['mod_shift'] = is_pressed
            if bid == 29: input_state['mod_play'] = is_pressed
    except: pass

def handle_mapper_log(addr, *args):
    # /mapper/log "Action Name"
    if len(args) > 0:
        mapped_state['last_action'] = str(args[0])

def handle_midi_log(addr, *args):
    # /mapper/midi "NoteOn 36 127"
    if len(args) > 0:
        mapped_state['midi_out'] = str(args[0])

def render():
    s = HOME + C_CYN + "╔══════════════════════════════════════════════════════╗" + C_RST + "\n"
    s += C_CYN + "║            AETHER VERIFICATION DASHBOARD             ║" + C_RST + "\n"
    s += C_CYN + "╚══════════════════════════════════════════════════════╝" + C_RST + "\n\n"

    # 0. Hardware Status
    status_col = C_GRN if hw_status['connected'] else C_RED
    status_txt = "CONNECTED" if hw_status['connected'] else "DISCONNECTED"
    s += f"{C_WHT}STATUS: {status_col}{status_txt}{C_RST} ({hw_status['device']})\n\n"

    # 1. Hardware Truth (Physical)
    s += C_WHT + "[ PHYSICAL INPUTS ]" + C_RST + "\n"
    
    # Pads
    s += "PADS: "
    for i in range(16):
        # 4x4 Grid Logic (Top-Left 12 to Bottom-Right 3 ?) - Linear for now
        # Actually standard Maschine is Bottom-Left 0.
        val = input_state['pads'][i]
        char = "."
        color = C_GRY
        if val > 100: 
            char = "o"
            color = C_GRN
        if val > 2000:
            char = "O"
            color = C_YEL
        s += f"{color}[{char}]{C_RST} "
        if (i+1) % 4 == 0: s += " "
    s += "\n"

    # Buttons of Interest
    def btn(bid, name):
        on = input_state['buttons'].get(bid, False)
        col = C_MAG if on else C_GRY
        return f"{col}[ {name} ]{C_RST}"

    s += "MODS: "
    s += btn(26, "SHIFT") + " " + btn(28, "ERASE") + " "
    s += "\nTRANSPORT: "
    s += btn(29, "PLAY") + " " + btn(30, "REC") + " " + btn(42, "STOP")
    s += "\n\n"

    # 2. Mapped Logic (Result)
    s += C_WHT + "[ LOGIC ENGINE ]" + C_RST + "\n"
    s += f"Last Rule: {C_YEL}{mapped_state['last_action']}{C_RST}\n"
    s += f"MIDI Out:  {C_BLU}{mapped_state['midi_out']}{C_RST}\n"
    
    # 3. Validation Status
    shift = input_state['mod_shift']
    play = input_state['mod_play']
    
    s += "\n" + C_WHT + "[ VERIFICATION ]" + C_RST + "\n"
    
    # Check 1: Shift Logic
    if shift and play:
        s += f"SHIFT + PLAY: {C_GRN}DETECTED (Should Trigger 'Restart'){C_RST}\n"
    elif play:
        s += f"PLAY ONLY:    {C_GRN}DETECTED (Should Trigger 'Play'){C_RST}\n"
    else:
        s += f"State:        Idle\n"

    sys.stdout.write(s)
    sys.stdout.flush()

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--port", type=int, default=9005, help="Dashboard Listen Port")
    args = parser.parse_args()

    disp = dispatcher.Dispatcher()
    disp.map("/aether/pad/*", handle_pad)
    disp.map("/aether/button/*", handle_button)
    disp.map("/mapper/*", handle_mapper_log)
    disp.map("/midi/*", handle_midi_log)
    disp.map("/aether/status/connected", handle_status_connected)
    disp.map("/aether/status/device_type", handle_status_device)

    server = osc_server.ThreadingOSCUDPServer(("0.0.0.0", args.port), disp)
    t = threading.Thread(target=server.serve_forever, daemon=True)
    t.start()
    
    sys.stdout.write(CLEAR + HIDE)
    
    try:
        while True:
            render()
            time.sleep(0.05)
    except KeyboardInterrupt:
        sys.stdout.write(SHOW + "\n")

