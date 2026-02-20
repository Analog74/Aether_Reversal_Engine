#include <ni/controller_editor/Assignment.hpp>
namespace NI::NHL2 {

void Assignment::boundValueToMinMax(int) const {
int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x94);
  iVar1 = *(int *)(this + 0x8c);
  iVar3 = iVar4;
  if (iVar4 < iVar1) {
    iVar3 = iVar1;
  }
  uVar2 = *(uint *)(this + 0x60);
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  if (((uVar2 < 7) && ((0x6cU >> (uVar2 & 0x1f) & 1) != 0)) &&
     (*(int *)(this + (unsigned long)((uVar2 & 0xfffffffe) != 2) * 8) == 3)) {
    if (this[0xa3] != (Assignment)0x0) {
      return (iVar3 - *(int *)(this + 0x98)) + 1;
    }
    return iVar1 - *(int *)(this + 0x98);
  }
  iVar4 = param_1;
  if (iVar3 < param_1) {
    iVar4 = iVar1;
  }
  if (param_1 < iVar1) {
    iVar4 = iVar1;
  }
  return iVar4;
}

void Assignment::feedbackMidiValue(int param_1) {
}

void Assignment::hasLEDControlMode() const {
int iVar1;
  unsigned long uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)(this + 0x84) - 0xf2;
  if (((uVar3 < 0xb) && ((0x701U >> (uVar3 & 0x1f) & 1) != 0)) ||
     (uVar3 = *(int *)(this + 0x84) - 0x10, uVar2 = (unsigned long)uVar3, uVar3 < 5)) {
LAB_1000a1987:
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(this + 0x60);
    if (uVar3 == 2) {
      if (*(int *)(this + 0x10) != 0) {
        if (((byte)this[0x70] & 1) != 0) goto LAB_1000a19dc;
        goto LAB_1000a1987;
      }
LAB_1000a19ab:
      uVar4 = *(uint *)(this + 0x70);
      if ((uVar4 & 0x60) != 0) goto LAB_1000a19b3;
    }
    else {
      if (uVar3 == 5) goto LAB_1000a19ab;
      uVar4 = *(uint *)(this + 0x70);
LAB_1000a19b3:
      if ((uVar3 != 6) && (uVar2 = 0, (uVar4 & 1) == 0)) {
        uVar2 = 0;
        if (1 < uVar3) {
          return 0;
        }
        if ((uVar4 & 6) == 0) {
          return 0;
        }
      }
    }
    if ((uVar3 < 6) && (uVar2 = 0, (0x2cU >> (uVar3 & 0x1f) & 1) != 0)) {
LAB_1000a19dc:
      iVar1 = *(int *)(this + (unsigned long)((uVar3 & 0xfffffffe) != 2) * 8);
      return (unsigned long)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 3 && iVar1 != 0);
    }
    if (*(int *)(this + 0x88) == 0) {
      if (uVar3 == 8) {
LAB_1000a1a2a:
        uVar2 = 0((int7)(uVar2 >> 8),1);
        if ((uVar4 & 1) != 0) {
          return uVar2;
        }
        goto LAB_1000a1a02;
      }
      if (uVar3 != 0) goto LAB_1000a1a02;
      if ((uVar4 & 8) != 0) goto LAB_1000a1a2a;
    }
    else {
LAB_1000a1a02:
      if (1 < uVar3) goto LAB_1000a1987;
    }
    uVar2 = 0((int7)(uVar2 >> 8),1);
    if ((uVar4 & 2) == 0) {
      return (unsigned long)((uVar4 & 4) >> 2);
    }
  }
  return uVar2;
}

