#include <ni/controller_editor/try_acquire_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details::asio_connection_pool {

void try_acquire(1 param_1, std::string const& {
long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  unsigned long long uVar5;
  piecewise_construct_t *in_RDX;
  long in_RSI;
  long lVar6;
  long lVar7;
  unsigned long uVar8;
  tuple local_50 [8];
  unsigned long long local_48;
  long local_40;
  
  lVar1 = in_RSI + 0x10;
  // std code
  if (*(long *)(in_RSI + 0x60) == 0) {
    *(unsigned long long *)param_1 = 0;
    *(unsigned long long *)(param_1 + 8) = 0;
  }
  else {
    lVar4 = // std code
            __tree<// std code
            ::
            __emplace_unique_key_args<// std code
                      ((string *)(in_RSI + 0x50),in_RDX,(tuple *)&// std code
    ;
    lVar7 = *(long *)(lVar4 + 0x40);
    if (lVar7 == *(long *)(lVar4 + 0x38)) {
      *(unsigned long long *)(lVar4 + 0x50) = 0;
      uVar5 = 0;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar7 + -0x10);
      uVar5 = *(unsigned long long *)(lVar7 + -8);
      *(unsigned long long *)(lVar7 + -0x10) = 0;
      *(unsigned long long *)(lVar7 + -8) = 0;
      lVar7 = *(long *)(lVar4 + 0x40);
      plVar3 = *(long **)(lVar7 + -8);
      local_40 = lVar1;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          local_48 = uVar5;
          (**(code **)(*plVar3 + 0x10))(plVar3);
          // std code
          uVar5 = local_48;
        }
      }
      lVar7 = lVar7 + -0x10;
      *(long *)(lVar4 + 0x40) = lVar7;
      uVar8 = lVar7 - *(long *)(lVar4 + 0x38) >> 4;
      if (uVar8 < *(unsigned long *)(lVar4 + 0x50)) {
        *(unsigned long *)(lVar4 + 0x50) = uVar8;
      }
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        *(unsigned char *)(lVar6 + 0xb8) = 1;
      }
    }
    *(long *)param_1 = lVar6;
    *(unsigned long long *)(param_1 + 8) = uVar5;
  }
  // std code
  return param_1;
}
}
