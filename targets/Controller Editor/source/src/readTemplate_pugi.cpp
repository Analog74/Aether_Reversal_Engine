#include <ni/controller_editor/readTemplate_pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void readTemplate(2 param_2, pugi::xml_node const&, unsigned int {
long lVar1;
  long *plVar2;
  unsigned int uVar3;
  int iVar4;
  MapHandler *pMVar5;
  unsigned long local_38 [2];
  void *local_28;
  
  if ((unsigned long)param_2 < (unsigned long)(*(long *)(this + 0x230) - *(long *)(this + 0x228) >> 3)) {
    pMVar5 = (MapHandler *)(*(long *)(this + 0x228) + (unsigned long)param_2 * 8);
  }
  else {
    local_38[0] = 0;
    local_38[1] = 0;
    local_28 = (void *)0x0;
    addTemplate(this,(string *)local_38,true);
    if ((local_38[0] & 1) != 0) {
      delete(local_28);
    }
    pMVar5 = this + 0x200;
  }
  uVar3 = ControllerMap::readMap(*(ControllerMap **)pMVar5,param_1,true);
  if ((char)uVar3 != '\0') {
    // std code
    *(unsigned long long *)(this + 0x1f8) = 0x999999900000000;
    if ((*(long *)(this + 0x110) != 0) && (lVar1 = *(long *)(this + 0x200), lVar1 != 0)) {
      iVar4 = (**(code **)(*(long *)(lVar1 + 0x60) + 0x20))(lVar1 + 0x60,0x4d704d70,0);
      plVar2 = *(long **)(this + 0x110);
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 0x90))(plVar2,2);
      }
      else {
        (**(code **)(*plVar2 + 0x90))(plVar2,1);
      }
    }
    local_38[0] = 1;
    (**(code **)(*(long *)this + 0x110))(this,local_38);
    // std code
    (**(code **)(*(long *)this + 0x360))(this,0);
  }
  return uVar3;
}
}
