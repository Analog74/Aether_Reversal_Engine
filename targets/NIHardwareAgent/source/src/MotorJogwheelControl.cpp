#include <ni/controller_editor/MotorJogwheelControl.hpp>
namespace NI::NHL2 {

void MotorJogwheelControl::getJogwheelTension() const {
return *(unsigned int *)(this + 0x202c);
}

void MotorJogwheelControl::getState(unsigned char const*) {
char *pcVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  int iVar5;
  unsigned long uVar6;
  int iVar7;
  unsigned long uVar8;
  unsigned long uVar9;
  char *pcVar10;
  MotorJogwheelControl *pMVar11;
  float fVar12;
  float fVar13;
  ReportCommand local_68;
  MotorJogwheelControl MStack_67;
  unsigned char uStack_66;
  unsigned char uStack_65;
  uint uStack_64;
  void2 uStack_60;
  void2 uStack_5e;
  unsigned int uStack_5c;
  void2 uStack_58;
  void2 local_56;
  void6 uStack_54;
  void2 uStack_4e;
  unsigned int uStack_4c;
  void2 uStack_48;
  void6 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  iVar7 = 0;
  do {
    pMVar11 = this + 0x2098;
    puVar4 = param_1 + 0x1c;
    if (iVar7 == 0) {
      pMVar11 = this + 0x2050;
      puVar4 = param_1;
    }
    *(unsigned long long *)(pMVar11 + 0x28) = *(unsigned long long *)(pMVar11 + 0x10);
    *(unsigned long long *)(pMVar11 + 0x18) = *(unsigned long long *)pMVar11;
    *(unsigned long long *)(pMVar11 + 0x20) = *(unsigned long long *)(pMVar11 + 8);
    bVar2 = puVar4[3];
    *(uint *)(pMVar11 + 0x30) = (uint)bVar2;
    if (bVar2 == 0) {
      uStack_65 = 0;
      uStack_64 = 0;
      uStack_60 = 0;
      uStack_5e = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      local_56 = 0;
      uStack_54 = 0;
      uStack_4e = 0;
      MStack_67 = (MotorJogwheelControl)0x1;
      uStack_66 = 3;
      local_68 = SUB41(iVar7,0);
      sendCommandReport(this,&local_68);
      if (*(int *)(pMVar11 + 0x30) < 4) {
        local_56 = 0;
        uStack_54 = 0;
        uStack_4e = 0;
        uStack_4c = 0;
        uStack_66 = 0;
        uStack_65 = 0;
        uStack_60 = 0;
        uStack_5e = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_48 = 0;
        uStack_46 = 0;
        MStack_67 = pMVar11[0x34];
        uStack_64 = (uint)(byte)pMVar11[0x38];
        local_68 = SUB41(iVar7,0);
        sendLEDControlReport(this,(ReportLEDControl *)&local_68);
      }
    }
    iVar5 = *(int *)(puVar4 + 7);
    *(int *)pMVar11 = iVar5;
    uVar3 = *(ushort *)(puVar4 + 0xf);
    *(uint *)(pMVar11 + 4) = (uint)uVar3;
    fVar12 = (float)uVar3 / (float)*(uint *)(this + 0x2044);
    if (1.0 <= fVar12) {
      do {
        fVar12 = fVar12 + -1.0;
      } while (1.0 <= fVar12);
      for (; fVar12 < 0.0; fVar12 = fVar12 + 1.0) {
      }
    }
    *(float *)(pMVar11 + 8) = fVar12;
    for (fVar12 = fVar12 - *(float *)(pMVar11 + 0x20); 0.5 <= fVar12; fVar12 = fVar12 + -1.0) {
    }
    for (; fVar12 < -0.5; fVar12 = fVar12 + 1.0) {
    }
    fVar13 = (float)(uint)(iVar5 - *(int *)(pMVar11 + 0x18)) * *(float *)(this + 0x204c);
    if (fVar13 <= 0.0) {
      if (Logging::detail::__reportLevelAsUInt < 2) {
        uVar6 = 0;
        pcVar10 = Logging::allowedCategories;
        if (0 == 0) {
          uVar6 = 0;
        }
        else {
          do {
            uVar8 = uVar6 >> 1;
            iVar5 = // std code
            uVar9 = uVar8;
            if (iVar5 < 0) {
              uVar9 = ~uVar8 + uVar6;
              pcVar10 = pcVar10 + uVar8 * 0x18 + 0x18;
            }
            uVar6 = uVar9;
          } while (uVar9 != 0);
          pcVar1 = Logging::allowedCategories + 0 * 0x18;
          uVar6 = 0;
          if ((pcVar10 != pcVar1) &&
             (iVar5 = // std code
            pcVar10 = pcVar1;
          }
        }
        if (pcVar10 != Logging::allowedCategories + uVar6 * 0x18) {
          Logging::detail::__trace__msg
                    (SUB84((double)fVar13,0),1,
                     "%s: Erroneous time delta detected when processing Jogwheel haptics: %f\n",
                     "Debug");
        }
      }
      *(int *)(pMVar11 + 0xc) = *(int *)(pMVar11 + 0x24);
      fVar13 = 0.0;
    }
    else {
      *(float *)(pMVar11 + 0xc) = fVar12 / fVar13;
      fVar13 = (fVar12 / fVar13 - *(float *)(pMVar11 + 0x24)) / fVar13;
    }
    *(float *)(pMVar11 + 0x10) = fVar13;
    pMVar11[0x14] = (MotorJogwheelControl)(puVar4[4] & 1);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 2);
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void MotorJogwheelControl::initParameters(float param_1) {
}

MotorJogwheelControl::MotorJogwheelControl(float) [clone .cold.2] {
if (this != (MotorJogwheelControl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010038b01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x28))();
    
  }
  
}

void MotorJogwheelControl::processLedRing(unsigned int, float) {
MotorJogwheelControl *pMVar1;
  long lVar2;
  MotorJogwheelControl *pMVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  pMVar1 = this + 0x60;
  pMVar3 = this + 0x2050;
  if (param_1 != 0) {
    pMVar3 = this + 0x2098;
    pMVar1 = this + 0x1050;
  }
  bVar4 = true;
  if (*(int *)(pMVar1 + 0x8d0) != 1) {
    bVar4 = *(int *)(pMVar1 + 0xfec) - 1U < 2;
  }
  if (((*(int *)(pMVar1 + 0x48) != 1) || (pMVar1[0x44] == (MotorJogwheelControl)0x0)) ||
     ((bool)(bVar4 | pMVar3[0x14] != (MotorJogwheelControl)0x0))) {
    fVar5 = (float)*(uint *)(this + 0x2044);
    for (fVar6 = (float)(int)((uint)*(ushort *)(pMVar3 + 0x3a) +
                             (*(int *)(pMVar3 + 4) - *(int *)(pMVar3 + 0x1c))); fVar5 <= fVar6;
        fVar6 = fVar6 - fVar5) {
    }
    for (; fVar6 < 0.0; fVar6 = fVar6 + fVar5) {
    }
  }
  else {
    fVar5 = (float)*(uint *)(this + 0x2044);
    for (fVar6 = (float)*(ushort *)(pMVar3 + 0x3a) +
                 param_2 * 0.016666668 * *(float *)(this + 0x2040) * fVar5; fVar5 <= fVar6;
        fVar6 = fVar6 - fVar5) {
    }
    for (; fVar6 < 0.0; fVar6 = fVar6 + fVar5) {
    }
  }
  *(short *)(pMVar3 + 0x3a) = (short)(int)fVar6;
  lVar2 = // std code
  if (19999 < lVar2 - *(long *)(pMVar3 + 0x40)) {
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_58 = (unsigned long)CONCAT14(pMVar3[0x38],
                               CONCAT22(*(void2 *)(pMVar3 + 0x3a),
                                        CONCAT11(pMVar3[0x34],(char)param_1)));
    sendLEDControlReport(this,(ReportLEDControl *)&local_58);
    *(long *)(pMVar3 + 0x40) = lVar2;
  }
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

void MotorJogwheelControl::setJogwheelAdjustmentOn(unsigned int, bool) {
MotorJogwheelControl *pMVar1;
  uint uVar2;
  
  pMVar1 = this + 0x60;
  if ((*(int *)(this + 0x20e0) == 0) || (pMVar1 = this + 0x1050, -1 < *(int *)(this + 0x20e0))) {
    pMVar1[0xfe8] = (MotorJogwheelControl)0x0;
  }
  *(uint *)(this + 0x20e0) = param_1;
  uVar2 = 0xffffffff;
  if (param_2 param_1) {
  }
  *(uint *)(this + 0x20e0) = uVar2;
  return;
}

void MotorJogwheelControl::setJogwheelDefaultSpeedRPM(unsigned int, float) {
MotorJogwheelControl *pMVar1;
  float fVar2;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(float *)(pMVar1 + 0x600) = param_2 * 0.016666668;
  fVar2 = param_2 * 0.016666668 * 60.0;
  *(float *)(pMVar1 + 0x654) = fVar2;
  if ((fVar2 == 0.0) && (!NAN(fVar2))) {
    *(unsigned int *)(pMVar1 + 0x760) = 0x3f800000;
    return;
  }
  *(float *)(pMVar1 + 0x760) = 33.333332 / fVar2;
  return;
}

void MotorJogwheelControl::setJogwheelHapticTicks(unsigned int, unsigned int) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(uint *)(pMVar1 + 0xca4) = param_2;
  return;
}

void MotorJogwheelControl::setJogwheelLedColor(unsigned int, unsigned int) {
MotorJogwheelControl *pMVar1;
  ReportLEDControl local_38;
  MotorJogwheelControl local_37;
  long local_36;
  unsigned long long uStack_2e;
  unsigned long long local_26;
  void6 uStack_1e;
  void2 uStack_18;
  void6 uStack_16;
  long local_10;
  
  pMVar1 = this + 0x2098;
  if (param_1 == 0) {
    pMVar1 = this + 0x2050;
  }
  local_10 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  pMVar1[0x38] = SUB41(param_2,0);
  if (*(int *)(pMVar1 + 0x30) < 4) {
    local_26 = 0;
    uStack_1e = 0;
    uStack_2e = 0;
    uStack_18 = 0;
    uStack_16 = 0;
    local_38 = SUB41(param_1,0);
    local_37 = pMVar1[0x34];
    local_36 = (unsigned long)(byte)SUB41(param_2,0) << 0x10;
    sendLEDControlReport(this,&local_38);
  }
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

void MotorJogwheelControl::setJogwheelMotorOn(unsigned int, bool) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  if (pMVar1[0x44] != (MotorJogwheelControl)param_2) {
    pMVar1[0x44] = (MotorJogwheelControl)param_2;
    pMVar1[0xc58] = (MotorJogwheelControl)param_2;
    *(unsigned int *)(pMVar1 + 0xfec) = 0;
    pMVar1[0x5f8] = (MotorJogwheelControl)param_2;
    *(unsigned int *)(pMVar1 + 0x8d0) = 0;
  }
  return;
}

void MotorJogwheelControl::setJogwheelSpeedRPM(unsigned int, float) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(float *)(pMVar1 + 0x604) = param_2 * 0.016666668;
  return;
}

void MotorJogwheelControl::setJogwheelTimelineActive(unsigned int, bool) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  pMVar1[0xee1] = (MotorJogwheelControl)param_2;
  pMVar1[0x771] = (MotorJogwheelControl)param_2;
  return;
}

