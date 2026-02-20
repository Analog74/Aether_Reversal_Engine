#include <ni/controller_editor/path.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::filesystem {

void path::append_v3(char const*, char const*) {
path pVar1;
  void *pvVar2;
  path *ppVar3;
  unsigned long uVar4;
  unsigned long uVar5;
  unsigned long long local_48;
  unsigned long local_40;
  void *local_38;
  
  if (param_1 == param_2) {
    return;
  }
  pVar1 = *this;
  if (((byte)pVar1 & 1) == 0) {
    ppVar3 = this + 1;
    if (param_1 < ppVar3) {
      if (*param_1 == '/') return;
    }
    else {
      uVar4 = (unsigned long)((byte)pVar1 >> 1);
      if (param_1 < ppVar3 + uVar4) {
        uVar4 = (long)param_2 - (long)param_1;
        if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (uVar4 < 0x17) {
          local_48 = 0(local_48._1_7_,(char)uVar4 * '\x02');
          pvVar2 = (void *)((long)&local_48 + 1);
        }
        else {
          uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
          pvVar2 = new char[uVar5];
          local_48 = uVar5 | 1;
          local_40 = uVar4;
          local_38 = pvVar2;
        }
        memcpy(pvVar2,param_1,uVar4);
        *(unsigned char *)((long)pvVar2 + uVar4) = 0;
        append_v3(this,(path *)&local_48);
        if ((local_48 & 1) == 0) {
          return;
        }
        delete(local_38);
        return;
      }
      if (*param_1 == '/') return;
      if (((byte)pVar1 & 1) != 0) return;
    }
    if ((byte)pVar1 < 2) return;
    pVar1 = this[(byte)pVar1 >> 1];
  }
  else {
    ppVar3 = *(path **)(this + 0x10);
    if (ppVar3 <= param_1) {
      uVar4 = *(unsigned long *)(this + 8);
      return;
    }
    if (*param_1 == '/') return;
    if (*(long *)(this + 8) == 0) return;
    pVar1 = *(path *)(*(long *)(this + 0x10) + -1 + *(long *)(this + 8));
  }
  if (pVar1 != (path)0x2f) {
    // std code
  }
  // std code
  return;
}

