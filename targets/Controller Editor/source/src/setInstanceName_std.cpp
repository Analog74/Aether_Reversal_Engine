#include <ni/controller_editor/setInstanceName_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Controller {

void setInstanceName(1 param_1, std::string const& {
MessageSetString local_240 [544];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 == 0) return;
  }
  else if (*(long *)(param_1 + 8) == 0) return;
  MessageSetString::MessageSetString(local_240,0x49734e);
  (**(code **)(*(long *)this + 0xf0))(this,local_240);
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
