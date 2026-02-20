#include <ni/controller_editor/asio_connection.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

asio_connection::~asio_connection() {
void *pvVar1;
  void *pvVar2;
  base_implementation_type local_60 [24];
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  
  // std code
  *(void2 *)(this + 0xb9) = 0x100;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  // boost code
  // boost code
            (local_60,(error_code *)(*(long *)(this + 0x40) + 0x28));
  // std code
  if (((byte)this[0xa0] & 1) != 0) {
    delete(*(void **)(this + 0xb0));
  }
  pvVar1 = *(void **)(this + 0x98);
  *(unsigned long long *)(this + 0x98) = 0;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x130);
    if (pvVar2 != (void *)0x0) {
      *(void **)((long)pvVar1 + 0x138) = pvVar2;
      delete(pvVar2);
    }
    pvVar2 = *(void **)((long)pvVar1 + 0x108);
    if (pvVar2 != (void *)0x0) {
      *(void **)((long)pvVar1 + 0x110) = pvVar2;
      delete(pvVar2);
    }
    // boost code
    io_object_impl<// boost code
    ::~io_object_impl((io_object_impl<// boost code
                       *)((long)pvVar1 + 0x90));
    // boost code
    io_object_impl<// boost code
    ::~io_object_impl((io_object_impl<// boost code
                       *)((long)pvVar1 + 0x18));
    // boost code
    delete(pvVar1);
  }
  // boost code
            ((reactive_socket_service_base *)(*(long *)(this + 0x40) + 0x28),
             (base_implementation_type *)(this + 0x48));
  // boost code
  // std code
  return;
}
}
