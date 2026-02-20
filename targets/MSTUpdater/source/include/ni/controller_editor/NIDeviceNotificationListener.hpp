#pragma once
namespace NI::GP {
class NIDeviceNotificationListener {
public:
    virtual void dealloc(objc_object*, objc_selector*);
    virtual void init(objc_object*, objc_selector*);
};
}
