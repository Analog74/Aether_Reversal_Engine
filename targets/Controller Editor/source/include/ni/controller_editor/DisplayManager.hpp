#pragma once
namespace NI::UIA {
class DisplayManager {
public:
    virtual void detectVerticalLayout();
    virtual void getCurrentActiveDisplay();
};
}
