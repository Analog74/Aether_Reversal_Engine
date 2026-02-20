#include <ni/controller_editor/_http_response.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::details {

_http_response::~_http_response() {
long *plVar1;
  
  *(void ***)this = &PTR___http_response_101b1ce58;
  if (((byte)this[0x98] & 1) != 0) {
    delete(*(void **)(this + 0xa8));
  }
  plVar1 = *(long **)(this + 0x88);
  *(unsigned long long *)(this + 0x88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  http_msg_base::~http_msg_base((http_msg_base *)this);
  delete(this);
  return;
}
}
