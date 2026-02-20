#include <ni/controller_editor/logic_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

logic_error::~logic_error() {
/* WARNING: Could not recover jumptable at 0x000100973f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__logic_error_101b844f0)();
  return;
}
}
