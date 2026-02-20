#pragma once
namespace NI::GP {
class RangeLimitingStorage {
public:
    virtual void getPos64() const;
    virtual void read(void*, unsigned long);
    virtual void write(void const*, unsigned long);
    virtual ~RangeLimitingStorage();
};
}
