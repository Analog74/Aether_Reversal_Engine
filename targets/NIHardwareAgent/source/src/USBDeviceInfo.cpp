#include <ni/controller_editor/USBDeviceInfo.hpp>
namespace NI::NHL2 {

USBDeviceInfo::~USBDeviceInfo() {
USBDeviceInfo UVar1;
  
  if (((byte)this[0x38] & 1) == 0) {
    UVar1 = this[0x20];
  }
  else {
    delete(*(void **)(this + 0x48));
    UVar1 = this[0x20];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[8];
  }
  else {
    delete(*(void **)(this + 0x30));
    UVar1 = this[8];
  }
  if (((byte)UVar1 & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x18));
  return;
}
}
