#include <ni/controller_editor/oauth1_handler.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::oauth1::details {

oauth1_handler::~oauth1_handler() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__oauth1_handler_101b1d7a0;
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
    }
  }
  *(void ***)this = &PTR__http_pipeline_stage_101b1cf60;
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      lVar2 = *(long *)(this + 0x10);
      goto joined_r0x00010054513c;
    }
  }
  lVar2 = *(long *)(this + 0x10);
joined_r0x00010054513c:
  if (lVar2 != 0) {
    // std code
  }
  delete(this);
  return;
}
}
