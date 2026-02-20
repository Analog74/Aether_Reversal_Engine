#include <ni/controller_editor/inline_continuation.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http {

inline_continuation::~inline_continuation() {
long *plVar1;
  long lVar2;
  long *plVar3;
  unsigned long long uVar4;
  code *pcVar5;
  unsigned long long *puVar6;
  char *pcVar7;
  inline_continuation *piVar8;
  unsigned char local_a8 [8];
  long *local_a0;
  unsigned long long local_98;
  long *local_90;
  unsigned long long local_88;
  long *local_80;
  unsigned long long local_78;
  long *local_70;
  unsigned char local_60;
  unsigned long long local_58;
  void *pvStack_50;
  void *local_48;
  unsigned long long uStack_40;
  void2 local_38;
  unsigned long long local_30;
  long *local_28;
  
  lVar2 = **(long **)this;
  if (lVar2 == 0) {
    puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20);
    *puVar6 = &PTR__invalid_operation_101b1f9e0;
    pcVar7 = (char *)new char[0x40];
    puVar6[3] = pcVar7;
    puVar6[1] = 0x41;
    puVar6[2] = 0x39;
    builtin_strncpy(pcVar7,"is_done() cannot be called on a default constructed task.",0x3a);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar6,&pplx::invalid_operation::typeinfo,
                 pplx::invalid_operation::~invalid_operation);
  }
  if ((*(int *)(lVar2 + 8) == 3) || (*(int *)(lVar2 + 8) == 4)) {
    local_30 = **(unsigned long long **)this;
    local_28 = (long *)(*(unsigned long long **)this)[1];
    if (local_28 != (long *)0x0) {
      LOCK();
      local_28[1] = local_28[1] + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(this + 0x30);
    if (plVar3 == (long *)0x0) {
      // std code
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_30);
    plVar3 = local_28;
  }
  else {
    uVar4 = *(unsigned long long *)this;
    pplx::get_ambient_scheduler((pplx *)&local_98);
    local_88 = local_98;
    local_80 = local_90;
    local_78 = local_98;
    local_70 = (long *)0x0;
    local_60 = 0;
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    pplx::task<void>::then<// std code
              (local_a8,uVar4,this + 0x10,&local_88);
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar3 = local_a0 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
        // std code
      }
    }
    if (pvStack_50 != (void *)0x0) {
      local_48 = pvStack_50;
      delete(pvStack_50);
    }
    if (local_70 != (long *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    local_70 = (long *)0x0;
    plVar3 = local_80;
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
      piVar8 = *(inline_continuation **)(this + 0x30);
      if (this + 0x10 == piVar8) return;
      return;
    }
  }
  piVar8 = *(inline_continuation **)(this + 0x30);
  if (this + 0x10 == piVar8) {
    (**(code **)(*(long *)piVar8 + 0x20))();
    return;
  }
  if (piVar8 != (inline_continuation *)0x0) {
    (**(code **)(*(long *)piVar8 + 0x28))();
  }
  return;
}
}
