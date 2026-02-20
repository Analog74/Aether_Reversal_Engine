#pragma once
namespace NI::GP::DA {
class RegularAllocator {
public:
    virtual void allocate(int);
    virtual void deallocate(void*);
    virtual ~RegularAllocator();
};
}
