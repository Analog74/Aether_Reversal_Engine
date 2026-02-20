#include <ni/controller_editor/FX2Pedal.hpp>
namespace NI::NHL2::SERVER {

void FX2Pedal::forgetValue() {
*(unsigned long long *)(this + 0x18) = 0;
  this[4] = (FX2Pedal)0x0;
  this[6] = (FX2Pedal)0x0;
  return;
}

FX2Pedal::FX2Pedal(unsigned int) {
*(uint *)this = param_1;
  *(unsigned long long *)(this + 4) = 0xfff01000100;
  *(unsigned long long *)(this + 0xc) = 0xffffffff00000100;
  *(unsigned int *)(this + 0x18) = 0;
  *(unsigned int *)(this + 0x1c) = 0;
  *(unsigned int *)(this + 0x20) = 0x47ae147b;
  *(unsigned int *)(this + 0x24) = 0x3f747ae1;
  *(unsigned long long *)(this + 0x28) = 0xbff0000000000000;
  *(unsigned long long *)(this + 0x30) = 0xbff0000000000000;
  
}

void FX2Pedal::getLowHighPosition(double&, double&) const {
*param_1 = *(double *)(this + 0x30);
  *param_2 = *(double *)(this + 0x28);
  return;
}

void FX2Pedal::recalibrate() {
*(unsigned long long *)(this + 0x28) = *(unsigned long long *)(this + 0x18);
  *(unsigned long long *)(this + 0x30) = *(unsigned long long *)(this + 0x18);
  this[4] = (FX2Pedal)0x0;
  this[0xf] = (FX2Pedal)0x0;
  *(void2 *)(this + 0xd) = 1;
  this[6] = (FX2Pedal)0x1;
  return;
}

void FX2Pedal::setAsSwitch(bool param_1) {
}

void FX2Pedal::setAutoCalibrate(bool param_1) {
}

void FX2Pedal::setInputBitRange(unsigned int) {
*(uint *)(this + 8) = param_1;
  return;
}

void FX2Pedal::setLowHighPosition(double, double) {
*(double *)(this + 0x30) = param_1;
  *(double *)(this + 0x28) = param_2;
  return;
}

void FX2Pedal::setSampleTip(bool param_1) {
}

void FX2Pedal::stopCalibration() {
this[6] = (FX2Pedal)0x0;
  return;
}

FX2Pedal::~FX2Pedal() {
return;
}
}
