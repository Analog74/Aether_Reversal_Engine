#include <ni/controller_editor/asio_client.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

asio_client::~asio_client() {
long *plVar1;
  long lVar2;
  long *plVar3;
  
  *(void ***)this = &PTR__asio_client_101b1f900;
  plVar3 = *(long **)(this + 0x370);
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
  _http_client_communicator::~_http_client_communicator((_http_client_communicator *)this);
  delete(this);
  return;
}
}
