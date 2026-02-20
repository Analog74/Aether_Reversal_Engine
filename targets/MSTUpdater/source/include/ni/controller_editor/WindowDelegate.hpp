#pragma once
namespace NI::UIA::COCOA {
class WindowDelegate {
public:
    virtual void allocInstance();
    virtual void windowShouldClose(objc_object*, objc_selector*, objc_object*);
    virtual void windowWillClose(objc_object*, objc_selector*, NSNotification*);
};
}
