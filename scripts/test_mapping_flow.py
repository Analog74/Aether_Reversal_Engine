#!/usr/bin/env python3
"""
Aether Mapping Flow Verification
--------------------------------
Simulates hardware interactions (Shim) to verify the Mapping Logic.
"""
import time
import sys
from pythonosc import udp_client

# Colors
C_GRN = "\033[92m"
C_CYN = "\033[96m"
C_RST = "\033[0m"

def run_shim():
    client = udp_client.SimpleUDPClient("127.0.0.1", 9000)
    
    print(f"{C_CYN}[Shim] Starting Verification Sequence...{C_RST}")
    time.sleep(1)

    # 1. Test Simple Transport
    print(f"{C_CYN}[Shim] Pressing Play (ID 29){C_RST}")
    client.send_message("/aether/button/29", 1)
    time.sleep(0.1)
    client.send_message("/aether/button/29", 0)
    time.sleep(0.5)

    # 2. Test Shift + Play (Restart)
    print(f"{C_CYN}[Shim] Pressing Shift (ID 26) + Play (ID 29){C_RST}")
    # Shift Down
    client.send_message("/aether/button/26", 1) 
    time.sleep(0.2)
    # Play Down
    client.send_message("/aether/button/29", 1)
    time.sleep(0.1)
    # Play Up
    client.send_message("/aether/button/29", 0)
    time.sleep(0.2)
    # Shift Up
    client.send_message("/aether/button/26", 0)
    time.sleep(0.5)

    # 3. Test Pad 1 (Note 36)
    print(f"{C_CYN}[Shim] Hitting Pad 1 (ID 1){C_RST}")
    client.send_message("/aether/pad/1/pressure", 0.8)
    time.sleep(0.1)
    client.send_message("/aether/pad/1/pressure", 0.0)
    time.sleep(0.5)

    print(f"{C_GRN}[Shim] Sequence Complete.{C_RST}")

if __name__ == "__main__":
    run_shim()
