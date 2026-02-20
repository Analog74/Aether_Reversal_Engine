/**
 * @file MaschineStudioController.hpp
 * @brief Native Instruments Maschine Studio Controller Protocol Implementation
 * 
 * Reverse engineered from Maschine 3.app decompilation (209,569 functions)
 * USB Device: VID 0x17CC, PID 0x1300
 * 
 * Key findings from decompilation:
 * - Display: 480 x 272 pixels (from getDisplaySize())
 * - LED System: 17 indexed colors via ledColorToNHLMap
 * - MIDI Format: 0x20900000 + (channel * 0x10000) + (note << 8) + velocity
 * - Event Types: 22 real-time event types
 */

#ifndef NI_NHL2_MASCHINE_STUDIO_CONTROLLER_HPP
#define NI_NHL2_MASCHINE_STUDIO_CONTROLLER_HPP

#include <cstdint>
#include <memory>
#include <functional>
#include <array>
#include <vector>

namespace NI {
namespace NHL2 {
namespace MaschineStudio {

// USB Device Constants (from getUSBID.cpp)
constexpr uint16_t USB_VID = 0x17CC;  // Native Instruments
constexpr uint16_t USB_PID = 0x1300;  // Maschine Studio

// Display Constants (from getDisplaySize.cpp: 0x110000001e0)
constexpr uint16_t DISPLAY_WIDTH = 480;
constexpr uint16_t DISPLAY_HEIGHT = 272;
constexpr uint8_t  DISPLAY_COUNT = 2;  // Dual displays

// LED Constants (from getNHLLedColor.cpp)
constexpr uint8_t LED_COLOR_COUNT = 17;  // 0x00 - 0x10

// Pad Constants
constexpr uint8_t PAD_COUNT = 16;
constexpr uint8_t PAD_LED_BASE = 0x40;  // First pad LED index

/**
 * LED Color enumeration (from ledColorToNHLMap analysis)
 * 17 indexed colors available on Maschine Studio
 */
enum class LEDColor : uint8_t {
    Off = 0,
    Red = 1,
    Orange = 2,
    LightOrange = 3,
    WarmYellow = 4,
    Yellow = 5,
    Lime = 6,
    Green = 7,
    Mint = 8,
    Cyan = 9,
    Turquoise = 10,
    Blue = 11,
    Plum = 12,
    Violet = 13,
    Purple = 14,
    Magenta = 15,
    Fuchsia = 16
};

/**
 * LED State enumeration
 */
enum class LEDState : uint8_t {
    Off = 0,
    On = 1,
    Dim = 2,
    Blink = 3
};

/**
 * Pad Event Types (from handlePadEventNote.cpp)
 */
enum class PadEventType : uint8_t {
    NoteOn = 0,
    NoteOff = 1,
    Pressure = 2,
    AfterTouch = 3,
    Release = 4
};

/**
 * Button IDs for Maschine Studio
 * Derived from getButton.cpp lookup table analysis
 */
enum class Button : uint8_t {
    // Transport
    Play = 0x00,
    Rec = 0x01,
    Stop = 0x02,
    Restart = 0x03,
    
    // Mode buttons
    Shift = 0x04,
    Erase = 0x05,
    Duplicate = 0x06,
    Select = 0x07,
    Solo = 0x08,
    Mute = 0x09,
    
    // Navigation
    Left = 0x0A,
    Right = 0x0B,
    Up = 0x0C,
    Down = 0x0D,
    
    // Groups A-H
    GroupA = 0x10,
    GroupB = 0x11,
    GroupC = 0x12,
    GroupD = 0x13,
    GroupE = 0x14,
    GroupF = 0x15,
    GroupG = 0x16,
    GroupH = 0x17,
    
    // Screen buttons (8 per display)
    Screen1 = 0x20,
    Screen2 = 0x21,
    Screen3 = 0x22,
    Screen4 = 0x23,
    Screen5 = 0x24,
    Screen6 = 0x25,
    Screen7 = 0x26,
    Screen8 = 0x27,
    
    // Second row of screen buttons
    Screen9 = 0x28,
    Screen10 = 0x29,
    Screen11 = 0x2A,
    Screen12 = 0x2B,
    Screen13 = 0x2C,
    Screen14 = 0x2D,
    Screen15 = 0x2E,
    Screen16 = 0x2F,
    
    Unknown = 0x75  // Default fallback
};

/**
 * Encoder IDs for Maschine Studio
 * Derived from getEncoder.cpp lookup table analysis
 */
enum class Encoder : uint8_t {
    // Master section
    MasterVolume = 0x00,
    Tempo = 0x01,
    Swing = 0x02,
    
    // 8 knobs per display
    Knob1 = 0x10,
    Knob2 = 0x11,
    Knob3 = 0x12,
    Knob4 = 0x13,
    Knob5 = 0x14,
    Knob6 = 0x15,
    Knob7 = 0x16,
    Knob8 = 0x17,
    
    // Jog wheel
    JogWheel = 0x20,
    
