#include <ni/controller_editor/CubaseServer.hpp>
namespace NI::dawcontrol::cubase {

void CubaseServer::onInstancePresent(bool param_1) {
}

CubaseServer::~CubaseServer() {
CubaseServer *pCVar1;
  
  pCVar1 = *(CubaseServer **)(this + 0x80);
  if (this + 0x60 == pCVar1) {
    (**(code **)(*(long *)pCVar1 + 0x20))();
  }
  else if (pCVar1 != (CubaseServer *)0x0) {
    (**(code **)(*(long *)pCVar1 + 0x28))();
  }
  DawControlServer::~DawControlServer((DawControlServer *)this);
  delete(this);
  return;
}
}
