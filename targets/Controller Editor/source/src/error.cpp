#include <ni/controller_editor/error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options {

error::~error() {
// std code
  delete(this);
  return;
}
}
