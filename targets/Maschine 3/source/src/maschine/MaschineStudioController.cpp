/**
 * @file MaschineStudioController.cpp
 * @brief Implementation of Maschine Studio Controller Protocol
 * 
 * Based on decompiled source from Maschine 3.app
 * Key source files analyzed:
 * - NI__MASCHINE__HW__MaschineController_NI__NHL2__MaschineStudio__Controller___*.cpp
 * - NI__NHL2__Interfaces__LEDsV1__*.cpp
 * - NI__NHL2__Controller__*.cpp
 */

#include "ni/maschine/MaschineStudioController.hpp"
#include <cstring>
#include <atomic>
#include <mutex>

#ifdef __APPLE__
#include <IOKit/IOKitLib.h>
#include <IOKit/hid/IOHIDLib.h>
#include <IOKit/usb/IOUSBLib.h>
#endif

namespace NI {
namespace NHL2 {
namespace MaschineStudio {

// LED to NHL hardware index mapping table (from ledToNHLMap analysis)
// Maps software LED IDs to hardware LED indices
static const uint32_t s_ledToNHLMap[] = {
    // Transport LEDs (0x00-0x0F)
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    // Group LEDs (0x10-0x17)
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    // Screen button LEDs (0x18-0x2F)
    0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27,
    0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37,
    0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
    // Pad LEDs (0x40-0x57) - RGB, 3 indices each
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47,
    0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57,
};

// LED color palette mapping (from ledColorToNHLMap)
// 17 indexed colors (0x00-0x10)
static const uint32_t s_ledColorToNHLMap[LED_COLOR_COUNT] = {
    0x000000,  // 0: Off
    0xFF0000,  // 1: Red
    0xFF6600,  // 2: Orange
    0xFF9900,  // 3: Light Orange
    0xFFCC00,  // 4: Warm Yellow
    0xFFFF00,  // 5: Yellow
    0xCCFF00,  // 6: Lime
    0x00FF00,  // 7: Green
    0x00FFCC,  // 8: Mint
    0x00FFFF,  // 9: Cyan
    0x00CCFF,  // 10: Turquoise
    0x0000FF,  // 11: Blue
    0x6600FF,  // 12: Plum
    0x9900FF,  // 13: Violet
    0xCC00FF,  // 14: Purple
    0xFF00FF,  // 15: Magenta
    0xFF00CC,  // 16: Fuchsia
};

// Pad LED special handling (from DAT_10d668680)
// Maps pad index (0-23) to hardware LED triplet base
static const uint32_t s_padLEDMap[24] = {
    0x00, 0x03, 0x06, 0x09, 0x0C, 0x0F, 0x12, 0x15,
    0x18, 0x1B, 0x1E, 0x21, 0x24, 0x27, 0x2A, 0x2D,
    0x30, 0x33, 0x36, 0x39, 0x3C, 0x3F, 0x42, 0x45,
};

// MIDI ring buffer (from InterfaceNSA::sendMidiEvent)
constexpr size_t MIDI_RING_BUFFER_SIZE = 500;

/**
 * LEDsV1 Implementation
 */
class LEDsV1Impl : public LEDsV1 {
public:
    LEDsV1Impl(Controller* controller) : m_controller(controller) {}
    
    bool setLEDRGB(uint32_t ledId, uint8_t r, uint8_t g, uint8_t b) override {
        // From setLEDRGB.cpp:
        // Three consecutive LED indices for R, G, B components
        // iVar5 = param_1 - local_3b (offset calculation)
        
        if (ledId >= sizeof(s_ledToNHLMap) / sizeof(s_ledToNHLMap[0])) {
            return false;
        }
        
        uint32_t baseIdx = s_ledToNHLMap[ledId];
        
        // Check if this is an RGB LED (pads)
        if (ledId >= PAD_LED_BASE && ledId < PAD_LED_BASE + 24) {
            uint32_t padIdx = ledId - PAD_LED_BASE;
            if (padIdx < 24 && s_padLEDMap[padIdx] != 0xFFFFFFFF) {
                baseIdx = s_padLEDMap[padIdx];
                
                // Set R, G, B on consecutive indices
                setLEDLevelInternal(baseIdx, r);
                setLEDLevelInternal(baseIdx + 1, g);
                setLEDLevelInternal(baseIdx + 2, b);
                return true;
            }
        }
        
        // For non-RGB LEDs, use grayscale
        uint8_t level = (r + g + b) / 3;
        return setLEDLevel(ledId, level);
    }
    