    Unknown = 0x0C  // Default fallback
};

/**
 * LED Info structure (from getLEDInfo.cpp)
 */
struct LEDInfo {
    uint32_t ledId;
    uint8_t type;       // 0=single, 1=RGB, 2=indexed
    uint8_t baseIndex;
    uint16_t flags;     // LED capabilities
    uint8_t column;
    uint8_t row;
    uint8_t part;
};

/**
 * Display Rect for dirty region updates (from GP::Rect)
 */
struct Rect {
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
};

/**
 * Display Write Window Request (from Display::Bulk::WriteWindowRequest)
 */
struct WriteWindowRequest {
    uint8_t displayIndex;
    uint8_t flags;
    int32_t x;
    int32_t y;
    int32_t width;
    int32_t height;
    uint8_t dataFormat;  // Pixel format (RGB565, etc.)
    // Followed by pixel data
};

/**
 * MIDI Event structure (from sendMidiEvent/sendMidiNoteOn)
 * Format: 0x20900000 + (channel * 0x10000) + (note << 8) + velocity
 */
struct MIDIEvent {
    uint8_t status;    // 0x90 = NoteOn, 0x80 = NoteOff, 0xB0 = CC
    uint8_t channel;   // 0-15
    uint8_t data1;     // Note number or CC number
    uint8_t data2;     // Velocity or CC value
    
    uint32_t pack() const {
        return 0x20900000 + (channel * 0x10000) + (data1 << 8) + data2;
    }
};

// Forward declarations
class Controller;
class InterfaceImpl;

/**
 * Callback types for event handling
 */
using ButtonCallback = std::function<void(Button button, bool pressed)>;
using PadCallback = std::function<void(uint8_t pad, PadEventType type, float pressure)>;
using EncoderCallback = std::function<void(Encoder encoder, float delta)>;

/**
 * LEDs Interface (from NI::NHL2::Interfaces::LEDsV1)
 */
class LEDsV1 {
public:
    virtual ~LEDsV1() = default;
    
    /**
     * Set LED RGB color
     * From setLEDRGB.cpp: Uses 3 consecutive LED indices for R,G,B
     */
    virtual bool setLEDRGB(uint32_t ledId, uint8_t r, uint8_t g, uint8_t b) = 0;
    
    /**
     * Set LED indexed color
     * From setLEDColor.cpp: param_3 << 2 | existing & 3
     */
    virtual bool setLEDColor(uint32_t ledId, LEDColor color) = 0;
    
    /**
     * Set LED brightness level
     * From setLEDLevel.cpp
     */
    virtual bool setLEDLevel(uint32_t ledId, uint8_t level) = 0;
    
    /**
     * Turn LED off
     */
    virtual bool setLEDOff(uint32_t ledId) = 0;
    
    /**
     * Set LED state (on/off/dim/blink)
     */
    virtual bool setLEDState(uint32_t ledId, LEDState state) = 0;
    
    /**
     * Get device color palette
     */
    virtual const std::array<uint32_t, LED_COLOR_COUNT>& getColorPalette() const = 0;
};

/**
 * LCD Display Interface (from NI::NHL2::Interfaces::LCDDisplay)
 */
class LCDDisplay {
public:
    virtual ~LCDDisplay() = default;
    
    /**
     * Draw bulk display data
     * From drawBulkDisplay.cpp
     */
    virtual bool drawBulk(uint32_t displayIndex, 
                          const Rect& rect,
                          const uint8_t* pixelData,
                          size_t dataSize) = 0;
    
    /**
     * Set display backlight level
     */
    virtual bool setBacklight(uint8_t level) = 0;
    
    /**
     * Set display contrast
     */
    virtual bool setContrast(uint8_t level) = 0;
    
    /**
     * Get display info
     */
    virtual Rect getDisplaySize() const = 0;
};

/**
 * Main Controller class (from NI::MASCHINE::HW::MaschineController<NHL2::MaschineStudio::Controller>)
 */
class Controller {
public:
    Controller();
    virtual ~Controller();
    
    // Connection management
    bool connect();
    void disconnect();
    bool isConnected() const;
    
    // Device info
    static constexpr uint16_t getUSBID() { return USB_PID; }
    static constexpr Rect getDisplaySize() { 
        return {0, 0, DISPLAY_WIDTH, DISPLAY_HEIGHT}; 
    }
    
    // LED control
    LEDsV1* getLEDsInterface();
    bool setLEDColor(Button button, uint8_t r, uint8_t g, uint8_t b);
    bool setLEDColor(uint8_t padIndex, uint8_t r, uint8_t g, uint8_t b);
    bool setLEDColor(Button button, LEDColor color);
    
    // Display control
    LCDDisplay* getLCDDisplayInterface();
    bool updateDisplay(uint8_t displayIndex, const Rect& rect, 
                       const uint8_t* pixelData);
    
    // MIDI
    bool sendMIDIEvent(const MIDIEvent& event);
    bool sendMIDINoteOn(uint8_t channel, uint8_t note, uint8_t velocity);
    bool sendMIDINoteOff(uint8_t channel, uint8_t note);
    bool sendMIDICC(uint8_t channel, uint8_t cc, uint8_t value);
    
    // Event callbacks
    void setButtonCallback(ButtonCallback callback);
    void setPadCallback(PadCallback callback);
    void setEncoderCallback(EncoderCallback callback);
    
    // Input handler (from inputHandler.cpp)
    void* getInputHandler() const;
    
protected:
    // Internal methods
    Button getButton(uint32_t hwButtonId) const;
    Encoder getEncoder(uint32_t hwEncoderId) const;
    uint32_t getLEDForButton(Button button) const;
    LEDColor getNHLLedColor(LEDColor color) const;
    
    // Event handlers (from onPadEventNHLThread, etc.)
    virtual void onPadEventNHLThread(uint32_t padId, PadEventType type, float pressure);
    virtual void onEncoderEventNHLThread(uint32_t encoderId, float delta);
    virtual void onSwitchEventNHLThread(uint32_t buttonId, bool pressed);

private:
    struct Impl;
    std::unique_ptr<Impl> m_impl;
};

} // namespace MaschineStudio
} // namespace NHL2
} // namespace NI

#endif // NI_NHL2_MASCHINE_STUDIO_CONTROLLER_HPP
