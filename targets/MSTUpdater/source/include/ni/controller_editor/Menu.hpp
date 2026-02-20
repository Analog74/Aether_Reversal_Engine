#pragma once
namespace NI::UIA::COCOA {
class Menu {
public:
    virtual void initWithUIAEventTarget(objc_object*, objc_selector*, objc_object*);
    virtual void menuWillOpen(objc_object*, objc_selector*, NSMenu*);
    virtual void setUIAEventTarget(objc_object*, objc_selector*, objc_object*);
};
}
