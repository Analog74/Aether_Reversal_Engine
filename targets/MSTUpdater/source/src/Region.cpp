#include <ni/controller_editor/Region.hpp>
namespace NI::GP {

void Region::moveBy(int, int) {
long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
    iVar4 = *(int *)(this + 0x1c);
    if (iVar4 <= *(int *)(this + 0x14)) {
      return;
    }
    iVar3 = *(int *)(this + 0x18);
    iVar2 = *(int *)(this + 0x20);
    if (iVar2 <= iVar3) {
      return;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x18);
    iVar4 = *(int *)(this + 0x1c);
    iVar2 = *(int *)(this + 0x20);
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_1;
  *(int *)(this + 0x18) = iVar3 + param_2;
  *(int *)(this + 0x1c) = iVar4 + param_1;
  *(int *)(this + 0x20) = iVar2 + param_2;
  for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + param_1;
    *(int *)(lVar1 + 0x14) = *(int *)(lVar1 + 0x14) + param_2;
    *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + param_1;
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + param_2;
  }
  return;
}

Region::~Region() {
ListItem *pLVar1;
  long lVar2;
  long *plVar3;
  
  while (pLVar1 = *(ListItem **)this, pLVar1 != (ListItem *)0x0) {
    lVar2 = *(long *)pLVar1;
    plVar3 = *(long **)(pLVar1 + 8);
    if (lVar2 == 0) {
      *(long **)this = plVar3;
    }
    else {
      *(long **)(lVar2 + 8) = plVar3;
      plVar3 = *(long **)(pLVar1 + 8);
    }
    if (plVar3 == (long *)0x0) {
      *(long *)(this + 8) = lVar2;
    }
    else {
      *plVar3 = lVar2;
    }
    implDeleteItem(this,pLVar1);
  }
  *(unsigned int *)(this + 0x10) = 0;
  return;
}
}
