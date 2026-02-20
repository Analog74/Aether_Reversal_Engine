#include <ni/controller_editor/removeAssignmentSelection_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void removeAssignmentSelection(1 param_1, std::string const& {
array<NI::NHL2::Assignment,3ul> aVar1;
  long lVar2;
  size_t sVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  unsigned long uVar8;
  array<NI::NHL2::Assignment,3ul> *paVar9;
  unsigned long uVar10;
  size_t sVar11;
  unsigned long uVar12;
  array<NI::NHL2::Assignment,3ul> *paVar13;
  array<NI::NHL2::Assignment,3ul> *paVar14;
  array<NI::NHL2::Assignment,3ul> *this_00;
  
  plVar7 = (long *)(**(code **)(*(long *)this + 0xe8))();
  uVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
  uVar8 = (unsigned long)uVar5;
  lVar2 = *(long *)(this + 0x2a8);
  paVar14 = *(array<NI::NHL2::Assignment,3ul> **)(lVar2 + uVar8 * 0x18);
  this_00 = *(array<NI::NHL2::Assignment,3ul> **)(lVar2 + 8 + uVar8 * 0x18);
  if (paVar14 != this_00) {
    uVar10 = (unsigned long)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) == 0) {
      if (uVar10 != 0) {
        do {
          aVar1 = paVar14[0x30];
          if (((byte)aVar1 & 1) == 0) {
            uVar12 = (unsigned long)((byte)aVar1 >> 1);
          }
          else {
            uVar12 = *(unsigned long *)(paVar14 + 0x38);
          }
          if (uVar10 == uVar12) {
            if (((byte)aVar1 & 1) == 0) {
              paVar9 = paVar14 + 0x31;
            }
            else {
              paVar9 = *(array<NI::NHL2::Assignment,3ul> **)(paVar14 + 0x40);
            }
            uVar12 = 0;
            while (param_1[uVar12 + 1] == *(string *)(paVar9 + uVar12)) {
              uVar12 = uVar12 + 1;
              if (uVar10 == uVar12) return;
            }
          }
          paVar14 = paVar14 + 0x1f8;
          if (paVar14 == this_00) {
            return 0;
          }
        } while( true );
      }
      do {
        if (((byte)paVar14[0x30] & 1) == 0) {
          if ((byte)paVar14[0x30] >> 1 == 0) return;
        }
        else if(1 param_1, *(long *(paVar14 + 0x38) == 0) return;
        paVar14 = paVar14 + 0x1f8;
      } while (this_00 != paVar14);
    }
    else {
      sVar3 = *(size_t *)(param_1 + 8);
      pvVar4 = *(void **)(param_1 + 0x10);
      if (sVar3 == 0) {
        do {
          if (((byte)paVar14[0x30] & 1) == 0) {
            if ((byte)paVar14[0x30] >> 1 == 0) return;
          }
          else if(1 param_1, *(long *(paVar14 + 0x38) == 0) return;
          paVar14 = paVar14 + 0x1f8;
        } while (this_00 != paVar14);
      }
      else {
        do {
          aVar1 = paVar14[0x30];
          if (((byte)aVar1 & 1) == 0) {
            sVar11 = (size_t)((byte)aVar1 >> 1);
          }
          else {
            sVar11 = *(size_t *)(paVar14 + 0x38);
          }
          if (sVar3 == sVar11) {
            if (((byte)aVar1 & 1) == 0) {
              paVar9 = paVar14 + 0x31;
            }
            else {
              paVar9 = *(array<NI::NHL2::Assignment,3ul> **)(paVar14 + 0x40);
            }
            iVar6 = _memcmp(pvVar4,paVar9,sVar3);
            if (iVar6 == 0) return;
          }
          paVar14 = paVar14 + 0x1f8;
        } while (this_00 != paVar14);
      }
    }
  }
  return 0;
  plVar7 = (long *)(lVar2 + uVar8 * 0x18 + 8);
  paVar9 = paVar14;
  if (paVar14 + 0x1f8 != this_00) {
    do {
      paVar14 = paVar9 + 0x1f8;
      // std code
      paVar13 = paVar9 + 0x3f0;
      paVar9 = paVar14;
    } while (paVar13 != this_00);
    this_00 = (array<NI::NHL2::Assignment,3ul> *)*plVar7;
    if (this_00 == paVar14) return;
  }
  do {
    this_00 = this_00 + -0x1f8;
    // std code
  } while (paVar14 != this_00);
  *plVar7 = (long)paVar14;
  if (*(long *)(*(long *)(this + 0x2a8) + uVar8 * 0x18) ==
      *(long *)(*(long *)(this + 0x2a8) + 8 + uVar8 * 0x18)) {
    (**(code **)(*(long *)this + 0xa8))();
  }
  else {
    nod::signal_type<nod::multithread_policy,void()>::operator()
              ((signal_type<nod::multithread_policy,void()> *)(this + 0x30));
  }
  return 1;
}
}
