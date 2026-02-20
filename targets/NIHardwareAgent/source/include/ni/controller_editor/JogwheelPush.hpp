#pragma once
namespace NI::NHL2::SERVER {
class JogwheelPush {
public:
    virtual void finalizeCalibration();
    virtual void getCalibrationMode() const;
    JogwheelPush();
    virtual void relevelCalibration();
    virtual void setCalibValues(unsigned int, unsigned int, unsigned char);
    virtual ~JogwheelPush();
};
}
