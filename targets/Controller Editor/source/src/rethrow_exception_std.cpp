#include <ni/controller_editor/rethrow_exception_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

void rethrow_exception(std::exception_ptr) {
/* WARNING: Could not recover jumptable at 0x000100974282. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_rethrow_exception_101b84980)();
  return;
}
}
