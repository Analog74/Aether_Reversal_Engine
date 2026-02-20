#pragma once
namespace NI::NHL2::SERVER {
class PadControl {
public:
    virtual void calcCompensationFactors();
    virtual void getCompensation() const;
    virtual void getThresholdParameter(unsigned int) const;
    PadControl(float const&);
    virtual void resetCompensationData();
    virtual void setCompensation(bool);
    virtual void setSensitivity(float const&);
    virtual void setThresholdParameter(unsigned int, unsigned int);
    virtual ~PadControl();
};
}
