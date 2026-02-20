#pragma once
namespace NI::NHL2::SERVER::USBDeviceManager {
class SupportedDeviceClass {
public:
    virtual void checkEnabledStateAndForwarding();
    virtual ~SupportedDeviceClass();
};
}
