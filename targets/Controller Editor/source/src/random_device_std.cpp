#include <ni/controller_editor/random_device_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std::random_device {

void random_device(std::string const&) {
/* WARNING: Could not recover jumptable at 0x0001009740c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_random_device_101b84730)();
  return;
}
}
