#pragma once
namespace NI::NHL2::Interfaces {
class LEDsV1 {
public:
    virtual void getLEDLevelFactors(float&, float&) const;
    virtual void getLEDLevelFactorsTraktor(float&, float&, float) const;
    LEDsV1(unsigned int);
    virtual void setLEDLevel(unsigned int, float);
    virtual void setLEDLevelByte(unsigned int, unsigned char);
    virtual ~LEDsV1();
};
}
