#include <ni/controller_editor/asio_context.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

void asio_context::generate_basic_auth_header() {
long lVar1;
  long in_RSI;
  unsigned char *puVar2;
  void *puVar3;
  char *in_RDI;
  details local_38;
  unsigned char local_37 [15];
  unsigned char *local_28;
  
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
  // std code
  lVar1 = _http_client_communicator::client_config(*(_http_client_communicator **)(in_RSI + 8));
  generate_base64_userpass(&local_38,(credentials *)(lVar1 + 0x108));
  puVar2 = local_28;
  if (((byte)local_38 & 1) == 0) {
    puVar2 = local_37;
  }
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete(local_28);
  }
  puVar3 = 0;
  if ((::(anonymous_namespace)::CRLF & 1) == 0) {
    puVar3 = &0;
  }
  // std code
  return;
}

void asio_context::generate_basic_proxy_auth_header() {
long lVar1;
  long in_RSI;
  unsigned char *puVar2;
  void *puVar3;
  char *in_RDI;
  details local_38;
  unsigned char local_37 [15];
  unsigned char *local_28;
  
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
  // std code
  lVar1 = _http_client_communicator::client_config(*(_http_client_communicator **)(in_RSI + 8));
  generate_base64_userpass(&local_38,(credentials *)(lVar1 + 0xd8));
  puVar2 = local_28;
  if (((byte)local_38 & 1) == 0) {
    puVar2 = local_37;
  }
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete(local_28);
  }
  puVar3 = 0;
  if ((::(anonymous_namespace)::CRLF & 1) == 0) {
    puVar3 = &0;
  }
  // std code
  return;
}

