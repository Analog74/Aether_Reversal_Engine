#include <ni/controller_editor/bad_alloc_.hpp>
namespace non-virtual thunk to boost::exception_detail {

bad_alloc_::~bad_alloc_() {
// std code
  *(void **)(this + -0x28) = PTR_vtable_100227280 + 0x10;
  if (*(long **)(this + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x20) + 0x20))();
  }
  delete(this + -0x28);
  return;
}
}
