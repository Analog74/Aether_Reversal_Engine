#include <ni/controller_editor/BMIDIDevice.hpp>
namespace NI::NHL2::SERVER {

void BMIDIDevice::getUSBDeviceOSHandle() const {
return 0;
}

void BMIDIDevice::stop() {
if (this[0x40] != (BMIDIDevice)0x0) {
    this[0x40] = (BMIDIDevice)0x0;
    Impl::stop(*(Impl **)(this + 0x48));
    return;
  }
  return;
}

BMIDIDevice::~BMIDIDevice() {
~BMIDIDevice(this);
  delete(this);
  return;
}
}
