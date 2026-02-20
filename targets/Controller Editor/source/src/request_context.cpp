#include <ni/controller_editor/request_context.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

void request_context::_get_readbuffer() [clone .cold.1] {
request_context *prVar1;
  long lVar2;
  
  LOCK();
  prVar1 = this + 8;
  lVar2 = *(long *)prVar1;
  *(long *)prVar1 = *(long *)prVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void request_context::_get_writebuffer() [clone .cold.1] {
request_context *prVar1;
  long lVar2;
  
  LOCK();
  prVar1 = this + 8;
  lVar2 = *(long *)prVar1;
  *(long *)prVar1 = *(long *)prVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*(long *)this + 0x10))();
    // std code
  }
  return;
}

void request_context::complete_headers() {
long *plVar1;
  long lVar2;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long local_48 [2];
  char *local_38;
  unsigned long long local_28;
  long *local_20;
  
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (char *)new char[0x20];
  local_48[0] = 0x21;
  local_48[1] = 0x18;
  builtin_strncpy(local_38,"application/octet-stream",0x19);
  http::details::http_msg_base::set_body
            (*(http_msg_base **)(this + 0x18),(basic_istream *)&local_58,(string *)local_48);
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  local_28 = *(unsigned long long *)(this + 0x28);
  local_20 = *(long **)(this + 0x30);
  if (local_20 != (long *)0x0) {
    LOCK();
    local_20[1] = local_20[1] + 1;
    UNLOCK();
  }
  pplx::task_completion_event<web::http::http_response>::set
            ((task_completion_event<web::http::http_response> *)(this + 0x48),&local_28);
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
  return;
}

void request_context::finish() {
if (*(_CancellationTokenRegistration **)(this + 0x58) != (_CancellationTokenRegistration *)0x0) {
    pplx::details::_CancellationTokenState::_DeregisterCallback
              (*(_CancellationTokenState **)(*(long *)(this + 0x18) + 0xc0),
               *(_CancellationTokenRegistration **)(this + 0x58));
  }
  _http_client_communicator::finish_request(*(_http_client_communicator **)(this + 8));
  return;
}

void request_context::get_compression_header() const {
long lVar1;
  long lVar2;
  unsigned long *puVar3;
  long in_RSI;
  void *puVar4;
  void *pvVar5;
  char *in_RDI;
  
  void *local_60;
  unsigned long local_58;
  unsigned long uStack_50;
  void *local_48;
  unsigned long long local_38;
  unsigned long uStack_30;
  void *local_28;
  
  in_RDI[0] = '\0';
  in_RDI[1] = '\0';
  in_RDI[2] = '\0';
  in_RDI[3] = '\0';
  in_RDI[4] = '\0';
  in_RDI[5] = '\0';
  in_RDI[6] = '\0';
  in_RDI[7] = '\0';
  in_RDI[8] = '\0';
  in_RDI[9] = '\0';
  in_RDI[10] = '\0';
  in_RDI[0xb] = '\0';
  in_RDI[0xc] = '\0';
  in_RDI[0xd] = '\0';
  in_RDI[0xe] = '\0';
  in_RDI[0xf] = '\0';
  in_RDI[0x10] = '\0';
  in_RDI[0x11] = '\0';
  in_RDI[0x12] = '\0';
  in_RDI[0x13] = '\0';
  in_RDI[0x14] = '\0';
  in_RDI[0x15] = '\0';
  in_RDI[0x16] = '\0';
  in_RDI[0x17] = '\0';
  lVar1 = *(long *)(*(long *)(in_RSI + 0x18) + 0x18);
  lVar2 = *(long *)(*(long *)(in_RSI + 0x18) + 0x20);
  if (*(char *)(*(long *)(in_RSI + 8) + 0x270) == '\0') {
    if (lVar1 != lVar2) {
      // std code
      puVar4 = 0;
      if ((header_names::te & 1) == 0) {
        puVar4 = &0;
      }
      puVar3 = (unsigned long *)// std code
      local_48 = (void *)puVar3[2];
      local_58 = *puVar3;
      uStack_50 = puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3 = (unsigned long *)// std code
      local_28 = (void *)puVar3[2];
      local_38 = *puVar3;
      uStack_30 = puVar3[1];
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      pvVar5 = local_28;
      if ((local_38 & 1) == 0) {
        pvVar5 = (void *)((long)&local_38 + 1);
      }
      // std code
      if ((local_38 & 1) != 0) {
        delete(local_28);
      }
      if ((local_58 & 1) != 0) {
        delete(local_48);
      }
      if (((byte)local_70[0] & 1) != 0) {
        delete(local_60);
      }
      compression::details::build_supported_header
                ((details *)&local_38,2,*(long *)(in_RSI + 0x18) + 0x18);
      pvVar5 = local_28;
      if ((local_38 & 1) == 0) {
        pvVar5 = (void *)((long)&local_38 + 1);
      }
      // std code
      if ((local_38 & 1) != 0) {
        delete(local_28);
      }
      // std code
    }
  }
  else if ((lVar1 != lVar2) || (compression::builtin::g_compress_factories != 0)) {
    // std code
    pvVar5 = local_28;
    if ((local_38 & 1) == 0) {
      pvVar5 = (void *)((long)&local_38 + 1);
    }
    // std code
    if ((local_38 & 1) != 0) {
      delete(local_28);
    }
    compression::details::build_supported_header
              ((details *)&local_38,3,*(long *)(in_RSI + 0x18) + 0x18);
    pvVar5 = local_28;
    if ((local_38 & 1) == 0) {
      pvVar5 = (void *)((long)&local_38 + 1);
    }
    // std code
    if ((local_38 & 1) != 0) {
      delete(local_28);
    }
    // std code
  }
  return;
}

