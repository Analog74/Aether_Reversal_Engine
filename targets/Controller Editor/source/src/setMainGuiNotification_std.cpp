#include <ni/controller_editor/setMainGuiNotification_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerWidget {

void setMainGuiNotification(std::function<void ()>) {
long *plVar1;
  function<void()> local_58 [32];
  function<void()> *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_38 = (function<void()> *)0x0;
  }
  else if (param_2 == plVar1) {
    local_38 = local_58;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_38 = (function<void()> *)(**(code **)(*plVar1 + 0x10))();
  }
  // std code
  if (local_58 == local_38) {
    (**(code **)(*(long *)local_38 + 0x20))();
  }
  else if (local_38 != (function<void()> *)0x0) {
    (**(code **)(*(long *)local_38 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
