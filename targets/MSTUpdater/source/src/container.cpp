#include <ni/controller_editor/container.hpp>
namespace boost {

void container::throw_bad_alloc() {
bad_alloc *this;
  
  this = (bad_alloc *)___cxa_allocate_exception(8);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_1002271b0,PTR__bad_alloc_100227120);
}

void container::throw_length_error(char const*) {
logic_error *this;
  
  this = (logic_error *)___cxa_allocate_exception(0x10);
  // std code
  *(void **)this = PTR_vtable_1002272b0 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_1002271a0,PTR__length_error_1002270d0);
}
}