void path::find_relative_path() const {
path *ppVar1;
  char *pcVar2;
  path pVar3;
  long lVar4;
  void *pvVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  size_t sVar8;
  
  pVar3 = *this;
  if (((byte)pVar3 & 1) == 0) {
    ppVar1 = this + 1;
    uVar7 = (unsigned long)((byte)pVar3 >> 1);
  }
  else {
    uVar7 = *(unsigned long *)(this + 8);
    ppVar1 = *(path **)(this + 0x10);
  }
  if (uVar7 != 0) {
    uVar6 = uVar7;
    if (*ppVar1 != (path)0x2f) goto joined_r0x00010092d13c;
    if ((1 < uVar7) && (ppVar1[1] == (path)0x2f)) {
      uVar6 = 2;
      if (uVar7 == 2) goto joined_r0x00010092d13c;
      if (ppVar1[2] != (path)0x2f) {
        sVar8 = uVar7 - 2;
        pvVar5 = _memchr(ppVar1 + 2,0x2f,sVar8);
        if (pvVar5 != (void *)0x0) {
          sVar8 = (long)pvVar5 - (long)(ppVar1 + 2);
        }
        uVar6 = sVar8 + 2;
        goto joined_r0x00010092d13c;
      }
    }
  }
  uVar6 = 0;
joined_r0x00010092d13c:
  if (((byte)pVar3 & 1) == 0) {
    if (uVar6 < (byte)pVar3 >> 1) {
      do {
        if ((unsigned long)((byte)pVar3 >> 1) <= uVar6 + 1) {
          return;
        }
        lVar4 = uVar6 + 2;
        uVar6 = uVar6 + 1;
      } while (this[lVar4] == (path)0x2f);
    }
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, uVar6 < *(unsigned long *(this + 8 {
    do {
      if (*(unsigned long *(this + 8) <= uVar6 + 1) {
        return;
      }
      pcVar2 = (char *)(*(long *)(this + 0x10) + 1 + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar2 == '/');
  }
  return;
}

void path::find_root_directory() const {
path *ppVar1;
  unsigned long uVar2;
  
  if (((byte)*this & 1) == 0) {
    ppVar1 = this + 1;
    uVar2 = (unsigned long)((byte)*this >> 1);
  }
  else {
    uVar2 = *(unsigned long *)(this + 8);
    ppVar1 = *(path **)(this + 0x10);
  }
  if ((((uVar2 != 0) && (*ppVar1 == (path)0x2f)) && (1 < uVar2)) &&
     (((ppVar1[1] == (path)0x2f && (uVar2 != 2)) && (ppVar1[2] != (path)0x2f)))) {
    _memchr(ppVar1 + 2,0x2f,uVar2 - 2);
  }
  return;
}

void path::remove_filename() {
unsigned long uVar1;
  
  uVar1 = find_parent_path_size(this);
  // std code
  return this;
}

void path::root_name() const {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  byte *pbVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *in_RSI;
  unsigned long *in_RDI;
  unsigned long uVar9;
  unsigned long uVar10;
  byte *pbVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  size_t sVar14;
  
  if ((*in_RSI & 1) == 0) {
    pbVar8 = in_RSI + 1;
    uVar13 = (unsigned long)(*in_RSI >> 1);
    if (uVar13 == 0) return;
    uVar12 = 0;
    if ((uVar13 == 1) || (*pbVar8 != 0x2f)) return;
    if (pbVar8[1] != 0x2f) return;
    uVar12 = 2;
    if (uVar13 == 2) return;
    if (pbVar8[2] == 0x2f) return;
    sVar14 = uVar13 - 2;
    pvVar5 = _memchr(pbVar8 + 2,0x2f,sVar14);
    if (pvVar5 != (void *)0x0) {
      sVar14 = (long)pvVar5 - (long)(pbVar8 + 2);
    }
    uVar12 = sVar14 + 2;
    if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    pbVar11 = pbVar8 + sVar14 + 2;
    if (uVar12 < 0x17) return;
    uVar13 = sVar14 + 0x12 & 0xfffffffffffffff0;
    pbVar4 = (byte *)new char[uVar13];
    in_RDI[2] = (unsigned long)pbVar4;
    *in_RDI = uVar13 | 1;
    in_RDI[1] = uVar12;
    uVar13 = (long)pbVar11 - (long)pbVar8;
  }
  else {
    uVar13 = *(unsigned long *)(in_RSI + 8);
    pbVar8 = *(byte **)(in_RSI + 0x10);
    if (uVar13 != 0) return;
    uVar12 = 0;
    pbVar11 = pbVar8 + uVar12;
    *(char *)in_RDI = (char)uVar12 * '\x02';
    pbVar4 = (byte *)((long)in_RDI + 1);
    if (uVar12 == 0) return;
    uVar13 = (long)pbVar11 - (long)pbVar8;
  }
  if ((0x1f < uVar13) && ((pbVar11 <= pbVar4 || (pbVar4 + uVar13 <= pbVar8)))) {
    uVar10 = uVar13 & 0xffffffffffffffe0;
    uVar9 = (uVar10 - 0x20 >> 5) + 1;
    uVar12 = (unsigned long)((uint)uVar9 & 3);
    if (uVar10 - 0x20 < 0x60) {
      lVar7 = 0;
    }
    else {
      lVar6 = -(uVar9 & 0xfffffffffffffffc);
      lVar7 = 0;
      do {
        uVar1 = *(unsigned long long *)(pbVar8 + lVar7 + 8);
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x10);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pbVar4 + lVar7) = *(unsigned long long *)(pbVar8 + lVar7);
        *(unsigned long long *)(pbVar4 + lVar7 + 8) = uVar1;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x10) = uVar2;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x10 + 8) = uVar3;
        uVar1 = *(unsigned long long *)(pbVar8 + lVar7 + 0x20 + 8);
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x30);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x30 + 8);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x20) = *(unsigned long long *)(pbVar8 + lVar7 + 0x20);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x20 + 8) = uVar1;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x30) = uVar2;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x30 + 8) = uVar3;
        uVar1 = *(unsigned long long *)(pbVar8 + lVar7 + 0x40 + 8);
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x50);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x50 + 8);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x40) = *(unsigned long long *)(pbVar8 + lVar7 + 0x40);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x40 + 8) = uVar1;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x50) = uVar2;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x50 + 8) = uVar3;
        uVar1 = *(unsigned long long *)(pbVar8 + lVar7 + 0x60 + 8);
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x70);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x70 + 8);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x60) = *(unsigned long long *)(pbVar8 + lVar7 + 0x60);
        *(unsigned long long *)(pbVar4 + lVar7 + 0x60 + 8) = uVar1;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x70) = uVar2;
        *(unsigned long long *)(pbVar4 + lVar7 + 0x70 + 8) = uVar3;
        lVar7 = lVar7 + 0x80;
        lVar6 = lVar6 + 4;
      } while (lVar6 != 0);
    }
    if (uVar12 != 0) {
      lVar6 = 0;
      do {
        uVar1 = *(unsigned long long *)(pbVar8 + lVar6 + lVar7 + 8);
        uVar2 = *(unsigned long long *)(pbVar8 + lVar6 + lVar7 + 0x10);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar6 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pbVar4 + lVar6 + lVar7) = *(unsigned long long *)(pbVar8 + lVar6 + lVar7);
        *(unsigned long long *)(pbVar4 + lVar6 + lVar7 + 8) = uVar1;
        *(unsigned long long *)(pbVar4 + lVar6 + lVar7 + 0x10) = uVar2;
        *(unsigned long long *)(pbVar4 + lVar6 + lVar7 + 0x10 + 8) = uVar3;
        lVar6 = lVar6 + 0x20;
      } while (uVar12 << 5 != lVar6);
    }
    pbVar4 = pbVar4 + uVar10;
    if (uVar10 == uVar13) return;
    pbVar8 = pbVar8 + uVar10;
  }
  do {
    *pbVar4 = *pbVar8;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
  } while (pbVar11 != pbVar8);
  *pbVar4 = 0;
  return;
}

