#include <ni/controller_editor/value.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json {

void value::number(unsigned long long) {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)new char[0x18];
  *puVar1 = &PTR__copy_value_101b1cb50;
  puVar1[1] = param_1;
  *(unsigned int *)(puVar1 + 2) = 1;
  *(unsigned long long **)this = puVar1;
  return this;
}

void value::object(bool param_1) {
}
}
