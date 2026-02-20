#include <ni/controller_editor/uri_exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web {

uri_exception::~uri_exception() {
*(void ***)this = &PTR__uri_exception_101b1d480;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  // std code
  delete(this);
  return;
}
}