void path::root_path() const {
byte bVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  void *pvVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *in_RSI;
  long lVar10;
  unsigned long *in_RDI;
  unsigned long uVar11;
  unsigned long uVar12;
  unsigned long uVar13;
  unsigned long uVar14;
  size_t sVar15;
  
  bVar1 = *in_RSI;
  if ((bVar1 & 1) == 0) {
    pbVar8 = in_RSI + 1;
    uVar14 = (unsigned long)(bVar1 >> 1);
    if (uVar14 == 0) return;
    if (*pbVar8 != 0x2f) {
      uVar13 = 0;
      uVar11 = uVar14;
      goto joined_r0x00010092aadb;
    }
    if ((uVar14 < 2) || (pbVar8[1] != 0x2f)) return;
    uVar13 = 2;
    uVar11 = 2;
    if (uVar14 == 2) goto joined_r0x00010092aadb;
    if (pbVar8[2] == 0x2f) return;
    sVar15 = uVar14 - 2;
    pvVar5 = _memchr(pbVar8 + 2,0x2f,sVar15);
    if (pvVar5 != (void *)0x0) {
      sVar15 = (long)pvVar5 - (long)(pbVar8 + 2);
    }
    uVar11 = sVar15 + 2;
    uVar13 = uVar11;
    if ((bVar1 & 1) == 0) return;
    uVar14 = *(unsigned long *)(in_RSI + 8);
  }
  else {
    uVar14 = *(unsigned long *)(in_RSI + 8);
    pbVar8 = *(byte **)(in_RSI + 0x10);
    if (uVar14 != 0) return;
    uVar13 = 0;
    uVar11 = 0;
joined_r0x00010092aadb:
    if ((bVar1 & 1) != 0) return;
    uVar14 = (unsigned long)(bVar1 >> 1);
  }
  if (uVar11 < uVar14) {
    uVar13 = uVar11 + 1;
  }
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (uVar13 < 0x17) {
    *(char *)in_RDI = (char)uVar13 * '\x02';
    pbVar6 = (byte *)((long)in_RDI + 1);
    if (uVar13 == 0) return;
  }
  else {
    uVar14 = uVar13 + 0x10 & 0xfffffffffffffff0;
    pbVar6 = (byte *)new char[uVar14];
    in_RDI[2] = (unsigned long)pbVar6;
    *in_RDI = uVar14 | 1;
    in_RDI[1] = uVar13;
  }
  pbVar9 = pbVar8;
  if ((0x1f < uVar13) && ((pbVar8 + uVar13 <= pbVar6 || (pbVar6 + uVar13 <= pbVar8)))) {
    uVar11 = uVar13 & 0xffffffffffffffe0;
    uVar14 = (uVar11 - 0x20 >> 5) + 1;
    uVar12 = (unsigned long)((uint)uVar14 & 3);
    if (uVar11 - 0x20 < 0x60) {
      lVar7 = 0;
    }
    else {
      lVar10 = -(uVar14 & 0xfffffffffffffffc);
      lVar7 = 0;
      do {
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 8);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x10);
        uVar4 = *(unsigned long long *)(pbVar8 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pbVar6 + lVar7) = *(unsigned long long *)(pbVar8 + lVar7);
        *(unsigned long long *)(pbVar6 + lVar7 + 8) = uVar2;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x10) = uVar3;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x10 + 8) = uVar4;
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x20 + 8);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x30);
        uVar4 = *(unsigned long long *)(pbVar8 + lVar7 + 0x30 + 8);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x20) = *(unsigned long long *)(pbVar8 + lVar7 + 0x20);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x20 + 8) = uVar2;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x30) = uVar3;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x30 + 8) = uVar4;
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x40 + 8);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x50);
        uVar4 = *(unsigned long long *)(pbVar8 + lVar7 + 0x50 + 8);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x40) = *(unsigned long long *)(pbVar8 + lVar7 + 0x40);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x40 + 8) = uVar2;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x50) = uVar3;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x50 + 8) = uVar4;
        uVar2 = *(unsigned long long *)(pbVar8 + lVar7 + 0x60 + 8);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar7 + 0x70);
        uVar4 = *(unsigned long long *)(pbVar8 + lVar7 + 0x70 + 8);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x60) = *(unsigned long long *)(pbVar8 + lVar7 + 0x60);
        *(unsigned long long *)(pbVar6 + lVar7 + 0x60 + 8) = uVar2;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x70) = uVar3;
        *(unsigned long long *)(pbVar6 + lVar7 + 0x70 + 8) = uVar4;
        lVar7 = lVar7 + 0x80;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0);
    }
    if (uVar12 != 0) {
      lVar10 = 0;
      do {
        uVar2 = *(unsigned long long *)(pbVar8 + lVar10 + lVar7 + 8);
        uVar3 = *(unsigned long long *)(pbVar8 + lVar10 + lVar7 + 0x10);
        uVar4 = *(unsigned long long *)(pbVar8 + lVar10 + lVar7 + 0x10 + 8);
        *(unsigned long long *)(pbVar6 + lVar10 + lVar7) = *(unsigned long long *)(pbVar8 + lVar10 + lVar7);
        *(unsigned long long *)(pbVar6 + lVar10 + lVar7 + 8) = uVar2;
        *(unsigned long long *)(pbVar6 + lVar10 + lVar7 + 0x10) = uVar3;
        *(unsigned long long *)(pbVar6 + lVar10 + lVar7 + 0x10 + 8) = uVar4;
        lVar10 = lVar10 + 0x20;
      } while (uVar12 << 5 != lVar10);
    }
    pbVar6 = pbVar6 + uVar11;
    if (uVar13 == uVar11) return;
    pbVar9 = pbVar8 + uVar11;
  }
  do {
    *pbVar6 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    pbVar6 = pbVar6 + 1;
  } while (pbVar8 + uVar13 != pbVar9);
  *pbVar6 = 0;
  return in_RDI;
}

path::~path() {
if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
