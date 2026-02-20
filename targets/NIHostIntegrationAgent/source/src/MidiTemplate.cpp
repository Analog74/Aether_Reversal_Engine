#include <ni/controller_editor/MidiTemplate.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2 {

void MidiTemplate::initialize() {
default_assignment dVar1;
  default_assignment dVar2;
  MidiTemplate *pMVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  long lVar6;
  default_assignment *pdVar7;
  default_assignment *pdVar8;
  unsigned long long uVar9;
  long lVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  unsigned long uVar20;
  unsigned char auVar21 [12];
  long local_a8;
  long local_a0;
  byte local_98 [16];
  void *local_88;
  unsigned int local_80;
  unsigned int local_7c;
  default_assignment *local_78;
  default_assignment local_70;
  default_assignment dStack_6f;
  void6 uStack_6e;
  void2 uStack_68;
  void6 uStack_66;
  default_assignment *local_60;
  unsigned long local_58;
  MidiTemplate *local_50;
  void6 uStack_48;
  void2 local_42;
  void6 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100a44490;
  // std code
  *(void2 *)(this + 0xb04) = 0x200;
  local_50 = this;
  auVar21 = cmm::default_assignment::firstButton();
  local_80 = auVar21._8_4_;
  uVar4 = auVar21._0_8_;
  uVar20 = uVar4 >> 8;
  auVar21 = cmm::default_assignment::firstErp();
  local_7c = auVar21._8_4_;
  uVar5 = auVar21._0_8_;
  uVar13 = uVar5 >> 8;
  lVar17 = 0x80;
  lVar10 = 0x1db;
  lVar11 = 0xe3;
  lVar14 = 0xd8;
  lVar6 = 0;
  do {
    lVar19 = 0;
    lVar15 = lVar14;
    lVar18 = lVar17;
    local_a8 = lVar10;
    local_a0 = lVar11;
    do {
      *(unsigned long *)(local_50 + lVar18 + -0x68) =
           ((uVar20 & 0xff) + lVar19 & 0xff) << 8 | uVar4 & 0xffffffffffff0000 | uVar4 & 0xff;
      *(unsigned int *)(local_50 + lVar18 + -0x60) = local_80;
      iVar16 = (int)local_98;
      // std code
      pdVar7 = (default_assignment *)// std code
      local_70 = *pdVar7;
      local_58 = (unsigned long)(byte)local_70;
      dStack_6f = pdVar7[1];
      uStack_66 = (void6)((unsigned long)*(unsigned long long *)(pdVar7 + 8) >> 0x10);
      uStack_6e = (void6)*(unsigned long long *)(pdVar7 + 2);
      uStack_68 = (void2)((unsigned long)*(unsigned long long *)(pdVar7 + 2) >> 0x30);
      local_78 = *(default_assignment **)(pdVar7 + 0x10);
      *(unsigned long long *)pdVar7 = 0;
      *(unsigned long long *)(pdVar7 + 8) = 0;
      *(unsigned long long *)(pdVar7 + 0x10) = 0;
      local_60 = local_78;
      if ((local_98[0] & 1) != 0) {
        delete(local_88);
      }
      if ((local_58 & 1) == 0) {
        uVar12 = local_58 >> 1;
        pdVar7 = &dStack_6f;
      }
      else {
        uVar12 = CONCAT62(uStack_66,uStack_68);
        pdVar7 = local_78;
      }
      _strncpy((char *)(local_50 + local_a8),(char *)pdVar7,uVar12 + 1);
      *(unsigned long *)(local_50 + lVar18 + -8) =
           ((uVar13 & 0xff) + lVar19 & 0xff) << 8 | uVar5 & 0xffffffffffff0000 | uVar5 & 0xff;
      *(unsigned int *)(local_50 + lVar18) = local_7c;
      // std code
      pdVar8 = (default_assignment *)// std code
      dVar1 = *pdVar8;
      dVar2 = pdVar8[1];
      uStack_40 = (void6)((unsigned long)*(unsigned long long *)(pdVar8 + 8) >> 0x10);
      uStack_48 = (void6)*(unsigned long long *)(pdVar8 + 2);
      local_42 = (void2)((unsigned long)*(unsigned long long *)(pdVar8 + 2) >> 0x30);
      pdVar7 = *(default_assignment **)(pdVar8 + 0x10);
      *(unsigned long long *)pdVar8 = 0;
      *(unsigned long long *)(pdVar8 + 8) = 0;
      *(unsigned long long *)(pdVar8 + 0x10) = 0;
      if ((local_58 & 1) != 0) {
        delete(local_78);
      }
      uStack_66 = uStack_40;
      uStack_6e = uStack_48;
      uStack_68 = local_42;
      local_70 = dVar1;
      dStack_6f = dVar2;
      local_60 = pdVar7;
      if ((local_98[0] & 1) != 0) {
        delete(local_88);
      }
      if (((byte)dVar1 & 1) == 0) {
        uVar12 = (unsigned long)((byte)dVar1 >> 1);
        pdVar8 = &dStack_6f;
      }
      else {
        uVar12 = CONCAT62(uStack_66,uStack_68);
        pdVar8 = pdVar7;
      }
      _strncpy((char *)(local_50 + local_a0),(char *)pdVar8,uVar12 + 1);
      local_50[lVar15] = (MidiTemplate)0x1f;
      if (((byte)dVar1 & 1) != 0) {
        delete(pdVar7);
      }
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0xc;
      local_a8 = local_a8 + 0x1f;
      local_a0 = local_a0 + 0x1f;
      lVar15 = lVar15 + 1;
    } while (lVar19 != 8);
    *(void2 *)(local_50 + lVar6 * 699 + 0xe0) = 0;
    local_50[lVar6 * 699 + 0xe2] = SUB81(lVar6,0);
    lVar6 = lVar6 + 1;
    uVar20 = (unsigned long)((int)(uVar20 & 0xff) + 8);
    uVar13 = (unsigned long)((int)(uVar13 & 0xff) + 8);
    lVar17 = lVar17 + 699;
    lVar10 = lVar10 + 699;
    lVar11 = lVar11 + 699;
    lVar14 = lVar14 + 699;
  } while (lVar6 != 4);
  auVar21 = cmm::default_assignment::pitchwheel();
  pMVar3 = local_50;
  *(unsigned char (*) [12])(local_50 + 0xb06) = auVar21;
  auVar21 = cmm::default_assignment::modulationWheel();
  *(unsigned char (*) [12])(pMVar3 + 0xb12) = auVar21;
  cmm::default_assignment::touchstrip(&local_70);
  *(unsigned int *)(pMVar3 + 0xb2e) = local_60._0_4_;
  *(unsigned long *)(pMVar3 + 0xb1e) = CONCAT62(uStack_6e,CONCAT11(dStack_6f,local_70));
  *(unsigned long *)(pMVar3 + 0xb26) = CONCAT62(uStack_66,uStack_68);
  auVar21 = cmm::default_assignment::pedalAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb32) = auVar21;
  auVar21 = cmm::default_assignment::pedalTipAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb4a) = auVar21;
  auVar21 = cmm::default_assignment::pedalRingAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb56) = auVar21;
  auVar21 = cmm::default_assignment::pedalAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb3e) = auVar21;
  auVar21 = cmm::default_assignment::pedalTipAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb62) = auVar21;
  auVar21 = cmm::default_assignment::pedalRingAssignment();
  *(unsigned char (*) [12])(pMVar3 + 0xb6e) = auVar21;
  *(unsigned int *)(pMVar3 + 0xb7a) = 0x1000000;
  *(void2 *)(pMVar3 + 0xb7e) = 0;
  uVar9 = cmm::default_assignment::keyzone();
  *(unsigned long long *)(pMVar3 + 0xb80) = uVar9;
  if (*(long *)PTR____stack_chk_guard_100a44490 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
