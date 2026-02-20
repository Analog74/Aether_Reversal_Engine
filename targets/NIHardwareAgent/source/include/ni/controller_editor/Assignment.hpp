#pragma once
namespace NI::NHL2 {
class Assignment {
public:
    virtual void boundValueToMinMax(int) const;
    virtual void feedbackMidiValue(int);
    virtual void hasLEDControlMode() const;
    virtual void isButtonLEDOn() const;
    virtual void onSwitchAction(int&);
    virtual void setExternalMidiValue(int);
    virtual void setMidiID(unsigned char);
    virtual void setMidiValue(int, bool);
    virtual void wantsFeedbackOnly() const;
};
}
