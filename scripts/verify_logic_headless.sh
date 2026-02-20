#!/usr/bin/env bash
set -e

# Cleanup
echo "Cleaning up..."
sudo pkill -f "AetherDaemon" || true
pkill -f "AetherBridge" || true
pkill -f "prototype_mapper.py" || true
pkill -f "verify_mapping.py" || true

# Start Stack
echo "Starting Daemon..."
sudo ./AetherDaemon/build/AetherDaemon > /tmp/aether_daemon_test.log 2>&1 &
DAEMON_PID=$!
sleep 2

echo "Starting Bridge..."
./AetherDaemon/build/AetherBridge --osc-send-port 9000 --osc-recv-port 9001 > /tmp/aether_bridge_test.log 2>&1 &
BRIDGE_PID=$!
sleep 1

echo "Starting Mapper..."
python3 -u scripts/prototype_mapper.py --in-port 9000 --out-port 9001 > /tmp/aether_mapper_test.log 2>&1 &
MAPPER_PID=$!
sleep 2

# Verify
echo "Simulating Play..."
python3 -c "from pythonosc import udp_client; client = udp_client.SimpleUDPClient('127.0.0.1', 9000); client.send_message('/aether/button/29', 1.0)"
sleep 1

echo "Checking Log..."
if grep -q "transport_play" /tmp/aether_mapper_test.log; then
    echo "SUCCESS: Logic verified!"
else
    echo "FAILURE: Log did not contain 'transport_play'"
    cat /tmp/aether_mapper_test.log
fi

# Kill
sudo kill $DAEMON_PID
kill $BRIDGE_PID $MAPPER_PID