void MotorJogwheelControl::setJogwheelTimelinePlaying(unsigned int, bool) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  pMVar1[0xdcc] = (MotorJogwheelControl)param_2;
  pMVar1[0x65c] = (MotorJogwheelControl)param_2;
  return;
}

void MotorJogwheelControl::setJogwheelTimelinePosition(unsigned int, float) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(float *)(pMVar1 + 0xdd0) = param_2;
  if (0.05 < ABS(*(float *)(pMVar1 + 0xdf0) - param_2)) {
    *(float *)(pMVar1 + 0xdf0) = param_2;
  }
  *(float *)(pMVar1 + 0x660) = param_2;
  if (0.05 < ABS(*(float *)(pMVar1 + 0x680) - param_2)) {
    *(float *)(pMVar1 + 0x680) = param_2;
  }
  return;
}

void MotorJogwheelControl::setJogwheelTimelineSyncFactor(unsigned int, float) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(float *)(pMVar1 + 0x658) = param_2;
  return;
}

void MotorJogwheelControl::triggerJogwheelTurntableMotorOffEmulation(unsigned int) {
MotorJogwheelControl *pMVar1;
  
  pMVar1 = this + 0x60;
  if (param_1 != 0) {
    pMVar1 = this + 0x1050;
  }
  *(unsigned int *)(pMVar1 + 0x8d0) = 2;
  *(unsigned int *)(pMVar1 + 0x86c) = *(unsigned int *)(pMVar1 + 0x604);
  return;
}

