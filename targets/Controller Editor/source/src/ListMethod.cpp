#include <ni/controller_editor/ListMethod.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

ListMethod::~ListMethod() {
*(void ***)this = &PTR__Method_101b837f0;
  if (((byte)this[0x20] & 1) != 0) {
    delete(*(void **)(this + 0x30));
  }
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  delete(this);
  return;
}
}
