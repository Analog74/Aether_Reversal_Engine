#include <ni/controller_editor/format_error.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace fmt::v9 {

format_error::format_error(char const*) {
// std code
  *(void ***)this = &PTR__format_error_101b82bf0;
  
}

format_error::~format_error() {
// std code
  delete(this);
  return;
}
}
