#include <ni/controller_editor/bad_any_cast.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

bad_any_cast::~bad_any_cast() {
// std code
  delete(this);
  return;
}
}