    bool setLEDColor(uint32_t ledId, LEDColor color) override {
        // From setLEDColor.cpp:
        // param_3 << 2 | existing & 3
        
        if (static_cast<uint8_t>(color) >= LED_COLOR_COUNT) {
            return false;
        }
        
        uint32_t rgbColor = s_ledColorToNHLMap[static_cast<uint8_t>(color)];
        uint8_t r = (rgbColor >> 16) & 0xFF;
        uint8_t g = (rgbColor >> 8) & 0xFF;
        uint8_t b = rgbColor & 0xFF;
        
        return setLEDRGB(ledId, r, g, b);
    }
    
    bool setLEDLevel(uint32_t ledId, uint8_t level) override {
        if (ledId >= sizeof(s_ledToNHLMap) / sizeof(s_ledToNHLMap[0])) {
            return false;
        }
        return setLEDLevelInternal(s_ledToNHLMap[ledId], level);
    }
    
    bool setLEDOff(uint32_t ledId) override {
        return setLEDLevel(ledId, 0);
    }
    
    bool setLEDState(uint32_t ledId, LEDState state) override {
        switch (state) {
            case LEDState::Off:
                return setLEDOff(ledId);
            case LEDState::On:
                return setLEDLevel(ledId, 0x7F);
            case LEDState::Dim:
                return setLEDLevel(ledId, 0x3F);
            case LEDState::Blink:
                // Blink requires special handling
                return setLEDLevel(ledId, 0x7F);
            default:
                return false;
        }
    }
    
    const std::array<uint32_t, LED_COLOR_COUNT>& getColorPalette() const override {
        static std::array<uint32_t, LED_COLOR_COUNT> palette;
        static bool initialized = false;
        if (!initialized) {
            for (size_t i = 0; i < LED_COLOR_COUNT; ++i) {
                palette[i] = s_ledColorToNHLMap[i];
            }
            initialized = true;
        }
        return palette;
    }
    
private:
    bool setLEDLevelInternal(uint32_t hwIndex, uint8_t level) {
        // This would send HID output report to device
        // Report ID 0x20, 12 bytes for LED state
        // TODO: Implement actual HID communication
        m_ledState[hwIndex] = level;
        m_dirty = true;
        return true;
    }
    
    Controller* m_controller;
    std::array<uint8_t, 256> m_ledState{};
    bool m_dirty = false;
};

/**
 * LCDDisplay Implementation
 */
class LCDDisplayImpl : public LCDDisplay {
public:
    LCDDisplayImpl(Controller* controller) : m_controller(controller) {}
    
    bool drawBulk(uint32_t displayIndex, 
                  const Rect& rect,
                  const uint8_t* pixelData,
                  size_t dataSize) override {
        // From drawBulkDisplay.cpp:
        // Display::Bulk::WriteWindowRequest structure
        // Display::Bulk::renderPixelData() for pixel conversion
        
        if (displayIndex >= DISPLAY_COUNT) {
            return false;
        }
        
        if (rect.x < 0 || rect.y < 0 ||
            rect.x + rect.width > DISPLAY_WIDTH ||
            rect.y + rect.height > DISPLAY_HEIGHT) {
            return false;
        }
        
        // Build WriteWindowRequest
        WriteWindowRequest request;
        request.displayIndex = static_cast<uint8_t>(displayIndex);
        request.flags = 0;
        request.x = rect.x;
        request.y = rect.y;
        request.width = rect.width;
        request.height = rect.height;
        request.dataFormat = 0x00;  // RGB565
        
        // TODO: Send via HID reports (0x80-0x83)
        // Report structure:
        // - Report ID 0x80: First display packet
        // - Report ID 0x81-0x82: Continuation packets
        // - Report ID 0x83: Final packet with EndOfUpdateRequest
        
        return true;
    }
    
    bool setBacklight(uint8_t level) override {
        m_backlight = level;
        // TODO: Send to device
        return true;
    }
    
    bool setContrast(uint8_t level) override {
        m_contrast = level;
        // TODO: Send to device
        return true;
    }
    
    Rect getDisplaySize() const override {
        return {0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT};
    }
    
private:
    Controller* m_controller;
    uint8_t m_backlight = 0xFF;
    uint8_t m_contrast = 0x80;
};

/**
 * Controller Implementation
 */
struct Controller::Impl {
    std::unique_ptr<LEDsV1Impl> leds;
    std::unique_ptr<LCDDisplayImpl> display;
    
    ButtonCallback buttonCallback;
    PadCallback padCallback;
    EncoderCallback encoderCallback;
    
