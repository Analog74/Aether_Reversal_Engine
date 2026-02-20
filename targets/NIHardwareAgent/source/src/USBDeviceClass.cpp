#include <ni/controller_editor/USBDeviceClass.hpp>
namespace NI::NHL2::SERVER {

void USBDeviceClass::removeDevices() [clone .cold.1] {
USBDeviceClass *pUVar1;
  long lVar2;
  
  LOCK();
  pUVar1 = this + 8;
  lVar2 = *(long *)pUVar1;
  *(long *)pUVar1 = *(long *)pUVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

void USBDeviceClass::resume() [clone .cold.1] {
USBDeviceClass *pUVar1;
  long lVar2;
  
  LOCK();
  pUVar1 = this + 8;
  lVar2 = *(long *)pUVar1;
  *(long *)pUVar1 = *(long *)pUVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

void USBDeviceClass::suspend() [clone .cold.1] {
USBDeviceClass *pUVar1;
  long lVar2;
  
  LOCK();
  pUVar1 = this + 8;
  lVar2 = *(long *)pUVar1;
  *(long *)pUVar1 = *(long *)pUVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

USBDeviceClass::~USBDeviceClass() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
