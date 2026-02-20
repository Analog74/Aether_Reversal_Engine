#pragma once
namespace NI::NHL2 {
class ControllerDevice {
public:
    virtual void getDeviceInfo() const;
    virtual void getFirmwareVersion(unsigned int&) const;
    virtual void getFloatProperty(unsigned int, float&) const;
    virtual void getMIDITransportEnabled() const;
    virtual void getOSHandle() const;
    virtual void getServiceVersion(unsigned int&) const;
    virtual void isConnected() const;
    virtual void queryPotiValues() const;
    virtual void setFloatProperty(unsigned int, float);
    virtual void subscribeToHIDInputReports();
    virtual void subscribeToMIDIEvents(unsigned int);
    virtual void writeUserData();
    virtual ~ControllerDevice();
};
}
