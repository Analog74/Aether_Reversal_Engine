#include <ni/controller_editor/http_msg_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::details {

void http_msg_base::_extract_vector() {
long *plVar1;
  long lVar2;
  int iVar3;
  unsigned long uVar4;
  void *pvVar5;
  logic_error *plVar6;
  unsigned long long uVar7;
  char *pcVar8;
  unsigned long long *puVar9;
  long in_RSI;
  unsigned long long *in_RDI;
  _Task_impl_base *local_58;
  long *local_50;
  void **local_48;
  long *plStack_40;
  long *local_38;
  
  if ((*(long *)(in_RSI + 0x30) == 0) || (*(long *)(*(long *)(in_RSI + 0x30) + 8) == 0)) {
    puVar9 = (unsigned long long *)___cxa_allocate_exception(0x30);
    local_38 = (long *)new char[0x40];
    local_48 = (void **)0x41;
    plStack_40 = (long *)0x3e;
    builtin_strncpy((char *)local_38,
                    "A stream was set on the message and extraction is not possible",0x3f);
    *puVar9 = &PTR__http_exception_101b20360;
    *(unsigned int *)(puVar9 + 1) = 0;
    uVar7 = // std code
    puVar9[2] = uVar7;
    // std code
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar9,&http_exception::typeinfo,http_exception::~http_exception);
  }
  *in_RDI = 0;
  in_RDI[1] = 0;
  in_RDI[2] = 0;
  Concurrency::streams::basic_istream<unsigned_char>::streambuf();
  if (plStack_40 == (long *)0x0) {
    plVar6 = (logic_error *)___cxa_allocate_exception(0x10);
    // std code
    *(void **)plVar6 = (char*)PTR_vtable_101ab45e8 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(plVar6,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
  }
  uVar4 = (**(code **)(*plStack_40 + 0x48))();
  if (uVar4 == 0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if ((long)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    pvVar5 = new char[uVar4];
    ___bzero(pvVar5,uVar4);
    *in_RDI = pvVar5;
    in_RDI[1] = uVar4 + (long)pvVar5;
    in_RDI[2] = uVar4 + (long)pvVar5;
  }
  if (plStack_40 != (long *)0x0) {
    (**(code **)(*plStack_40 + 0xb0))(&local_58,plStack_40,pvVar5,uVar4);
    if (local_58 == (_Task_impl_base *)0x0) {
      puVar9 = (unsigned long long *)___cxa_allocate_exception(0x20);
      *puVar9 = &PTR__invalid_operation_101b1f9e0;
      pcVar8 = (char *)new char[0x40];
      puVar9[3] = pcVar8;
      puVar9[1] = 0x41;
      puVar9[2] = 0x35;
      builtin_strncpy(pcVar8,"get() cannot be called on a default constructed task.",0x36);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar9,&pplx::invalid_operation::typeinfo,
                   pplx::invalid_operation::~invalid_operation);
    }
    iVar3 = pplx::details::_Task_impl_base::_Wait(local_58);
    if (iVar3 == 2) {
      puVar9 = (unsigned long long *)___cxa_allocate_exception(0x20);
      *puVar9 = &PTR__task_canceled_101b20640;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(puVar9,&pplx::task_canceled::typeinfo,pplx::task_canceled::~task_canceled);
    }
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        // std code
      }
    }
    local_48 = &PTR__streambuf_101b0cd40;
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
    return;
  }
  plVar6 = (logic_error *)___cxa_allocate_exception(0x10);
  // std code
  *(void **)plVar6 = (char*)PTR_vtable_101ab45e8 + 0x10;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(plVar6,PTR_typeinfo_101ab4318,PTR__invalid_argument_101ab40c8);
}

void http_msg_base::_prepare_to_receive_data() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void **local_40 [2];
  long *local_30;
  unsigned long long local_28;
  long *local_20;
  
  if ((*(long *)(this + 0x40) == 0) || (*(long *)(*(long *)(this + 0x40) + 8) == 0)) {
    Concurrency::streams::producer_consumer_buffer<unsigned_char>::producer_consumer_buffer
              ((producer_consumer_buffer<unsigned_char> *)local_40,0x200);
    Concurrency::streams::streambuf<unsigned_char>::create_ostream();
    if (local_20 != (long *)0x0) {
      LOCK();
      local_20[1] = local_20[1] + 1;
      UNLOCK();
    }
    *(unsigned long long *)(this + 0x40) = local_28;
    plVar3 = *(long **)(this + 0x48);
    *(long **)(this + 0x48) = local_20;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
    this[0x70] = (http_msg_base)0x1;
    if (local_20 != (long *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
        // std code
      }
    }
    Concurrency::streams::streambuf<unsigned_char>::create_istream();
    if (local_20 != (long *)0x0) {
      LOCK();
      local_20[1] = local_20[1] + 1;
      UNLOCK();
    }
    *(unsigned long long *)(this + 0x30) = local_28;
    plVar3 = *(long **)(this + 0x38);
    *(long **)(this + 0x38) = local_20;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
    if (local_20 != (long *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
        // std code
      }
    }
    local_40[0] = &PTR__streambuf_101b0cd40;
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        // std code
      }
    }
  }
  return;
}

http_msg_base::http_msg_base() [clone .cold.2] {
http_msg_base *phVar1;
  long lVar2;
  
  LOCK();
  phVar1 = this + 8;
  lVar2 = *(long *)phVar1;
  *(long *)phVar1 = *(long *)phVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    
  }
  (**(code **)(*(long *)this + 0x10))();
  // std code
  
}

http_msg_base::~http_msg_base() {
~http_msg_base(this);
  delete(this);
  return;
}
}
