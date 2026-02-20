#include <ni/controller_editor/runtime_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

runtime_error::~runtime_error() {
/* WARNING: Could not recover jumptable at 0x000100973f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__runtime_error_101b84570)();
  return;
}
}
