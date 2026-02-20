#pragma once
namespace NI::NHL2 {
class JogWheelModel {
public:
    JogWheelModel();
    virtual void setSampleRate(int);
    virtual void setSpeedTargetPIDs(float);
};
}
