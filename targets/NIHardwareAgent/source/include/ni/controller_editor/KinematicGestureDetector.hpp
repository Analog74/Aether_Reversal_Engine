#pragma once
namespace NI::NHL2 {
class KinematicGestureDetector {
public:
    virtual void detectBackspinEnd();
    virtual void detectBackspinStart();
    virtual void detectForwardSpinEnd();
    virtual void detectForwardSpinStart();
    virtual void detectMotorOffEmulationEnd();
    KinematicGestureDetector(float);
};
}