MotorJogwheelControl::~MotorJogwheelControl() {
MotorJogwheelControl *pMVar1;
  void *pvVar2;
  
  *(void ***)(this + 0x1050) = &PTR_processImpl_1009e8198;
  JogRenderer::~JogRenderer((JogRenderer *)(this + 0x1930));
  *(void ***)(this + 0x12d0) = &PTR_processImpl_1009e81b0;
  *(void ***)(this + 0x1660) = &PTR_processImpl_1009e81f8;
  *(void ***)(this + 0x16e0) = &PTR_processImpl_1009e8258;
  pMVar1 = *(MotorJogwheelControl **)(this + 0x17a0);
  if (this + 0x1780 == pMVar1) {
    (**(code **)(*(long *)pMVar1 + 0x20))();
    pvVar2 = *(void **)(this + 0x1758);
  }
  else {
    if (pMVar1 != (MotorJogwheelControl *)0x0) {
      (**(code **)(*(long *)pMVar1 + 0x28))();
    }
    pvVar2 = *(void **)(this + 0x1758);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1760) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x1738);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1740) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x16b8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x16c0) = pvVar2;
    delete(pvVar2);
  }
  *(void ***)(this + 0x60) = &PTR_processImpl_1009e8198;
  JogRenderer::~JogRenderer((JogRenderer *)(this + 0x940));
  *(void ***)(this + 0x2e0) = &PTR_processImpl_1009e81b0;
  *(void ***)(this + 0x670) = &PTR_processImpl_1009e81f8;
  *(void ***)(this + 0x6f0) = &PTR_processImpl_1009e8258;
  pMVar1 = *(MotorJogwheelControl **)(this + 0x7b0);
  if (this + 0x790 == pMVar1) {
    (**(code **)(*(long *)pMVar1 + 0x20))();
    pvVar2 = *(void **)(this + 0x768);
  }
  else {
    if (pMVar1 != (MotorJogwheelControl *)0x0) {
      (**(code **)(*(long *)pMVar1 + 0x28))();
    }
    pvVar2 = *(void **)(this + 0x768);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x770) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x748);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x750) = pvVar2;
    delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x6c8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x6d0) = pvVar2;
    delete(pvVar2);
  }
  pMVar1 = *(MotorJogwheelControl **)(this + 0x50);
  if (this + 0x30 == pMVar1) {
    (**(code **)(*(long *)pMVar1 + 0x20))();
    pMVar1 = *(MotorJogwheelControl **)(this + 0x20);
  }
  else {
    if (pMVar1 != (MotorJogwheelControl *)0x0) {
      (**(code **)(*(long *)pMVar1 + 0x28))();
    }
    pMVar1 = *(MotorJogwheelControl **)(this + 0x20);
  }
  if (this != pMVar1) {
    if (pMVar1 == (MotorJogwheelControl *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001001dfff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pMVar1 + 0x28))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001e004e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pMVar1 + 0x20))();
  return;
}
}
