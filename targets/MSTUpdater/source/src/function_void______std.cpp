#include <ni/controller_editor/function_void______std.hpp>
namespace NI::UIA::PowerManager::PowerManager(std {

void function<void ()>, std::function<void ()>) {
long *plVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  long local_98 [4];
  function<void()> *local_78;
  long local_68 [4];
  function<void()> *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_1002272e0;
  *(unsigned long long *)this = 0;
  g_IO_Connect = _IORegisterForSystemPower(0,&g_NotificationPortRef,sleepModeCallback,&g_Notifier);
  if (g_IO_Connect != 0) {
    uVar2 = _CFRunLoopGetCurrent();
    uVar3 = _IONotificationPortGetRunLoopSource(g_NotificationPortRef);
    _CFRunLoopAddSource(uVar2,uVar3,*(unsigned long long *)PTR__kCFRunLoopDefaultMode_100227320);
  }
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_78 = (function<void()> *)0x0;
  }
  else if (plVar1 == param_2) {
    local_78 = (function<void()> *)local_98;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_78 = (function<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code
  if (local_78 == (function<void()> *)local_98) {
    (**(code **)(local_98[0] + 0x20))(local_98);
  }
  else if (local_78 != (function<void()> *)0x0) {
    (**(code **)(*(long *)local_78 + 0x28))();
  }
  plVar1 = (long *)param_3[4];
  if (plVar1 == (long *)0x0) {
    local_48 = (function<void()> *)0x0;
  }
  else if (plVar1 == param_3) {
    local_48 = (function<void()> *)local_68;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (function<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code
  if (local_48 == (function<void()> *)local_68) {
    (**(code **)(local_68[0] + 0x20))(local_68);
  }
  else if (local_48 != (function<void()> *)0x0) {
    (**(code **)(*(long *)local_48 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
