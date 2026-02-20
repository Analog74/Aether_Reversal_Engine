#pragma once
namespace NI::GP::DETAIL {
class RegularAllocatorBase {
public:
    virtual void allocate(unsigned long);
    virtual void allocNewPacket();
    virtual void deallocate(void*);
    virtual ~RegularAllocatorBase();
};
}
