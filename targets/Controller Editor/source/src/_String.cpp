#include <ni/controller_editor/_String.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::details {

_String::~_String() {
*(void ***)this = &PTR__copy_value_101b1cc58;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  delete(this);
  return;
}
}