    // MIDI ring buffer (from InterfaceNSA::sendMidiEvent)
    std::array<MIDIEvent, MIDI_RING_BUFFER_SIZE> midiRingBuffer;
    std::atomic<uint32_t> midiWriteIndex{0};
    std::atomic<uint32_t> midiReadIndex{0};
    
    // Connection state
    bool connected = false;
    
    // Input handler (from inputHandler.cpp: offset 0x428)
    void* inputHandler = nullptr;
    
#ifdef __APPLE__
    IOHIDDeviceRef hidDevice = nullptr;
#endif
    
    std::mutex mutex;
};

Controller::Controller() : m_impl(std::make_unique<Impl>()) {
    m_impl->leds = std::make_unique<LEDsV1Impl>(this);
    m_impl->display = std::make_unique<LCDDisplayImpl>(this);
}

Controller::~Controller() {
    disconnect();
}

bool Controller::connect() {
    std::lock_guard<std::mutex> lock(m_impl->mutex);
    
    if (m_impl->connected) {
        return true;
    }
    
#ifdef __APPLE__
    // Create matching dictionary for NI Maschine Studio
    CFMutableDictionaryRef matchDict = IOServiceMatching(kIOHIDDeviceKey);
    if (!matchDict) {
        return false;
    }
    
    // Set VID/PID
    CFNumberRef vidRef = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, 
                                        (int[]){USB_VID});
    CFNumberRef pidRef = CFNumberCreate(kCFAllocatorDefault, kCFNumberSInt32Type, 
                                        (int[]){USB_PID});
    
    CFDictionarySetValue(matchDict, CFSTR(kIOHIDVendorIDKey), vidRef);
    CFDictionarySetValue(matchDict, CFSTR(kIOHIDProductIDKey), pidRef);
    
    CFRelease(vidRef);
    CFRelease(pidRef);
    
    // Create HID Manager
    IOHIDManagerRef manager = IOHIDManagerCreate(kCFAllocatorDefault, 
                                                  kIOHIDOptionsTypeNone);
    if (!manager) {
        return false;
    }
    
    IOHIDManagerSetDeviceMatching(manager, matchDict);
    IOHIDManagerOpen(manager, kIOHIDOptionsTypeNone);
    
    // Get matching devices
    CFSetRef deviceSet = IOHIDManagerCopyDevices(manager);
    if (!deviceSet || CFSetGetCount(deviceSet) == 0) {
        IOHIDManagerClose(manager, kIOHIDOptionsTypeNone);
        CFRelease(manager);
        if (deviceSet) CFRelease(deviceSet);
        return false;
    }
    
    // Get first device
    IOHIDDeviceRef device = nullptr;
    CFSetGetValues(deviceSet, (const void**)&device);
    
    if (device) {
        m_impl->hidDevice = device;
        m_impl->connected = true;
        
        // Setup input report callback
        // TODO: IOHIDDeviceRegisterInputReportCallback
    }
    
    CFRelease(deviceSet);
    IOHIDManagerClose(manager, kIOHIDOptionsTypeNone);
    CFRelease(manager);
#endif
    
