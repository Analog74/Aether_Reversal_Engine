#include <ni/controller_editor/lock_error.hpp>
namespace boost {

lock_error::~lock_error() {
// std code
  delete(this);
  return;
}
}
