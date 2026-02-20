#include <ni/controller_editor/processStringSingleSelector_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleParser2 {

void processStringSingleSelector(1 param_1, std::string const& {
long *plVar1;
  unsigned long long *puVar2;
  long lVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  char cVar9;
  StyleParser2 SVar10;
  unsigned long *puVar11;
  unsigned long uVar12;
  code *pcVar13;
  byte *pbVar14;
  void *pvVar15;
  unsigned char auVar16 [16];
  void *local_1300 [2];
  void *local_12f0;
  unsigned long local_12e8 [2];
  char *local_12d8;
  unsigned long long local_12c8;
  unsigned long uStack_12c0;
  void *local_12b8;
  byte local_12b0;
  void6 uStack_12af;
  unsigned char uStack_12a9;
  unsigned char uStack_12a8;
  void6 uStack_12a7;
  unsigned char local_12a1;
  void *local_12a0;
  void *local_1298;
  unsigned char local_1290 [8];
  long local_1288 [587];
  long local_30;
  
  local_30 = 0x1004cea95;
  auVar16 = ____chkstk_darwin();
  pbVar14 = auVar16._8_8_;
  lVar3 = -auVar16._0_8_;
  local_30 = *(long *)PTR____stack_chk_guard_101ab4610;
  *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ceab9;
  local_12d8 = (char *)new char[0x30];
  local_12e8[0] = 0x31;
  local_12e8[1] = 0x2b;
  builtin_strncpy(local_12d8,"(StyleParser2::processStringSingleSelector)",0x2c);
  *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ceb08;
  StyleGrammar::StyleGrammar((StyleGrammar *)local_1288,param_1,local_12e8);
  if ((local_12e8[0] & 1) != 0) {
    *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ceb1d;
    delete(local_12d8);
  }
  local_12b0 = 0x1c;
  uStack_12af = 0x7564207b200a;
  uStack_12a9 = 0x6d;
  uStack_12a8 = 0x6d;
  uStack_12a7 = 0x7d3b30203a79;
  local_12a1 = 0;
  if ((*pbVar14 & 1) == 0) {
    pbVar14 = pbVar14 + 1;
  }
  else {
    pbVar14 = *(byte **)(pbVar14 + 0x10);
  }
  *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ceb77;
  puVar11 = (unsigned long *)// std code
  local_12b8 = (void *)puVar11[2];
  local_12c8 = *puVar11;
  uStack_12c0 = puVar11[1];
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  if ((local_12b0 & 1) != 0) {
    *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004cebaf;
    delete(local_12a0);
  }
  uVar12 = uStack_12c0;
  local_1298 = local_12b8;
  if ((local_12c8 & 1) == 0) {
    uVar12 = local_12c8 >> 1 & 0x7f;
    local_1298 = (void *)((long)&local_12c8 + 1);
  }
  pvVar15 = (void *)((long)local_1298 + uVar12);
  uVar12 = *(unsigned long *)(local_1288[0] + 0x20);
  pcVar13 = // boost code
            function4<bool,// std code
            ::dummy::nonnull;
  if (uVar12 == 0) {
    pcVar13 = (code *)0x0;
  }
  local_12f0 = pvVar15;
  if (pcVar13 != (code *)0x0) {
    local_12b0 = (byte)local_1290;
    uStack_12af = (void6)((unsigned long)local_1290 >> 8);
    uStack_12a9 = (unsigned char)((unsigned long)local_1290 >> 0x38);
    if (uVar12 == 0) {
      *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ced2b;
      // std code
      ;
      local_1300[0] = (char*)PTR_vtable_101ab44e8 + 0x10;
      *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ced49;
      // boost code
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    pcVar13 = *(code **)((uVar12 & 0xfffffffffffffffe) + 8);
    *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004cec4c;
    cVar9 = (*pcVar13)(local_1288[0] + 0x28,&local_1298,&local_12f0,&local_12b0,
                       &// boost code
    if ((((cVar9 != '\0') && (local_1298 == pvVar15)) &&
        (plVar1 = *(long **)(param_1 + 8), *(long *)(param_1 + 0x10) - (long)plVar1 == 0x38)) &&
       (puVar2 = (unsigned long long *)*plVar1, plVar1[1] - (long)puVar2 == 0x78)) {
      *(unsigned long long *)(this + 0x10) = puVar2[2];
      uVar4 = puVar2[1];
      *(unsigned long long *)this = *puVar2;
      *(unsigned long long *)(this + 8) = uVar4;
      *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004cec99;
      AttibuteSelector::AttibuteSelector
                ((AttibuteSelector *)(this + 0x18),(AttibuteSelector *)(puVar2 + 3));
      *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ceca6;
      // std code
      list<NI::NWL::Selector::tParentSelector,// std code
      list((list<NI::NWL::Selector::tParentSelector,// std code
            *)(this + 0x30),(list *)(puVar2 + 6));
      uVar4 = puVar2[9];
      uVar5 = puVar2[10];
      uVar6 = puVar2[0xb];
      uVar7 = puVar2[0xc];
      uVar8 = *(unsigned long long *)((long)puVar2 + 0x6c);
      *(unsigned long long *)(this + 100) = *(unsigned long long *)((long)puVar2 + 100);
      *(unsigned long long *)(this + 0x6c) = uVar8;
      *(unsigned long long *)(this + 0x58) = uVar6;
      *(unsigned long long *)(this + 0x60) = uVar7;
      *(unsigned long long *)(this + 0x48) = uVar4;
      *(unsigned long long *)(this + 0x50) = uVar5;
      SVar10 = (StyleParser2)0x1;
      return;
    }
  }
  *this = (StyleParser2)0x0;
  SVar10 = (StyleParser2)0x0;
  this[0x78] = SVar10;
  if ((local_12c8 & 1) != 0) {
    *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004cece4;
    delete(local_12b8);
  }
  *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004cecf0;
  StyleGrammar::~StyleGrammar((StyleGrammar *)local_1288);
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_30) {
                    /* WARNING: Subroutine does not return */
    *(unsigned long long *)((long)&local_30 + lVar3) = 0x1004ced18;
    ___stack_chk_fail();
  }
  return this;
}
}
