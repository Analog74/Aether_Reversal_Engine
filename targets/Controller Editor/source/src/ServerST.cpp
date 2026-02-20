#include <ni/controller_editor/ServerST.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

void ServerST::AcceptConnection() {
ServerST *pSVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ServerST *pSVar8;
  ServerST *local_40;
  
  iVar3 = _accept(*(int *)(this + 0x10),(sockaddr *)0x0,(socklen_t *)0x0);
  piVar4 = ___error();
  *(int *)(this + 0x14) = *piVar4;
  if (-1 < iVar3) {
    pSVar1 = this + 0x38;
    if ((unsigned long)*(uint *)(this + 0x2c) <= *(unsigned long *)(this + 0x48)) {
      pSVar8 = *(ServerST **)(this + 0x40);
      if (pSVar8 != pSVar1) {
        if (this[0x30] != (ServerST)0x0) {
          lVar6 = 0;
          local_40 = pSVar1;
          do {
            plVar7 = *(long **)(pSVar8 + 0x10);
            cVar2 = (**(code **)(*plVar7 + 0x58))(plVar7);
            if ((cVar2 != '\0') &&
               (lVar5 = (**(code **)(*plVar7 + 0x60))(plVar7), lVar5 < lVar6 || lVar6 == 0)) {
              local_40 = pSVar8;
              lVar6 = lVar5;
            }
            do {
              pSVar8 = *(ServerST **)(pSVar8 + 8);
              if (pSVar8 == pSVar1) {
                if (local_40 == pSVar1) return;
                if (*(long **)(local_40 + 0x10) != (long *)0x0) {
                  (**(code **)(**(long **)(local_40 + 0x10) + 8))();
                }
                lVar6 = *(long *)local_40;
                *(long *)(lVar6 + 8) = *(long *)(local_40 + 8);
                **(long **)(local_40 + 8) = lVar6;
                *(long *)(this + 0x48) = *(long *)(this + 0x48) + -1;
                delete(local_40);
                return;
              }
            } while (this[0x30] == (ServerST)0x0);
          } while( true );
        }
        do {
          pSVar8 = *(ServerST **)(pSVar8 + 8);
        } while (pSVar8 != pSVar1);
      }
      _close(iVar3);
      return;
    }
    lVar6 = (**(code **)(*(long *)this + 0x48))(this,iVar3);
    plVar7 = (long *)new char[0x18];
    plVar7[2] = lVar6;
    plVar7[1] = (long)pSVar1;
    lVar6 = *(long *)(this + 0x38);
    *plVar7 = lVar6;
    *(long **)(lVar6 + 8) = plVar7;
    *(long **)(this + 0x38) = plVar7;
    *(long *)(this + 0x48) = *(long *)(this + 0x48) + 1;
  }
  return;
}

void ServerST::Work(int param_1) {
}
}
