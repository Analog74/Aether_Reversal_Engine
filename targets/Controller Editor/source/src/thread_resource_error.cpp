#include <ni/controller_editor/thread_resource_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

thread_resource_error::~thread_resource_error() {
// std code
  delete(this);
  return;
}
}
