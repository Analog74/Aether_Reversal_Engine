#include <ni/controller_editor/system_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::system {

system_error::~system_error() {
// std code
  delete(this);
  return;
}
}
