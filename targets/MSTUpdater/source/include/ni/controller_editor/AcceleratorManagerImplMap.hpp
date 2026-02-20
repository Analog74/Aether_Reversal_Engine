#pragma once
namespace NI::UIA {
class AcceleratorManagerImplMap {
public:
    virtual void getCommand(unsigned int);
    virtual void removeAll();
    virtual ~AcceleratorManagerImplMap();
};
}
