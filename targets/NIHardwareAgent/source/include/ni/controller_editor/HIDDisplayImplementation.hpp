#pragma once
namespace NI::NHL2::SERVER {
class HIDDisplayImplementation {
public:
    virtual void dimDisplays(unsigned int);
    virtual void turnOnDisplays();
};
}
