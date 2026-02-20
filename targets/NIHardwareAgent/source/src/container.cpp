#include <ni/controller_editor/container.hpp>
namespace boost {

void container::throw_bad_alloc() {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)___cxa_allocate_exception(0x10);
  puVar1[1] = "// boost code
  *puVar1 = PTR_vtable_1009cc250 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,PTR_typeinfo_1009cc130,bad_alloc::~bad_alloc);
}

void container::throw_length_error(char const*) {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)___cxa_allocate_exception(0x10);
  puVar1[1] = param_1;
  *puVar1 = PTR_vtable_1009cc248 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,PTR_typeinfo_1009cc128,out_of_range::~out_of_range);
}
}
