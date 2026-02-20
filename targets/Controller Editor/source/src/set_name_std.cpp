#include <ni/controller_editor/set_name_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::this_thread {

void set_name(1 param_1, std::string {
int iVar1;
  invalid_argument *this;
  
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  iVar1 = _pthread_setname_np((char *)param_1);
  if (iVar1 == 0) {
    return;
  }
  this = (invalid_argument *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
}
}
