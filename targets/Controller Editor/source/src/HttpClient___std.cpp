#include <ni/controller_editor/HttpClient___std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::cfg::updateFromInternet(ni::uret {

void HttpClient&, std::function<void (bool)>) {
long *plVar1;
  unsigned long local_d8;
  unsigned long long uStack_d0;
  char *local_c8;
  long local_b8 [4];
  long *local_98;
  long local_88 [4];
  long *local_68;
  long local_58 [4];
  long *local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  plVar1 = (long *)param_2[4];
  if (plVar1 == (long *)0x0) {
    local_38 = (long *)0x0;
  }
  else if (param_2 == plVar1) {
    local_38 = local_58;
    (**(code **)(*plVar1 + 0x18))();
  }
  else {
    param_2[4] = 0;
    local_38 = plVar1;
  }
  local_c8 = (char *)new char[0x40];
  local_d8 = 0x41;
  uStack_d0 = 0x38;
  builtin_strncpy(local_c8,"http://configuration.native-instruments.com/tracking.cfg",0x39);
  if (local_38 == (long *)0x0) {
    local_98 = (long *)0x0;
  }
  else if (local_58 == local_38) {
    local_98 = local_b8;
    (**(code **)(*local_38 + 0x18))();
  }
  else {
    local_98 = local_38;
    local_38 = (long *)0x0;
  }
  local_68 = (long *)0x0;
  plVar1 = (long *)new char[0x40];
  *plVar1 = (long)&PTR____func_101b0d5b8;
  if (local_98 == (long *)0x0) {
    plVar1[6] = 0;
  }
  else if (local_b8 == local_98) {
    plVar1[6] = (long)(plVar1 + 2);
    (**(code **)(*local_98 + 0x18))();
  }
  else {
    plVar1[6] = (long)local_98;
    local_98 = (long *)0x0;
  }
  local_68 = plVar1;
  HttpClient::get(param_1,&local_d8,local_88);
  if (local_88 == local_68) {
    (**(code **)(*local_68 + 0x20))();
    if (local_b8 == local_98) return;
  }
  else {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x28))();
    }
    if (local_b8 == local_98) {
      (**(code **)(*local_98 + 0x20))();
      goto joined_r0x0001003e175e;
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x28))();
  }
joined_r0x0001003e175e:
  if ((local_d8 & 1) != 0) {
    delete(local_c8);
  }
  if (local_58 == local_38) {
    (**(code **)(*local_38 + 0x20))();
  }
  else if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x28))();
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
