#pragma once
namespace NI::NHL2 {
class USBDeviceFactory {
public:
    virtual void createOSImpl();
    USBDeviceFactory() [clone .cold.2];
    virtual ~USBDeviceFactory();
};
}
