#include <ni/controller_editor/resolver_service_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail {

void resolver_service_base::base_shutdown() {
scheduler *psVar1;
  scheduler *this_00;
  unsigned long long *puVar2;
  
  this_00 = *(scheduler **)(this + 0x48);
  if (this_00 == (scheduler *)0x0) {
    return;
  }
  LOCK();
  psVar1 = this_00 + 0xf0;
  *(long *)psVar1 = *(long *)psVar1 + -1;
  UNLOCK();
  if (*(long *)psVar1 == 0) {
    scheduler::stop(this_00);
  }
  scheduler::stop(*(scheduler **)(this + 0x48));
  puVar2 = *(unsigned long long **)(this + 0x50);
  if (puVar2 == (unsigned long long *)0x0) return;
  if (*(char *)(puVar2 + 1) == '\0') {
    _pthread_join((pthread_t)*puVar2,(void **)0x0);
    *(unsigned char *)(puVar2 + 1) = 1;
    puVar2 = *(unsigned long long **)(this + 0x50);
    if (puVar2 != (unsigned long long *)0x0) return;
  }
  else {
    if (*(char *)(puVar2 + 1) == '\0') {
      _pthread_detach((pthread_t)*puVar2);
    }
    delete(puVar2);
  }
  *(unsigned long long *)(this + 0x50) = 0;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(unsigned long long *)(this + 0x48) = 0;
  return;
}

void resolver_service_base::start_work_thread() {
long lVar1;
  unsigned long long *puVar2;
  code *pcVar3;
  void *puVar4;
  char cVar5;
  int iVar6;
  pthread_t *pp_Var7;
  long *plVar8;
  int local_48 [2];
  void *puStack_40;
  unsigned long local_38;
  
  _pthread_mutex_lock((pthread_mutex_t *)(this + 8));
  if (*(long *)(this + 0x50) != 0) return;
  pp_Var7 = (pthread_t *)new char[0x10];
  lVar1 = *(long *)(this + 0x48);
  *(unsigned char *)(pp_Var7 + 1) = 0;
  plVar8 = (long *)new char[0x10];
  *plVar8 = (long)&PTR__func_101b2b728;
  plVar8[1] = lVar1;
  iVar6 = _pthread_create(pp_Var7,(pthread_attr_t *)0x0,
                          (void **)_boost_asio_detail_posix_thread_function,plVar8);
  if (iVar6 != 0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    puVar4 = PTR_instance_101ab4088;
    local_48[0] = 0;
    local_48[1] = 0;
    puStack_40 = (void *)0x0;
    if (*(unsigned long *)((char*)PTR_instance_101ab4088 + 8) >> 1 == 0x595588bd12bf6fe8) {
      local_38 = 3;
    }
    else {
      cVar5 = (**(code **)(*(long *)(char*)PTR_instance_101ab4088 + 0x30))(PTR_instance_101ab4088,iVar6);
      local_38 = 2;
      if (cVar5 != '\0') return;
    }
    local_48[0] = iVar6;
    puStack_40 = puVar4;
    if ((local_38 & 1) != 0) {
      do_throw_error((error_code *)local_48,"thread");
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
  }
  puVar2 = *(unsigned long long **)(this + 0x50);
  if (puVar2 != (unsigned long long *)0x0) {
    if (*(char *)(puVar2 + 1) == '\0') {
      _pthread_detach((pthread_t)*puVar2);
    }
    delete(puVar2);
  }
  *(pthread_t **)(this + 0x50) = pp_Var7;
  _pthread_mutex_unlock((pthread_mutex_t *)(this + 8));
  return;
}

resolver_service_base::~resolver_service_base() {
unsigned long long *puVar1;
  
  base_shutdown(this);
  puVar1 = *(unsigned long long **)(this + 0x50);
  if (puVar1 != (unsigned long long *)0x0) {
    if (*(char *)(puVar1 + 1) == '\0') {
      _pthread_detach((pthread_t)*puVar1);
    }
    delete(puVar1);
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  _pthread_mutex_destroy((pthread_mutex_t *)(this + 8));
  return;
}
}
