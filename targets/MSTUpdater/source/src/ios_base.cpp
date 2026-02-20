#include <ni/controller_editor/ios_base.hpp>
namespace std::stringbuf::seekoff(long long, std {

void ios_base::seekdir, unsigned int) {
unsigned long uVar1;
  long lVar2;
  long lVar3;
  unsigned long uVar4;
  
  uVar1 = *(unsigned long *)(param_2 + 0x30);
  uVar4 = *(unsigned long *)(param_2 + 0x58);
  if (*(unsigned long *)(param_2 + 0x58) < uVar1) {
    *(unsigned long *)(param_2 + 0x58) = uVar1;
    uVar4 = uVar1;
  }
  if (((param_5 & 0x18) != 0) && ((param_4 != 1 || ((param_5 & 0x18) != 0x18)))) {
    if (param_4 == 0) {
      lVar2 = 0;
    }
    else if (param_4 == 2) {
      if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
        lVar2 = uVar4 - (param_2 + 0x41);
      }
      else {
        lVar2 = uVar4 - *(long *)(param_2 + 0x50);
      }
    }
    else {
      if (param_4 != 1) goto LAB_1001a1028;
      if ((param_5 & 8) == 0) {
        lVar2 = uVar1 - *(long *)(param_2 + 0x28);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      }
    }
    lVar2 = lVar2 + param_3;
    if (-1 < lVar2) {
      if ((*(byte *)(param_2 + 0x40) & 1) == 0) {
        lVar3 = param_2 + 0x41;
      }
      else {
        lVar3 = *(long *)(param_2 + 0x50);
      }
      if ((lVar2 <= (long)(uVar4 - lVar3)) &&
         ((lVar2 == 0 ||
          ((((param_5 & 8) == 0 || (*(long *)(param_2 + 0x18) != 0)) &&
           (((param_5 & 0x10) == 0 || (uVar1 != 0)))))))) {
        if ((param_5 & 8) != 0) {
          *(long *)(param_2 + 0x18) = *(long *)(param_2 + 0x10) + lVar2;
          *(unsigned long *)(param_2 + 0x20) = uVar4;
        }
        if ((param_5 & 0x10) != 0) {
          *(long *)(param_2 + 0x30) = (long)(int)lVar2 + *(long *)(param_2 + 0x28);
        }
        param_1[0xf] = 0;
        param_1[0xe] = 0;
        param_1[0xd] = 0;
        param_1[0xc] = 0;
        param_1[0xb] = 0;
        param_1[10] = 0;
        param_1[9] = 0;
        param_1[8] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[0x10] = lVar2;
        return param_1;
      }
    }
  }
LAB_1001a1028:
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x10] = 0xffffffffffffffff;
  return param_1;
}
}