void request_context::handle_compression() {
long lVar1;
  long *plVar2;
  unsigned long long uVar3;
  long lVar4;
  unsigned long local_48 [2];
  void *local_38;
  unsigned long long local_28;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = (void *)0x0;
  lVar1 = *(long *)(this + 0x28);
  if (*(char *)(*(long *)(this + 8) + 0x270) == '\0') {
    if (*(long *)(*(long *)(this + 0x18) + 0x18) == *(long *)(*(long *)(this + 0x18) + 0x20))
    return;
    lVar4 = // std code
            __tree<// std code
            ::find<// std code
                                 *)(lVar1 + 0x58),(string *)&header_names::transfer_encoding);
    if (lVar4 == lVar1 + 0x60) return;
    // std code
    compression::details::get_decompressor_from_header
              ((details *)&local_28,local_48,0,*(long *)(this + 0x18) + 0x18);
  }
  else {
    lVar4 = // std code
            __tree<// std code
            ::find<// std code
                                 *)(lVar1 + 0x58),(string *)&header_names::content_encoding);
    if (lVar4 == lVar1 + 0x60) return;
    // std code
    compression::details::get_decompressor_from_header
              ((details *)&local_28,local_48,1,*(long *)(this + 0x18) + 0x18);
  }
  uVar3 = local_28;
  local_28 = 0;
  plVar2 = *(long **)(this + 0x60);
  *(unsigned long long *)(this + 0x60) = uVar3;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  return 1;
}

request_context::~request_context() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__request_context_101b1ca10;
  plVar3 = *(long **)(this + 0x60);
  *(unsigned long long *)(this + 0x60) = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x28))();
  }
  plVar3 = *(long **)(this + 0x58);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  *(unsigned long long *)(this + 0x58) = 0;
  plVar3 = *(long **)(this + 0x50);
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
  plVar3 = *(long **)(this + 0x30);
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
  plVar3 = *(long **)(this + 0x20);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      plVar3 = *(long **)(this + 0x10);
      goto joined_r0x000100542324;
    }
  }
  plVar3 = *(long **)(this + 0x10);
joined_r0x000100542324:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      // std code
      return;
    }
  }
  return;
}
}
