#pragma once
namespace NI::NHL2::SERVER {
class PadControlImplementation {
public:
    virtual void forgetPadValues(bool);
    virtual void getPadProperty(unsigned int, unsigned int&) const;
    virtual void getPadSensitivity() const;
    virtual void getPadVelocity() const;
    virtual void readPadCompensationData(bool);
    virtual void resetPadStates();
    virtual void setNewFoilParams();
    virtual void setPadProperty(unsigned int, unsigned int);
    virtual void setPadSensitivity(unsigned short);
    virtual void setPadVelocity(unsigned char);
    virtual ~PadControlImplementation();
};
}
