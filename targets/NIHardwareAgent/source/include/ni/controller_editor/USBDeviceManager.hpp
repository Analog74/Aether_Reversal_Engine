#pragma once
namespace NI::NHL2::SERVER {
class USBDeviceManager {
public:
    virtual void getDeviceEnabled(unsigned int);
    virtual void loadDevices();
    virtual void unloadDevices();
    USBDeviceManager() [clone .cold.2];
    virtual ~USBDeviceManager();
};
}
