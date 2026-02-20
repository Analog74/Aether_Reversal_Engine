#include <ni/controller_editor/oauth1_exception.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::oauth1::experimental {

oauth1_exception::~oauth1_exception() {
*(void ***)this = &PTR__oauth1_exception_101b1d320;
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  // std code
  delete(this);
  return;
}
}
