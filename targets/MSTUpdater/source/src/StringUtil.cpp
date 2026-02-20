#include <ni/controller_editor/StringUtil.hpp>
namespace std::string NI::GP {

void StringUtil::fromUTF<char16_t>(char16_t const*, unsigned long) {
StringUtil *pSVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  long lVar5;
  StringUtil *pSVar6;
  StringUtil *pSVar7;
  uint uVar8;
  long lVar9;
  StringUtil *pSVar10;
  unsigned long uVar11;
  long lVar12;
  StringUtil *pSVar13;
  unsigned long uVar14;
  unsigned long local_68;
  unsigned long uStack_60;
  StringUtil *local_58;
  void2 local_48;
  unsigned long long local_40;
  unsigned long local_38;
  StringUtil *local_30;
  
  // boost code
  local_48 = 0x101;
  local_30 = local_58;
  local_38 = uStack_60;
  local_40 = local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (StringUtil *)0x0;
  // std code
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  pSVar7 = (StringUtil *)((long)&local_40 + 1);
  if ((local_40 & 1) != 0) {
    pSVar7 = local_30;
  }
  uVar14 = local_40 >> 1 & 0x7f;
  if ((local_40 & 1) != 0) {
    uVar14 = local_38;
  }
  if (uVar14 == 0) goto LAB_10018dc87;
  if ((uVar14 < 0x17) ||
     (// std code
    pSVar13 = this + 1;
  }
  else {
    pSVar13 = *(StringUtil **)(this + 0x10);
  }
  pSVar1 = pSVar7 + uVar14;
  lVar12 = (long)pSVar1 - (long)pSVar7;
  pSVar10 = pSVar13;
  if (((uVar14 < 0x20) || (uVar11 = uVar14 & 0xffffffffffffffe0, uVar11 == 0)) ||
     ((pSVar13 < pSVar1 && (pSVar7 < pSVar13 + uVar14)))) {
LAB_10018dc60:
    do {
      *pSVar10 = *pSVar7;
      pSVar7 = pSVar7 + 1;
      pSVar10 = pSVar10 + 1;
    } while (pSVar1 != pSVar7);
  }
  else {
    uVar8 = ((uint)(uVar11 - 0x20 >> 5) & 0x7ffffff) + 1;
    if ((uVar8 & 3) == 0) {
      lVar5 = 0;
    }
    else {
      lVar9 = -((unsigned long)uVar8 & 3);
      lVar5 = 0;
      do {
        uVar2 = *(unsigned long long *)(pSVar7 + lVar5 + 8);
        uVar3 = *(unsigned long long *)(pSVar7 + lVar5 + 0x10);
        uVar4 = *(unsigned long long *)(pSVar7 + lVar5 + 0x10 + 8);
        *(unsigned long long *)(pSVar13 + lVar5) = *(unsigned long long *)(pSVar7 + lVar5);
        *(unsigned long long *)(pSVar13 + lVar5 + 8) = uVar2;
        *(unsigned long long *)(pSVar13 + lVar5 + 0x10) = uVar3;
        *(unsigned long long *)(pSVar13 + lVar5 + 0x10 + 8) = uVar4;
        lVar5 = lVar5 + 0x20;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0);
    }
    if (0x5f < uVar11 - 0x20) {
      lVar9 = uVar11 - lVar5;
      pSVar10 = pSVar7 + lVar5 + 0x70;
      pSVar6 = pSVar13 + lVar5 + 0x70;
      do {
        uVar2 = *(unsigned long long *)(pSVar10 + -0x68);
        uVar3 = *(unsigned long long *)(pSVar10 + -0x60);
        uVar4 = *(unsigned long long *)(pSVar10 + -0x58);
        *(unsigned long long *)(pSVar6 + -0x70) = *(unsigned long long *)(pSVar10 + -0x70);
        *(unsigned long long *)(pSVar6 + -0x68) = uVar2;
        *(unsigned long long *)(pSVar6 + -0x60) = uVar3;
        *(unsigned long long *)(pSVar6 + -0x58) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar10 + -0x48);
        uVar3 = *(unsigned long long *)(pSVar10 + -0x40);
        uVar4 = *(unsigned long long *)(pSVar10 + -0x38);
        *(unsigned long long *)(pSVar6 + -0x50) = *(unsigned long long *)(pSVar10 + -0x50);
        *(unsigned long long *)(pSVar6 + -0x48) = uVar2;
        *(unsigned long long *)(pSVar6 + -0x40) = uVar3;
        *(unsigned long long *)(pSVar6 + -0x38) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar10 + -0x28);
        uVar3 = *(unsigned long long *)(pSVar10 + -0x20);
        uVar4 = *(unsigned long long *)(pSVar10 + -0x18);
        *(unsigned long long *)(pSVar6 + -0x30) = *(unsigned long long *)(pSVar10 + -0x30);
        *(unsigned long long *)(pSVar6 + -0x28) = uVar2;
        *(unsigned long long *)(pSVar6 + -0x20) = uVar3;
        *(unsigned long long *)(pSVar6 + -0x18) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar10 + -8);
        uVar3 = *(unsigned long long *)pSVar10;
        uVar4 = *(unsigned long long *)(pSVar10 + 8);
        *(unsigned long long *)(pSVar6 + -0x10) = *(unsigned long long *)(pSVar10 + -0x10);
        *(unsigned long long *)(pSVar6 + -8) = uVar2;
        *(unsigned long long *)pSVar6 = uVar3;
        *(unsigned long long *)(pSVar6 + 8) = uVar4;
        pSVar10 = pSVar10 + 0x80;
        pSVar6 = pSVar6 + 0x80;
        lVar9 = lVar9 + -0x80;
      } while (lVar9 != 0);
    }
    if (uVar14 != uVar11) {
      pSVar7 = pSVar7 + uVar11;
      pSVar10 = pSVar13 + uVar11;
      goto LAB_10018dc60;
    }
  }
  pSVar13[lVar12] = (StringUtil)0x0;
  if (((byte)*this & 1) == 0) {
    *this = (StringUtil)((char)uVar14 * '\x02');
  }
  else {
    *(unsigned long *)(this + 8) = uVar14;
  }
LAB_10018dc87:
  // std code
  return this;
}
}