void asio_context::read_headers() {
long *plVar1;
  asio_connection *this_00;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  locale *plVar8;
  unsigned long uVar9;
  long *plVar10;
  istream *piVar11;
  void7 extraout_var;
  long lVar12;
  unsigned long uVar13;
  unsigned longlong *extraout_RDX;
  short sVar14;
  long lVar15;
  long lVar16;
  void *local_180;
  unsigned long long local_178;
  void *local_170 [3];
  long alStack_158 [14];
  unsigned long long local_e8;
  unsigned int local_e0;
  locale local_d8 [8];
  asio_context *local_d0;
  locale local_c8 [16];
  unsigned long long local_b8;
  long *local_b0;
  unsigned long long local_a8;
  long *local_a0;
  unsigned long local_98;
  uint local_90 [4];
  void *local_80;
  unsigned long local_78;
  unsigned long uStack_70;
  void *local_68;
  unsigned long local_60 [2];
  void *local_50;
  long *local_48;
  request_context *local_40;
  locale local_38 [8];
  
  local_d0 = this + 0x170;
  local_180 = (char*)PTR_vtable_101ab4570 + 0x18;
  local_170[0] = (char*)PTR_vtable_101ab4570 + 0x40;
  local_178 = 0;
  // std code
  local_e8 = 0;
  local_e0 = 0xffffffff;
  lVar12 = *(long *)(local_180 + -0x18);
  plVar8 = (locale *)// std code
  // std code
  // std code
  // std code
  plVar10 = *(long **)((long)alStack_158 + lVar12);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,plVar8);
    // std code
    // std code
    // std code
  }
  // std code
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  local_98 = 0;
  while( true ) {
    // std code
    plVar10 = (long *)// std code
    cVar4 = (**(code **)(*plVar10 + 0x38))(plVar10,10);
    // std code
    piVar11 = // std code
                        ((istream *)&local_180,(string *)&local_78,cVar4);
    if (((byte)piVar11[*(long *)(*(long *)piVar11 + -0x18) + 0x20] & 5) != 0) break;
    if ((local_78 & 1) == 0) {
      if ((byte)local_78._0_1_ >> 1 == 1) return;
    }
    else if (uStack_70 == 1) {
      iVar7 = // std code
      if (iVar7 == 0) break;
    }
    uVar9 = // std code
    if (uVar9 != 0xffffffffffffffff) {
      // std code
      uVar13 = uStack_70;
      if ((local_78 & 1) == 0) {
        uVar13 = local_78 >> 1 & 0x7f;
      }
      local_40 = (request_context *)this;
      // std code
                          (allocator *)&local_78);
      // std code
      // boost code
      // std code
      // std code
      // boost code
      // std code
      // std code
      bVar5 = // boost code
                        ((string *)local_60,(string *)&header_names::transfer_encoding,local_38);
      // std code
      if (bVar5) {
        // std code
        // std code
        bVar5 = // boost code
                          (local_90,"chunked",local_38);
        local_98 = 0(extraout_var,bVar5);
        // std code
        // std code
      }
      // std code
      bVar5 = // boost code
                        ((string *)local_60,(string *)&header_names::connection,local_38);
      // std code
      if (bVar5) {
        lVar12 = *(long *)(local_40 + 0x28);
        plVar10 = *(long **)(local_40 + 0x30);
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar10[1] = plVar10[1] + 1;
          UNLOCK();
        }
        bVar5 = (char)((ushort)*(void2 *)(lVar12 + 0x50) >> 8) == '\0';
        bVar3 = (char)*(void2 *)(lVar12 + 0x50) == '\x01';
        if (plVar10 == (long *)0x0) {
          lVar12 = *(long *)(local_40 + 0x1d0);
          if (!bVar5 || !bVar3) return;
          // std code
          bVar5 = // boost code
                            ((string *)local_90,"Keep-Alive",local_38);
        }
        else {
          LOCK();
          plVar1 = plVar10 + 1;
          lVar12 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar12 != 0) return;
          (**(code **)(*plVar10 + 0x10))(plVar10);
          // std code
          lVar12 = *(long *)(local_40 + 0x1d0);
          if (bVar5 && bVar3) return;
          // std code
          bVar5 = // boost code
                            ((string *)local_90,"close",local_38);
          bVar5 = !bVar5;
        }
        *(bool *)(lVar12 + 0xb9) = bVar5;
        // std code
      }
      this = (asio_context *)local_40;
      http_headers::add<// std code
                ((http_headers *)(*(long *)(local_40 + 0x28) + 0x58),(string *)local_60,
                 (string *)local_90);
      if ((local_90[0] & 1) != 0) {
        delete(local_80);
      }
      if ((local_60[0] & 1) != 0) {
        delete(local_50);
      }
    }
  }
  local_40 = (request_context *)this + 0x78;
  *(unsigned long long *)((request_context *)this + 0x78) = 0xffffffffffffffff;
  lVar12 = *(long *)(*(long *)((request_context *)this + 0x28) + 0x60);
  if (lVar12 != 0) {
    lVar15 = *(long *)((request_context *)this + 0x28) + 0x60;
    lVar16 = lVar15;
    do {
      bVar6 = utility::details::str_iless
                        ((string *)(lVar12 + 0x20),(string *)&header_names::content_length);
      if (bVar6 == 0) {
        lVar16 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + (unsigned long)bVar6 * 8);
    } while (lVar12 != 0);
    if ((lVar16 != lVar15) &&
       (cVar4 = utility::details::str_iless
                          ((string *)&header_names::content_length,(string *)(lVar16 + 0x20)),
       cVar4 == '\0')) {
      http::details::bind_impl<// std code
                ((details *)(lVar16 + 0x38),(string *)local_40,extraout_RDX);
    }
  }
  cVar4 = request_context::handle_compression((request_context *)this);
  if (cVar4 == '\0') return;
  request_context::complete_headers((request_context *)this);
  lVar12 = *(long *)((request_context *)this + 0x18);
  if ((*(byte *)(lVar12 + 0x98) & 1) == 0) {
    sVar14 = *(short *)(*(long *)((request_context *)this + 0x28) + 0x90);
    if (*(byte *)(lVar12 + 0x98) >> 1 == 4) return;
    if (((99 < (ushort)(sVar14 - 100U)) && (sVar14 != 0xcc)) && (sVar14 != 0x130)) {
      if ((local_98 & 1) != 0) {
        this_00 = *(asio_connection **)((request_context *)this + 0x1d0);
        local_a8 = *(unsigned long long *)((request_context *)this + 0x68);
        if (*(long *)((request_context *)this + 0x70) == 0) {
          local_a0 = (long *)0x0;
        }
        else {
          local_a0 = (long *)// std code
          if (local_a0 != (long *)0x0) {
            // boost code
            bind<void,web::http::client::details::asio_context,// boost code
                      ((boost *)local_60,handle_chunk_header,0,&local_a8,
                       // boost code
            asio_connection::
            async_read_until<// boost code
                      (this_00,(basic_streambuf *)local_d0,(string *)&::(anonymous_namespace)::CRLF,
                       (bind_t *)local_60);
            plVar10 = local_a0;
            if (local_48 != (long *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
                // std code
                plVar10 = local_a0;
              }
            }
            if (plVar10 != (long *)0x0) {
              LOCK();
              plVar1 = plVar10 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
                // std code
              }
            }
            return;
          }
        }
        // std code
        return;
      }
      if (*(long *)local_40 != 0) {
        lVar12 = _http_client_communicator::client_config
                           (*(_http_client_communicator **)((request_context *)this + 8));
        uVar9 = 0x10000;
        if (*(unsigned long *)(lVar12 + 0x148) != 0) {
          uVar9 = *(unsigned long *)(lVar12 + 0x148);
        }
        if (*(unsigned long *)((request_context *)this + 0x78) <= uVar9) {
          uVar9 = *(unsigned long *)((request_context *)this + 0x78);
        }
        local_b8 = *(unsigned long long *)((request_context *)this + 0x68);
        if (*(long *)((request_context *)this + 0x70) == 0) {
          local_b0 = (long *)0x0;
        }
        else {
          local_b0 = (long *)// std code
          if (local_b0 != (long *)0x0) {
            // boost code
            bind<void,web::http::client::details::asio_context,// boost code
                      ((boost *)local_60,handle_read_content,0,&local_b8,
                       // boost code
            async_read_until_buffersize<// boost code
                      (this,uVar9,(bind_t *)local_60);
            plVar10 = local_b0;
            if (local_48 != (long *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
                // std code
                plVar10 = local_b0;
              }
            }
            return;
          }
        }
        // std code
        return;
      }
    }
  }
  else {
    sVar14 = *(short *)(*(long *)((request_context *)this + 0x28) + 0x90);
    if (*(long *)(lVar12 + 0xa0) != 4) return;
    iVar7 = // std code
    if (iVar7 != 0) return;
  }
  if (*(long *)(*(long *)((request_context *)this + 0x18) + 0x250) != 0) {
    local_90[0] = 1;
    local_60[0] = 0;
    plVar10 = *(long **)(*(long *)(*(long *)((request_context *)this + 0x18) + 0x250) + 0x20);
    if (plVar10 == (long *)0x0) {
      // std code
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    (**(code **)(*plVar10 + 0x30))(plVar10,local_90,local_60);
  }
  request_context::complete_request((request_context *)this,0);
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  // std code
  return;
}

void asio_context::start_request() [clone .cold.1] {
(**(code **)(*(long *)this + 0x10))();
  // std code
  return;
}

void asio_context::write_request() {
long *plVar1;
  long lVar2;
  long lVar3;
  asio_connection *paVar4;
  code *pcVar5;
  long *plVar6;
  unsigned long long uVar7;
  boost local_90 [24];
  long *local_78;
  unsigned long long local_70;
  long *local_68;
  unsigned long long local_60;
  long *local_58;
  asio_context *local_50;
  long local_48;
  long *local_40;
  
  lVar3 = *(long *)(this + 0x1d0);
  if ((*(long *)(lVar3 + 0x98) == 0) || (*(char *)(lVar3 + 0xb8) != '\0')) {
    local_60 = *(unsigned long long *)(this + 0x68);
    if (*(long *)(this + 0x70) == 0) {
      local_58 = (long *)0x0;
    }
    else {
      local_58 = (long *)// std code
      if (local_58 != (long *)0x0) {
        // boost code
        bind<void,web::http::client::details::asio_context,// boost code
                  (local_90,handle_write_headers,0,&local_60,// boost code
        // std code
        local_50 = this + 0x170;
        local_48 = *(long *)(lVar3 + 0x98);
        if (local_48 == 0) {
          local_48 = lVar3 + 0x40;
          // boost code
          initiate_async_write_dynbuf_v1<// boost code
          ::operator()((bind_t *)&local_48,(basic_streambuf_ref *)local_90,
                       (transfer_all_t *)&local_50);
        }
        else {
          // boost code
          initiate_async_write_dynbuf_v1<// boost code
          ::operator()((bind_t *)&local_48,(basic_streambuf_ref *)local_90,
                       (transfer_all_t *)&local_50);
        }
        // std code
        if (local_78 != (long *)0x0) {
          LOCK();
          plVar6 = local_78 + 1;
          lVar3 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            // std code
          }
        }
        if (local_58 == (long *)0x0) {
          return;
        }
        LOCK();
        plVar6 = local_58 + 1;
        lVar3 = *plVar6;
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (lVar3 != 0) {
          return;
        }
        (**(code **)(*local_58 + 0x10))(local_58);
        // std code
        return;
      }
    }
    // std code
  }
  else {
    if (*(long *)(this + 0x70) == 0) return;
    lVar3 = *(long *)(this + 0x68);
    plVar6 = (long *)// std code
    if (plVar6 == (long *)0x0) return;
    LOCK();
    plVar6[2] = plVar6[2] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      // std code
    }
    paVar4 = *(asio_connection **)(this + 0x1d0);
    uVar7 = _http_client_communicator::client_config(*(_http_client_communicator **)(this + 8));
    local_70 = *(unsigned long long *)(this + 0x68);
    if (*(long *)(this + 0x70) != 0) {
      local_68 = (long *)// std code
      if (local_68 != (long *)0x0) {
        // boost code
        bind<void,web::http::client::details::asio_context,// boost code
                  (local_90,handle_handshake,0,&local_70,// boost code
        LOCK();
        plVar6[2] = plVar6[2] + 1;
        UNLOCK();
        local_48 = lVar3;
        local_40 = plVar6;
        asio_connection::
        async_handshake<// boost code
                  (paVar4,0,uVar7,local_90,&local_48);
        if (local_40 != (long *)0x0) {
          // std code
        }
        if (local_78 != (long *)0x0) {
          LOCK();
          plVar6 = local_78 + 1;
          lVar3 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            // std code
          }
        }
        if (local_68 != (long *)0x0) {
          LOCK();
          plVar6 = local_68 + 1;
          lVar3 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            // std code
          }
        }
        return;
      }
      return;
    }
  }
  local_68 = (long *)0x0;
  // std code
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

