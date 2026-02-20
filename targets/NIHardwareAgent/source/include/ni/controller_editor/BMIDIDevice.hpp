#pragma once
namespace NI::NHL2::SERVER {
class BMIDIDevice {
public:
    virtual void getUSBDeviceOSHandle() const;
    virtual void stop();
    virtual ~BMIDIDevice();
};
}
