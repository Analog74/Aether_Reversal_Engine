#include <ni/controller_editor/resource_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::sync {

resource_error::~resource_error() {
// std code
  delete(this);
  return;
}
}
