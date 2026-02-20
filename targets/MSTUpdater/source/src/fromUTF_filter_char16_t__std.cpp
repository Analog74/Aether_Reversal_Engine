#include <ni/controller_editor/fromUTF_filter_char16_t__std.hpp>
namespace std::string NI::GP::StringUtil {

void fromUTF_filter<char16_t>(std::u16string const&) {
StringUtil *pSVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  u16string *puVar5;
  unsigned long uVar6;
  long lVar7;
  StringUtil *pSVar8;
  byte bVar9;
  StringUtil *pSVar10;
  uint uVar11;
  long lVar12;
  StringUtil *pSVar13;
  unsigned long uVar14;
  long lVar15;
  StringUtil *pSVar16;
  conv local_38;
  StringUtil local_37 [7];
  unsigned long local_30;
  StringUtil *local_28;
  
  bVar9 = (byte)*param_1 & 1;
  puVar5 = param_1 + 2;
  if (bVar9 != 0) {
    puVar5 = *(u16string **)(param_1 + 0x10);
  }
  uVar6 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar9 != 0) {
    uVar6 = *(unsigned long *)(param_1 + 8);
  }
  // boost code
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  pSVar10 = local_37;
  if (((byte)local_38 & 1) != 0) {
    pSVar10 = local_28;
  }
  uVar6 = (unsigned long)((byte)local_38 >> 1);
  if (((byte)local_38 & 1) != 0) {
    uVar6 = local_30;
  }
  if (uVar6 == 0) goto LAB_10018de97;
  if ((uVar6 < 0x17) ||
     (// std code
    pSVar16 = this + 1;
  }
  else {
    pSVar16 = *(StringUtil **)(this + 0x10);
  }
  pSVar1 = pSVar10 + uVar6;
  lVar15 = (long)pSVar1 - (long)pSVar10;
  pSVar13 = pSVar16;
  if (((uVar6 < 0x20) || (uVar14 = uVar6 & 0xffffffffffffffe0, uVar14 == 0)) ||
     ((pSVar16 < pSVar1 && (pSVar10 < pSVar16 + uVar6)))) {
LAB_10018de70:
    do {
      *pSVar13 = *pSVar10;
      pSVar10 = pSVar10 + 1;
      pSVar13 = pSVar13 + 1;
    } while (pSVar1 != pSVar10);
  }
  else {
    uVar11 = ((uint)(uVar14 - 0x20 >> 5) & 0x7ffffff) + 1;
    if ((uVar11 & 3) == 0) {
      lVar7 = 0;
    }
    else {
      lVar12 = -((unsigned long)uVar11 & 3);
      lVar7 = 0;
      do {
        uVar2 = *(unsigned long long *)(pSVar10 + lVar7 + 8);
        uVar3 = *(unsigned long long *)(pSVar10 + lVar7 + 0x10);
        uVar4 = *(unsigned long long *)(pSVar10 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pSVar16 + lVar7) = *(unsigned long long *)(pSVar10 + lVar7);
        *(unsigned long long *)(pSVar16 + lVar7 + 8) = uVar2;
        *(unsigned long long *)(pSVar16 + lVar7 + 0x10) = uVar3;
        *(unsigned long long *)(pSVar16 + lVar7 + 0x10 + 8) = uVar4;
        lVar7 = lVar7 + 0x20;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
    }
    if (0x5f < uVar14 - 0x20) {
      lVar12 = uVar14 - lVar7;
      pSVar13 = pSVar10 + lVar7 + 0x70;
      pSVar8 = pSVar16 + lVar7 + 0x70;
      do {
        uVar2 = *(unsigned long long *)(pSVar13 + -0x68);
        uVar3 = *(unsigned long long *)(pSVar13 + -0x60);
        uVar4 = *(unsigned long long *)(pSVar13 + -0x58);
        *(unsigned long long *)(pSVar8 + -0x70) = *(unsigned long long *)(pSVar13 + -0x70);
        *(unsigned long long *)(pSVar8 + -0x68) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x60) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x58) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar13 + -0x48);
        uVar3 = *(unsigned long long *)(pSVar13 + -0x40);
        uVar4 = *(unsigned long long *)(pSVar13 + -0x38);
        *(unsigned long long *)(pSVar8 + -0x50) = *(unsigned long long *)(pSVar13 + -0x50);
        *(unsigned long long *)(pSVar8 + -0x48) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x40) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x38) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar13 + -0x28);
        uVar3 = *(unsigned long long *)(pSVar13 + -0x20);
        uVar4 = *(unsigned long long *)(pSVar13 + -0x18);
        *(unsigned long long *)(pSVar8 + -0x30) = *(unsigned long long *)(pSVar13 + -0x30);
        *(unsigned long long *)(pSVar8 + -0x28) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x20) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x18) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar13 + -8);
        uVar3 = *(unsigned long long *)pSVar13;
        uVar4 = *(unsigned long long *)(pSVar13 + 8);
        *(unsigned long long *)(pSVar8 + -0x10) = *(unsigned long long *)(pSVar13 + -0x10);
        *(unsigned long long *)(pSVar8 + -8) = uVar2;
        *(unsigned long long *)pSVar8 = uVar3;
        *(unsigned long long *)(pSVar8 + 8) = uVar4;
        pSVar13 = pSVar13 + 0x80;
        pSVar8 = pSVar8 + 0x80;
        lVar12 = lVar12 + -0x80;
      } while (lVar12 != 0);
    }
    if (uVar6 != uVar14) {
      pSVar10 = pSVar10 + uVar14;
      pSVar13 = pSVar16 + uVar14;
      goto LAB_10018de70;
    }
  }
  pSVar16[lVar15] = (StringUtil)0x0;
  if (((byte)*this & 1) == 0) {
    *this = (StringUtil)((char)uVar6 * '\x02');
  }
  else {
    *(unsigned long *)(this + 8) = uVar6;
  }
LAB_10018de97:
  // std code
  return this;
}
}
