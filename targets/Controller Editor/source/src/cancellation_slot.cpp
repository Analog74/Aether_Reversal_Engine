#include <ni/controller_editor/cancellation_slot.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio {

void cancellation_slot::prepare_memory(unsigned long, unsigned long) {
long lVar1;
  unsigned char auVar2 [16];
  void *pvVar3;
  long lVar4;
  unsigned long uVar5;
  unsigned long long uVar6;
  unsigned long uVar7;
  unsigned char *puVar8;
  unsigned char auVar9 [16];
  
  if ((long *)**(long **)this == (long *)0x0) {
    auVar9 = ZEXT816(0);
    auVar2 = ZEXT816(0);
    if (param_1 == 0) return;
  }
  else {
    auVar9 = (**(code **)(*(long *)**(long **)this + 8))();
    **(unsigned long long **)this = 0;
    auVar2 = auVar9;
    if (param_1 <= auVar9._8_8_) {
      uVar7 = auVar9._8_8_;
      pvVar3 = auVar9._0_8_;
      if (((unsigned long)pvVar3 | param_2) >> 0x20 == 0) {
        uVar5 = ((unsigned long)pvVar3 & 0xffffffff) % (param_2 & 0xffffffff);
      }
      else {
        uVar5 = (unsigned long)pvVar3 % param_2;
      }
      auVar2 = auVar9;
      if (uVar5 == 0) return;
    }
  }
  puVar8 = auVar2._0_8_;
  if (puVar8 == (unsigned char *)0x0) {
    pvVar3 = _pthread_getspecific
                       (asio::detail::
                        call_stack<// boost code
                        ::top_);
    if (pvVar3 != (void *)0x0) return;
    uVar6 = 0;
  }
  else {
    pvVar3 = _pthread_getspecific
                       (asio::detail::
                        call_stack<// boost code
                        ::top_);
    if (((pvVar3 == (void *)0x0) || (0x3fc < auVar2._8_8_)) ||
       (lVar1 = *(long *)((long)pvVar3 + 8), lVar1 == 0)) {
      _free(puVar8);
      return;
    }
    if (*(long *)(lVar1 + 0x30) == 0) {
      lVar4 = 6;
    }
    else {
      if (*(long *)(lVar1 + 0x38) != 0) return;
      lVar4 = 7;
    }
    *puVar8 = puVar8[auVar2._8_8_];
    *(unsigned char **)(lVar1 + lVar4 * 8) = puVar8;
    pvVar3 = _pthread_getspecific
                       (asio::detail::
                        call_stack<// boost code
                        ::top_);
    if (pvVar3 == (void *)0x0) return;
    uVar6 = *(unsigned long long *)((long)pvVar3 + 8);
  }
  pvVar3 = asio::detail::thread_info_base::
           allocate<// boost code
                     (uVar6,param_1,param_2);
  uVar7 = param_1;
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = pvVar3;
  return auVar9;
}
}
