#include <ni/controller_editor/MidiControl.hpp>
namespace NI::dawcontrol::hw::komplete_kontrol::mk2::pages {

void MidiControl::onPageFocus(bool param_1) {
}

void MidiControl::setUpParameters() {
long *plVar1;
  Scene *pSVar2;
  long lVar3;
  size_t sVar4;
  unsigned long long uVar5;
  void *pvVar6;
  unsigned long long uVar7;
  long lVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  unsigned long uVar12;
  short *psVar13;
  Parameter local_1f0 [8];
  Parameter local_1e8 [8];
  
  void *local_1d0;
  Parameter local_1c8 [8];
  
  void *local_1b0;
  unsigned long local_1a8;
  unsigned long long uStack_1a0;
  void *local_198;
  unsigned long local_188;
  unsigned long long uStack_180;
  void *local_178;
  unsigned long local_168;
  unsigned long long uStack_160;
  void *local_158;
  byte local_148;
  unsigned long long local_147;
  unsigned int local_13f;
  unsigned char local_13b;
  void *local_138;
  short *local_130;
  MidiControl *local_128;
  unsigned long long *local_120;
  unsigned long long local_118;
  size_t sStack_110;
  void *local_108;
  unsigned long long local_f8;
  size_t sStack_f0;
  void *local_e8;
  unsigned long local_e0;
  short local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  unsigned long long local_c8;
  void6 uStack_c0;
  void2 uStack_ba;
  void6 uStack_b8;
  unsigned long long uStack_b2;
  unsigned char local_aa;
  long *local_98;
  byte local_88;
  void *local_78;
  byte local_70;
  void *local_60;
  unsigned long long local_58;
  void6 uStack_50;
  void2 local_4a;
  void6 uStack_48;
  unsigned long long uStack_42;
  unsigned char local_3a;
  long local_38;
  
  uVar7 = page::midiControl;
  local_38 = *(long *)PTR____stack_chk_guard_100a44490;
  pSVar2 = *(Scene **)(this + 0x20);
  if (pSVar2 != (Scene *)0x0) {
    ni::symbol::symbol((symbol *)&local_c8,(string *)&parameter::infobar_left_text);
    uVar5 = local_c8;
    // std code
    ni::pic::Scene::addOrChangeString(pSVar2,uVar7,uVar5,local_1e0);
    if (((byte)local_1e0[0] & 1) != 0) {
      delete(local_1d0);
    }
    updateSemitoneShift(this);
    lVar3 = *(long *)(this + 0x38);
    lVar8 = (unsigned long)*(byte *)(lVar3 + 0xb04) * 699;
    psVar13 = (short *)(lVar8 + lVar3 + 0x80);
    local_120 = (unsigned long long *)(lVar3 + lVar8 + 0xe3);
    local_e0 = 0;
    local_128 = this;
    do {
      local_cc = psVar13[-0x32];
      local_ca = psVar13[-0x30];
      local_130 = psVar13;
      if ((char)psVar13[-0x34] == '\0') {
        local_f8 = 0;
        sStack_f0 = 0;
        local_e8 = (void *)0x0;
      }
      else {
        local_c8 = local_120[0x1f];
        uStack_b2 = *(unsigned long long *)((long)local_120 + 0x10e);
        uStack_b8 = (void6)((unsigned long)*(unsigned long long *)((long)local_120 + 0x106) >> 0x10);
        uStack_c0 = (void6)local_120[0x20];
        uStack_ba = (void2)((unsigned long)local_120[0x20] >> 0x30);
        local_aa = 0;
        sVar4 = strlen((char *)&local_c8);
        if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (sVar4 < 0x17) {
          local_f8 = 0(local_f8._1_7_,(char)sVar4 * '\x02');
          pvVar6 = (void *)((long)&local_f8 + 1);
          if (sVar4 != 0) goto LAB_100058be6;
        }
        else {
          uVar12 = sVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar6 = new(uVar12);
          local_f8 = uVar12 | 1;
          sStack_f0 = sVar4;
          local_e8 = pvVar6;
LAB_100058be6:
          memcpy(pvVar6,&local_c8,sVar4);
        }
        *(unsigned char *)((long)pvVar6 + sVar4) = 0;
        this = local_128;
      }
      GP::StringUtil::toUpper((string *)&local_f8);
      uVar7 = *(unsigned long long *)(this + 0x20);
      uVar5 = gui::ParameterHelper::screenButtonId(local_e0);
      // std code
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = (void *)0x0;
      ni::pic::Parameter::Parameter<ni::symbol,int>
                ((Parameter *)&local_c8,uVar5,0,0x7f,local_ca != local_cc,local_1c0,&local_1a8);
      ni::pic::Scene::addParameter(local_1f0,SUB81(uVar7,0));
      // std code
      if ((local_70 & 1) != 0) {
        delete(local_60);
      }
      if ((local_88 & 1) != 0) {
        delete(local_78);
      }
      if (local_98 != (long *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
          // std code
        }
      }
      if ((local_1a8 & 1) != 0) {
        delete(local_198);
      }
      if (((byte)local_1c0[0] & 1) != 0) {
        delete(local_1b0);
      }
      uVar7 = *(unsigned long long *)(this + 0x20);
      uVar5 = gui::ParameterHelper::screenEncoderId(local_e0);
      sVar11 = local_130[-2];
      sVar9 = local_130[-1];
      sVar10 = *local_130;
      if ((char)local_130[-4] == '\0') {
        local_118 = 0;
        sStack_110 = 0;
        local_108 = (void *)0x0;
      }
      else {
        local_58 = *local_120;
        uStack_42 = *(unsigned long long *)((long)local_120 + 0x16);
        uStack_48 = (void6)((unsigned long)*(unsigned long long *)((long)local_120 + 0xe) >> 0x10);
        uStack_50 = (void6)local_120[1];
        local_4a = (void2)((unsigned long)local_120[1] >> 0x30);
        local_3a = 0;
        local_d2 = sVar10;
        sVar4 = strlen((char *)&local_58);
        if (0xffffffffffffffef < sVar4) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        local_d0 = sVar9;
        if (sVar4 < 0x17) {
          local_118 = 0(local_118._1_7_,(char)sVar4 * '\x02');
          pvVar6 = (void *)((long)&local_118 + 1);
          if (sVar4 != 0) goto LAB_100058e1f;
        }
        else {
          uVar12 = sVar4 + 0x10 & 0xfffffffffffffff0;
          local_ce = sVar11;
          pvVar6 = new(uVar12);
          local_118 = uVar12 | 1;
          sVar11 = local_ce;
          sStack_110 = sVar4;
          local_108 = pvVar6;
LAB_100058e1f:
          memcpy(pvVar6,&local_58,sVar4);
        }
        *(unsigned char *)((long)pvVar6 + sVar4) = 0;
        sVar9 = local_d0;
        sVar10 = local_d2;
      }
      local_188 = 0;
      uStack_180 = 0;
      local_178 = (void *)0x0;
      ni::pic::Parameter::Parameter<ni::symbol,short>
                ((Parameter *)&local_c8,uVar5,(int)sVar11,(int)sVar9,(int)sVar10,&local_118,
                 &local_188);
      ni::pic::Scene::addParameter(local_1e8,SUB81(uVar7,0));
      uVar12 = local_e0;
      this = local_128;
      psVar13 = local_130;
      // std code
      if ((local_70 & 1) != 0) {
        delete(local_60);
      }
      if ((local_88 & 1) != 0) {
        delete(local_78);
      }
      if (local_98 != (long *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
          // std code
        }
      }
      if ((local_188 & 1) != 0) {
        delete(local_178);
      }
      if ((local_118 & 1) != 0) {
        delete(local_108);
      }
      uVar7 = gui::ParameterHelper::screenButtonId(uVar12);
      updateParameterValue(this,uVar7,local_ca != local_cc);
      uVar7 = gui::ParameterHelper::screenEncoderId(uVar12);
      updateParameterValue(this,uVar7,(long)*psVar13);
      if ((local_f8 & 1) != 0) {
        delete(local_e8);
      }
      local_e0 = uVar12 + 1;
      psVar13 = psVar13 + 6;
      local_120 = (unsigned long long *)((long)local_120 + 0x1f);
    } while (local_e0 != 8);
    uVar7 = *(unsigned long long *)(this + 0x20);
    ni::symbol::symbol((symbol *)&local_58,(string *)&parameter::screen_encoder_page);
    local_148 = 0x18;
    local_147 = 0x507265646f636e45;
    local_13f = 0x73656761;
    local_13b = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = (void *)0x0;
    ni::pic::Parameter::Parameter<ni::symbol,int>
              ((Parameter *)&local_c8,local_58,0,*(unsigned char *)(*(long *)(this + 0x38) + 0xb05),
               *(unsigned char *)(*(long *)(this + 0x38) + 0xb04),&local_148,&local_168);
    ni::pic::Scene::addParameter(local_1c8,SUB81(uVar7,0));
    // std code
    if ((local_70 & 1) != 0) {
      delete(local_60);
    }
    if ((local_88 & 1) != 0) {
      delete(local_78);
    }
    if (local_98 != (long *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        // std code
      }
    }
    if ((local_168 & 1) != 0) {
      delete(local_158);
    }
    if ((local_148 & 1) != 0) {
      delete(local_138);
    }
    ni::symbol::symbol((symbol *)&local_c8,(string *)&parameter::screen_encoder_page);
    updateParameterValue(this,local_c8,*(unsigned char *)(*(long *)(this + 0x38) + 0xb04));
  }
  if (*(long *)PTR____stack_chk_guard_100a44490 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

void MidiControl::updateLEDs() {
long *plVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  plVar1 = *(long **)(this + 8);
  bVar6 = *(byte *)(*(long *)(this + 0x38) + 0xb04);
  bVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1,0x17);
  if ((unsigned long)bVar6 == 0) {
    (**(code **)(*plVar1 + 0x80))(plVar1,0x20);
  }
  else {
    (**(code **)(*plVar1 + 0x98))(plVar1,0x20,(uint)bVar4 * 2,0x1f);
  }
  plVar1 = *(long **)(this + 8);
  bVar4 = *(byte *)(*(long *)(this + 0x38) + 0xb05);
  bVar5 = (**(code **)(*plVar1 + 0xa8))(plVar1,0x15);
  if ((unsigned long)bVar6 + 1 < (unsigned long)bVar4) {
    (**(code **)(*plVar1 + 0x98))(plVar1,0x21,(uint)bVar5 * 2,0x1f);
  }
  else {
    (**(code **)(*plVar1 + 0x80))(plVar1,0x21);
  }
  plVar1 = *(long **)(this + 8);
  lVar2 = *(long *)(*(long *)(*(long *)(this + 0x30) + 0x88) + 0x2808);
  lVar3 = *(long *)(*(long *)(*(long *)(this + 0x30) + 0x88) + 0x2800);
  bVar6 = (**(code **)(*plVar1 + 0xa8))(plVar1,0x14);
  if ((unsigned long)((lVar2 - lVar3 >> 4) * -0x79435e50d79435e5) < 2) {
    (**(code **)(*plVar1 + 0x80))(plVar1,0x16);
  }
  else {
    (**(code **)(*plVar1 + 0x98))(plVar1,0x16,(uint)bVar6 * 2,0x1f);
  }
  lVar2 = *(long *)(*(long *)(*(long *)(this + 0x30) + 0x88) + 0x2808);
  lVar3 = *(long *)(*(long *)(*(long *)(this + 0x30) + 0x88) + 0x2800);
  plVar1 = *(long **)(this + 8);
  bVar6 = (**(code **)(*plVar1 + 0xa8))(plVar1,0x16);
  if (1 < (unsigned long)((lVar2 - lVar3 >> 4) * -0x79435e50d79435e5)) {
                    /* WARNING: Could not recover jumptable at 0x00010005a0e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,0x1b,(uint)bVar6 * 2,0x1f,*(code **)(*plVar1 + 0x98));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010005a0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80))(plVar1,0x1b);
  return;
}
}
