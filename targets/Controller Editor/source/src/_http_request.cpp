#include <ni/controller_editor/_http_request.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::details {

void _http_request::absolute_uri() const [clone .cold.1] {
byte *in_RSI;
  long in_RDI;
  
  if ((*(byte *)(in_RDI + 0x60) & 1) != 0) {
    delete(*(void **)(in_RDI + 0x70));
  }
  if ((*(byte *)(in_RDI + 0x48) & 1) != 0) {
    delete(*(void **)(in_RDI + 0x58));
  }
  if ((*(byte *)(in_RDI + 0x30) & 1) != 0) {
    delete(*(void **)(in_RDI + 0x40));
  }
  if ((*(byte *)(in_RDI + 0x18) & 1) != 0) {
    delete(*(void **)(in_RDI + 0x28));
  }
  if ((*in_RSI & 1) != 0) {
    delete(*(void **)(in_RDI + 0x10));
  }
  return;
}

_http_request::~_http_request() {
~_http_request(this);
  delete(this);
  return;
}
}
