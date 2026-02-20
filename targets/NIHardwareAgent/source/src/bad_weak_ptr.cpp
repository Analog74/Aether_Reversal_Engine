#include <ni/controller_editor/bad_weak_ptr.hpp>
namespace boost {

bad_weak_ptr::~bad_weak_ptr() {
// std code
  delete(this);
  return;
}
}
