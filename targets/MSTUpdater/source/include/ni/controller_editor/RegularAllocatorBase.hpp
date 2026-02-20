#pragma once
namespace NI::GP::DETAIL {
class RegularAllocatorBase {
public:
    virtual void allocNewPacket();
    virtual ~RegularAllocatorBase();
};
}
