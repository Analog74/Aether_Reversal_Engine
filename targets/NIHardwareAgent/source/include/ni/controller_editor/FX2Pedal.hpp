#pragma once
namespace NI::NHL2::SERVER {
class FX2Pedal {
public:
    virtual void forgetValue();
    FX2Pedal(unsigned int);
    virtual void getLowHighPosition(double&, double&) const;
    virtual void recalibrate();
    virtual void setAsSwitch(bool);
    virtual void setAutoCalibrate(bool);
    virtual void setInputBitRange(unsigned int);
    virtual void setLowHighPosition(double, double);
    virtual void setSampleTip(bool);
    virtual void stopCalibration();
    virtual ~FX2Pedal();
};
}
