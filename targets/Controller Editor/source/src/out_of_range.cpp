#include <ni/controller_editor/out_of_range.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

out_of_range::out_of_range(char const*) {
// std code
  *(void **)this = (char*)PTR_vtable_101ab45e0 + 0x10;
  
}

out_of_range::~out_of_range() {
/* WARNING: Could not recover jumptable at 0x000100973f2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__out_of_range_101b84510)();
  return;
}
}
