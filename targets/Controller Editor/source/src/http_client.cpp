#include <ni/controller_editor/http_client.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client {

http_client::~http_client() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}
}
