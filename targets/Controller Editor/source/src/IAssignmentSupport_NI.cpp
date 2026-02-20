#include <ni/controller_editor/IAssignmentSupport_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IAssignmentSupport {

void IAssignmentSupport(1 param_1, NI::Model* {
unsigned long uVar1;
  unsigned long long *puVar2;
  unsigned int *puVar3;
  array<NI::NHL2::Assignment,3ul> *paVar4;
  vector<// std code
  *pvVar5;
  void *pvVar6;
  long lVar7;
  unsigned long uVar8;
  vector<// std code
  *pvVar9;
  vector<// std code
  *this_00;
  array<NI::NHL2::Assignment,3ul> *paVar10;
  long lVar11;
  size_t sVar12;
  array<NI::NHL2::Assignment,3ul> *local_58;
  array<NI::NHL2::Assignment,3ul> *paStack_50;
  unsigned long long local_48;
  vector<// std code
  *local_40;
  IAssignmentSupport *local_38;
  
  *(void ***)this = &PTR__IAsynchronousEventNotifier_101ab8128;
  *(Model **)(this + 8) = param_1;
  *(unsigned long long *)(this + 0x10) = 0;
  IEditingChangeNotifier::IEditingChangeNotifier((IEditingChangeNotifier *)(this + 0x20),param_1);
  *(void ***)this = &PTR__IAssignmentSupport_101ab81b0;
  *(void ***)(this + 0x20) = &PTR__IAssignmentSupport_101ab82b0;
  this_00 = (vector<// std code
             *)(this + 0x2c0);
  *(unsigned long long *)(this + 0x2e0) = 0;
  *(unsigned long long *)(this + 0x2e8) = 0;
  *(unsigned long long *)(this + 0x290) = 0;
  *(unsigned long long *)(this + 0x298) = 0;
  *(unsigned long long *)(this + 0x2a0) = 0;
  *(unsigned long long *)(this + 0x2a8) = 0;
  *(unsigned long long *)(this + 0x2b0) = 0;
  *(unsigned long long *)(this + 0x2b8) = 0;
  *(unsigned long long *)(this + 0x2c0) = 0;
  *(unsigned long long *)(this + 0x2c8) = 0;
  *(unsigned long long *)(this + 0x2d0) = 0;
  *(IAssignmentSupport **)(this + 0x2d8) = this + 0x2e0;
  local_38 = this + 0x2f0;
  *(IAssignmentSupport **)(this + 0x2f0) = local_38;
  *(IAssignmentSupport **)(this + 0x2f8) = local_38;
  *(unsigned int *)(this + 0x33c) = 0;
  *(unsigned long long *)(this + 0x300) = 0;
  *(unsigned long long *)(this + 0x308) = 0;
  *(unsigned long long *)(this + 0x310) = 0;
  *(unsigned long long *)(this + 0x318) = 0;
  *(unsigned long long *)(this + 800) = 0;
  *(unsigned long long *)(this + 0x328) = 0;
  *(unsigned long long *)(this + 0x329) = 0;
  *(unsigned long long *)(this + 0x331) = 0;
  local_58 = (array<NI::NHL2::Assignment,3ul> *)0x0;
  paStack_50 = (array<NI::NHL2::Assignment,3ul> *)0x0;
  local_48 = 0;
  // std code
  vector<// std code
  ::push_back((vector<// std code
               *)(this + 0x2a8),(vector *)&local_58);
  paVar4 = local_58;
  paVar10 = paStack_50;
  if (local_58 != (array<NI::NHL2::Assignment,3ul> *)0x0) {
    while (paVar10 != paVar4) {
      // std code
      paVar10 = paVar10 + -0x1f8;
    }
    paStack_50 = paVar4;
    delete(paVar4);
  }
  local_58 = (array<NI::NHL2::Assignment,3ul> *)0x0;
  paStack_50 = (array<NI::NHL2::Assignment,3ul> *)0x0;
  local_48 = 0;
  // std code
  vector<// std code
  ::push_back(this_00,(vector *)&local_58);
  paVar10 = local_58;
  pvVar9 = (vector<// std code
            *)paStack_50;
  if (local_58 != (array<NI::NHL2::Assignment,3ul> *)0x0) {
    while (pvVar9 != (vector<// std code
                      *)paVar10) {
      // std code
                ((array<NI::NHL2::Assignment,3ul> *)(pvVar9 + -0x1f8));
      pvVar9 = pvVar9 + -0x1f8;
    }
    paStack_50 = paVar10;
    delete(paVar10);
    this_00 = (vector<// std code
               *)paVar10;
  }
  puVar2 = *(unsigned long long **)(this + 0x298);
  if (puVar2 < *(unsigned long long **)(this + 0x2a0)) {
    *puVar2 = 0xffffffffffffffff;
    *(unsigned long long **)(this + 0x298) = puVar2 + 1;
  }
  else {
    pvVar9 = *(vector<// std code
               **)(this + 0x290);
    sVar12 = (long)puVar2 - (long)pvVar9;
    lVar11 = (long)sVar12 >> 3;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    lVar7 = (long)*(unsigned long long **)(this + 0x2a0) - (long)pvVar9;
    uVar8 = lVar7 >> 2;
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
    }
    if (0xffffffffffffffe < (unsigned long)(lVar7 >> 3)) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar5 = (vector<// std code
                *)0x0;
    }
    else {
      local_40 = pvVar9;
      if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      this_00 = (vector<// std code
                 *)(uVar8 * 8);
      pvVar5 = (vector<// std code
                *)new char[(unsigned long]this_00);
      pvVar9 = local_40;
    }
    *(unsigned long long *)(pvVar5 + lVar11 * 8) = 0xffffffffffffffff;
    if (0 < (long)sVar12) {
      this_00 = pvVar5;
      memcpy(pvVar5,pvVar9,sVar12);
    }
    *(vector<// std code
      **)(this + 0x290) = pvVar5;
    *(vector<// std code
      **)(this + 0x298) = pvVar5 + lVar11 * 8 + 8;
    *(vector<// std code
      **)(this + 0x2a0) = pvVar5 + uVar8 * 8;
    if (pvVar9 != (vector<// std code
                   *)0x0) {
      delete(pvVar9);
      this_00 = pvVar9;
    }
  }
  puVar3 = *(unsigned int **)(this + 0x328);
  if (puVar3 < *(unsigned int **)(this + 0x330)) {
    *puVar3 = 0xffffffff;
    *(unsigned int **)(this + 0x328) = puVar3 + 1;
  }
  else {
    pvVar9 = *(vector<// std code
               **)(this + 800);
    sVar12 = (long)puVar3 - (long)pvVar9;
    lVar11 = (long)sVar12 >> 2;
    uVar1 = lVar11 + 1;
    if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    lVar7 = (long)*(unsigned int **)(this + 0x330) - (long)pvVar9;
    uVar8 = lVar7 >> 1;
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
    }
    if (0x1ffffffffffffffe < (unsigned long)(lVar7 >> 2)) {
      uVar8 = 0x3fffffffffffffff;
    }
    if (uVar8 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      local_40 = pvVar9;
      if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      pvVar6 = new char[uVar8 * 4];
      pvVar9 = local_40;
    }
    *(unsigned int *)((long)pvVar6 + lVar11 * 4) = 0xffffffff;
    if (0 < (long)sVar12) {
      memcpy(pvVar6,pvVar9,sVar12);
    }
    *(void **)(this + 800) = pvVar6;
    *(long *)(this + 0x328) = (long)pvVar6 + lVar11 * 4 + 4;
    *(void **)(this + 0x330) = (void *)((long)pvVar6 + uVar8 * 4);
    if (pvVar9 != (vector<// std code
                   *)0x0) {
      delete(pvVar9);
      return;
    }
  }
  return;
}
}
