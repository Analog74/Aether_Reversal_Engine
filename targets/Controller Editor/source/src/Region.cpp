#include <ni/controller_editor/Region.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void Region::contains(int, int) const {
int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  
  lVar3 = *(long *)this;
  iVar1 = *(int *)(this + 0x14);
  iVar2 = *(int *)(this + 0x1c);
  if (lVar3 == 0) {
    if (iVar2 <= iVar1) {
      return false;
    }
    if (*(int *)(this + 0x20) <= *(int *)(this + 0x18)) {
      return false;
    }
    if (iVar2 <= iVar1) {
      return false;
    }
  }
  else if (iVar2 <= iVar1) {
    return false;
  }
  bVar4 = false;
  if ((((*(int *)(this + 0x18) < *(int *)(this + 0x20)) && (iVar1 <= param_1)) && (param_1 < iVar2))
     && (((bVar4 = false, *(int *)(this + 0x18) <= param_2 && (param_2 < *(int *)(this + 0x20))) &&
         ((bVar4 = lVar3 == *(long *)(this + 8), !bVar4 && (lVar3 != 0)))))) {
    bVar4 = false;
    do {
      if (param_2 < *(int *)(lVar3 + 0x1c)) {
        if (param_2 < *(int *)(lVar3 + 0x14)) {
          return false;
        }
        if (param_1 < *(int *)(lVar3 + 0x10)) {
          return false;
        }
        if (param_1 < *(int *)(lVar3 + 0x18)) {
          return true;
        }
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  return bVar4;
}

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
long lVar1;
  Region *pRVar2;
  ListItem *pLVar3;
  
  pLVar3 = *(ListItem **)this;
  if (pLVar3 != (ListItem *)0x0) {
    do {
      lVar1 = *(long *)pLVar3;
      pRVar2 = *(Region **)(pLVar3 + 8);
      if (lVar1 == 0) {
        *(Region **)this = pRVar2;
      }
      else {
        *(Region **)(lVar1 + 8) = pRVar2;
        pRVar2 = *(Region **)(pLVar3 + 8);
      }
      if (pRVar2 == (Region *)0x0) {
        pRVar2 = this + 8;
      }
      *(long *)pRVar2 = lVar1;
      implDeleteItem(this,pLVar3);
      pLVar3 = *(ListItem **)this;
    } while (pLVar3 != (ListItem *)0x0);
  }
  *(unsigned int *)(this + 0x10) = 0;
  return;
}
}
