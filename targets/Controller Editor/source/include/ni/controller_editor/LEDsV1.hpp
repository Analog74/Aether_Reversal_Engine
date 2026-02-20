#pragma once
namespace NI::NHL2::Interfaces {
class LEDsV1 {
public:
    LEDsV1(unsigned int);
    virtual void setLEDLevel(unsigned int, unsigned char);
    virtual void setLEDLevelByte(unsigned int, unsigned char);
    virtual ~LEDsV1();
};
}
