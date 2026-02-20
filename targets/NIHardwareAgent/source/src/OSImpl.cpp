#include <ni/controller_editor/OSImpl.hpp>
namespace NI::NHL2::HIDDevice {

void OSImpl::runInputReportReader() {
unsigned long long uVar1;
  
  // std code
  uVar1 = _CFRunLoopGetCurrent();
  *(unsigned long long *)(this + 0x70) = uVar1;
  _IOHIDDeviceScheduleWithRunLoop
            (*(unsigned long long *)(this + 0x68),uVar1,*(unsigned long long *)PTR__kCFRunLoopDefaultMode_1009cc310)
  ;
  _IOHIDDeviceRegisterInputReportCallback
            (*(unsigned long long *)(this + 0x68),*(long *)(this + 0x78),
             *(long *)(this + 0x80) - *(long *)(this + 0x78),onInputReport,this);
  // std code
  // std code
  _CFRunLoopRun();
  return;
}
}
