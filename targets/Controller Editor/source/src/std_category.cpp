#include <ni/controller_editor/std_category.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::system::detail {

std_category::~std_category() {
// std code
  delete(this);
  return;
}
}
