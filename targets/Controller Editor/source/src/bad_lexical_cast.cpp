#include <ni/controller_editor/bad_lexical_cast.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost {

bad_lexical_cast::~bad_lexical_cast() {
// std code
  delete(this);
  return;
}
}