void Assignment::isButtonLEDOn() const {
uint3 uVar1;
  uint uVar2;
  unsigned long long uVar3;
  unsigned long uVar4;
  void7 uVar5;
  uint uVar6;
  uint uVar7;
  unsigned long uVar8;
  int iVar9;
  
  uVar2 = *(int *)(this + 0x84) - 0xf2;
  if ((uVar2 < 0xb) && ((0x701U >> (uVar2 & 0x1f) & 1) != 0)) {
    return 0;
  }
  uVar7 = *(int *)(this + 0x84) - 0x10;
  uVar6 = *(uint *)(this + 0x60);
  if (uVar7 < 5) {
LAB_1000a370e:
    uVar2 = uVar6 & 0xfffffffe;
    if (uVar2 == 2) goto LAB_1000a3718;
    uVar2 = *(uint *)(this + 0x70);
    if ((uVar2 & 0x21) == 0x21) {
      uVar3 = 0;
      iVar9 = *(int *)(this + 8);
      if (iVar9 == 0) goto LAB_1000a3833;
      goto LAB_1000a375f;
    }
    uVar3 = 0;
    if (uVar6 == 6) goto LAB_1000a3833;
    if (uVar6 == 5) {
      uVar6 = 5;
      uVar3 = 0;
      if ((*(int *)(this + 8) == 0) || (*(int *)(this + 8) == 3)) goto LAB_1000a3833;
      uVar6 = 5;
      uVar3 = 0;
      iVar9 = *(int *)(this + 0x14);
      goto joined_r0x0001000a376c;
    }
    if (uVar6 == 0) {
      if ((uVar2 & 8) == 0) {
        uVar3 = 0;
        if ((uVar2 & 2) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          uVar3 = 0;
          if (*(int *)(this + 4) == 1) goto LAB_1000a37b4;
        }
      }
      else {
LAB_1000a37b4:
        uVar3 = 0;
        uVar6 = 0;
        if (((byte)this[0x14] & 1) != 0) goto LAB_1000a3833;
      }
    }
LAB_1000a3895:
    if (uVar7 < 5) {
LAB_1000a38be:
      return 0((int7)((unsigned long)uVar3 >> 8),*(int *)(this + 0x80) != 0);
    }
    if ((uVar6 - 2 < 2) || (uVar6 == 5)) {
      if (*(int *)(this + (unsigned long)(byte)((byte)uVar3 ^ 1) * 8) - 1U < 2) goto LAB_1000a38be;
    }
    else if ((uVar6 == 0) &&
            (((*(uint *)(this + 0x70) & 8) != 0 ||
             (((*(uint *)(this + 0x70) & 2) != 0 && (*(int *)(this + 4) == 1))))))
    goto LAB_1000a38be;
    uVar4 = (unsigned long)(*(uint *)(this + (unsigned long)(byte)((byte)uVar3 ^ 1) * 8) | 2);
    if ((*(uint *)(this + (unsigned long)(byte)((byte)uVar3 ^ 1) * 8) | 2) != 2) {
      return 0;
    }
  }
  else {
    if (uVar6 != 2) {
      if (uVar6 == 5) goto LAB_1000a37e0;
      uVar2 = *(uint *)(this + 0x70);
LAB_1000a37ed:
      if ((uVar6 != 6) && ((uVar2 & 1) == 0)) {
        if (1 < uVar6) {
          return 0;
        }
        if ((uVar2 & 6) == 0) {
          return 0;
        }
      }
      goto LAB_1000a370e;
    }
    if (*(int *)(this + 0x10) == 0) {
LAB_1000a37e0:
      uVar2 = *(uint *)(this + 0x70);
      if ((uVar2 & 0x60) == 0) goto LAB_1000a370e;
      goto LAB_1000a37ed;
    }
    uVar6 = 2;
    if (((byte)this[0x70] & 1) == 0) {
      return 0;
    }
LAB_1000a3718:
    uVar3 = 0((uint7)(uint3)(uVar2 >> 8),1);
    iVar9 = *(int *)this;
    if (iVar9 != 0) {
LAB_1000a375f:
      if (iVar9 != 3) {
        iVar9 = *(int *)(this + 0xc);
joined_r0x0001000a376c:
        if (iVar9 == 0) goto LAB_1000a3895;
      }
    }
LAB_1000a3833:
    uVar8 = (unsigned long)(byte)((byte)uVar3 ^ 1);
    uVar2 = *(uint *)(this + uVar8 * 8);
    uVar4 = (unsigned long)uVar2;
    uVar1 = (uint3)(uVar2 >> 8);
    if (uVar2 < 2) {
      uVar4 = 0((uint7)uVar1,1);
      if (*(int *)(this + uVar8 * 8 + 8) != 0) {
        return uVar4;
      }
    }
    else if (uVar2 == 3) {
      return (unsigned long)CONCAT31(uVar1,0.0078125 < *(float *)(this + 0x78));
    }
    if (uVar6 == 6) {
      uVar5 = (void7)(uVar4 >> 8);
      if (*(int *)(this + 0x94) < 0x80) {
        return 0(uVar5,6.1035156e-05 <= *(float *)(this + 0x78));
      }
      return 0(uVar5,0.0078125 <= *(float *)(this + 0x78));
    }
  }
  return 0((int7)(uVar4 >> 8),0.5 <= *(float *)(this + 0x78));
}

