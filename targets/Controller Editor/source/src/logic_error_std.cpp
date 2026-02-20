#include <ni/controller_editor/logic_error_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::logic_error {

void logic_error(std::logic_error const&) {
/* WARNING: Could not recover jumptable at 0x000100973f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_logic_error_101b844e0)();
  return;
}
}
