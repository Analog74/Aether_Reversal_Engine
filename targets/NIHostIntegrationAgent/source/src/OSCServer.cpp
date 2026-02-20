#include <ni/controller_editor/OSCServer.hpp>
namespace NI::dawcontrol::util {

OSCServer::~OSCServer() {
OSCServer *pOVar1;
  
  pOVar1 = *(OSCServer **)(this + 0x90);
  if (this + 0x70 == pOVar1) {
    (**(code **)(*(long *)pOVar1 + 0x20))();
  }
  else if (pOVar1 != (OSCServer *)0x0) {
    (**(code **)(*(long *)pOVar1 + 0x28))();
  }
  // boost code
            ((reactive_socket_service_base *)(*(long *)(this + 0x10) + 0x28),
             (base_implementation_type *)(this + 0x18));
  // boost code
  // boost code
  return;
}
}
