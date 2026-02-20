#pragma once
namespace NI::GP::DETAIL {
class TURegularAllocatorWT {
public:
    virtual void allocatePacket(unsigned long);
    virtual void deallocatePacket(void*);
};
}
