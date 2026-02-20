#include <ni/controller_editor/_CancelWithException_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::details::_Task_impl_base {

void _CancelWithException(1 param_1, std::exception_ptr const& {
long lVar1;
  void *pvVar2;
  unsigned int uVar3;
  void *pvVar4;
  long *plVar5;
  unsigned long uVar6;
  _ExceptionHolder *local_68;
  long *local_60;
  exception_ptr *local_58;
  unsigned long long local_50;
  void *local_48;
  void *pvStack_40;
  void *local_38;
  
  local_50 = *(unsigned long long *)(this + 0x108);
  local_48 = (void *)0x0;
  pvStack_40 = (void *)0x0;
  local_38 = (void *)0x0;
  pvVar2 = *(void **)(this + 0x110);
  uVar6 = *(long *)(this + 0x118) - (long)pvVar2;
  if (uVar6 != 0) {
    local_58 = param_1;
    if ((unsigned long)((long)uVar6 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    pvVar4 = new char[uVar6];
    local_38 = (void *)((long)pvVar4 + ((long)uVar6 >> 3) * 8);
    param_1 = local_58;
    local_48 = pvVar4;
    pvStack_40 = pvVar4;
    if (0 < (long)uVar6) {
      memcpy(pvVar4,pvVar2,uVar6);
      pvStack_40 = (void *)((long)pvVar4 + uVar6);
      param_1 = local_58;
    }
  }
  plVar5 = (long *)new char[0x48];
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR____shared_ptr_emplace_101b200c0;
  _ExceptionHolder::_ExceptionHolder
            ((_ExceptionHolder *)(plVar5 + 3),param_1,(_TaskCreationCallstack *)&local_50);
  local_68 = (_ExceptionHolder *)(plVar5 + 3);
  local_60 = plVar5;
  uVar3 = (**(code **)(*(long *)this + 0x10))(this,1,1,0,&local_68);
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar5 = local_60 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      // std code
    }
  }
  if (local_48 != (void *)0x0) {
    pvStack_40 = local_48;
    delete(local_48);
  }
  return uVar3;
}
}
