#include <ni/controller_editor/isDisplayDirectionEditNeeded_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineStudioModelBase {

void isDisplayDirectionEditNeeded(NI::AssignmentActionType) const {
int *piVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  MaschineStudioModelBase *pMVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  unsigned long long local_40;
  MaschineStudioModelBase *local_38;
  
  uVar4 = (**(code **)(*(long *)this + 0x140))();
  lVar2 = *(long *)(*(long *)(this + 0x2a8) + (unsigned long)uVar4 * 0x18);
  lVar7 = *(long *)(*(long *)(this + 0x2a8) + 8 + (unsigned long)uVar4 * 0x18);
  if (lVar2 == lVar7) {
    bVar8 = false;
  }
  else {
    local_38 = this + 0xa30;
    lVar6 = (param_2 & 0xff) * 0xa8 + lVar2;
    lVar7 = lVar7 - lVar2;
    do {
      lVar7 = lVar7 + -0x1f8;
      local_40 = 0;
      if (((((*(int *)(lVar6 + 0x60) != 0) || (*(int *)(lVar6 + 4) != 0)) ||
           (cVar3 = (**(code **)(*(long *)this + 0x250))(this,lVar6,&local_40), cVar3 == '\0')) ||
          ((*(int *)(lVar6 + 0x84) == 0xc0 || (*(int *)(lVar6 + 0x84) == 0xe0)))) ||
         ((pMVar5 = (MaschineStudioModelBase *)
                    // std code
                    find<// std code
                                       *)(this + 0x988),(string *)(lVar6 + 0x30)),
          pMVar5 != this + 0x990 ||
          (cVar3 = NHL2::MaschineStudio::MapHandler::areDisplayValuesShownAsText
                             ((MapHandler *)local_38), cVar3 != '\0')))) return;
      piVar1 = (int *)(lVar6 + 0x88);
      bVar8 = *piVar1 == 0;
    } while ((lVar7 != 0) && (lVar6 = lVar6 + 0x1f8, *piVar1 == 0));
  }
  return bVar8;
}
}
