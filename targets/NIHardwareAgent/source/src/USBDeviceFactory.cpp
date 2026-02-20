#include <ni/controller_editor/USBDeviceFactory.hpp>
namespace NI::NHL2 {

void USBDeviceFactory::createOSImpl() {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)new(0xb0);
  *puVar1 = this;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(unsigned long long *)((long)puVar1 + 0x66) = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = puVar1 + 0x14;
  *(unsigned long long **)this = puVar1;
  return;
}

USBDeviceFactory::USBDeviceFactory() [clone .cold.2] {
if (this != (USBDeviceFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010038accd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))();
    
  }
  
}

USBDeviceFactory::~USBDeviceFactory() {
USBDeviceFactory *pUVar1;
  
  destroyOSImpl(this);
  pUVar1 = *(USBDeviceFactory **)(this + 0x60);
  if (this + 0x40 == pUVar1) {
    (**(code **)(*(long *)pUVar1 + 0x20))();
    pUVar1 = *(USBDeviceFactory **)(this + 0x30);
    if (this + 0x10 == pUVar1) goto LAB_10019e116;
  }
  else {
    if (pUVar1 != (USBDeviceFactory *)0x0) {
      (**(code **)(*(long *)pUVar1 + 0x28))();
    }
    pUVar1 = *(USBDeviceFactory **)(this + 0x30);
    if (this + 0x10 == pUVar1) {
LAB_10019e116:
                    /* WARNING: Could not recover jumptable at 0x00010019e11d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pUVar1 + 0x20))();
      return;
    }
  }
  if (pUVar1 != (USBDeviceFactory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010019e100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pUVar1 + 0x28))();
    return;
  }
  return;
}
}
