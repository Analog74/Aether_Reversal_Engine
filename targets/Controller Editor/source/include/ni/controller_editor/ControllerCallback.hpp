#pragma once
namespace NI::NHL2 {
class ControllerCallback {
public:
    virtual void onEncoderEvent(unsigned int, int);
    virtual void onPedalEvent(unsigned int, float);
    virtual void onPotiEvent(unsigned int, float);
    virtual void onSwitchEvent(unsigned int, bool);
    virtual void onUpdateStates();
};
}
