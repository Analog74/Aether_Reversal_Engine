#include <ni/controller_editor/http_request_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::http_request {

void http_request(2 param_2, std::string {
_http_request *p_Var1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  void *local_38;
  
  plVar3 = (long *)new char[0x2a0];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR____shared_ptr_emplace_101b20c10;
  p_Var1 = (_http_request *)(plVar3 + 3);
  local_38 = *(void **)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  http::details::_http_request::_http_request(p_Var1,&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  *(_http_request **)this = p_Var1;
  *(long **)(this + 8) = plVar3;
  if (plVar3[0x15] == 0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x14] = (long)p_Var1;
    plVar3[0x15] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[0x15] + 8) != -1) {
      return;
    }
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x14] = (long)p_Var1;
    plVar3[0x15] = (long)plVar3;
    // std code
  }
  plVar4 = plVar3 + 1;
  LOCK();
  lVar2 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    // std code
  }
  return;
}
}
