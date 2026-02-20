#include <ni/controller_editor/getHeightForText_std.hpp>
namespace NI::NWL::TextPanel<NI::NWL::Label> {

void getHeightForText(std::string const&) const {
int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Font *this_00;
  string *psVar5;
  byte bVar6;
  string *psVar7;
  unsigned long uVar8;
  long lVar9;
  float fVar10;
  
  this_00 = (Font *)Widget::getFontProperty((Widget *)this);
  fVar10 = (float)Widget::getBackingScaleFactor((Widget *)this);
  UIA::Font::setBackingScaleFactor(this_00,fVar10);
  if (*(int *)(this + 0x3b0) == 0) {
    bVar6 = (byte)*param_1 & 1;
    psVar5 = param_1 + 1;
    if (bVar6 != 0) {
      psVar5 = *(string **)(param_1 + 0x10);
    }
    uVar8 = (unsigned long)((byte)*param_1 >> 1);
    if (bVar6 != 0) {
      uVar8 = *(unsigned long *)(param_1 + 8);
    }
    iVar3 = 1;
    if (uVar8 != 0) {
      psVar7 = psVar5;
      if ((uVar8 & 7) == 0) {
        iVar3 = 0;
      }
      else {
        lVar9 = -(uVar8 & 7);
        iVar3 = 0;
        do {
          iVar3 = iVar3 + (uint)(*psVar7 == (string)0xa);
          psVar7 = psVar7 + 1;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0);
      }
      if (6 < uVar8 - 1) {
        do {
          iVar3 = (uint)(psVar7[7] == (string)0xa) +
                  (uint)(psVar7[6] == (string)0xa) +
                  (uint)(psVar7[5] == (string)0xa) +
                  (uint)(psVar7[4] == (string)0xa) +
                  (uint)(psVar7[3] == (string)0xa) +
                  (uint)(psVar7[2] == (string)0xa) +
                  (uint)(psVar7[1] == (string)0xa) + (uint)(*psVar7 == (string)0xa) + iVar3;
          psVar7 = psVar7 + 8;
        } while (psVar7 != psVar5 + uVar8);
      }
      iVar3 = iVar3 + 1;
    }
    iVar1 = *(int *)(this + 0x194);
    iVar2 = *(int *)(this + 0x19c);
    iVar4 = UIA::Font::getCharHeight(this_00);
    iVar3 = _lroundf((float)(iVar4 * iVar3) / fVar10);
    iVar3 = iVar3 + iVar1 + iVar2;
  }
  else {
    iVar1 = *(int *)(this + 0x194);
    iVar2 = *(int *)(this + 0x19c);
    iVar3 = UIA::Font::getStringWidthMultiline(this_00,param_1);
    iVar3 = _lroundf((float)iVar3 / fVar10);
    iVar3 = iVar3 + iVar1 + iVar2;
  }
  return iVar3;
}
}
