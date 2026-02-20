#include <ni/controller_editor/http_request.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http {

void http_request::extract_string(bool) [clone .cold.1] {
long *plVar1;
  long lVar2;
  void7 in_register_00000039;
  
  LOCK();
  plVar1 = (long *)0(in_register_00000039,param_1) + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)0(in_register_00000039,param_1) + 0x10))();
    // std code
  }
  return;
}
}
