#include <ni/controller_editor/function_void______std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA::PowerManager::PowerManager(std {

void function<void ()>, std::function<void ()>) {
long *plVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  function<void()> local_68 [32];
  function<void()> *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)this = 0;
  g_IO_Connect = _IORegisterForSystemPower(0,&g_NotificationPortRef,sleepModeCallback,&g_Notifier);
  if (g_IO_Connect != 0) {
    uVar2 = _CFRunLoopGetCurrent();
    uVar3 = _IONotificationPortGetRunLoopSource(g_NotificationPortRef);
    _CFRunLoopAddSource(uVar2,uVar3,*(unsigned long long *)PTR__kCFRunLoopDefaultMode_101ab4688);
  }
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_48 = (function<void()> *)0x0;
  }
  else if(3 param_3, param_2 == plVar1 {
    local_48 = local_68;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_48 = (function<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code if(3 param_3, local_68 == local_48 {
    (**(code **)(*(long *)local_48 + 0x20))();
    plVar1 = (long *)param_3[4];
  }
  else {
    if (local_48 != (function<void()> *)0x0) {
      (**(code **)(*(long *)local_48 + 0x28))();
    }
    plVar1 = (long *)param_3[4];
  }
  if (plVar1 == (long *)0x0) {
    local_48 = (function<void()> *)0x0;
  }
  else if(3 param_3, param_3 == plVar1 {
    local_48 = local_68;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_68);
  }
  else {
    local_48 = (function<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code if(3 param_3, local_68 == local_48 {
    (**(code **)(*(long *)local_48 + 0x20))();
  }
  else if(3 param_3, local_48 != (function<void(> *)0x0) {
    (**(code **)(*(long *)local_48 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
