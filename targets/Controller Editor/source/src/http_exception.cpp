#include <ni/controller_editor/http_exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http {

http_exception::~http_exception() {
*(void ***)this = &PTR__http_exception_101b20360;
  if (((byte)this[0x18] & 1) != 0) {
    delete(*(void **)(this + 0x28));
  }
  // std code
  delete(this);
  return;
}
}
