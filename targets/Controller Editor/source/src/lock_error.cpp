#include <ni/controller_editor/lock_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

lock_error::~lock_error() {
// std code
  delete(this);
  return;
}
}
