#include <ni/controller_editor/Device.hpp>
namespace non-virtual thunk to NI::NHL2::Traktor::KontrolS4MK3 {

void Device::postConnect() {
(**(code **)(*(long *)(this + 0x170) + 0x68))(this + 0x170);
  ControllerDevice::postConnect((ControllerDevice *)(this + -0x40));
  return;
}

void Device::updateLEDs(bool param_1) {
}

Device::~Device() {
~Device(this + -0x1b0);
  delete(this + -0x1b0);
  return;
}
}
