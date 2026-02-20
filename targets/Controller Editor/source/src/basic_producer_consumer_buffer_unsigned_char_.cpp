#include <ni/controller_editor/basic_producer_consumer_buffer_unsigned_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace Concurrency::streams::details {

void basic_producer_consumer_buffer<unsigned char>::_sbumpc() {
char cVar1;
  unsigned long long in_RAX;
  long lVar2;
  uint uVar3;
  byte local_21;
  
  local_21 = (byte)((unsigned long)in_RAX >> 0x38);
  // std code
  if (*(long *)(this + 0x58) == 0) {
    lVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar2 == 0) {
      cVar1 = (**(code **)(*(long *)this + 0x18))(this);
      uVar3 = 0xfffffffe;
      if (cVar1 != '\0') return;
    }
  }
  lVar2 = read(this,&local_21,1,true);
  uVar3 = 0xffffffff;
  if (lVar2 == 1) {
    uVar3 = (uint)local_21;
  }
  // std code
  return uVar3;
}

void basic_producer_consumer_buffer<unsigned char>::_sgetc() {
char cVar1;
  unsigned long long in_RAX;
  long lVar2;
  uint uVar3;
  byte local_21;
  
  local_21 = (byte)((unsigned long)in_RAX >> 0x38);
  // std code
  if (*(long *)(this + 0x58) == 0) {
    lVar2 = (**(code **)(*(long *)this + 0x48))(this);
    if (lVar2 == 0) {
      cVar1 = (**(code **)(*(long *)this + 0x18))(this);
      uVar3 = 0xfffffffe;
      if (cVar1 != '\0') return;
    }
  }
  lVar2 = read(this,&local_21,1,false);
  uVar3 = 0xffffffff;
  if (lVar2 == 1) {
    uVar3 = (uint)local_21;
  }
  // std code
  return uVar3;
}

void basic_producer_consumer_buffer<unsigned char>::_sync() {
long *plVar1;
  long lVar2;
  unsigned long long uVar3;
  basic_producer_consumer_buffer<unsigned_char> *in_RSI;
  pplx *in_RDI;
  unsigned long long local_88;
  long *local_80;
  unsigned long long local_78;
  long *local_70;
  unsigned long long local_68;
  long *local_60;
  unsigned char local_50;
  unsigned long long local_48;
  void *pvStack_40;
  void *local_38;
  unsigned long long uStack_30;
  void2 local_28;
  
  // std code
  uVar3 = (**(code **)(*(long *)in_RSI + 0x48))();
  *(unsigned long long *)(in_RSI + 0x58) = uVar3;
  fulfill_outstanding(in_RSI);
  pplx::get_ambient_scheduler((pplx *)&local_88);
  local_78 = local_88;
  local_70 = local_80;
  local_68 = local_88;
  local_60 = (long *)0x0;
  local_50 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  pplx::task_from_result<bool>(in_RDI,true,(task_options *)&local_78);
  if (pvStack_40 != (void *)0x0) {
    local_38 = pvStack_40;
    delete(pvStack_40);
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  local_60 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      // std code
    }
  }
  // std code
  return;
}

void basic_producer_consumer_buffer<unsigned char>::_ungetc() {
long *plVar1;
  long lVar2;
  unsigned long long local_80;
  long *local_78;
  unsigned long long local_70;
  long *local_68;
  unsigned long long local_60;
  long *local_58;
  unsigned char local_48;
  unsigned long long local_40;
  void *pvStack_38;
  void *local_30;
  unsigned long long uStack_28;
  void2 local_20;
  
  pplx::get_ambient_scheduler((pplx *)&local_80);
  local_70 = local_80;
  local_68 = local_78;
  local_60 = local_80;
  local_58 = (long *)0x0;
  local_48 = 0;
  local_40 = 0;
  pvStack_38 = (void *)0x0;
  local_30 = (void *)0x0;
  uStack_28 = 0;
  local_20 = 0;
  pplx::task_from_result<int>((pplx *)this,-1,(task_options *)&local_70);
  if (pvStack_38 != (void *)0x0) {
    local_30 = pvStack_38;
    delete(pvStack_38);
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  local_58 = (long *)0x0;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      // std code
    }
  }
  return this;
}

void basic_producer_consumer_buffer<unsigned char>::can_seek() const {
return 0;
}

void basic_producer_consumer_buffer<unsigned char>::has_size() const {
return 0;
}

void basic_producer_consumer_buffer<unsigned char>::in_avail() const {
return *(unsigned long long *)(this + 0x40);
}
}
