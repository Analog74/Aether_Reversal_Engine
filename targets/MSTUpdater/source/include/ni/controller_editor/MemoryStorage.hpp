#pragma once
namespace NI::GP {
class MemoryStorage {
public:
    virtual void growFor(unsigned long);
    virtual ~MemoryStorage();
};
}
