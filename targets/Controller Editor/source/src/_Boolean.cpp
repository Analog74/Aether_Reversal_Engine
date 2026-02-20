#include <ni/controller_editor/_Boolean.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

void _Boolean::_copy_value() {
unsigned long long *puVar1;
  long in_RSI;
  unsigned long long *in_RDI;
  
  puVar1 = (unsigned long long *)new char[0x10];
  *puVar1 = &PTR__copy_value_101b1f678;
  *(unsigned char *)(puVar1 + 1) = *(unsigned char *)(in_RSI + 8);
  *in_RDI = puVar1;
  return;
}

void _Boolean::as_bool() const {
return this[8];
}

_Boolean::~_Boolean() {
delete(this);
  return;
}
}
