#pragma once
namespace NI::UIA {
class DeviceContext {
public:
    virtual void attachOSHandle(CGContext*);
    virtual void detachOSHandle();
    DeviceContext(int, int);
    virtual ~DeviceContext();
};
}
