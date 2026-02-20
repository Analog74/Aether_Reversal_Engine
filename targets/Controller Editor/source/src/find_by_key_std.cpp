#include <ni/controller_editor/find_by_key_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::object {

void find_by_key(std::string const&) const {
byte bVar1;
  string sVar2;
  byte *pbVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  string *psVar7;
  long lVar8;
  unsigned long uVar9;
  unsigned long uVar10;
  size_t sVar11;
  unsigned long uVar12;
  byte *pbVar13;
  size_t sVar14;
  unsigned long uVar15;
  byte *pbVar16;
  unsigned long uVar17;
  
  pbVar16 = *(byte **)this;
  pbVar3 = *(byte **)(this + 8);
  if (this[0x18] == (object)0x0) {
    if ((long)pbVar3 - (long)pbVar16 != 0) {
      if (((byte)*param_1 & 1) == 0) {
        uVar15 = (unsigned long)((byte)*param_1 >> 1);
        psVar7 = param_1 + 1;
      }
      else {
        uVar15 = *(unsigned long *)(param_1 + 8);
        psVar7 = *(string **)(param_1 + 0x10);
      }
      uVar9 = (long)pbVar3 - (long)pbVar16 >> 5;
      do {
        uVar17 = uVar9 >> 1;
        lVar8 = uVar17 * 0x20;
        bVar1 = pbVar16[lVar8];
        if ((bVar1 & 1) == 0) {
          uVar12 = (unsigned long)(bVar1 >> 1);
        }
        else {
          uVar12 = *(unsigned long *)(pbVar16 + lVar8 + 8);
        }
        uVar10 = uVar12;
        if (uVar15 < uVar12) {
          uVar10 = uVar15;
        }
        if (uVar10 == 0) {
          uVar6 = (uint)(uVar15 < uVar12);
          if (uVar12 < uVar15) {
            uVar6 = 0xffffffff;
          }
        }
        else {
          if ((bVar1 & 1) == 0) {
            pbVar13 = pbVar16 + lVar8 + 1;
          }
          else {
            pbVar13 = *(byte **)(pbVar16 + lVar8 + 0x10);
          }
          uVar6 = _memcmp(pbVar13,psVar7,uVar10);
          if (uVar6 == 0) return;
        }
        uVar12 = uVar9 + ~uVar17;
        uVar9 = uVar17;
        if ((int)uVar6 < 0) {
          pbVar16 = pbVar16 + lVar8 + 0x20;
          uVar9 = uVar12;
        }
      } while (uVar9 != 0);
    }
    if (pbVar16 != pbVar3) {
      sVar2 = *param_1;
      sVar11 = (unsigned long)((byte)sVar2 >> 1);
      if (((byte)sVar2 & 1) != 0) {
        sVar11 = *(size_t *)(param_1 + 8);
      }
      bVar1 = *pbVar16;
      if ((bVar1 & 1) == 0) {
        sVar14 = (size_t)(bVar1 >> 1);
      }
      else {
        sVar14 = *(size_t *)(pbVar16 + 8);
      }
      if (sVar11 != sVar14) {
        return pbVar3;
      }
      if ((bVar1 & 1) == 0) {
        pbVar13 = pbVar16 + 1;
      }
      else {
        pbVar13 = *(byte **)(pbVar16 + 0x10);
      }
      if (((byte)sVar2 & 1) == 0) {
        if (sVar11 != 0) {
          uVar15 = 0;
          do {
            if (param_1[uVar15 + 1] != *(string *)(pbVar13 + uVar15)) {
              return pbVar3;
            }
            uVar15 = uVar15 + 1;
          } while ((byte)sVar2 >> 1 != uVar15);
        }
      }
      else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, (sVar11 != 0 &&
              (iVar5 = _memcmp(*(void **(param_1 + 0x10,pbVar13,sVar11, iVar5 != 0 {
        return pbVar3;
      }
    }
  }
  else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, pbVar16 != pbVar3 {
    uVar15 = (unsigned long((byte*param_1 >> 1;
    if (((byte*param_1 & 1 != 0 {
      sVar11 = *(size_t *)(param_1 + 8);
      if (sVar11 == 0) {
        do {
          if ((*pbVar16 & 1) == 0) {
            if (*pbVar16 >> 1 == 0) {
              return pbVar16;
            }
          }
          else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, *(long *(pbVar16 + 8 == 0 {
            return pbVar16;
          }
          pbVar16 = pbVar16 + 0x20;
        } while (pbVar16 != pbVar3;
        return pbVar3;
      }
      pvVar4 = *(void **(param_1 + 0x10;
      do {
        bVar1 = *pbVar16;
        sVar14 = (unsigned long(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          sVar14 = *(size_t *)(pbVar16 + 8);
        }
        if (sVar14 == sVar11) {
          if ((bVar1 & 1) == 0) {
            uVar15 = 0;
            while (pbVar16[uVar15 + 1] == *(byte *)((long)pvVar4 + uVar15)) {
              uVar15 = uVar15 + 1;
              if (bVar1 >> 1 == uVar15) {
                return pbVar16;
              }
            }
          }
          else {
            iVar5 = _memcmp(*(void **)(pbVar16 + 0x10),pvVar4,sVar11);
            if (iVar5 == 0) {
              return pbVar16;
            }
          }
        }
        pbVar16 = pbVar16 + 0x20;
      } while (pbVar16 != pbVar3);
      return pbVar3;
    }
    if (uVar15 == 0) {
      do {
        if ((*pbVar16 & 1) == 0) {
          if (*pbVar16 >> 1 == 0) {
            return pbVar16;
          }
        }
        else if(1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, 1 param_1, *(long *(pbVar16 + 8 == 0 {
          return pbVar16;
        }
        pbVar16 = pbVar16 + 0x20;
      } while (pbVar16 != pbVar3;
      return pbVar3;
    }
    do {
      bVar1 = *pbVar16;
      uVar9 = (unsigned long(bVar1 >> 1;
      if ((bVar1 & 1 != 0) {
        uVar9 = *(unsigned long *)(pbVar16 + 8);
      }
      if (uVar9 == uVar15) {
        if ((bVar1 & 1) == 0) {
          uVar9 = 0;
          while (*(string *)(pbVar16 + uVar9 + 1) == param_1[uVar9 + 1]) {
            uVar9 = uVar9 + 1;
            if (bVar1 >> 1 == uVar9) {
              return pbVar16;
            }
          }
        }
        else {
          iVar5 = _memcmp(*(void **)(pbVar16 + 0x10),param_1 + 1,uVar15);
          if (iVar5 == 0) {
            return pbVar16;
          }
        }
      }
      pbVar16 = pbVar16 + 0x20;
    } while (pbVar16 != pbVar3);
    return pbVar3;
  }
  return pbVar16;
}
}
