#include <ni/controller_editor/streambuf_state_manager_unsigned_char_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace Concurrency::streams::details {

void streambuf_state_manager<unsigned char>::_close_read() {
long in_RSI;
  pplx *in_RDI;
  unsigned long long local_78;
  unsigned long long local_70;
  unsigned long long local_68;
  unsigned long long local_60;
  unsigned char local_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  unsigned long long uStack_30;
  void2 local_28;
  unsigned long long local_20;
  unsigned long long local_18;
  
  LOCK();
  *(unsigned char *)(in_RSI + 0x20) = 0;
  UNLOCK();
  pplx::get_ambient_scheduler((pplx *)&local_20);
  local_78 = local_20;
  local_70 = local_18;
  local_68 = local_20;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  pplx::task_from_result<void>(in_RDI,(task_options *)&local_78);
  pplx::task_options::~task_options((task_options *)&local_78);
  return;
}

void streambuf_state_manager<unsigned char>::_close_write() {
long *plVar1;
  long lVar2;
  long in_RSI;
  pplx *in_RDI;
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
  
  LOCK();
  *(unsigned char *)(in_RSI + 0x21) = 0;
  UNLOCK();
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
  pplx::task_from_result<void>(in_RDI,(task_options *)&local_70);
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
  return;
}

void streambuf_state_manager<unsigned char>::alloc(unsigned long) {
long lVar1;
  logic_error *this;
  
  if ((*(byte *)(param_1 + 0x23) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)param_1 + 0x170))();
    if (lVar1 != 0) {
      LOCK();
      *(unsigned char *)(param_1 + 0x23) = 1;
      UNLOCK();
    }
    return;
  }
  this = (logic_error *)___cxa_allocate_exception(0x10);
  // std code
            (this,
             "The buffer is already allocated, this maybe caused by overlap of stream read or write"
            );
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab42f0,PTR__logic_error_101ab40a0);
}

void streambuf_state_manager<unsigned char>::bumpc() [clone .cold.2] {
if (this != (streambuf_state_manager<unsigned_char> *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

void streambuf_state_manager<unsigned char>::can_read() const {
return (byte)this[0x20] & 1;
}

void streambuf_state_manager<unsigned char>::can_write() const {
return (byte)this[0x21] & 1;
}

void streambuf_state_manager<unsigned char>::commit(unsigned long) {
unsigned char uVar1;
  logic_error *this;
  
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    (**(code **)(*(long *)param_1 + 0x178))();
    LOCK();
    uVar1 = *(unsigned char *)(param_1 + 0x23);
    *(unsigned char *)(param_1 + 0x23) = 0;
    UNLOCK();
    return uVar1;
  }
  this = (logic_error *)___cxa_allocate_exception(0x10);
  // std code
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_101ab42f0,PTR__logic_error_101ab40a0);
}

void streambuf_state_manager<unsigned char>::exception() const {
long in_RSI;
  exception_ptr *in_RDI;
  
  // std code
  return;
}

void streambuf_state_manager<unsigned char>::getc() [clone .cold.2] {
if (this != (streambuf_state_manager<unsigned_char> *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

void streambuf_state_manager<unsigned char>::is_eof() const {
return (byte)this[0x22] & 1;
}

void streambuf_state_manager<unsigned char>::is_open() const {
char cVar1;
  unsigned long long uVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0x10))();
  if (cVar1 != '\0') {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100549db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x18))(this);
  return uVar2;
}

void streambuf_state_manager<unsigned char>::nextc() [clone .cold.2] {
if (this != (streambuf_state_manager<unsigned_char> *)0x0) {
    (**(code **)(*(long *)this + 0x28))();
  }
  return;
}

void streambuf_state_manager<unsigned char>::sbumpc() {
long lVar1;
  code *pcVar2;
  char cVar3;
  unsigned long long uVar4;
  unsigned long long local_28;
  exception_ptr local_20 [8];
  
  local_28 = 0;
  lVar1 = *(long *)(this + 0x18);
  // std code
  if (lVar1 == 0) {
    cVar3 = (**(code **)(*(long *)this + 0x10))(this);
    uVar4 = 0xffffffff;
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(*(long *)this + 0x130))(this);
      LOCK();
      this[0x22] = (streambuf_state_manager<unsigned_char>)((int)uVar4 == -1);
      UNLOCK();
    }
    return uVar4;
  }
  // std code
  // std code
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

void streambuf_state_manager<unsigned char>::sgetc() {
long lVar1;
  code *pcVar2;
  char cVar3;
  unsigned long long uVar4;
  unsigned long long local_28;
  exception_ptr local_20 [8];
  
  local_28 = 0;
  lVar1 = *(long *)(this + 0x18);
  // std code
  if (lVar1 == 0) {
    cVar3 = (**(code **)(*(long *)this + 0x10))(this);
    uVar4 = 0xffffffff;
    if (cVar3 != '\0') {
      uVar4 = (**(code **)(*(long *)this + 0x140))(this);
      LOCK();
      this[0x22] = (streambuf_state_manager<unsigned_char>)((int)uVar4 == -1);
      UNLOCK();
    }
    return uVar4;
  }
  // std code
  // std code
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}
}
