#include <ni/controller_editor/invalid_argument.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

invalid_argument::invalid_argument(char const*) {
// std code
  *(void **)this = (char*)PTR_vtable_101ab45e8 + 0x10;
  
}
}
