#include <ni/controller_editor/KinematicGestureDetector.hpp>
namespace NI::NHL2 {

void KinematicGestureDetector::detectBackspinEnd() {
bool bVar1;
  
  bVar1 = true;
  if (*(float *)(this + 0x18) <= -0.15) {
    if (this[0x20] == (KinematicGestureDetector)0x0) {
      return false;
    }
    bVar1 = 4.5 < *(float *)(this + 0x1c);
  }
  return bVar1;
}

void KinematicGestureDetector::detectBackspinStart() {
if ((this[0x20] == (KinematicGestureDetector)0x0) && (this[0x38] != (KinematicGestureDetector)0x0)
     ) {
    return *(float *)(this + 0x18) <= -2.5 && *(float *)(this + 0x18) != -2.5;
  }
  return false;
}

void KinematicGestureDetector::detectForwardSpinEnd() {
bool bVar1;
  
  bVar1 = true;
  if (0.001 < *(float *)(this + 0x18) || *(float *)(this + 0x18) == 0.001) {
    bVar1 = this[0x20] != (KinematicGestureDetector)0x0;
  }
  return bVar1;
}

void KinematicGestureDetector::detectForwardSpinStart() {
if ((this[0x20] == (KinematicGestureDetector)0x0) && (this[0x38] != (KinematicGestureDetector)0x0)
     ) {
    return 1.0 < *(float *)(this + 0x18);
  }
  return false;
}

void KinematicGestureDetector::detectMotorOffEmulationEnd() {
if (this[0x20] != (KinematicGestureDetector)0x0) {
    return true;
  }
  return *(float *)(this + 0x18) <= -0.002 && *(float *)(this + 0x18) != -0.002;
}

KinematicGestureDetector::KinematicGestureDetector(float param_1) {
}
}
