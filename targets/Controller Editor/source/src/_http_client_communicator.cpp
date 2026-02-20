#include <ni/controller_editor/_http_client_communicator.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

void _http_client_communicator::base_uri() const {
return this + 0x28;
}

void _http_client_communicator::client_config() const {
return this + 0x120;
}

void _http_client_communicator::finish_request() [clone .cold.1] {
_http_client_communicator *p_Var1;
  long lVar2;
  
  LOCK();
  p_Var1 = this + 8;
  lVar2 = *(long *)p_Var1;
  *(long *)p_Var1 = *(long *)p_Var1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

_http_client_communicator::~_http_client_communicator() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
