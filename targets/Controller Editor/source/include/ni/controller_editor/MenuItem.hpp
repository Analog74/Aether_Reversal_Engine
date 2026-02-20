#pragma once
namespace NI::UIA::COCOA {
class MenuItem {
public:
    virtual void onItemClicked(objc_object*, objc_selector*, objc_object*);
    virtual void validateMenuItem(objc_object*, objc_selector*, NSMenuItem*);
};
}
