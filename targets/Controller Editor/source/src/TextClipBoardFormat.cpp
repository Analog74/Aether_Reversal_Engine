#include <ni/controller_editor/TextClipBoardFormat.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void TextClipBoardFormat::fixupReadData() {
TextClipBoardFormat *pTVar1;
  short *psVar2;
  TextClipBoardFormat TVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  void2 *puVar11;
  long lVar12;
  long lVar13;
  unsigned long uVar14;
  unsigned long uVar15;
  TextClipBoardFormat *pTVar16;
  unsigned long uVar17;
  long lVar18;
  TextClipBoardFormat *pTVar19;
  long lVar20;
  unsigned long uVar21;
  unsigned long uVar22;
  TextClipBoardFormat *pTVar23;
  TextClipBoardFormat *pTVar24;
  
  if (fixupReadData()::s_s0x0d0a == 0) {
    lVar20 = 0;
  }
  else {
    lVar13 = 0;
    do {
      lVar20 = lVar13 + 1;
      psVar2 = &0 + lVar13;
      lVar13 = lVar20;
    } while (*psVar2 != 0);
  }
  if (fixupReadData()::s_s0x0d != 0) {
    lVar13 = 0;
    do {
      psVar2 = &0 + lVar13;
      lVar13 = lVar13 + 1;
    } while (*psVar2 != 0);
  }
  pTVar23 = this + 0x10;
  TVar3 = this[0x10];
  uVar15 = (unsigned long)(byte)TVar3;
  pTVar24 = this + 0x12;
  if (((byte)TVar3 & 1) == 0) {
    uVar14 = (unsigned long)((byte)TVar3 >> 1);
    pTVar16 = pTVar24;
  }
  else {
    pTVar16 = *(TextClipBoardFormat **)(this + 0x20);
    uVar14 = *(unsigned long *)(this + 0x18);
  }
  if (uVar14 != 0) {
    pTVar1 = pTVar16 + uVar14 * 2;
    if (lVar20 != 0) {
      lVar13 = uVar14 * 2;
      do {
        lVar12 = 0;
        do {
          lVar18 = lVar12;
          if (lVar20 * 2 == lVar18) {
            pTVar19 = pTVar16 + lVar18;
            goto joined_r0x0001005d414b;
          }
          if (*(short *)(pTVar16 + lVar18) != *(short *)((long)&fixupReadData()::s_s0x0d0a + lVar18)
             ) {
            puVar11 = &fixupReadData()::s_s0x0d0a;
            pTVar19 = pTVar16 + lVar18;
            return;
          }
          lVar12 = lVar18 + 2;
        } while (lVar13 != lVar18 + 2);
        puVar11 = &0;
        pTVar19 = pTVar1;
        if ((void2 *)((long)puVar11 + lVar18) == &fixupReadData()::s_s0x0d0a + lVar20) {
joined_r0x0001005d414b:
          if (pTVar16 != pTVar19) {
            // boost code
            find_format_all_impl2<// std code
                      ();
            uVar15 = (unsigned long)(byte)*pTVar23;
          }
          break;
        }
        pTVar16 = pTVar16 + 2;
        lVar13 = lVar13 + -2;
      } while (pTVar16 != pTVar1);
    }
  }
  if ((uVar15 & 1) == 0) {
    if ((byte)uVar15 < 2) {
      return;
    }
    if (*(short *)pTVar24 != -0x101) {
      return;
    }
    uVar14 = uVar15 >> 1;
  }
  else {
    uVar14 = *(unsigned long *)(this + 0x18);
    if (uVar14 == 0) {
      return;
    }
    pTVar24 = *(TextClipBoardFormat **)(this + 0x20);
    if (*(short *)pTVar24 != -0x101) {
      return;
    }
  }
  uVar17 = uVar14 - 1;
  if (uVar17 == 0) return;
  uVar15 = uVar17;
  pTVar16 = pTVar24;
  if (uVar17 < 0x10) {
    uVar21 = 0;
    do {
      *(void2 *)(pTVar16 + uVar21 * 2) = *(void2 *)(pTVar16 + uVar21 * 2 + 2);
      uVar21 = uVar21 + 1;
    } while (uVar15 != uVar21);
  }
  else {
    uVar22 = uVar17 & 0xfffffffffffffff0;
    uVar21 = (uVar22 - 0x10 >> 4) + 1;
    uVar15 = (unsigned long)((uint)uVar21 & 3);
    if (uVar22 - 0x10 < 0x30) {
      lVar20 = 0;
    }
    else {
      lVar13 = -(uVar21 & 0xfffffffffffffffc);
      lVar20 = 0;
      do {
        uVar4 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 2 + 8);
        uVar5 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x12);
        uVar6 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x12 + 8);
        uVar7 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x22);
        uVar8 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x22 + 8);
        uVar9 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x32);
        uVar10 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x32 + 8);
        *(unsigned long long *)(pTVar24 + lVar20 * 2) = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 2);
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 8) = uVar4;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x10) = uVar5;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x10 + 8) = uVar6;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x20) = uVar7;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x20 + 8) = uVar8;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x30) = uVar9;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x30 + 8) = uVar10;
        uVar4 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x42 + 8);
        uVar5 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x52);
        uVar6 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x52 + 8);
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x40) = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x42);
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x40 + 8) = uVar4;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x50) = uVar5;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x50 + 8) = uVar6;
        uVar4 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x62 + 8);
        uVar5 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x72);
        uVar6 = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x72 + 8);
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x60) = *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x62);
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x60 + 8) = uVar4;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x70) = uVar5;
        *(unsigned long long *)(pTVar24 + lVar20 * 2 + 0x70 + 8) = uVar6;
        lVar20 = lVar20 + 0x40;
        lVar13 = lVar13 + 4;
      } while (lVar13 != 0);
    }
    if (uVar15 != 0) {
      lVar13 = 0;
      do {
        uVar4 = *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 2 + 8);
        uVar5 = *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 0x12);
        uVar6 = *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 0x12 + 8);
        *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2) =
             *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 2);
        *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 8) = uVar4;
        *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 0x10) = uVar5;
        *(unsigned long long *)(pTVar24 + lVar13 + lVar20 * 2 + 0x10 + 8) = uVar6;
        lVar13 = lVar13 + 0x20;
      } while (uVar15 << 5 != lVar13);
    }
    if (uVar17 != uVar22) {
      uVar15 = (unsigned long)((uint)uVar17 & 0xf);
      pTVar16 = pTVar24 + uVar22 * 2;
      return;
    }
  }
  uVar15 = (unsigned long)(byte)*pTVar23;
  if ((uVar15 & 1) == 0) {
    *pTVar23 = (TextClipBoardFormat)((char)uVar17 * '\x02');
  }
  else {
    *(unsigned long *)(this + 0x18) = uVar17;
  }
  *(void2 *)(pTVar24 + uVar14 * 2 + -2) = 0;
  return;
}

void TextClipBoardFormat::getRawDataSize() const {
if (((byte)this[0x10] & 1) == 0) {
    return (unsigned long)((byte)this[0x10] >> 1) * 2;
  }
  return *(long *)(this + 0x18) * 2;
}

TextClipBoardFormat::TextClipBoardFormat() {
*(unsigned char **)(this + 8) = &s_TextClipboardFormat_UIA;
  *(void ***)this = &PTR__TextClipBoardFormat_101b23438;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  
}

TextClipBoardFormat::~TextClipBoardFormat() {
*(void ***)this = &PTR__TextClipBoardFormat_101b23438;
  if (((byte)this[0x10] & 1) != 0) {
    delete(*(void **)(this + 0x20));
  }
  delete(this);
  return;
}
}
