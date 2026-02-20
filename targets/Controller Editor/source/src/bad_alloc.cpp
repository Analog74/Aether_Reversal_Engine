#include <ni/controller_editor/bad_alloc.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

bad_alloc::bad_alloc() {
/* WARNING: Could not recover jumptable at 0x000100974264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_bad_alloc_101b84958)();
  
}

bad_alloc::~bad_alloc() {
/* WARNING: Could not recover jumptable at 0x000100974270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bad_alloc_101b84968)();
  return;
}
}
