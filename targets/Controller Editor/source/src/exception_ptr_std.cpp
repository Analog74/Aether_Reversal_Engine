#include <ni/controller_editor/exception_ptr_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::exception_ptr {

void exception_ptr(std::exception_ptr const&) {
/* WARNING: Could not recover jumptable at 0x000100973f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_exception_ptr_101b84520)();
  return;
}
}
