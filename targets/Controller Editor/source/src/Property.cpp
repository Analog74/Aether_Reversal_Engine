#include <ni/controller_editor/Property.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void Property::getBoolValue() const {
int iVar1;
  unsigned long uVar2;
  byte bVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  
  if (this != (Property *)0x0) {
    iVar1 = *(int *)(this + 0x50);
    if (iVar1 == 3) {
      return this;
    }
    if ((iVar1 == 1) || (iVar1 == 2)) {
      if (*(int *)(this + 0x68) != 0) {
        return (Property *)0x0;
      }
      return (Property *)(&0 + -(unsigned long)(*(int *)this == 0));
    }
    if (iVar1 != 4) {
      return (Property *)0x0;
    }
    if (*(int *)(this + 0x68) != 5) {
      return (Property *)0x0;
    }
    uVar2 = (unsigned long)((byte)*this >> 1);
    bVar3 = (byte)*this & 1;
    uVar4 = *(unsigned long *)(this + 8);
    uVar5 = uVar4;
    if (bVar3 == 0) {
      uVar5 = uVar2;
    }
    if (uVar5 == 3) {
      iVar1 = // std code
      if (iVar1 == 0) return;
      uVar4 = *(unsigned long *)(this + 8);
      bVar3 = (byte)*this & 1;
      uVar2 = (unsigned long)((byte)*this >> 1);
    }
    uVar5 = uVar4;
    if (bVar3 == 0) {
      uVar5 = uVar2;
    }
    if (uVar5 == 4) {
      iVar1 = // std code
      if (iVar1 == 0) {
        return (Property *)&0;
      }
      uVar4 = *(unsigned long *)(this + 8);
      bVar3 = (byte)*this & 1;
      uVar2 = (unsigned long)((byte)*this >> 1);
    }
    uVar5 = uVar4;
    if (bVar3 == 0) {
      uVar5 = uVar2;
    }
    if (uVar5 == 2) {
      iVar1 = // std code
      if (iVar1 == 0) return;
      uVar4 = *(unsigned long *)(this + 8);
      bVar3 = (byte)*this & 1;
      uVar2 = (unsigned long)((byte)*this >> 1);
    }
    if (bVar3 != 0) {
      uVar2 = uVar4;
    }
    if ((uVar2 == 5) &&
       (iVar1 = // std code
       iVar1 == 0)) {
      return (Property *)&getBoolValue()::s_bValues;
    }
  }
  return (Property *)0x0;
}
}