asio_context::~asio_context() {
long *plVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  *(void ***)this = &PTR__asio_context_101b20ca0;
  LOCK();
  *(unsigned int *)(this + 0x90) = 2;
  UNLOCK();
  if (this[0xb8] != (asio_context)0x0) {
    // boost code
    cancel_timer<// boost code
              (*(kqueue_reactor **)(*(long *)(this + 0xa8) + 0x58),
               (timer_queue *)(*(long *)(this + 0xa8) + 0x28),(per_timer_data *)(this + 0xc0),
               0xffffffffffffffff);
    this[0xb8] = (asio_context)0x0;
  }
  lVar2 = *(long *)(this + 8);
  plVar3 = *(long **)(this + 0x10);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  asio_connection_pool::release(*(asio_connection_pool **)(lVar2 + 0x368),this + 0x1d0);
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
  plVar3 = *(long **)(this + 0x1d8);
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
  *(void ***)(this + 0x170) = &PTR__basic_streambuf_101b1fb90;
  pvVar4 = *(void **)(this + 0x1b8);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x1c0) = pvVar4;
    delete(pvVar4);
  }
  // std code
  // boost code
            ((resolver_service_base *)(*(long *)(this + 0x120) + 0x28),this + 0x128);
  // boost code
  plVar3 = *(long **)(this + 0x130);
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
  // boost code
  io_object_impl<// boost code
  ::~io_object_impl((io_object_impl<// boost code
                     *)(this + 0xa8));
  if (*(long *)(this + 0xa0) != 0) {
    // std code
  }
  if (*(long *)(this + 0x70) != 0) {
    // std code
  }
  request_context::~request_context((request_context *)this);
  return;
}
}
