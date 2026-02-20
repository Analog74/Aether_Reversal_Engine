#include <ni/controller_editor/container.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

void container::throw_bad_alloc() {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)___cxa_allocate_exception(0x10);
  puVar1[1] = "// boost code
  *puVar1 = (char*)PTR_vtable_101ab4538 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,PTR_typeinfo_101ab42a8,bad_alloc::~bad_alloc);
}

void container::throw_length_error(char const*) {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)___cxa_allocate_exception(0x10);
  puVar1[1] = param_1;
  *puVar1 = (char*)PTR_vtable_101ab4530 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,PTR_typeinfo_101ab42a0,out_of_range::~out_of_range);
}
}
