#pragma once
namespace NI::NHL2::Interfaces {
class LEDDisplay {
public:
    virtual void setLEDDisplayNumber(unsigned int, unsigned int, bool);
};
}
