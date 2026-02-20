#include <ni/controller_editor/filesystem_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::filesystem {

filesystem_error::~filesystem_error() {
~filesystem_error(this);
  delete(this);
  return;
}
}
