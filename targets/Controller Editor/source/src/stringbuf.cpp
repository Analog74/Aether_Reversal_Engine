#include <ni/controller_editor/stringbuf.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace std {

void stringbuf::str() const {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long in_RSI;
  unsigned long uVar7;
  unsigned long *in_RDI;
  long lVar8;
  unsigned long uVar9;
  char *pcVar10;
  unsigned long uVar11;
  unsigned long uVar12;
  
  if ((*(uint *)(in_RSI + 0x60) & 0x10) == 0) {
    if ((*(uint *)(in_RSI + 0x60) & 8) == 0) {
      *in_RDI = 0;
      in_RDI[1] = 0;
      in_RDI[2] = 0;
      return;
    }
    pcVar6 = *(char **)(in_RSI + 0x10);
    pcVar10 = *(char **)(in_RSI + 0x20);
    uVar11 = (long)pcVar10 - (long)pcVar6;
    if (uVar11 < 0xfffffffffffffff0) {
      if (uVar11 < 0x17) {
        *(char *)in_RDI = (char)uVar11 * '\x02';
        pcVar4 = (char *)((long)in_RDI + 1);
      }
      else {
        uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
        pcVar4 = (char *)new char[uVar12];
        in_RDI[2] = (unsigned long)pcVar4;
        *in_RDI = uVar12 | 1;
        in_RDI[1] = uVar11;
      }
      if (pcVar6 != pcVar10) {
        if ((0x1f < uVar11) && ((pcVar10 <= pcVar4 || (pcVar4 + uVar11 <= pcVar6)))) {
          uVar9 = uVar11 & 0xffffffffffffffe0;
          uVar7 = (uVar9 - 0x20 >> 5) + 1;
          uVar12 = (unsigned long)((uint)uVar7 & 3);
          if (uVar9 - 0x20 < 0x60) {
            lVar8 = 0;
          }
          else {
            lVar5 = -(uVar7 & 0xfffffffffffffffc);
            lVar8 = 0;
            do {
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x10);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x10 + 8);
              *(unsigned long long *)(pcVar4 + lVar8) = *(unsigned long long *)(pcVar6 + lVar8);
              *(unsigned long long *)(pcVar4 + lVar8 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x10) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x10 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x20 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x30);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x30 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x20) = *(unsigned long long *)(pcVar6 + lVar8 + 0x20);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x20 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x30) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x30 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x40 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x50);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x50 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x40) = *(unsigned long long *)(pcVar6 + lVar8 + 0x40);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x40 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x50) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x50 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x60 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x70);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x70 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x60) = *(unsigned long long *)(pcVar6 + lVar8 + 0x60);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x60 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x70) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x70 + 8) = uVar3;
              lVar8 = lVar8 + 0x80;
              lVar5 = lVar5 + 4;
            } while (lVar5 != 0);
          }
          if (uVar12 != 0) {
            lVar5 = 0;
            do {
              uVar1 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 0x10);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 0x10 + 8);
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8) = *(unsigned long long *)(pcVar6 + lVar5 + lVar8);
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 0x10) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 0x10 + 8) = uVar3;
              lVar5 = lVar5 + 0x20;
            } while (uVar12 << 5 != lVar5);
          }
          pcVar4 = pcVar4 + uVar9;
          if (uVar11 == uVar9) return;
          pcVar6 = pcVar6 + uVar9;
        }
        do {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        } while (pcVar10 != pcVar6);
      }
      return;
    }
  }
  else {
    pcVar6 = *(char **)(in_RSI + 0x30);
    pcVar10 = *(char **)(in_RSI + 0x58);
    if (*(char **)(in_RSI + 0x58) < pcVar6) {
      *(char **)(in_RSI + 0x58) = pcVar6;
      pcVar10 = pcVar6;
    }
    pcVar6 = *(char **)(in_RSI + 0x28);
    uVar11 = (long)pcVar10 - (long)pcVar6;
    if (uVar11 < 0xfffffffffffffff0) {
      if (uVar11 < 0x17) {
        *(char *)in_RDI = (char)uVar11 * '\x02';
        pcVar4 = (char *)((long)in_RDI + 1);
      }
      else {
        uVar12 = uVar11 + 0x10 & 0xfffffffffffffff0;
        pcVar4 = (char *)new char[uVar12];
        in_RDI[2] = (unsigned long)pcVar4;
        *in_RDI = uVar12 | 1;
        in_RDI[1] = uVar11;
      }
      if (pcVar6 != pcVar10) {
        if ((0x1f < uVar11) && ((pcVar10 <= pcVar4 || (pcVar4 + uVar11 <= pcVar6)))) {
          uVar9 = uVar11 & 0xffffffffffffffe0;
          uVar7 = (uVar9 - 0x20 >> 5) + 1;
          uVar12 = (unsigned long)((uint)uVar7 & 3);
          if (uVar9 - 0x20 < 0x60) {
            lVar8 = 0;
          }
          else {
            lVar5 = -(uVar7 & 0xfffffffffffffffc);
            lVar8 = 0;
            do {
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x10);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x10 + 8);
              *(unsigned long long *)(pcVar4 + lVar8) = *(unsigned long long *)(pcVar6 + lVar8);
              *(unsigned long long *)(pcVar4 + lVar8 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x10) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x10 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x20 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x30);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x30 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x20) = *(unsigned long long *)(pcVar6 + lVar8 + 0x20);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x20 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x30) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x30 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x40 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x50);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x50 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x40) = *(unsigned long long *)(pcVar6 + lVar8 + 0x40);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x40 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x50) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x50 + 8) = uVar3;
              uVar1 = *(unsigned long long *)(pcVar6 + lVar8 + 0x60 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar8 + 0x70);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar8 + 0x70 + 8);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x60) = *(unsigned long long *)(pcVar6 + lVar8 + 0x60);
              *(unsigned long long *)(pcVar4 + lVar8 + 0x60 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x70) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar8 + 0x70 + 8) = uVar3;
              lVar8 = lVar8 + 0x80;
              lVar5 = lVar5 + 4;
            } while (lVar5 != 0);
          }
          if (uVar12 != 0) {
            lVar5 = 0;
            do {
              uVar1 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 8);
              uVar2 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 0x10);
              uVar3 = *(unsigned long long *)(pcVar6 + lVar5 + lVar8 + 0x10 + 8);
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8) = *(unsigned long long *)(pcVar6 + lVar5 + lVar8);
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 8) = uVar1;
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 0x10) = uVar2;
              *(unsigned long long *)(pcVar4 + lVar5 + lVar8 + 0x10 + 8) = uVar3;
              lVar5 = lVar5 + 0x20;
            } while (uVar12 << 5 != lVar5);
          }
          pcVar4 = pcVar4 + uVar9;
          if (uVar9 == uVar11) return;
          pcVar6 = pcVar6 + uVar9;
        }
        do {
          *pcVar4 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar4 = pcVar4 + 1;
        } while (pcVar10 != pcVar6);
      }
      *pcVar4 = '\0';
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  // std code
}

stringbuf::~stringbuf() {
*(void **)this = (char*)PTR_vtable_101ab4590 + 0x10;
  if (((byte)this[0x40] & 1) != 0) {
    delete(*(void **)(this + 0x50));
  }
  // std code
  delete(this);
  return;
}
}
