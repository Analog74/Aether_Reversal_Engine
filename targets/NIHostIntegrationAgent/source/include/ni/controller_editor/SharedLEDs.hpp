#pragma once
namespace NI::dawcontrol::hw {
class SharedLEDs {
public:
    virtual void getLed(unsigned int);
    virtual void removePlane(unsigned int);
    virtual ~SharedLEDs();
};
}
