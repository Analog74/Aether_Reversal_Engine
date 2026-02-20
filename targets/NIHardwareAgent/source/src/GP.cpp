#include <ni/controller_editor/GP.hpp>
namespace std::string NI {

void GP::utf_to_utf<char, char16_t>(char16_t const*) {
short *psVar1;
  wchar16 wVar2;
  uint uVar3;
  long lVar4;
  wchar16 *pwVar5;
  long lVar6;
  
  lVar6 = 0;
  do {
    psVar1 = (short *)((long)param_1 + lVar6);
    lVar6 = lVar6 + 2;
  } while (*psVar1 != 0);
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  // std code
  if (lVar6 != 2) {
    lVar4 = -(long)param_1;
    do {
      pwVar5 = param_1 + 1;
      wVar2 = *param_1;
      uVar3 = (uint)(ushort)wVar2;
      if ((wVar2 & 0xf800U) == 0xd800) {
        if (((long)param_1 + lVar4 + 4 != lVar6) && ((ushort)wVar2 < 0xdc00)) {
          pwVar5 = param_1 + 2;
          if (((ushort)param_1[1] & 0xfc00) == 0xdc00) {
            uVar3 = ((ushort)wVar2 & 0x3ff) * 0x400 + ((ushort)param_1[1] & 0x3ff) + 0x10000;
            goto LAB_10007d965;
          }
        }
      }
      else {
LAB_10007d965:
        // boost code
                  (uVar3,this);
      }
      param_1 = pwVar5;
    } while ((long)param_1 + lVar4 + 2 != lVar6);
  }
  return this;
}
}
