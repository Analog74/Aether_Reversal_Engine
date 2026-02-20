#include <ni/controller_editor/http_response.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http {

void http_response::extract_vector() const [clone .cold.1] {
http_response *phVar1;
  long lVar2;
  
  LOCK();
  phVar1 = this + 8;
  lVar2 = *(long *)phVar1;
  *(long *)phVar1 = *(long *)phVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}
}
