#include <ni/controller_editor/IButtonAssignment.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Assignment::setButtonBehavior(NI::NHL2 {

void IButtonAssignment::eButtonBehavior, bool) {
uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(this + 0x60);
  *(unsigned int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) = param_2;
  if (param_3 != '\0') {
    iVar2 = *(int *)(this + 0x8c);
    iVar5 = *(int *)(this + 0x94);
    iVar4 = iVar5;
    if (iVar5 < iVar2) {
      iVar4 = iVar2;
    }
    iVar3 = *(int *)(this + 0x90);
    if (iVar5 < iVar2) {
      iVar2 = iVar5;
    }
    if (((uVar1 < 7) && ((0x6cU >> (uVar1 & 0x1f) & 1) != 0)) &&
       (*(int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) == 3)) {
      if (this[0xa3] == (Assignment)0x0) {
        iVar5 = iVar2 - *(int *)(this + 0x98);
      }
      else {
        iVar5 = (iVar4 - *(int *)(this + 0x98)) + 1;
      }
    }
    else {
      iVar5 = iVar3;
      if (iVar4 < iVar3) {
        iVar5 = iVar2;
      }
      if (iVar3 < iVar2) {
        iVar5 = iVar2;
      }
    }
    setMidiValue(this,iVar5,true);
    if (*(int *)(this + 0x84) - 0x10U < 5) {
      setExternalMidiValue(this,*(int *)(this + 0x80));
      return;
    }
    uVar1 = *(uint *)(this + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      if (*(int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8) - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(this + 0x70) & 8) != 0 ||
             (((*(uint *)(this + 0x70) & 2) != 0 && (*(int *)(this + 4) == 1))))))
    return;
    *(unsigned int *)(this + 0x80) = 0;
  }
  return;
}
}
