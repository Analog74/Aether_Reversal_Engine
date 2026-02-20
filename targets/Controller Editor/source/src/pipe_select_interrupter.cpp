#include <ni/controller_editor/pipe_select_interrupter.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

void pipe_select_interrupter::open_descriptors() {
void *puVar1;
  int iVar2;
  int *piVar3;
  error_code *peVar4;
  byte bVar5;
  int local_48 [2];
  void *puStack_40;
  unsigned long local_38;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  iVar2 = _pipe((int)&local_28);
  if (iVar2 == 0) {
    *(int *)this = local_28;
    _fcntl(local_28,4,4);
    *(int *)(this + 4) = local_24;
    _fcntl(local_24,4,4);
    _fcntl(*(int *)this,2,1);
    _fcntl(*(int *)(this + 4),2,1);
  }
  else {
    piVar3 = ___error();
    puVar1 = PTR_instance_101ab4088;
    iVar2 = *piVar3;
    local_48[0] = 0;
    local_48[1] = 0;
    puStack_40 = (void *)0x0;
    if (*(unsigned long *)((char*)PTR_instance_101ab4088 + 8) >> 1 == 0x595588bd12bf6fe8) {
      bVar5 = iVar2 != 0;
    }
    else {
      bVar5 = (**(code **)(*(long *)(char*)PTR_instance_101ab4088 + 0x30))(PTR_instance_101ab4088,iVar2);
    }
    local_38 = (unsigned long)bVar5 | 2;
    local_48[0] = iVar2;
    puStack_40 = puVar1;
    if ((bVar5 & 1) != 0) {
      peVar4 = (error_code *)local_48;
      do_throw_error(peVar4,"pipe_select_interrupter");
      if (peVar4[8] == (error_code)0x0) {
        _pthread_detach(*(pthread_t *)peVar4);
      }
      return;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

pipe_select_interrupter::~pipe_select_interrupter() {
if (*(int *)this != -1) {
    _close(*(int *)this);
  }
  if (*(int *)(this + 4) != -1) {
    _close(*(int *)(this + 4));
  }
  return;
}
}
