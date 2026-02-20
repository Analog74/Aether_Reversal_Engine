#include <ni/controller_editor/MapHandlerUpdateThread.hpp>
namespace NI::NHL2::MapHandlerUT::feedData(NI::NHL2 {

void MapHandlerUpdateThread::eScreen) {
long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  unsigned long uVar5;
  
  // std code
  plVar3 = *(long **)(this + 0x228);
  plVar1 = *(long **)(this + 0x230);
  lVar2 = (**(code **)(*(long *)this + 0x170))(this);
  plVar4 = plVar3;
  for (; (plVar3 != plVar1 && (plVar4 = plVar3, *plVar3 != lVar2)); plVar3 = plVar3 + 1) {
    plVar4 = plVar1;
  }
  if (plVar4 == *(long **)(this + 0x230)) {
    uVar5 = 0;
  }
  else {
    uVar5 = (unsigned long)((long)plVar4 - *(long *)(this + 0x228)) >> 3;
  }
  (**(code **)(**(long **)(this + 0x248) + 0x58))
            (*(long **)(this + 0x248),param_2,this + 0x228,uVar5 & 0xffffffff);
  // std code
  return;
}
}