void Assignment::onSwitchAction(int&) {
uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(this + 0x60);
  if (5 < uVar1) {
    return;
  }
  if ((0x2cU >> (uVar1 & 0x1f) & 1) == 0) {
    return;
  }
  iVar4 = *(int *)(this + (unsigned long)((uVar1 & 0xfffffffe) != 2) * 8);
  uVar1 = *(uint *)(this + 0x84);
  if (iVar4 == 1) {
    *(unsigned int *)(this + 0x78) = 0x3f800000;
    if (uVar1 == 0x10) {
      *param_1 = 0x7f;
      return;
    }
  }
  else {
    if (((int)uVar1 < 0xf0) || (uVar1 == 0xf2)) {
      if (iVar4 != 3) {
        if (iVar4 != 0) {
          return;
        }
        if (*(float *)(this + 0x78) <= 0.5 && *(float *)(this + 0x78) != 0.5) {
          *(unsigned int *)(this + 0x78) = 0x3f800000;
          iVar4 = 0x7f;
          if (uVar1 != 0x10) {
            iVar4 = *(int *)(this + 0x94);
          }
          *param_1 = iVar4;
          return;
        }
        *(unsigned int *)(this + 0x78) = 0;
        iVar4 = 0;
        if ((uVar1 | 0x80) != 0x90) {
          iVar4 = *(int *)(this + 0x8c);
        }
        *param_1 = iVar4;
        return;
      }
      if (*(int *)(this + 0x8c) == *(int *)(this + 0x94)) {
        *param_1 = *(int *)(this + 0x8c);
        *(unsigned int *)(this + 0x78) = 0x3f000000;
        return;
      }
      uVar5 = *(int *)(this + 0x98) + *(int *)(this + 0x7c);
      *param_1 = uVar5;
      uVar1 = *(uint *)(this + 0x8c);
      uVar2 = *(uint *)(this + 0x94);
      uVar3 = uVar1;
      if ((int)uVar2 < (int)uVar1) {
        uVar3 = uVar2;
        uVar2 = uVar1;
      }
      if (this[0xa3] != (Assignment)0x0) {
        if ((int)uVar5 < (int)uVar3) {
          uVar5 = (uVar5 - uVar3) + uVar2 + 1;
        }
        else {
          if ((int)uVar5 <= (int)uVar2) goto LAB_10009d0b6;
          uVar5 = uVar5 + ~uVar2 + uVar3;
        }
        *param_1 = uVar5;
      }
LAB_10009d0b6:
      if ((int)uVar5 < (int)uVar3) {
        uVar5 = uVar3;
      }
      if ((int)uVar2 < (int)uVar5) {
        uVar5 = uVar2;
      }
      *param_1 = uVar5;
      *(float *)(this + 0x78) = (float)(int)(uVar5 - uVar3) / (float)(int)(uVar2 - uVar3);
      return;
    }
    *(unsigned int *)(this + 0x78) = 0x3f800000;
  }
  *param_1 = *(int *)(this + 0x94);
  return;
}

void Assignment::setExternalMidiValue(int param_1) {
}

