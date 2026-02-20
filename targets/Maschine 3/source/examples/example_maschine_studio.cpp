/**
 * @file example_maschine_studio.cpp
 * @brief Example usage of the Maschine Studio Controller API
 * 
 * Demonstrates:
 * - Controller connection
 * - LED control
 * - Display updates
 * - Event handling
 */

#include "ni/maschine/MaschineStudioController.hpp"
#include "ni/maschine/HIDReports.hpp"
#include <iostream>
#include <chrono>
#include <thread>

using namespace NI::NHL2::MaschineStudio;

/**
 * Example: Light up all pads in a rainbow pattern
 */
void rainbowPads(Controller& controller) {
    const LEDColor colors[] = {
        LEDColor::Red,
        LEDColor::Orange,
        LEDColor::Yellow,
        LEDColor::Green,
        LEDColor::Cyan,
        LEDColor::Blue,
        LEDColor::Violet,
        LEDColor::Magenta
    };
    
    auto* leds = controller.getLEDsInterface();
    if (!leds) return;
    
    for (uint8_t pad = 0; pad < PAD_COUNT; ++pad) {
        LEDColor color = colors[pad % 8];
        leds->setLEDColor(PAD_LED_BASE + pad, color);
    }
}

/**
 * Example: Flash transport buttons
 */
void flashTransport(Controller& controller) {
    controller.setLEDColor(Button::Play, LEDColor::Green);
    controller.setLEDColor(Button::Rec, LEDColor::Red);
    controller.setLEDColor(Button::Stop, LEDColor::Yellow);
}

/**
 * Example: Draw a simple pattern on display
 */
void drawPattern(Controller& controller, uint8_t displayIndex) {
    constexpr uint16_t BLOCK_SIZE = 32;
    
    // Create a checkerboard pattern (RGB565)
    std::vector<uint8_t> pixelData(BLOCK_SIZE * BLOCK_SIZE * 2);
    
    for (uint16_t y = 0; y < BLOCK_SIZE; ++y) {
        for (uint16_t x = 0; x < BLOCK_SIZE; ++x) {
            size_t idx = (y * BLOCK_SIZE + x) * 2;
            bool white = ((x / 4) + (y / 4)) % 2 == 0;
            
            // RGB565: RRRRRGGG GGGBBBBB
            if (white) {
                pixelData[idx] = 0xFF;     // High byte
                pixelData[idx + 1] = 0xFF; // Low byte
            } else {
                pixelData[idx] = 0x00;
                pixelData[idx + 1] = 0x00;
            }
        }
    }
    
    Rect rect{0, 0, BLOCK_SIZE, BLOCK_SIZE};
    controller.updateDisplay(displayIndex, rect, pixelData.data());
}

/**
 * Button event handler
 */
void onButton(Button button, bool pressed) {
    const char* state = pressed ? "pressed" : "released";
    std::cout << "Button " << static_cast<int>(button) << " " << state << std::endl;
    
    // Example: Toggle LED when button is pressed
    if (pressed) {
        // Would toggle LED here
    }
}

/**
 * Pad event handler
 */
void onPad(uint8_t pad, PadEventType type, float pressure) {
    switch (type) {
        case PadEventType::NoteOn:
            std::cout << "Pad " << (int)pad << " hit with pressure " << pressure << std::endl;
            break;
        case PadEventType::NoteOff:
            std::cout << "Pad " << (int)pad << " released" << std::endl;
            break;
        case PadEventType::Pressure:
            // Aftertouch
            break;
        default:
            break;
    }
}

/**
 * Encoder event handler
 */
void onEncoder(Encoder encoder, float delta) {
    std::cout << "Encoder " << static_cast<int>(encoder) 
              << " turned by " << delta << std::endl;
}

int main() {
    std::cout << "=== Maschine Studio Controller Example ===" << std::endl;
    std::cout << "USB VID: 0x" << std::hex << USB_VID << std::endl;
    std::cout << "USB PID: 0x" << std::hex << USB_PID << std::endl;
    std::cout << "Display: " << std::dec << DISPLAY_WIDTH << "x" << DISPLAY_HEIGHT << std::endl;
    std::cout << std::endl;
    
    // Create controller
    Controller controller;
    
    // Set up event callbacks
    controller.setButtonCallback(onButton);
    controller.setPadCallback(onPad);
    controller.setEncoderCallback(onEncoder);
    
    // Connect to device
    std::cout << "Connecting to Maschine Studio..." << std::endl;
    if (!controller.connect()) {
        std::cout << "Failed to connect! Make sure device is plugged in." << std::endl;
        std::cout << "(This is expected without actual hardware)" << std::endl;
        
        // Demo mode without hardware
        std::cout << "\nRunning in demo mode..." << std::endl;
        
        // Show HID report structures
        std::cout << "\nHID Report sizes:" << std::endl;
        std::cout << "  InputReport: " << sizeof(InputReport) << " bytes" << std::endl;
        std::cout << "  LEDOutputReport: " << sizeof(LEDOutputReport) << " bytes" << std::endl;
        std::cout << "  DisplayBlockReport: " << sizeof(DisplayBlockReport) << " bytes" << std::endl;
        std::cout << "  ControlReport: " << sizeof(ControlReport) << " bytes" << std::endl;
        
        // Show LED color palette
        std::cout << "\nLED Color Palette (" << (int)LED_COLOR_COUNT << " colors):" << std::endl;
        const char* colorNames[] = {
            "Off", "Red", "Orange", "LightOrange", "WarmYellow", 
            "Yellow", "Lime", "Green", "Mint", "Cyan",
            "Turquoise", "Blue", "Plum", "Violet", "Purple",
            "Magenta", "Fuchsia"
        };
        for (int i = 0; i < LED_COLOR_COUNT; ++i) {
            std::cout << "  " << i << ": " << colorNames[i] << std::endl;
        }
        
        return 0;
    }
    
    std::cout << "Connected!" << std::endl;
    
    // Light up pads
    rainbowPads(controller);
    
    // Flash transport
    flashTransport(controller);
    
    // Draw on displays
    drawPattern(controller, 0);
    drawPattern(controller, 1);
    
    // Send a test MIDI note
    controller.sendMIDINoteOn(0, 60, 100);  // Middle C
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    controller.sendMIDINoteOff(0, 60);
    
    // Main loop
    std::cout << "\nPress Ctrl+C to exit..." << std::endl;
    while (controller.isConnected()) {
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    
    // Cleanup
    controller.disconnect();
    std::cout << "Disconnected." << std::endl;
    
    return 0;
}
