#include <ni/controller_editor/JogwheelPush.hpp>
namespace NI::NHL2::SERVER {

void JogwheelPush::finalizeCalibration() {
char *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned long uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  unsigned long long uVar14;
  unsigned long uVar15;
  unsigned long uVar16;
  
  if (Logging::detail::__reportLevelAsUInt < 2) {
    pcVar12 = Logging::allowedCategories;
    uVar10 = 0;
    if (0 == 0) {
      uVar10 = 0;
    }
    else {
      do {
        uVar15 = uVar10 >> 1;
        iVar9 = // std code
        uVar16 = uVar15;
        if (iVar9 < 0) {
          uVar16 = ~uVar15 + uVar10;
          pcVar12 = pcVar12 + uVar15 * 0x18 + 0x18;
        }
        uVar10 = uVar16;
      } while (uVar16 != 0);
      pcVar1 = Logging::allowedCategories + 0 * 0x18;
      uVar10 = 0;
      if ((pcVar12 != pcVar1) &&
         (iVar9 = // std code
        pcVar12 = pcVar1;
      }
    }
    if (pcVar12 != Logging::allowedCategories + uVar10 * 0x18) {
      Logging::detail::__trace__msg
                (1,"%s: %d calibration finalization\n","JWPush.Calibration",*(unsigned int *)this);
    }
  }
  uVar11 = *(uint *)(this + 0x34);
  uVar2 = *(uint *)(this + 0x38);
  uVar14 = 1;
  if ((uVar11 < uVar2) && (0x59 < uVar2 - uVar11)) {
    uVar13 = *(uint *)(this + 0x3c);
    uVar3 = *(uint *)(this + 0x40);
    uVar14 = 2;
    if ((uVar13 < uVar3) && (0x59 < uVar3 - uVar13)) {
      uVar4 = *(uint *)(this + 0x44);
      uVar5 = *(uint *)(this + 0x48);
      uVar14 = 3;
      if ((uVar4 < uVar5) && (0x59 < uVar5 - uVar4)) {
        uVar6 = *(uint *)(this + 0x4c);
        uVar7 = *(uint *)(this + 0x50);
        uVar14 = 4;
        if ((uVar6 < uVar7) && (0x59 < uVar7 - uVar6)) {
          uVar13 = uVar6 + uVar4 + uVar13 + uVar11 >> 2;
          uVar11 = uVar7 + uVar5 + uVar3 + uVar2 >> 2;
          if ((uVar13 < uVar11) && (99 < uVar11 - uVar13)) {
            if (uVar11 - uVar13 < 0x178) {
              setCalibValues(this,uVar13,uVar11,'\0');
              return 1;
            }
            if (2 < Logging::detail::__reportLevelAsUInt) goto LAB_100011295;
            uVar8 = *(unsigned int *)this;
            pcVar12 = "%s: %d range above tolerance\n";
          }
          else {
            if (2 < Logging::detail::__reportLevelAsUInt) goto LAB_100011295;
            uVar8 = *(unsigned int *)this;
            pcVar12 = "%s: %d range below tolerance\n";
          }
          Logging::detail::__trace__msg(2,pcVar12,"JWPush.Calibration",uVar8,4);
          goto LAB_100011295;
        }
      }
    }
  }
  if (Logging::detail::__reportLevelAsUInt < 3) {
    Logging::detail::__trace__msg
              (2,"%s: %d (%d) range below tolerance\n","JWPush.Calibration",*(unsigned int *)this,
               uVar14);
  }
LAB_100011295:
  this[0x54] = (JogwheelPush)0x1;
  return 0;
}

void JogwheelPush::getCalibrationMode() const {
if (this[0x54] != (JogwheelPush)0x0) {
    return 0xff;
  }
  return *(unsigned int *)(this + 0x30);
}

JogwheelPush::JogwheelPush() {
*(unsigned int *)this = 0xffff;
  this[4] = (JogwheelPush)0x0;
  *(unsigned int *)(this + 8) = 0xffff;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0xffff0000ffff;
  *(unsigned long long *)(this + 0x20) = 0xffff0000ffff;
  *(unsigned int *)(this + 0x28) = 0xffff;
  *(void2 *)(this + 0x2c) = 0xff;
  *(unsigned int *)(this + 0x30) = 0;
  this[0x54] = (JogwheelPush)0x0;
  _memset_pattern16(this + 0x34,&0,0x20);
  
}

void JogwheelPush::relevelCalibration() {
char *pcVar1;
  uint uVar2;
  int iVar3;
  unsigned long uVar4;
  char *pcVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  char *unaff_R14;
  
  if (Logging::detail::__reportLevelAsUInt < 2) {
    pcVar5 = Logging::allowedCategories;
    uVar4 = 0;
    if (0 == 0) {
      uVar4 = 0;
      unaff_R14 = Logging::allowedCategories;
    }
    else {
      do {
        uVar6 = uVar4 >> 1;
        iVar3 = // std code
        uVar7 = uVar6;
        if (iVar3 < 0) {
          uVar7 = ~uVar6 + uVar4;
          pcVar5 = pcVar5 + uVar6 * 0x18 + 0x18;
        }
        uVar4 = uVar7;
      } while (uVar7 != 0);
      unaff_R14 = Logging::allowedCategories + 0 * 0x18;
      uVar4 = 0;
      if ((pcVar5 != unaff_R14) &&
         (iVar3 = // std code
        pcVar5 = unaff_R14;
      }
    }
    if (pcVar5 != Logging::allowedCategories + uVar4 * 0x18) {
      Logging::detail::__trace__msg(1,"%s: %d calibration re-leveling\n","JWPush.Calibration");
    }
  }
  if ((this[0x2d] == (JogwheelPush)0x0) || (uVar2 = *(uint *)(this + 8), uVar2 == 0xffff)) {
    uVar4 = 0;
  }
  else {
    this[4] = (JogwheelPush)0x0;
    if (uVar2 - *(int *)(this + 0x28) != 0) {
      uVar4 = setCalibValues(this,uVar2,(uVar2 - *(int *)(this + 0x28)) + *(int *)(this + 0x24),'B')
      ;
      return uVar4;
    }
    uVar4 = 0((int7)((unsigned long)unaff_R14 >> 8),1);
    if (Logging::detail::__reportLevelAsUInt < 2) {
      uVar7 = 0;
      pcVar5 = Logging::allowedCategories;
      if (0 == 0) {
        uVar7 = 0;
      }
      else {
        do {
          uVar8 = uVar7 >> 1;
          iVar3 = // std code
          uVar6 = uVar8;
          if (iVar3 < 0) {
            uVar6 = ~uVar8 + uVar7;
            pcVar5 = pcVar5 + uVar8 * 0x18 + 0x18;
          }
          uVar7 = uVar6;
        } while (uVar6 != 0);
        pcVar1 = Logging::allowedCategories + 0 * 0x18;
        uVar7 = 0;
        if ((pcVar5 != pcVar1) &&
           (iVar3 = // std code
          pcVar5 = pcVar1;
        }
      }
      if (pcVar5 != Logging::allowedCategories + uVar7 * 0x18) {
        Logging::detail::__trace__msg
                  (1,"%s: %d calibration re-leveling: nothing to do!\n","JWPush.Calibration",
                   *(unsigned int *)this);
      }
    }
  }
  return uVar4 & 0xffffffff;
}

void JogwheelPush::setCalibValues(unsigned int, unsigned int, unsigned char) {
char *pcVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned long uVar4;
  char *unaff_RBX;
  unsigned long uVar5;
  unsigned long uVar6;
  char *pcVar7;
  
  *(uint *)(this + 0x28) = param_1;
  *(uint *)(this + 0x24) = param_2;
  this[0x2c] = (JogwheelPush)param_3;
  if ((param_1 < 0x1001) && (param_2 < 0x1001)) {
    uVar2 = (unsigned int)(long)((double)(param_2 - param_1) * 0.35 + (double)param_1);
    *(unsigned int *)(this + 0x18) = uVar2;
    *(unsigned int *)(this + 0x1c) = uVar2;
    *(unsigned int *)(this + 0x20) = 0xffff;
    if (0x32 < param_2 - param_1) {
      if (Logging::detail::__reportLevelAsUInt < 2) {
        uVar4 = 0;
        pcVar7 = Logging::allowedCategories;
        if (0 == 0) {
          uVar4 = 0;
        }
        else {
          do {
            uVar5 = uVar4 >> 1;
            iVar3 = // std code
            uVar6 = uVar5;
            if (iVar3 < 0) {
              uVar6 = ~uVar5 + uVar4;
              pcVar7 = pcVar7 + uVar5 * 0x18 + 0x18;
            }
            uVar4 = uVar6;
          } while (uVar6 != 0);
          pcVar1 = Logging::allowedCategories + 0 * 0x18;
          uVar4 = 0;
          if ((pcVar7 != pcVar1) &&
             (iVar3 = // std code
            pcVar7 = pcVar1;
          }
        }
        unaff_RBX = (char *)&Logging::detail::__reportLevelAsUInt;
        if (pcVar7 != Logging::allowedCategories + uVar4 * 0x18) {
          Logging::detail::__trace__msg
                    (1,"%s: OnThreshold [%d]: 0x%04X (%d)\n","JWPush.Calibration",
                     *(unsigned int *)this,*(unsigned int *)(this + 0x18),*(unsigned int *)(this + 0x18));
        }
        if (Logging::detail::__reportLevelAsUInt < 2) {
          uVar4 = 0;
          pcVar7 = Logging::allowedCategories;
          if (0 == 0) {
            uVar4 = 0;
            unaff_RBX = Logging::allowedCategories;
          }
          else {
            do {
              uVar5 = uVar4 >> 1;
              iVar3 = // std code
              uVar6 = uVar5;
              if (iVar3 < 0) {
                uVar6 = ~uVar5 + uVar4;
                pcVar7 = pcVar7 + uVar5 * 0x18 + 0x18;
              }
              uVar4 = uVar6;
            } while (uVar6 != 0);
            unaff_RBX = Logging::allowedCategories + 0 * 0x18;
            uVar4 = 0;
            if ((pcVar7 != unaff_RBX) &&
               (iVar3 = // std code
              pcVar7 = unaff_RBX;
            }
          }
          if (pcVar7 != Logging::allowedCategories + uVar4 * 0x18) {
            Logging::detail::__trace__msg
                      (1,"%s: OffThreshold[%d]: 0x%04X (%d)\n","JWPush.Calibration",
                       *(unsigned int *)this,*(unsigned int *)(this + 0x1c),*(unsigned int *)(this + 0x1c)
                      );
          }
        }
      }
      this[0x2d] = (JogwheelPush)0x1;
      uVar4 = 0((int7)((unsigned long)unaff_RBX >> 8),1);
      goto LAB_100010920;
    }
  }
  else if (Logging::detail::__reportLevelAsUInt < 2) {
    pcVar7 = Logging::allowedCategories;
    uVar4 = 0;
    if (0 == 0) {
      uVar4 = 0;
    }
    else {
      do {
        uVar5 = uVar4 >> 1;
        iVar3 = // std code
        uVar6 = uVar5;
        if (iVar3 < 0) {
          uVar6 = ~uVar5 + uVar4;
          pcVar7 = pcVar7 + uVar5 * 0x18 + 0x18;
        }
        uVar4 = uVar6;
      } while (uVar6 != 0);
      pcVar1 = Logging::allowedCategories + 0 * 0x18;
      uVar4 = 0;
      if ((pcVar7 != pcVar1) &&
         (iVar3 = // std code
        pcVar7 = pcVar1;
      }
    }
    if (pcVar7 != Logging::allowedCategories + uVar4 * 0x18) {
      uVar4 = 0;
      Logging::detail::__trace__msg
                (1,"%s: [%d] error: invalid calibration data (0x%04X, 0x%04X)!\n",
                 "JWPush.Calibration",*(unsigned int *)this,param_1,param_2);
      goto LAB_100010920;
    }
  }
  uVar4 = 0;
LAB_100010920:
  return uVar4 & 0xffffffff;
}

JogwheelPush::~JogwheelPush() {
return;
}
}
