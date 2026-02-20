#include <ni/controller_editor/LiveServer.hpp>
namespace NI::dawcontrol::live {

LiveServer::~LiveServer() {
LiveServer *pLVar1;
  
  pLVar1 = *(LiveServer **)(this + 0x4220);
  if (this + 0x4200 == pLVar1) {
    (**(code **)(*(long *)pLVar1 + 0x20))();
  }
  else if (pLVar1 != (LiveServer *)0x0) {
    (**(code **)(*(long *)pLVar1 + 0x28))();
  }
  util::OSCClient::~OSCClient((OSCClient *)(this + 0x100));
  pLVar1 = *(LiveServer **)(this + 0xf0);
  if (this + 0xd0 == pLVar1) {
    (**(code **)(*(long *)pLVar1 + 0x20))();
  }
  else if (pLVar1 != (LiveServer *)0x0) {
    (**(code **)(*(long *)pLVar1 + 0x28))();
  }
  // boost code
            ((reactive_socket_service_base *)(*(long *)(this + 0x70) + 0x28),
             (base_implementation_type *)(this + 0x78));
  // boost code
  // boost code
  DawControlServer::~DawControlServer((DawControlServer *)this);
  delete(this);
  return;
}
}
