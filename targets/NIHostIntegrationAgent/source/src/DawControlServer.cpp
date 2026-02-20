#include <ni/controller_editor/DawControlServer.hpp>
namespace NI::dawcontrol {

void DawControlServer::onClientHandleCreated() {
char cVar1;
  long lVar2;
  long lVar3;
  unsigned int local_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int local_28;
  
  lVar2 = (**(code **)(*(long *)this + 0x68))();
  if (lVar2 != 0) {
    *(long *)(this + 0x48) = lVar2;
    lVar3 = (**(code **)(**(long **)(this + 0x50) + 0x30))();
    if (lVar2 != lVar3) {
      cVar1 = (**(code **)(**(long **)(this + 0x50) + 0xf0))();
      local_38 = 8;
      uStack_34 = 0x10;
      uStack_30 = 0;
      uStack_2c = 0x3444e00;
      local_28 = 0x74727565;
      if (cVar1 == '\0') {
        local_28 = 0;
      }
      (**(code **)(**(long **)(this + 0x50) + 0x20))
                (*(long **)(this + 0x50),&local_38,*(unsigned long long *)(this + 0x48),0);
    }
  }
  return;
}

DawControlServer::~DawControlServer() {
code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
