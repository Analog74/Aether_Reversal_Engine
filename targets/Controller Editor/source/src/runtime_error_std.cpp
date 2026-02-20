#include <ni/controller_editor/runtime_error_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::runtime_error {

void runtime_error(std::runtime_error const&) {
/* WARNING: Could not recover jumptable at 0x000100973f6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_runtime_error_101b84560)();
  return;
}
}
