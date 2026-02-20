#pragma once
namespace NI::NHL2::SERVER {
class USBDeviceClass {
public:
    virtual void removeDevices() [clone .cold.1];
    virtual void resume() [clone .cold.1];
    virtual void suspend() [clone .cold.1];
    virtual ~USBDeviceClass();
};
}
