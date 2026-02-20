#include <ni/controller_editor/getSerialNumber_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Controller {

void getSerialNumber(std::string&) const {
unsigned int uVar1;
  MessageGetString local_248 [544];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101ab4610;
  MessageGetString::MessageGetString(local_248,0x436753);
  uVar1 = (**(code **)(*(long *)this + 0xf0))(this,local_248);
  if ((char)uVar1 != '\0') {
    // std code
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
