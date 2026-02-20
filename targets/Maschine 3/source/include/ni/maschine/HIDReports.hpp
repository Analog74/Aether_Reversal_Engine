/**
 * @file HIDReports.hpp
 * @brief HID Report structures for Maschine Studio
 * 
 * Based on USB capture and decompilation analysis:
 * - Report ID 0x01: Input data (pads, buttons) - 48 bytes
 * - Report ID 0x20: LED state output - 12 bytes
 * - Report ID 0x80-0x83: Display update blocks - 62 bytes
 * - Report ID 0xF0: Control data - 9 bytes
 */

#pragma once

#include <cstdint>
#include <cstring>

namespace NI {
namespace NHL2 {
namespace MaschineStudio {

#pragma pack(push, 1)

/**
 * HID Report ID definitions
 */
enum class ReportID : uint8_t {
    Input = 0x01,           // Input: buttons, pads, encoders
    LEDOutput = 0x20,       // Output: LED state
    DisplayBlock0 = 0x80,   // Display: first packet
    DisplayBlock1 = 0x81,   // Display: continuation
    DisplayBlock2 = 0x82,   // Display: continuation
    DisplayBlock3 = 0x83,   // Display: final packet
    Control = 0xF0,         // Control/configuration
};

/**
 * Input Report (Report ID 0x01)
 * 48 bytes containing button states, pad pressures, encoder positions
 * 
 * Structure derived from HID descriptor analysis
 */
struct InputReport {
    uint8_t reportId;       // 0x01
    
    // Button bitfields (bytes 1-8)
    uint8_t buttons[8];     // 64 buttons as bits
    
    // Pad pressure values (bytes 9-24)
    // 16 pads, 1 byte each (0-127)
    uint8_t padPressure[16];
    
    // Encoder values (bytes 25-32)
    // 8 encoders, 1 byte each (relative movement, signed)
    int8_t encoders[8];
    
    // Additional encoders/wheels (bytes 33-36)
    int8_t jogWheel;
    int8_t touchStrip;
    uint8_t touchStripPressure;
    uint8_t reserved1;
    
    // Extended button state (bytes 37-44)
    uint8_t extButtons[8];
    
    // Padding/reserved (bytes 45-48)
    uint8_t reserved2[3];
    
    // Helper methods
    bool isButtonPressed(uint8_t buttonId) const {
        uint8_t byteIdx = buttonId / 8;
        uint8_t bitIdx = buttonId % 8;
        if (byteIdx >= 8) {
            byteIdx -= 8;
            return (extButtons[byteIdx] & (1 << bitIdx)) != 0;
        }
        return (buttons[byteIdx] & (1 << bitIdx)) != 0;
    }
    
    uint8_t getPadPressure(uint8_t padId) const {
        if (padId >= 16) return 0;
        return padPressure[padId];
    }
    
    int8_t getEncoderDelta(uint8_t encoderId) const {
        if (encoderId >= 8) return 0;
        return encoders[encoderId];
    }
};

static_assert(sizeof(InputReport) == 48, "InputReport must be 48 bytes");

/**
 * LED Output Report (Report ID 0x20)
 * 12 bytes for LED state control
 * 
 * From setLEDColor/setLEDRGB analysis
 */
struct LEDOutputReport {
    uint8_t reportId;       // 0x20
    
    // LED command (1 byte)
    uint8_t command;        // 0x00 = set single, 0x01 = set range, 0x02 = set all
    
    // LED index (2 bytes)
    uint16_t ledIndex;
    
    // Color data (4 bytes)
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t brightness;
    
    // Count/range (1 byte)
    uint8_t count;
    
    // Reserved (3 bytes to reach 12 total)
    uint8_t reserved[3];
    
    void setLED(uint16_t index, uint8_t r, uint8_t g, uint8_t b, uint8_t level = 0x7F) {
        reportId = static_cast<uint8_t>(ReportID::LEDOutput);
        command = 0x00;
        ledIndex = index;
        red = r;
        green = g;
        blue = b;
        brightness = level;
        count = 1;
        reserved[0] = reserved[1] = reserved[2] = 0;
    }
    
    void setLEDRange(uint16_t startIndex, uint8_t cnt, 
                     uint8_t r, uint8_t g, uint8_t b, uint8_t level = 0x7F) {
        reportId = static_cast<uint8_t>(ReportID::LEDOutput);
        command = 0x01;
        ledIndex = startIndex;
        red = r;
        green = g;
        blue = b;
        brightness = level;
        count = cnt;
        reserved[0] = reserved[1] = reserved[2] = 0;
    }
    
    void setAllLEDs(uint8_t r, uint8_t g, uint8_t b, uint8_t level = 0x7F) {
        reportId = static_cast<uint8_t>(ReportID::LEDOutput);
        command = 0x02;
        ledIndex = 0;
        red = r;
        green = g;
        blue = b;
        brightness = level;
        count = 0xFF;
        reserved[0] = reserved[1] = reserved[2] = 0;
    }
};

static_assert(sizeof(LEDOutputReport) == 12, "LEDOutputReport must be 12 bytes");

/**
 * Display Block Report (Report IDs 0x80-0x83)
 * 62 bytes per packet for display updates
 * 
 * From drawBulkDisplay/WriteWindowRequest analysis
 */
struct DisplayBlockReport {
    uint8_t reportId;       // 0x80-0x83
    
