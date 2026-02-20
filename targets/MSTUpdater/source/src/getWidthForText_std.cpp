#include <ni/controller_editor/getWidthForText_std.hpp>
namespace NI::NWL::TextPanel<NI::NWL::Label> {

void getWidthForText(std::string const&) const {
int iVar1;
  Font *this_00;
  string *psVar2;
  byte bVar3;
  string *psVar4;
  unsigned long uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  
  this_00 = (Font *)Widget::getFontProperty((Widget *)this);
  fVar9 = (float)Widget::getBackingScaleFactor((Widget *)this);
  UIA::Font::setBackingScaleFactor(this_00,fVar9);
  if (*(int *)(this + 0x3b0) == 0) {
    iVar8 = *(int *)(this + 400) + *(int *)(this + 0x198);
    iVar1 = UIA::Font::getStringWidthMultiline(this_00,param_1);
  }
  else {
    bVar3 = (byte)*param_1 & 1;
    psVar2 = param_1 + 1;
    if (bVar3 != 0) {
      psVar2 = *(string **)(param_1 + 0x10);
    }
    uVar5 = (unsigned long)((byte)*param_1 >> 1);
    if (bVar3 != 0) {
      uVar5 = *(unsigned long *)(param_1 + 8);
    }
    iVar6 = 1;
    if (uVar5 != 0) {
      psVar4 = psVar2;
      if ((uVar5 & 7) == 0) {
        iVar6 = 0;
      }
      else {
        lVar7 = -(uVar5 & 7);
        iVar6 = 0;
        do {
          iVar6 = iVar6 + (uint)(*psVar4 == (string)0xa);
          psVar4 = psVar4 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      if (6 < uVar5 - 1) {
        do {
          iVar6 = (uint)(psVar4[7] == (string)0xa) +
                  (uint)(psVar4[6] == (string)0xa) +
                  (uint)(psVar4[5] == (string)0xa) +
                  (uint)(psVar4[4] == (string)0xa) +
                  (uint)(psVar4[3] == (string)0xa) +
                  (uint)(psVar4[2] == (string)0xa) +
                  (uint)(psVar4[1] == (string)0xa) + (uint)(*psVar4 == (string)0xa) + iVar6;
          psVar4 = psVar4 + 8;
        } while (psVar4 != psVar2 + uVar5);
      }
      iVar6 = iVar6 + 1;
    }
    iVar8 = *(int *)(this + 400) + *(int *)(this + 0x198);
    iVar1 = UIA::Font::getCharHeight(this_00);
    iVar1 = iVar1 * iVar6;
  }
  iVar1 = _lroundf((float)iVar1 / fVar9);
  return iVar1 + iVar8;
}
}
