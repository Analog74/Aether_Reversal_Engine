#pragma once
namespace NI::GP {
class SystemInfo2 {
public:
    virtual void retrieveCPUInfo();
    virtual void retrieveDeviceInfo();
    virtual void retrieveGPUInfo();
    virtual void retrieveHWInfo();
};
}
