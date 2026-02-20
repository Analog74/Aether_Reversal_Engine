#include <ni/controller_editor/fromUTF_filter_char__std.hpp>
namespace std::string NI::GP::StringUtil {

void fromUTF_filter<char>(std::string const&) {
StringUtil *pSVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  StringUtil *pSVar8;
  string *psVar9;
  StringUtil *pSVar10;
  long lVar11;
  StringUtil *pSVar12;
  unsigned long uVar13;
  long lVar14;
  StringUtil *pSVar15;
  unsigned long uVar16;
  string *local_50;
  unsigned long long local_48;
  unsigned long uStack_40;
  StringUtil *local_38;
  
  bVar5 = (byte)*param_1 & 1;
  psVar9 = param_1 + 1;
  if (bVar5 != 0) {
    psVar9 = *(string **)(param_1 + 0x10);
  }
  uVar16 = (unsigned long)((byte)*param_1 >> 1);
  if (bVar5 != 0) {
    uVar16 = *(unsigned long *)(param_1 + 8);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (StringUtil *)0x0;
  local_50 = psVar9;
  // std code
  if (uVar16 != 0) {
    do {
      uVar6 = // boost code
                        ((char **)&local_50,(char *)(psVar9 + uVar16));
      if (uVar6 < 0xfffffffe) {
        // boost code
                  (uVar6,&local_48);
      }
    } while (local_50 != psVar9 + uVar16);
  }
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)this = 0;
  pSVar10 = (StringUtil *)((long)&local_48 + 1);
  if ((local_48 & 1) != 0) {
    pSVar10 = local_38;
  }
  uVar16 = local_48 >> 1 & 0x7f;
  if ((local_48 & 1) != 0) {
    uVar16 = uStack_40;
  }
  if (uVar16 == 0) goto LAB_10018da47;
  if ((uVar16 < 0x17) ||
     (// std code
    pSVar15 = this + 1;
  }
  else {
    pSVar15 = *(StringUtil **)(this + 0x10);
  }
  pSVar1 = pSVar10 + uVar16;
  lVar14 = (long)pSVar1 - (long)pSVar10;
  pSVar12 = pSVar15;
  if (((uVar16 < 0x20) || (uVar13 = uVar16 & 0xffffffffffffffe0, uVar13 == 0)) ||
     ((pSVar15 < pSVar1 && (pSVar10 < pSVar15 + uVar16)))) {
LAB_10018da20:
    do {
      *pSVar12 = *pSVar10;
      pSVar10 = pSVar10 + 1;
      pSVar12 = pSVar12 + 1;
    } while (pSVar1 != pSVar10);
  }
  else {
    uVar6 = ((uint)(uVar13 - 0x20 >> 5) & 0x7ffffff) + 1;
    if ((uVar6 & 3) == 0) {
      lVar7 = 0;
    }
    else {
      lVar11 = -((unsigned long)uVar6 & 3);
      lVar7 = 0;
      do {
        uVar2 = *(unsigned long long *)(pSVar10 + lVar7 + 8);
        uVar3 = *(unsigned long long *)(pSVar10 + lVar7 + 0x10);
        uVar4 = *(unsigned long long *)(pSVar10 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pSVar15 + lVar7) = *(unsigned long long *)(pSVar10 + lVar7);
        *(unsigned long long *)(pSVar15 + lVar7 + 8) = uVar2;
        *(unsigned long long *)(pSVar15 + lVar7 + 0x10) = uVar3;
        *(unsigned long long *)(pSVar15 + lVar7 + 0x10 + 8) = uVar4;
        lVar7 = lVar7 + 0x20;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0);
    }
    if (0x5f < uVar13 - 0x20) {
      lVar11 = uVar13 - lVar7;
      pSVar12 = pSVar10 + lVar7 + 0x70;
      pSVar8 = pSVar15 + lVar7 + 0x70;
      do {
        uVar2 = *(unsigned long long *)(pSVar12 + -0x68);
        uVar3 = *(unsigned long long *)(pSVar12 + -0x60);
        uVar4 = *(unsigned long long *)(pSVar12 + -0x58);
        *(unsigned long long *)(pSVar8 + -0x70) = *(unsigned long long *)(pSVar12 + -0x70);
        *(unsigned long long *)(pSVar8 + -0x68) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x60) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x58) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar12 + -0x48);
        uVar3 = *(unsigned long long *)(pSVar12 + -0x40);
        uVar4 = *(unsigned long long *)(pSVar12 + -0x38);
        *(unsigned long long *)(pSVar8 + -0x50) = *(unsigned long long *)(pSVar12 + -0x50);
        *(unsigned long long *)(pSVar8 + -0x48) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x40) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x38) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar12 + -0x28);
        uVar3 = *(unsigned long long *)(pSVar12 + -0x20);
        uVar4 = *(unsigned long long *)(pSVar12 + -0x18);
        *(unsigned long long *)(pSVar8 + -0x30) = *(unsigned long long *)(pSVar12 + -0x30);
        *(unsigned long long *)(pSVar8 + -0x28) = uVar2;
        *(unsigned long long *)(pSVar8 + -0x20) = uVar3;
        *(unsigned long long *)(pSVar8 + -0x18) = uVar4;
        uVar2 = *(unsigned long long *)(pSVar12 + -8);
        uVar3 = *(unsigned long long *)pSVar12;
        uVar4 = *(unsigned long long *)(pSVar12 + 8);
        *(unsigned long long *)(pSVar8 + -0x10) = *(unsigned long long *)(pSVar12 + -0x10);
        *(unsigned long long *)(pSVar8 + -8) = uVar2;
        *(unsigned long long *)pSVar8 = uVar3;
        *(unsigned long long *)(pSVar8 + 8) = uVar4;
        pSVar12 = pSVar12 + 0x80;
        pSVar8 = pSVar8 + 0x80;
        lVar11 = lVar11 + -0x80;
      } while (lVar11 != 0);
    }
    if (uVar16 != uVar13) {
      pSVar10 = pSVar10 + uVar13;
      pSVar12 = pSVar15 + uVar13;
      goto LAB_10018da20;
    }
  }
  pSVar15[lVar14] = (StringUtil)0x0;
  if (((byte)*this & 1) == 0) {
    *this = (StringUtil)((char)uVar16 * '\x02');
  }
  else {
    *(unsigned long *)(this + 8) = uVar16;
  }
LAB_10018da47:
  // std code
  return this;
}
}
