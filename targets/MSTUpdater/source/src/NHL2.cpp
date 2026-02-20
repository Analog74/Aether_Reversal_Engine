#include <ni/controller_editor/NHL2.hpp>
namespace NI::NHL2::USBDeviceFactory::initWithDeviceFilter(NI {

void NHL2::USBDeviceFilter const&, bool) {
USBDeviceFactory extraout_AL;
  USBDeviceFactory UVar1;
  unsigned long uVar2;
  void7 extraout_var;
  unsigned long long uVar3;
  void7 uVar4;
  
  if (((byte)param_1[0x20] & 1) == 0) {
    uVar2 = (unsigned long)((byte)param_1[0x20] >> 1);
  }
  else {
    uVar2 = *(unsigned long *)(param_1 + 0x28);
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (this[0x10] != (USBDeviceFactory)0x0) {
      this[0x10] = (USBDeviceFactory)0x0;
      OSImpl::deInit(*(OSImpl **)(this + 8));
    }
    OSImpl::initWithDeviceFilter(*(OSImpl **)(this + 8),param_1);
    this[0x10] = extraout_AL;
    UVar1 = extraout_AL;
    uVar4 = extraout_var;
    if (!param_2) {
      uVar3 = OSImpl::deInit(*(OSImpl **)(this + 8));
      UVar1 = this[0x10];
      uVar4 = (void7)((unsigned long)uVar3 >> 8);
    }
    uVar3 = 0(uVar4,UVar1 != (USBDeviceFactory)0x0);
  }
  return uVar3;
}
}
