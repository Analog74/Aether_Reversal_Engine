#include <ni/controller_editor/find_insert_location_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::object {

void find_insert_location(1 param_1, std::string const& {
byte bVar1;
  size_t sVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  unsigned long uVar7;
  size_t sVar8;
  unsigned long uVar9;
  unsigned long uVar10;
  string *psVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  unsigned long uVar15;
  unsigned long uVar16;
  
  pbVar13 = *(byte **)this;
  pbVar12 = *(byte **)(this + 8);
  pbVar14 = pbVar13;
  if (this[0x18] == (object)0x0) {
    if ((long)pbVar12 - (long)pbVar13 != 0) {
      if (((byte)*param_1 & 1) == 0) {
        uVar16 = (unsigned long)((byte)*param_1 >> 1);
        psVar11 = param_1 + 1;
      }
      else {
        uVar16 = *(unsigned long *)(param_1 + 8);
        psVar11 = *(string **)(param_1 + 0x10);
      }
      uVar7 = (long)pbVar12 - (long)pbVar13 >> 5;
      do {
        uVar10 = uVar7 >> 1;
        lVar6 = uVar10 * 0x20;
        bVar1 = pbVar13[lVar6];
        if ((bVar1 & 1) == 0) {
          uVar15 = (unsigned long)(bVar1 >> 1);
        }
        else {
          uVar15 = *(unsigned long *)(pbVar13 + lVar6 + 8);
        }
        uVar9 = uVar15;
        if (uVar16 < uVar15) {
          uVar9 = uVar16;
        }
        if (uVar9 == 0) {
          uVar5 = (uint)(uVar16 < uVar15);
          if (uVar15 < uVar16) {
            uVar5 = 0xffffffff;
          }
        }
        else {
          if ((bVar1 & 1) == 0) {
            pbVar12 = pbVar13 + lVar6 + 1;
          }
          else {
            pbVar12 = *(byte **)(pbVar13 + lVar6 + 0x10);
          }
          uVar5 = _memcmp(pbVar12,psVar11,uVar9);
          if (uVar5 == 0) return;
        }
        uVar15 = uVar7 + ~uVar10;
        uVar7 = uVar10;
        if ((int)uVar5 < 0) {
          pbVar13 = pbVar13 + lVar6 + 0x20;
          uVar7 = uVar15;
        }
        pbVar14 = pbVar13;
      } while (uVar7 != 0);
    }
  }
  else if(1 param_1, 1 param_1, 1 param_1, pbVar13 != pbVar12 {
    uVar16 = (unsigned long((byte*param_1 >> 1);
    pbVar14 = pbVar12;
    if (((byte)*param_1 & 1) == 0) {
      if (uVar16 == 0) {
        do {
          if ((*pbVar13 & 1) == 0) {
            if (*pbVar13 >> 1 == 0) {
              return pbVar13;
            }
          }
          else if(1 param_1, 1 param_1, 1 param_1, *(long *(pbVar13 + 8 == 0 {
            return pbVar13;
          }
          pbVar13 = pbVar13 + 0x20;
        } while (pbVar13 != pbVar12);
      }
      else {
        do {
          bVar1 = *pbVar13;
          uVar7 = (unsigned long)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            uVar7 = *(unsigned long *)(pbVar13 + 8);
          }
          if (uVar7 == uVar16) {
            if ((bVar1 & 1) == 0) {
              uVar7 = 0;
              while (*(string *)(pbVar13 + uVar7 + 1) == param_1[uVar7 + 1]) {
                uVar7 = uVar7 + 1;
                if (bVar1 >> 1 == uVar7) {
                  return pbVar13;
                }
              }
            }
            else {
              iVar4 = _memcmp(*(void **)(pbVar13 + 0x10),param_1 + 1,uVar16);
              if (iVar4 == 0) {
                return pbVar13;
              }
            }
          }
          pbVar13 = pbVar13 + 0x20;
        } while (pbVar13 != pbVar12);
      }
    }
    else {
      sVar2 = *(size_t *)(param_1 + 8);
      if (sVar2 == 0) {
        do {
          if ((*pbVar13 & 1) == 0) {
            if (*pbVar13 >> 1 == 0) {
              return pbVar13;
            }
          }
          else if(1 param_1, 1 param_1, 1 param_1, *(long *(pbVar13 + 8 == 0 {
            return pbVar13;
          }
          pbVar13 = pbVar13 + 0x20;
        } while (pbVar13 != pbVar12);
      }
      else {
        pvVar3 = *(void **)(param_1 + 0x10);
        do {
          bVar1 = *pbVar13;
          sVar8 = (unsigned long)(bVar1 >> 1);
          if ((bVar1 & 1) != 0) {
            sVar8 = *(size_t *)(pbVar13 + 8);
          }
          if (sVar8 == sVar2) {
            if ((bVar1 & 1) == 0) {
              uVar16 = 0;
              while (pbVar13[uVar16 + 1] == *(byte *)((long)pvVar3 + uVar16)) {
                uVar16 = uVar16 + 1;
                if (bVar1 >> 1 == uVar16) {
                  return pbVar13;
                }
              }
            }
            else {
              iVar4 = _memcmp(*(void **)(pbVar13 + 0x10),pvVar3,sVar2);
              if (iVar4 == 0) {
                return pbVar13;
              }
            }
          }
          pbVar13 = pbVar13 + 0x20;
        } while (pbVar13 != pbVar12);
      }
    }
  }
  return pbVar14;
}
}
