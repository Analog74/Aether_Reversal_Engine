#pragma once
namespace NI::NHL2 {
class FX2Device {
public:
    FX2Device();
    virtual void setAnalogThreshold(unsigned char);
    virtual void setDirectMonitorState(unsigned int);
    virtual void setERPThreshold(unsigned char);
    virtual void subscribeToEvents();
    virtual void triggerAsyncMIDIRead();
    virtual void writeAnalogIO(unsigned char const*, unsigned int);
    virtual void writeDeviceUserData(unsigned int, unsigned char const*, unsigned int);
    virtual void writeDigitalIO(unsigned char const*, unsigned int);
    virtual ~FX2Device();
};
}
