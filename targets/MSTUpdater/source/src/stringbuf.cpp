#include <ni/controller_editor/stringbuf.hpp>
namespace std {

void stringbuf::overflow(int param_1) {
}

void stringbuf::pbackfail(int param_1) {
}

void stringbuf::str() const {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  char *pcVar4;
  unsigned long uVar5;
  char *pcVar6;
  uint uVar7;
  long in_RSI;
  long lVar8;
  char *pcVar9;
  unsigned long *in_RDI;
  long lVar10;
  char *pcVar11;
  unsigned long uVar12;
  char *pcVar13;
  
  if ((*(uint *)(in_RSI + 0x60) & 0x10) == 0) {
    if ((*(uint *)(in_RSI + 0x60) & 8) == 0) {
      in_RDI[2] = 0;
      in_RDI[1] = 0;
      *in_RDI = 0;
      return;
    }
    pcVar6 = *(char **)(in_RSI + 0x10);
    pcVar13 = *(char **)(in_RSI + 0x20);
    in_RDI[2] = 0;
    in_RDI[1] = 0;
    *in_RDI = 0;
    uVar12 = (long)pcVar13 - (long)pcVar6;
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (uVar12 < 0x17) {
      *(char *)in_RDI = (char)uVar12 * '\x02';
      pcVar4 = (char *)((long)in_RDI + 1);
    }
    else {
      uVar5 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pcVar4 = (char *)new(uVar5);
      in_RDI[2] = (unsigned long)pcVar4;
      *in_RDI = uVar5 | 1;
      in_RDI[1] = uVar12;
    }
    if (pcVar6 == pcVar13) goto LAB_1001ace13;
    pcVar9 = pcVar4;
    if (((0x1f < uVar12) && (uVar5 = uVar12 & 0xffffffffffffffe0, uVar5 != 0)) &&
       ((pcVar13 <= pcVar4 || (pcVar4 + uVar12 <= pcVar6)))) {
      uVar7 = ((uint)(uVar5 - 0x20 >> 5) & 0x7ffffff) + 1;
      if ((uVar7 & 3) == 0) {
        lVar10 = 0;
      }
      else {
        lVar8 = -((unsigned long)uVar7 & 3);
        lVar10 = 0;
        do {
          uVar1 = *(unsigned long long *)(pcVar6 + lVar10 + 8);
          uVar2 = *(unsigned long long *)(pcVar6 + lVar10 + 0x10);
          uVar3 = *(unsigned long long *)(pcVar6 + lVar10 + 0x10 + 8);
          *(unsigned long long *)(pcVar4 + lVar10) = *(unsigned long long *)(pcVar6 + lVar10);
          *(unsigned long long *)(pcVar4 + lVar10 + 8) = uVar1;
          *(unsigned long long *)(pcVar4 + lVar10 + 0x10) = uVar2;
          *(unsigned long long *)(pcVar4 + lVar10 + 0x10 + 8) = uVar3;
          lVar10 = lVar10 + 0x20;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0);
      }
      if (0x5f < uVar5 - 0x20) {
        lVar8 = uVar5 - lVar10;
        pcVar9 = pcVar4 + lVar10 + 0x70;
        pcVar11 = pcVar6 + lVar10 + 0x70;
        do {
          uVar1 = *(unsigned long long *)(pcVar11 + -0x68);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x60);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x58);
          *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar11 + -0x70);
          *(unsigned long long *)(pcVar9 + -0x68) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x60) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x58) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -0x48);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x40);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x38);
          *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar11 + -0x50);
          *(unsigned long long *)(pcVar9 + -0x48) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x40) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x38) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -0x28);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x20);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x18);
          *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar11 + -0x30);
          *(unsigned long long *)(pcVar9 + -0x28) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x20) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x18) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -8);
          uVar2 = *(unsigned long long *)pcVar11;
          uVar3 = *(unsigned long long *)(pcVar11 + 8);
          *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar11 + -0x10);
          *(unsigned long long *)(pcVar9 + -8) = uVar1;
          *(unsigned long long *)pcVar9 = uVar2;
          *(unsigned long long *)(pcVar9 + 8) = uVar3;
          pcVar9 = pcVar9 + 0x80;
          pcVar11 = pcVar11 + 0x80;
          lVar8 = lVar8 + -0x80;
        } while (lVar8 != 0);
      }
      if (uVar12 == uVar5) goto LAB_1001ace10;
      pcVar6 = pcVar6 + uVar5;
      pcVar9 = pcVar4 + uVar5;
    }
    do {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (pcVar13 != pcVar6);
  }
  else {
    pcVar6 = *(char **)(in_RSI + 0x30);
    pcVar13 = *(char **)(in_RSI + 0x58);
    if (*(char **)(in_RSI + 0x58) < pcVar6) {
      *(char **)(in_RSI + 0x58) = pcVar6;
      pcVar13 = pcVar6;
    }
    pcVar6 = *(char **)(in_RSI + 0x28);
    in_RDI[2] = 0;
    in_RDI[1] = 0;
    *in_RDI = 0;
    uVar12 = (long)pcVar13 - (long)pcVar6;
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (uVar12 < 0x17) {
      *(char *)in_RDI = (char)uVar12 * '\x02';
      pcVar4 = (char *)((long)in_RDI + 1);
    }
    else {
      uVar5 = uVar12 + 0x10 & 0xfffffffffffffff0;
      pcVar4 = (char *)new(uVar5);
      in_RDI[2] = (unsigned long)pcVar4;
      *in_RDI = uVar5 | 1;
      in_RDI[1] = uVar12;
    }
    if (pcVar6 == pcVar13) goto LAB_1001ace13;
    pcVar9 = pcVar4;
    if (((0x1f < uVar12) && (uVar5 = uVar12 & 0xffffffffffffffe0, uVar5 != 0)) &&
       ((pcVar13 <= pcVar4 || (pcVar4 + uVar12 <= pcVar6)))) {
      uVar7 = ((uint)(uVar5 - 0x20 >> 5) & 0x7ffffff) + 1;
      if ((uVar7 & 3) == 0) {
        lVar10 = 0;
      }
      else {
        lVar8 = -((unsigned long)uVar7 & 3);
        lVar10 = 0;
        do {
          uVar1 = *(unsigned long long *)(pcVar6 + lVar10 + 8);
          uVar2 = *(unsigned long long *)(pcVar6 + lVar10 + 0x10);
          uVar3 = *(unsigned long long *)(pcVar6 + lVar10 + 0x10 + 8);
          *(unsigned long long *)(pcVar4 + lVar10) = *(unsigned long long *)(pcVar6 + lVar10);
          *(unsigned long long *)(pcVar4 + lVar10 + 8) = uVar1;
          *(unsigned long long *)(pcVar4 + lVar10 + 0x10) = uVar2;
          *(unsigned long long *)(pcVar4 + lVar10 + 0x10 + 8) = uVar3;
          lVar10 = lVar10 + 0x20;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0);
      }
      if (0x5f < uVar5 - 0x20) {
        lVar8 = uVar5 - lVar10;
        pcVar9 = pcVar4 + lVar10 + 0x70;
        pcVar11 = pcVar6 + lVar10 + 0x70;
        do {
          uVar1 = *(unsigned long long *)(pcVar11 + -0x68);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x60);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x58);
          *(unsigned long long *)(pcVar9 + -0x70) = *(unsigned long long *)(pcVar11 + -0x70);
          *(unsigned long long *)(pcVar9 + -0x68) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x60) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x58) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -0x48);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x40);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x38);
          *(unsigned long long *)(pcVar9 + -0x50) = *(unsigned long long *)(pcVar11 + -0x50);
          *(unsigned long long *)(pcVar9 + -0x48) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x40) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x38) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -0x28);
          uVar2 = *(unsigned long long *)(pcVar11 + -0x20);
          uVar3 = *(unsigned long long *)(pcVar11 + -0x18);
          *(unsigned long long *)(pcVar9 + -0x30) = *(unsigned long long *)(pcVar11 + -0x30);
          *(unsigned long long *)(pcVar9 + -0x28) = uVar1;
          *(unsigned long long *)(pcVar9 + -0x20) = uVar2;
          *(unsigned long long *)(pcVar9 + -0x18) = uVar3;
          uVar1 = *(unsigned long long *)(pcVar11 + -8);
          uVar2 = *(unsigned long long *)pcVar11;
          uVar3 = *(unsigned long long *)(pcVar11 + 8);
          *(unsigned long long *)(pcVar9 + -0x10) = *(unsigned long long *)(pcVar11 + -0x10);
          *(unsigned long long *)(pcVar9 + -8) = uVar1;
          *(unsigned long long *)pcVar9 = uVar2;
          *(unsigned long long *)(pcVar9 + 8) = uVar3;
          pcVar9 = pcVar9 + 0x80;
          pcVar11 = pcVar11 + 0x80;
          lVar8 = lVar8 + -0x80;
        } while (lVar8 != 0);
      }
      if (uVar12 == uVar5) goto LAB_1001ace10;
      pcVar6 = pcVar6 + uVar5;
      pcVar9 = pcVar4 + uVar5;
    }
    do {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    } while (pcVar13 != pcVar6);
  }
LAB_1001ace10:
  pcVar4 = pcVar4 + uVar12;
LAB_1001ace13:
  *pcVar4 = '\0';
  return;
}

void stringbuf::underflow() {
unsigned long uVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(this + 0x30);
  pbVar2 = *(byte **)(this + 0x58);
  if (*(byte **)(this + 0x58) < pbVar3) {
    *(byte **)(this + 0x58) = pbVar3;
    pbVar2 = pbVar3;
  }
  uVar1 = 0xffffffff;
  if (((byte)this[0x60] & 8) != 0) {
    pbVar3 = *(byte **)(this + 0x20);
    if (*(byte **)(this + 0x20) < pbVar2) {
      *(byte **)(this + 0x20) = pbVar2;
      pbVar3 = pbVar2;
    }
    if (*(byte **)(this + 0x18) < pbVar3) {
      uVar1 = (unsigned long)**(byte **)(this + 0x18);
    }
  }
  return uVar1;
}

stringbuf::~stringbuf() {
*(void **)this = PTR_vtable_100227290 + 0x10;
  // std code
  // std code
  delete(this);
  return;
}
}