    return m_impl->connected;
}

void Controller::disconnect() {
    std::lock_guard<std::mutex> lock(m_impl->mutex);
    
#ifdef __APPLE__
    if (m_impl->hidDevice) {
        // Cleanup HID resources
        m_impl->hidDevice = nullptr;
    }
#endif
    
    m_impl->connected = false;
}

bool Controller::isConnected() const {
    return m_impl->connected;
}

LEDsV1* Controller::getLEDsInterface() {
    return m_impl->leds.get();
}

LCDDisplay* Controller::getLCDDisplayInterface() {
    return m_impl->display.get();
}

bool Controller::setLEDColor(Button button, uint8_t r, uint8_t g, uint8_t b) {
    uint32_t ledId = getLEDForButton(button);
    return m_impl->leds->setLEDRGB(ledId, r, g, b);
}

bool Controller::setLEDColor(uint8_t padIndex, uint8_t r, uint8_t g, uint8_t b) {
    if (padIndex >= PAD_COUNT) {
        return false;
    }
    return m_impl->leds->setLEDRGB(PAD_LED_BASE + padIndex, r, g, b);
}

bool Controller::setLEDColor(Button button, LEDColor color) {
    uint32_t ledId = getLEDForButton(button);
    return m_impl->leds->setLEDColor(ledId, color);
}

bool Controller::updateDisplay(uint8_t displayIndex, const Rect& rect, 
                                const uint8_t* pixelData) {
    size_t dataSize = rect.width * rect.height * 2;  // RGB565 = 2 bytes/pixel
    return m_impl->display->drawBulk(displayIndex, rect, pixelData, dataSize);
}

bool Controller::sendMIDIEvent(const MIDIEvent& event) {
    // Lock-free ring buffer insert (from InterfaceNSA::sendMidiEvent)
    uint32_t writeIdx = m_impl->midiWriteIndex.load(std::memory_order_relaxed);
    uint32_t nextIdx = (writeIdx + 1) % MIDI_RING_BUFFER_SIZE;
    
    // Check for full buffer
    if (nextIdx == m_impl->midiReadIndex.load(std::memory_order_acquire)) {
        return false;  // Buffer full
    }
    
    m_impl->midiRingBuffer[writeIdx] = event;
    m_impl->midiWriteIndex.store(nextIdx, std::memory_order_release);
    
    return true;
}

bool Controller::sendMIDINoteOn(uint8_t channel, uint8_t note, uint8_t velocity) {
    // From sendMidiNoteOn.cpp:
    // local_64 = (param_5 & 0xf) * 0x10000 + (((uint)param_2 & 0xff) << 8 | (uint)param_3 & 0xff) + 0x20900000
    MIDIEvent event;
    event.status = 0x90;  // Note On
    event.channel = channel & 0x0F;
    event.data1 = note;
    event.data2 = velocity;
    return sendMIDIEvent(event);
}

bool Controller::sendMIDINoteOff(uint8_t channel, uint8_t note) {
    MIDIEvent event;
    event.status = 0x80;  // Note Off
    event.channel = channel & 0x0F;
    event.data1 = note;
    event.data2 = 0;
    return sendMIDIEvent(event);
}

bool Controller::sendMIDICC(uint8_t channel, uint8_t cc, uint8_t value) {
    MIDIEvent event;
    event.status = 0xB0;  // Control Change
    event.channel = channel & 0x0F;
    event.data1 = cc;
    event.data2 = value;
    return sendMIDIEvent(event);
}

void Controller::setButtonCallback(ButtonCallback callback) {
    m_impl->buttonCallback = std::move(callback);
}

void Controller::setPadCallback(PadCallback callback) {
    m_impl->padCallback = std::move(callback);
}

void Controller::setEncoderCallback(EncoderCallback callback) {
    m_impl->encoderCallback = std::move(callback);
}

void* Controller::getInputHandler() const {
    // From inputHandler.cpp: return *(undefined8 *)(this + 0x428)
    return m_impl->inputHandler;
}

Button Controller::getButton(uint32_t hwButtonId) const {
    // From getButton.cpp: lookup table at DAT_10da8eeb0
    // TODO: Implement full lookup table
    if (hwButtonId < 0x40) {
        return static_cast<Button>(hwButtonId);
    }
    return Button::Unknown;
}

Encoder Controller::getEncoder(uint32_t hwEncoderId) const {
    // From getEncoder.cpp: lookup table at DAT_10da8eec8
    if (hwEncoderId < 0x20) {
        return static_cast<Encoder>(hwEncoderId);
    }
    return Encoder::Unknown;
}

uint32_t Controller::getLEDForButton(Button button) const {
    // Simple 1:1 mapping for now
    return static_cast<uint32_t>(button);
}

LEDColor Controller::getNHLLedColor(LEDColor color) const {
    // From getNHLLedColor.cpp: lookup in ledColorToNHLMap
    if (static_cast<uint8_t>(color) < LED_COLOR_COUNT) {
        return color;
    }
    return LEDColor::Off;
}

void Controller::onPadEventNHLThread(uint32_t padId, PadEventType type, float pressure) {
    // From onPadEventNHLThread.cpp
    if (m_impl->padCallback && padId < PAD_COUNT) {
        m_impl->padCallback(static_cast<uint8_t>(padId), type, pressure);
    }
}

void Controller::onEncoderEventNHLThread(uint32_t encoderId, float delta) {
    // From onEncoderEventNHLThread.cpp
    if (m_impl->encoderCallback) {
        Encoder enc = getEncoder(encoderId);
        m_impl->encoderCallback(enc, delta);
    }
}

void Controller::onSwitchEventNHLThread(uint32_t buttonId, bool pressed) {
    // From onSwitchEventNHLThread.cpp
    if (m_impl->buttonCallback) {
        Button btn = getButton(buttonId);
        m_impl->buttonCallback(btn, pressed);
    }
}

} // namespace MaschineStudio
} // namespace NHL2
} // namespace NI
