#include <ni/controller_editor/exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

exception::~exception() {
/* WARNING: Could not recover jumptable at 0x000100974276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__exception_101b84970)();
  return;
}
}
