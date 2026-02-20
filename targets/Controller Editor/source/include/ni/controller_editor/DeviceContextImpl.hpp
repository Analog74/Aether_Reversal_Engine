#pragma once
namespace NI::UIA {
class DeviceContextImpl {
public:
    virtual void attachOSHandle(CGContext*);
    virtual void detachOSHandle();
    DeviceContextImpl(int, int);
    virtual ~DeviceContextImpl();
};
}
