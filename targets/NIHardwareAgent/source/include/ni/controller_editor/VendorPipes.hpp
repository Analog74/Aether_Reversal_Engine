#pragma once
namespace NI::NHL2::NIUCDevice::OSImpl {
class VendorPipes {
public:
    virtual void ReadCompletition(void*, int, void*);
    virtual void scheduleAsyncRead();
    virtual ~VendorPipes();
};
}
