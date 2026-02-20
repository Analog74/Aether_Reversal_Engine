#include <ni/controller_editor/HIDDevice.hpp>
namespace NI::NHL2 {

HIDDevice::HIDDevice() {
OSImpl *pOVar1;
  
  *(void ***)this = &PTR__HIDDevice_1009e74d8;
  pOVar1 = (OSImpl *)new(0x110);
  *(void ***)pOVar1 = &PTR__OSImpl_1009e7458;
  *(unsigned int *)(pOVar1 + 8) = 0;
  *(unsigned long long *)(pOVar1 + 0x10) = 0;
  *(unsigned long long *)(pOVar1 + 0x18) = 0;
  // std code
  *(void ***)pOVar1 = &PTR__OSImpl_1009e73c8;
  *(HIDDevice **)(pOVar1 + 0x60) = this;
  *(unsigned long long *)(pOVar1 + 0x98) = 0;
  *(unsigned long long *)(pOVar1 + 0x68) = 0;
  *(unsigned long long *)(pOVar1 + 0x70) = 0;
  *(unsigned long long *)(pOVar1 + 0x78) = 0;
  *(unsigned long long *)(pOVar1 + 0x80) = 0;
  *(unsigned long long *)(pOVar1 + 0x81) = 0;
  *(unsigned long long *)(pOVar1 + 0x89) = 0;
  *(unsigned long long *)(pOVar1 + 0xa0) = 0x32aaaba7;
  *(unsigned long long *)(pOVar1 + 0xa8) = 0;
  *(unsigned long long *)(pOVar1 + 0xb0) = 0;
  *(unsigned long long *)(pOVar1 + 0xb8) = 0;
  *(unsigned long long *)(pOVar1 + 0xc0) = 0;
  *(unsigned long long *)(pOVar1 + 200) = 0;
  *(unsigned long long *)(pOVar1 + 0xd0) = 0;
  *(unsigned long long *)(pOVar1 + 0xd8) = 0;
  *(unsigned long long *)(pOVar1 + 0xe0) = 0x3cb0b1bb;
  *(unsigned long long *)(pOVar1 + 0xe8) = 0;
  *(unsigned long long *)(pOVar1 + 0xf0) = 0;
  *(unsigned long long *)(pOVar1 + 0xf8) = 0;
  *(unsigned long long *)(pOVar1 + 0x100) = 0;
  *(unsigned long long *)(pOVar1 + 0x108) = 0;
  *(OSImpl **)(this + 0x70) = pOVar1;
  USBDevice::USBDevice((USBDevice *)this,pOVar1);
  *(void ***)this = &PTR__HIDDevice_1009e74d8;
  *(unsigned long long *)(this + 0xa0) = 0;
  *(unsigned int *)(this + 0x14) = 2;
  
}

void HIDDevice::subscribeToInputReports(bool param_1) {
}

void HIDDevice::unsubscribeFromInputReports() {
long lVar1;
  
  lVar1 = *(long *)(this + 0x70);
  if (*(long *)(lVar1 + 0x70) != 0) {
    _IOHIDDeviceUnscheduleFromRunLoop
              (*(unsigned long long *)(lVar1 + 0x68),*(long *)(lVar1 + 0x70),
               *(unsigned long long *)PTR__kCFRunLoopDefaultMode_1009cc310);
    _IOHIDDeviceRegisterInputReportCallback
              (*(unsigned long long *)(lVar1 + 0x68),*(long *)(lVar1 + 0x78),
               *(long *)(lVar1 + 0x80) - *(long *)(lVar1 + 0x78),0,lVar1);
    if (*(char *)(lVar1 + 0x90) != '\0') {
      _CFRunLoopStop(*(unsigned long long *)(lVar1 + 0x70));
      // std code
      *(unsigned char *)(lVar1 + 0x90) = 0;
    }
    *(unsigned long long *)(lVar1 + 0x80) = *(unsigned long long *)(lVar1 + 0x78);
    *(unsigned long long *)(lVar1 + 0x70) = 0;
  }
  return;
}

HIDDevice::~HIDDevice() {
HIDDevice *pHVar1;
  
  *(void ***)this = &PTR__HIDDevice_1009e74d8;
  pHVar1 = *(HIDDevice **)(this + 0xa0);
  if (this + 0x80 == pHVar1) {
    (**(code **)(*(long *)pHVar1 + 0x20))();
  }
  else if (pHVar1 != (HIDDevice *)0x0) {
    (**(code **)(*(long *)pHVar1 + 0x28))();
  }
  USBDevice::~USBDevice((USBDevice *)this);
  delete(this);
  return;
}
}
