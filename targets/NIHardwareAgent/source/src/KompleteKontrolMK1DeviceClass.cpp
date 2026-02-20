#include <ni/controller_editor/KompleteKontrolMK1DeviceClass.hpp>
namespace NI::HWS1::DeviceManager {

KompleteKontrolMK1DeviceClass::~KompleteKontrolMK1DeviceClass() {
*(void ***)this = &PTR__SupportedDeviceClass_1009d84e0;
  if (((byte)this[0x170] & 1) != 0) {
    delete(*(void **)(this + 0x180));
  }
  NHL2::SERVER::USBDeviceClass::~USBDeviceClass((USBDeviceClass *)this);
  delete(this);
  return;
}
}
