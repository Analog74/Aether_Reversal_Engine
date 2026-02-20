#include <ni/controller_editor/_MakeUnitToUnitFunc_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details {

void _MakeUnitToUnitFunc(std::function<void ()> const&) {
long *plVar1;
  unsigned long long *puVar2;
  unsigned long long uVar3;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 == (long *)0x0) {
    local_38 = (long *)0x0;
  }
  else if ((long *)param_1 == plVar1) {
    local_38 = local_58;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    local_38 = (long *)(**(code **)(*plVar1 + 0x10))();
  }
  *(unsigned long long *)(this + 0x20) = 0;
  puVar2 = (unsigned long long *)new char[0x40];
  *puVar2 = &PTR____func_101b0bad8;
  if (local_38 == (long *)0x0) {
    puVar2[6] = 0;
  }
  else if (local_58 == local_38) {
    puVar2[6] = puVar2 + 2;
    (**(code **)(*local_38 + 0x18))();
  }
  else {
    uVar3 = (**(code **)(*local_38 + 0x10))();
    puVar2[6] = uVar3;
  }
  *(unsigned long long **)(this + 0x20) = puVar2;
  if (local_58 == local_38) {
    (**(code **)(*local_38 + 0x20))();
  }
  else if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_20) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
