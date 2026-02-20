#pragma once
namespace NI::UIA::COCOA {
class Window {
public:
    virtual void canBecomeKeyWindow(objc_object*, objc_selector*);
    virtual void canBecomeMainWindow(objc_object*, objc_selector*);
};
}
