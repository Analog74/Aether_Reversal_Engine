#include <ni/controller_editor/task_from_result_void__pplx.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace pplx::task<void> pplx {

void task_from_result<void>(pplx::task_options const&) {
long *plVar1;
  long lVar2;
  unsigned long long local_90;
  long *local_88;
  unsigned long long local_80;
  long *local_78;
  unsigned char local_68;
  unsigned long long local_60;
  void *pvStack_58;
  void *local_50;
  unsigned long long uStack_48;
  task_options local_40;
  task_options local_3f;
  long *local_38;
  long *local_30;
  long *local_28;
  long *local_20;
  
  local_20 = (long *)new char[0x90];
  local_20[1] = 0;
  local_20[2] = 0;
  *local_20 = (long)&PTR____shared_ptr_emplace_101b20080;
  local_28 = local_20 + 3;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = 0x32aaaba7;
  local_20[7] = 0;
  local_20[8] = 0;
  local_20[9] = 0;
  local_20[10] = 0;
  local_20[0xb] = 0;
  local_20[0xc] = 0;
  local_20[0xd] = 0;
  local_20[0xf] = 0;
  local_20[0x10] = 0;
  *(void2 *)(local_20 + 0x11) = 0;
  task_completion_event<unsigned_char>::set((task_completion_event<unsigned_char> *)&local_28,'\0');
  local_38 = local_28;
  local_30 = local_20;
  if (local_20 != (long *)0x0) {
    LOCK();
    local_20[1] = local_20[1] + 1;
    UNLOCK();
  }
  local_90 = *(unsigned long long *)param_1;
  local_88 = *(long **)(param_1 + 8);
  if (local_88 != (long *)0x0) {
    LOCK();
    local_88[1] = local_88[1] + 1;
    UNLOCK();
  }
  local_80 = *(unsigned long long *)(param_1 + 0x10);
  local_78 = *(long **)(param_1 + 0x18);
  if (local_78 != (long *)0x0) {
    LOCK();
    local_78[1] = local_78[1] + 1;
    UNLOCK();
  }
  local_60 = 0;
  pvStack_58 = (void *)0x0;
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_68 = 0;
  local_40 = param_1[0x50];
  local_3f = param_1[0x51];
  create_task<pplx::task_completion_event<void>>(this,&local_38,&local_90);
  if (pvStack_58 != (void *)0x0) {
    local_50 = pvStack_58;
    delete(pvStack_58);
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  local_78 = (long *)0x0;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_88 + 0x10))(local_88);
      // std code
    }
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      // std code
    }
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      // std code
    }
  }
  return this;
}
}
