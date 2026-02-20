#include <ni/controller_editor/exception_ptr.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

exception_ptr::~exception_ptr() {
/* WARNING: Could not recover jumptable at 0x000100973f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_ptr_101b84528)();
  return;
}
}
