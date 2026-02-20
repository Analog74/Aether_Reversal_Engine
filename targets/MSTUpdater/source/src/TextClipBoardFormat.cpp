#include <ni/controller_editor/TextClipBoardFormat.hpp>
namespace NI::UIA {

void TextClipBoardFormat::fixupReadRawData() {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long uVar4;
  TextClipBoardFormat *pTVar5;
  TextClipBoardFormat *pTVar6;
  long lVar7;
  unsigned long uVar8;
  TextClipBoardFormat *pTVar9;
  long lVar10;
  long lVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  TextClipBoardFormat TVar14;
  uint uVar15;
  unsigned long uVar16;
  TextClipBoardFormat *pTVar17;
  
  TVar14 = this[0x10];
  uVar15 = *(uint *)(this + 0x10);
  pTVar17 = this + 0x12;
  uVar8 = (unsigned long)((uVar15 & 0xfe) >> 1);
  if ((uVar15 & 1) != 0) {
    uVar8 = *(unsigned long *)(this + 0x18);
  }
  pTVar5 = *(TextClipBoardFormat **)(this + 0x20);
  if ((uVar15 & 1) == 0) {
    pTVar5 = pTVar17;
  }
  pTVar9 = pTVar5;
  pTVar6 = pTVar5;
  if (uVar8 != 0) {
    pTVar6 = pTVar5 + uVar8 * 2;
    lVar10 = uVar8 * 2;
    do {
      lVar7 = 0;
      lVar11 = lVar10;
      do {
        pTVar9 = pTVar5;
        if (lVar7 == 4) {
          pTVar6 = pTVar5 + 4;
          goto LAB_1000890bd;
        }
        if (*(short *)(pTVar5 + lVar7) != *(short *)((long)&fixupReadRawData()::s_s0x0d0a + lVar7))
        goto LAB_1000890a0;
        lVar7 = lVar7 + 2;
        lVar11 = lVar11 + -2;
      } while (lVar11 != 0);
      if (lVar7 == 4) break;
LAB_1000890a0:
      pTVar5 = pTVar5 + 2;
      lVar10 = lVar10 + -2;
      pTVar9 = pTVar6;
    } while (pTVar5 != pTVar6);
  }
LAB_1000890bd:
  pTVar5 = this + 0x10;
  if (pTVar9 != pTVar6) {
    // boost code
    find_format_all_impl2<// std code
              (pTVar5);
    TVar14 = *pTVar5;
    uVar15 = *(uint *)pTVar5;
  }
  if ((uVar15 & 1) == 0) {
    uVar8 = (unsigned long)((uVar15 & 0xff) >> 1);
  }
  else {
    uVar8 = *(unsigned long *)(this + 0x18);
  }
  if (uVar8 == 0) {
    return;
  }
  if ((uVar15 & 1) == 0) {
    uVar15 = uVar15 >> 0x10;
  }
  else {
    uVar15 = (uint)**(ushort **)(this + 0x20);
  }
  if (uVar15 != 0xfeff) {
    return;
  }
  if (((byte)TVar14 & 1) == 0) {
    uVar8 = (unsigned long)((byte)TVar14 >> 1);
  }
  else {
    uVar8 = *(unsigned long *)(this + 0x18);
    pTVar17 = *(TextClipBoardFormat **)(this + 0x20);
  }
  uVar12 = (unsigned long)(uVar8 != 0);
  uVar16 = uVar8 - uVar12;
  if ((uVar16 == 0) || (uVar8 == 0)) goto LAB_10008926f;
  pTVar6 = pTVar17 + uVar12 * 2;
  uVar4 = uVar16;
  pTVar9 = pTVar17;
  if (((uVar16 < 0x10) || (uVar13 = uVar16 & 0xfffffffffffffff0, uVar13 == 0)) ||
     ((pTVar17 < pTVar17 + uVar8 * 2 && (pTVar6 < pTVar17 + uVar16 * 2)))) {
LAB_1000891f0:
    uVar8 = uVar4 - 1;
    if ((uVar4 & 7) != 0) {
      lVar10 = -(uVar4 & 7);
      do {
        *(void2 *)pTVar9 = *(void2 *)pTVar6;
        uVar4 = uVar4 - 1;
        pTVar9 = pTVar9 + 2;
        pTVar6 = pTVar6 + 2;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
    }
    if (6 < uVar8) {
      do {
        *(void2 *)pTVar9 = *(void2 *)pTVar6;
        *(void2 *)(pTVar9 + 2) = *(void2 *)(pTVar6 + 2);
        *(void2 *)(pTVar9 + 4) = *(void2 *)(pTVar6 + 4);
        *(void2 *)(pTVar9 + 6) = *(void2 *)(pTVar6 + 6);
        *(void2 *)(pTVar9 + 8) = *(void2 *)(pTVar6 + 8);
        *(void2 *)(pTVar9 + 10) = *(void2 *)(pTVar6 + 10);
        *(void2 *)(pTVar9 + 0xc) = *(void2 *)(pTVar6 + 0xc);
        *(void2 *)(pTVar9 + 0xe) = *(void2 *)(pTVar6 + 0xe);
        pTVar6 = pTVar6 + 0x10;
        pTVar9 = pTVar9 + 0x10;
        uVar4 = uVar4 - 8;
      } while (uVar4 != 0);
    }
  }
  else {
    uVar15 = ((uint)(uVar13 - 0x10 >> 4) & 0xfffffff) + 1;
    if ((uVar15 & 3) == 0) {
      lVar10 = 0;
    }
    else {
      lVar11 = -((unsigned long)uVar15 & 3);
      lVar10 = 0;
      do {
        uVar1 = *(unsigned long long *)(pTVar17 + lVar10 * 2 + uVar12 * 2 + 8);
        uVar2 = *(unsigned long long *)(pTVar17 + lVar10 * 2 + uVar12 * 2 + 0x10);
        uVar3 = *(unsigned long long *)(pTVar17 + lVar10 * 2 + uVar12 * 2 + 0x10 + 8);
        *(unsigned long long *)(pTVar17 + lVar10 * 2) = *(unsigned long long *)(pTVar17 + lVar10 * 2 + uVar12 * 2);
        *(unsigned long long *)(pTVar17 + lVar10 * 2 + 8) = uVar1;
        *(unsigned long long *)(pTVar17 + lVar10 * 2 + 0x10) = uVar2;
        *(unsigned long long *)(pTVar17 + lVar10 * 2 + 0x10 + 8) = uVar3;
        lVar10 = lVar10 + 0x10;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0);
    }
    if (0x2f < uVar13 - 0x10) {
      lVar11 = uVar13 - lVar10;
      pTVar9 = pTVar17 + lVar10 * 2 + 0x70;
      do {
        uVar1 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x70 + 8);
        uVar2 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x60);
        uVar3 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x60 + 8);
        *(unsigned long long *)(pTVar9 + -0x70) = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x70);
        *(unsigned long long *)(pTVar9 + -0x68) = uVar1;
        *(unsigned long long *)(pTVar9 + -0x60) = uVar2;
        *(unsigned long long *)(pTVar9 + -0x58) = uVar3;
        uVar1 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x50 + 8);
        uVar2 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x40);
        uVar3 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x40 + 8);
        *(unsigned long long *)(pTVar9 + -0x50) = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x50);
        *(unsigned long long *)(pTVar9 + -0x48) = uVar1;
        *(unsigned long long *)(pTVar9 + -0x40) = uVar2;
        *(unsigned long long *)(pTVar9 + -0x38) = uVar3;
        uVar1 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x30 + 8);
        uVar2 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x20);
        uVar3 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x20 + 8);
        *(unsigned long long *)(pTVar9 + -0x30) = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x30);
        *(unsigned long long *)(pTVar9 + -0x28) = uVar1;
        *(unsigned long long *)(pTVar9 + -0x20) = uVar2;
        *(unsigned long long *)(pTVar9 + -0x18) = uVar3;
        uVar1 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x10 + 8);
        uVar2 = *(unsigned long long *)(pTVar9 + uVar12 * 2);
        uVar3 = *(unsigned long long *)(pTVar9 + uVar12 * 2 + 8);
        *(unsigned long long *)(pTVar9 + -0x10) = *(unsigned long long *)(pTVar9 + uVar12 * 2 + -0x10);
        *(unsigned long long *)(pTVar9 + -8) = uVar1;
        *(unsigned long long *)pTVar9 = uVar2;
        *(unsigned long long *)(pTVar9 + 8) = uVar3;
        pTVar9 = pTVar9 + 0x80;
        lVar11 = lVar11 + -0x40;
      } while (lVar11 != 0);
    }
    if (uVar16 != uVar13) {
      pTVar6 = pTVar6 + uVar13 * 2;
      uVar4 = uVar16 - uVar13;
      pTVar9 = pTVar17 + uVar13 * 2;
      goto LAB_1000891f0;
    }
  }
  TVar14 = *pTVar5;
