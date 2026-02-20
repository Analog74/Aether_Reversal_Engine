#include <ni/controller_editor/length_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

length_error::length_error(char const*) {
// std code
            ((logic_error *)this,
             "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  *(void **)this = (char*)PTR_vtable_101ab45d8 + 0x10;
  
}

length_error::~length_error() {
/* WARNING: Could not recover jumptable at 0x000100973f22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__length_error_101b84500)();
  return;
}
}
