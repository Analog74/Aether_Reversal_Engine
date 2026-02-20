#include <ni/controller_editor/ssl_proxy_tunnel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details::asio_context {

ssl_proxy_tunnel::~ssl_proxy_tunnel() {
long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  ssl_proxy_tunnel *psVar5;
  
  *(void ***)(this + 0xb0) = &PTR__basic_streambuf_101b1fb90;
  pvVar3 = *(void **)(this + 0xf8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x100) = pvVar3;
    delete(pvVar3);
  }
  // std code
  *(void ***)(this + 0x50) = &PTR__basic_streambuf_101b1fb90;
  pvVar3 = *(void **)(this + 0x98);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar3;
    delete(pvVar3);
  }
  // std code
  plVar4 = *(long **)(this + 0x48);
  if (plVar4 == (long *)0x0) {
    psVar5 = *(ssl_proxy_tunnel **)(this + 0x30);
    if (this + 0x10 == psVar5) {
      (**(code **)(*(long *)psVar5 + 0x20))();
      lVar2 = *(long *)(this + 8);
      goto joined_r0x00010056d144;
    }
  }
  else {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 != 0) return;
    (**(code **)(*plVar4 + 0x10))(plVar4);
    // std code
    psVar5 = *(ssl_proxy_tunnel **)(this + 0x30);
    if (this + 0x10 == psVar5) return;
  }
  if (psVar5 != (ssl_proxy_tunnel *)0x0) {
    (**(code **)(*(long *)psVar5 + 0x28))();
  }
  lVar2 = *(long *)(this + 8);
joined_r0x00010056d144:
  if (lVar2 != 0) {
    // std code
    return;
  }
  return;
}
}