LAB_10008926f:
  if (((byte)TVar14 & 1) == 0) {
    *pTVar5 = (TextClipBoardFormat)((char)uVar16 * '\x02');
  }
  else {
    *(unsigned long *)(this + 0x18) = uVar16;
  }
  *(void2 *)(pTVar17 + uVar16 * 2) = 0;
  return;
}

void TextClipBoardFormat::getRawDataSize() const {
unsigned long uVar1;
  
  if (((byte)this[0x10] & 1) == 0) {
    uVar1 = (unsigned long)((byte)this[0x10] >> 1);
  }
  else {
    uVar1 = *(unsigned long *)(this + 0x18);
  }
  return uVar1 * 2;
}

void TextClipBoardFormat::getValue() const {
long in_RSI;
  StringUtil *in_RDI;
  
  GP::StringUtil::fromUTF_filter<char16_t>(in_RDI,(u16string *)(in_RSI + 0x10));
  return;
}

TextClipBoardFormat::TextClipBoardFormat() {
int iVar1;
  
  if (FormatHandle()::handle == '\0') {
    iVar1 = ___cxa_guard_acquire(&FormatHandle()::handle);
    if (iVar1 != 0) {
      FormatHandle()::handle = *(unsigned long long *)PTR__kUTTypeUTF16PlainText_100227340;
      ___cxa_guard_release(&FormatHandle()::handle);
    }
  }
  *(unsigned long long **)(this + 8) = &FormatHandle()::handle;
  *(void ***)this = &PTR__TextClipBoardFormat_100229520;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  
}

TextClipBoardFormat::~TextClipBoardFormat() {
*(void ***)this = &PTR__TextClipBoardFormat_100229520;
  if (((byte)this[0x10] & 1) != 0) {
    delete(*(void **)(this + 0x20));
  }
  delete(this);
  return;
}
}
