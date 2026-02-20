#include <ni/controller_editor/task_from_result_int__int__pplx.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::task<int> pplx {

void task_from_result<int>(int, pplx::task_options const&) {
long *plVar1;
  long lVar2;
  unsigned long long local_98;
  long *local_90;
  unsigned long long local_88;
  long *local_80;
  unsigned char local_70;
  unsigned long long local_68;
  void *pvStack_60;
  void *local_58;
  unsigned long long uStack_50;
  task_options local_48;
  task_options local_47;
  long *local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  local_28 = (long *)new char[0x90];
  local_28[1] = 0;
  local_28[2] = 0;
  *local_28 = (long)&PTR____shared_ptr_emplace_101b0beb0;
  local_30 = local_28 + 3;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0x32aaaba7;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  local_28[0xc] = 0;
  local_28[0xd] = 0;
  local_28[0xf] = 0;
  local_28[0x10] = 0;
  *(void2 *)(local_28 + 0x11) = 0;
  task_completion_event<int>::set((task_completion_event<int> *)&local_30,param_1);
  local_40 = local_30;
  local_38 = local_28;
  if (local_28 != (long *)0x0) {
    LOCK();
    local_28[1] = local_28[1] + 1;
    UNLOCK();
  }
  local_98 = *(unsigned long long *)param_2;
  local_90 = *(long **)(param_2 + 8);
  if (local_90 != (long *)0x0) {
    LOCK();
    local_90[1] = local_90[1] + 1;
    UNLOCK();
  }
  local_88 = *(unsigned long long *)(param_2 + 0x10);
  local_80 = *(long **)(param_2 + 0x18);
  if (local_80 != (long *)0x0) {
    LOCK();
    local_80[1] = local_80[1] + 1;
    UNLOCK();
  }
  local_68 = 0;
  pvStack_60 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_70 = 0;
  local_48 = param_2[0x50];
  local_47 = param_2[0x51];
  create_task<pplx::task_completion_event<int>>(this,&local_40,&local_98);
  if (pvStack_60 != (void *)0x0) {
    local_58 = pvStack_60;
    delete(pvStack_60);
  }
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  local_80 = (long *)0x0;
  if (local_90 != (long *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_90 + 0x10))(local_90);
      // std code
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      // std code
    }
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      // std code
    }
  }
  return this;
}
}