    // Header (for first packet, reportId = 0x80)
    union {
        struct {
            uint8_t displayIndex;   // Which display (0 or 1)
            uint8_t flags;          // Update flags
            uint16_t x;             // X position
            uint16_t y;             // Y position
            uint16_t width;         // Width
            uint16_t height;        // Height
            uint8_t dataFormat;     // 0x00 = RGB565
            uint8_t reserved[3];    // Padding
        } header;
        
        // Continuation packets (0x81-0x82)
        struct {
            uint16_t sequenceNum;   // Packet sequence
            uint8_t data[59];       // Pixel data
        } continuation;
        
        // Raw data access
        uint8_t rawData[61];
    };
    
    void initHeader(uint8_t display, uint16_t x, uint16_t y, 
                    uint16_t w, uint16_t h, uint8_t format = 0x00) {
        reportId = static_cast<uint8_t>(ReportID::DisplayBlock0);
        header.displayIndex = display;
        header.flags = 0;
        header.x = x;
        header.y = y;
        header.width = w;
        header.height = h;
        header.dataFormat = format;
        std::memset(header.reserved, 0, sizeof(header.reserved));
    }
    
    void initContinuation(ReportID id, uint16_t seq, const uint8_t* data, size_t len) {
        reportId = static_cast<uint8_t>(id);
        continuation.sequenceNum = seq;
        size_t copyLen = (len > 59) ? 59 : len;
        std::memcpy(continuation.data, data, copyLen);
        if (copyLen < 59) {
            std::memset(continuation.data + copyLen, 0, 59 - copyLen);
        }
    }
};

static_assert(sizeof(DisplayBlockReport) == 62, "DisplayBlockReport must be 62 bytes");

/**
 * Control Report (Report ID 0xF0)
 * 9 bytes for device control/configuration
 */
struct ControlReport {
    uint8_t reportId;       // 0xF0
    
    uint8_t command;        // Command type
    uint8_t subCommand;     // Sub-command
    
    // Command data (6 bytes)
    union {
        struct {
            uint8_t level;      // For backlight/contrast
            uint8_t reserved[5];
        } backlight;
        
        struct {
            uint8_t mode;       // Device mode
            uint8_t flags;
            uint8_t reserved[4];
        } deviceMode;
        
        uint8_t rawData[6];
    };
    
    enum class Command : uint8_t {
        SetBacklight = 0x01,
        SetContrast = 0x02,
        SetDeviceMode = 0x10,
        QueryStatus = 0x20,
        Reset = 0xFF
    };
    
    void setBacklight(uint8_t level) {
        reportId = static_cast<uint8_t>(ReportID::Control);
        command = static_cast<uint8_t>(Command::SetBacklight);
        subCommand = 0;
        backlight.level = level;
        std::memset(backlight.reserved, 0, sizeof(backlight.reserved));
    }
    
    void setContrast(uint8_t level) {
        reportId = static_cast<uint8_t>(ReportID::Control);
        command = static_cast<uint8_t>(Command::SetContrast);
        subCommand = 0;
        backlight.level = level;
        std::memset(backlight.reserved, 0, sizeof(backlight.reserved));
    }
    
    void setDeviceMode(uint8_t mode, uint8_t flags = 0) {
        reportId = static_cast<uint8_t>(ReportID::Control);
        command = static_cast<uint8_t>(Command::SetDeviceMode);
        subCommand = 0;
        deviceMode.mode = mode;
        deviceMode.flags = flags;
        std::memset(deviceMode.reserved, 0, sizeof(deviceMode.reserved));
    }
};

static_assert(sizeof(ControlReport) == 9, "ControlReport must be 9 bytes");

/**
 * End of Update Request (from Display::Bulk::EndOfUpdateRequest)
 * Appended to final display packet
 */
struct EndOfUpdateRequest {
    uint8_t displayIndex;
    uint8_t flags;
    uint16_t reserved;
    
    EndOfUpdateRequest(uint8_t display = 0) 
        : displayIndex(display), flags(0), reserved(0) {}
};

static_assert(sizeof(EndOfUpdateRequest) == 4, "EndOfUpdateRequest must be 4 bytes");

#pragma pack(pop)

/**
 * Helper class for building display update packets
 */
class DisplayPacketBuilder {
public:
    DisplayPacketBuilder(uint8_t displayIndex, uint16_t x, uint16_t y, 
                         uint16_t width, uint16_t height)
        : m_displayIndex(displayIndex)
        , m_x(x), m_y(y)
        , m_width(width), m_height(height)
        , m_sequenceNum(0)
    {}
    
    /**
     * Build header packet (first packet)
     */
    DisplayBlockReport buildHeader() const {
        DisplayBlockReport report;
        report.initHeader(m_displayIndex, m_x, m_y, m_width, m_height);
        return report;
    }
    
    /**
     * Build continuation packet
     * @param data Pixel data pointer
     * @param len Length of data (max 59 bytes)
     * @param isFinal True if this is the last packet
     */
    DisplayBlockReport buildContinuation(const uint8_t* data, size_t len, bool isFinal) {
        DisplayBlockReport report;
        ReportID id = isFinal ? ReportID::DisplayBlock3 : 
                      (m_sequenceNum == 0 ? ReportID::DisplayBlock1 : ReportID::DisplayBlock2);
        report.initContinuation(id, m_sequenceNum++, data, len);
        return report;
    }
    
private:
    uint8_t m_displayIndex;
    uint16_t m_x, m_y;
    uint16_t m_width, m_height;
    uint16_t m_sequenceNum;
};

} // namespace MaschineStudio
} // namespace NHL2
} // namespace NI
