#pragma once
namespace NI::GP {
class DeviceNotification {
public:
    virtual void deInitOS();
    virtual void initOS();
};
}
