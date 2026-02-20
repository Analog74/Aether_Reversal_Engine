#include <ni/controller_editor/bad_exception_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to boost::exception_detail {

bad_exception_::~bad_exception_() {
// std code
  *(void **)(this + -0x28) = (char*)PTR_vtable_101ab4540 + 0x10;
  if (*(long **)(this + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x20) + 0x20))();
  }
  delete(this + -0x28);
  return;
}
}
