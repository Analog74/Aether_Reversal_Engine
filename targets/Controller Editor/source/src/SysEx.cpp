#include <ni/controller_editor/SysEx.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MIDI {

void SysEx::copyToBuffer(unsigned char*, unsigned long, unsigned long&) const {
unsigned long long uVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  SysEx SVar4;
  long lVar5;
  unsigned long uVar6;
  long lVar7;
  unsigned long uVar8;
  
  uVar1 = 2;
  if (((param_2 != 0) && (param_1 != (uchar *)0x0)) && (*(int *)this != 0)) {
    uVar2 = (unsigned long)((short)*(int *)this != 0) * 2 + 2;
    uVar3 = *param_3;
    do {
      if (uVar2 <= uVar3) {
        lVar7 = 0;
        lVar5 = *(long *)(this + 0x10) - *(long *)(this + 8);
        if (lVar5 != 0) {
          lVar7 = -(unsigned long)(*(char *)(*(long *)(this + 0x10) + -1) == -9);
        }
        lVar7 = lVar7 + lVar5;
        if (uVar3 < uVar2 + lVar7) {
          uVar8 = lVar7 - (uVar3 - uVar2);
          uVar6 = uVar8;
          if (param_2 < uVar8) {
            uVar6 = param_2;
          }
          memcpy(param_1,(void *)(*(long *)(this + 8) + (uVar3 - uVar2)),uVar6);
          *param_3 = *param_3 + uVar6;
          if (param_2 <= uVar8) {
            return 1;
          }
          param_1 = (uchar *)((SysEx *)param_1 + uVar6);
        }
        *param_1 = 0xf7;
        *param_3 = *param_3 + 1;
        return 0;
      }
      SVar4 = (SysEx)0xf0;
      switch(uVar3) {
      case 0:
        break;
      case 1:
        SVar4 = this[2];
        break;
      case 2:
        SVar4 = this[1];
        break;
      case 3:
        SVar4 = *this;
        break;
      default:
        goto switchD_100442684_default;
      }
      *param_1 = (uchar)SVar4;
      param_1 = (uchar *)((SysEx *)param_1 + 1);
switchD_100442684_default:
      uVar3 = *param_3 + 1;
      *param_3 = uVar3;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    uVar1 = 1;
  }
  return uVar1;
}

SysEx::~SysEx() {
void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    delete(pvVar1);
    return;
  }
  return;
}
}