void Assignment::setMidiID(unsigned char) {
int iVar1;
  unsigned long long *puVar2;
  unsigned long long *puVar3;
  Assignment AVar4;
  bool bVar5;
  
  AVar4 = (Assignment)0x7f;
  if (param_1 < 0x7f) {
    AVar4 = (Assignment)param_1;
  }
  this[0xa1] = AVar4;
  iVar1 = *(int *)(this + 0x84);
  if (iVar1 == 0x12) {
    bVar5 = (byte)AVar4 < 7;
    AVar4 = (Assignment)0x7;
  }
  else if (iVar1 == 0x11) {
    param_1 = (uchar)(Assignment)0x10;
    if (0x10 < (byte)AVar4) {
      param_1 = (uchar)AVar4;
    }
    bVar5 = param_1 < 0x17;
    AVar4 = (Assignment)0x17;
  }
  else {
    if (iVar1 != 0x10) goto LAB_10009b37d;
    bVar5 = (byte)AVar4 < 0x67;
    AVar4 = (Assignment)0x67;
  }
  if (bVar5 param_1) {
  }
  this[0xa1] = AVar4;
LAB_10009b37d:
  puVar2 = *(unsigned long long **)(this + 0x18);
  puVar3 = *(unsigned long long **)(this + 0x20);
  if (puVar2 != puVar3) {
    setMidiID((Assignment *)*puVar2,(uchar)AVar4);
    while (puVar2 = puVar2 + 1, puVar2 != puVar3) {
      setMidiID((Assignment *)*puVar2,(uchar)this[0xa1]);
    }
  }
  return;
}

void Assignment::setMidiValue(int, bool) {
uint uVar1;
  uint uVar2;
  int iVar3;
  unsigned long uVar4;
  uint uVar5;
  void7 in_register_00000011;
  float fVar6;
  float fVar7;
  
  if (((int)0(in_register_00000011,param_2) == 0) && (*(int *)(this + 0x7c) == param_1)) {
    return 0;
  }
  *(int *)(this + 0x7c) = param_1;
  uVar1 = *(uint *)(this + 0x60);
  switch(uVar1 param_1) {
  }
  uVar2 = *(uint *)(this + 0x8c);
  uVar4 = (unsigned long)uVar2;
  uVar1 = *(uint *)(this + 0x94);
  uVar5 = uVar1 - uVar2;
  if (uVar5 == 0 || (int)uVar1 < (int)uVar2) {
    if ((int)uVar1 < (int)uVar2) {
      uVar5 = uVar2 - uVar1;
      uVar4 = (unsigned long)uVar5;
      uVar2 = uVar1;
      goto LAB_10009a779;
    }
    fVar6 = 0.5;
  }
  else {
LAB_10009a779:
    fVar6 = (float)(int)(param_1 - uVar2) / (float)(int)uVar5;
  }
  fVar7 = 0.0;
  if (0.0 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
LAB_10009a79e:
  *(float *)(this + 0x78) = fVar6;
  return 0((int7)(uVar4 >> 8),1);
}

void Assignment::wantsFeedbackOnly() const {
uint uVar1;
  uint uVar2;
  unsigned long uVar3;
  bool bVar4;
  
  uVar1 = *(uint *)(this + 0x60);
  uVar3 = (unsigned long)uVar1;
  if (uVar1 != 0) {
    if (((uVar1 == 7) && (*(int *)this == 0)) && ((*(uint *)(this + 0xc) & 0xfffffffe) == 2)) {
      return 1;
    }
    return 0;
  }
  uVar1 = *(uint *)(this + 0x70);
  if ((uVar1 & 2) != 0) {
    if ((uVar1 & 0x21) == 0x21) {
      uVar2 = *(uint *)(this + 8);
      uVar3 = (unsigned long)uVar2;
      if (((uVar2 != 0) && (uVar2 != 3)) && (*(int *)(this + 0xc) == 0)) {
        return 0((uint7)(uint3)(uVar2 >> 8),1);
      }
    }
    else {
      if (((uVar1 & 8) == 0) && (*(int *)(this + 4) != 1)) {
        return 1;
      }
      uVar3 = 0;
      if (((byte)this[0x14] & 1) == 0) {
        return 1;
      }
    }
  }
  if ((uVar1 & 8) != 0) {
    if ((uVar1 & 0x21) == 0x21) {
      bVar4 = true;
      if ((*(int *)(this + 8) != 0) && (*(int *)(this + 8) != 3)) {
        bVar4 = *(int *)(this + 0xc) != 0;
      }
    }
    else {
      bVar4 = (bool)((byte)this[0x14] & 1);
    }
    return 0((int7)(uVar3 >> 8),bVar4) ^ 1;
  }
  return 0;
}
}
