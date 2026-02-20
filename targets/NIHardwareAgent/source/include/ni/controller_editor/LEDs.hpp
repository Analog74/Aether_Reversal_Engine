#pragma once
namespace NI::NHL2::Interfaces {
class LEDs {
public:
    LEDs(unsigned int);
    virtual void setAllLEDsOff();
    virtual void setLEDOff(unsigned int);
    virtual void setRawLEDByte(unsigned int, unsigned char);
    virtual ~LEDs();
};
}
