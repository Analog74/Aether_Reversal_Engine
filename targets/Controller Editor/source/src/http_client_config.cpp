#include <ni/controller_editor/http_client_config.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client {

http_client_config::~http_client_config() {
long *plVar1;
  long lVar2;
  long *plVar3;
  http_client_config *phVar4;
  
  phVar4 = *(http_client_config **)(this + 0x1e0);
  if (this + 0x1c0 == phVar4) {
    (**(code **)(*(long *)phVar4 + 0x20))();
    phVar4 = *(http_client_config **)(this + 0x1b0);
    if (this + 400 != phVar4) return;
    (**(code **)(*(long *)phVar4 + 0x20))();
    phVar4 = *(http_client_config **)(this + 0x180);
    if (this + 0x160 != phVar4) return;
    (**(code **)(*(long *)phVar4 + 0x20))();
    if (((byte)this[0x120] & 1) == 0) return;
    delete(*(void **)(this + 0x130));
    if (((byte)this[0x108] & 1) == 0) return;
    delete(*(void **)(this + 0x118));
    if (((byte)this[0xf0] & 1) == 0) return;
    delete(*(void **)(this + 0x100));
    if (((byte)this[0xd8] & 1) == 0) return;
    delete(*(void **)(this + 0xe8));
    web::details::uri_components::~uri_components((uri_components *)(this + 0x38));
    if (((byte)this[0x20] & 1) == 0) return;
    delete(*(void **)(this + 0x30));
    plVar3 = *(long **)(this + 0x18);
  }
  else {
    if (phVar4 != (http_client_config *)0x0) {
      (**(code **)(*(long *)phVar4 + 0x28))();
    }
    phVar4 = *(http_client_config **)(this + 0x1b0);
    if (this + 400 == phVar4) return;
    if (phVar4 != (http_client_config *)0x0) {
      (**(code **)(*(long *)phVar4 + 0x28))();
    }
    phVar4 = *(http_client_config **)(this + 0x180);
    if (this + 0x160 == phVar4) return;
    if (phVar4 != (http_client_config *)0x0) {
      (**(code **)(*(long *)phVar4 + 0x28))();
    }
    if (((byte)this[0x120] & 1) != 0) return;
    if (((byte)this[0x108] & 1) != 0) return;
    if (((byte)this[0xf0] & 1) != 0) return;
    if (((byte)this[0xd8] & 1) != 0) return;
    web::details::uri_components::~uri_components((uri_components *)(this + 0x38));
    if (((byte)this[0x20] & 1) != 0) return;
    plVar3 = *(long **)(this + 0x18);
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 8);
      goto joined_r0x00010053dcac;
    }
  }
  plVar3 = *(long **)(this + 8);
joined_r0x00010053dcac:
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
