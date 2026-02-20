#pragma once
namespace NI::GP {
class ResourceStorage {
public:
    virtual void getPos64() const;
    virtual void write(void const*, unsigned long);
    virtual ~ResourceStorage();
};
}
