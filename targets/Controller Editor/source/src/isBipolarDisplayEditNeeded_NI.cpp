#include <ni/controller_editor/isBipolarDisplayEditNeeded_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineStudioModelBase {

void isBipolarDisplayEditNeeded(NI::AssignmentActionType) const {
char cVar1;
  uint uVar2;
  unsigned long long uVar3;
  long lVar4;
  long lVar5;
  unsigned long long local_38;
  
  cVar1 = Model::isBipolarDisplayEditNeeded();
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x140))(this);
    lVar4 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar2 * 0x18);
    lVar5 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar2 * 0x18);
    uVar3 = 1;
    if (lVar4 != lVar5) {
      lVar5 = lVar5 - lVar4;
      lVar4 = (param_2 & 0xff) * 0xa8 + lVar4;
      do {
        local_38 = 0;
        cVar1 = (**(code **)(*(long *)this + 0x250))(this,lVar4,&local_38);
        if (cVar1 != '\0') {
          cVar1 = NHL2::MaschineStudio::MapHandler::areDisplayValuesShownAsText
                            ((MapHandler *)(this + 0xa30));
          if ((cVar1 != '\0') || (*(int *)(lVar4 + 0x88) != 0)) return;
        }
        lVar4 = lVar4 + 0x1f8;
        lVar5 = lVar5 + -0x1f8;
      } while (lVar5 != 0);
      uVar3 = 1;
    }
  }
  return uVar3;
}
}
