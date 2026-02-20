#include <ni/controller_editor/removeDotSegments_web.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::details::(anonymous namespace) {

void removeDotSegments(1 param_1, web::uri_builder& {
byte bVar1;
  string sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  unsigned long uVar6;
  string *psVar7;
  size_t sVar8;
  unsigned long uVar9;
  byte *pbVar10;
  string *psVar11;
  byte *pbVar12;
  void2 local_e0;
  byte local_de [22];
  byte *local_c8;
  uri_builder *local_c0;
  unsigned char local_b8;
  void2 local_b7;
  unsigned char local_b5;
  byte *local_a0;
  byte *local_98;
  string *local_88;
  string *local_80;
  unsigned long local_78;
  unsigned long long uStack_70;
  void *local_68;
  string *local_58;
  string *psStack_50;
  string *local_48;
  char local_31;
  
  local_e0 = 0x2e02;
  local_de[0] = 0;
  local_b8 = 4;
  local_b7 = 0x2e2e;
  local_b5 = 0;
  psVar7 = (string *)(param_1 + 0x48);
  local_c0 = param_1;
  lVar5 = // std code
  if (lVar5 == -1) {
    return;
  }
  psVar11 = (string *)&local_a0;
  uri::split_path(psVar11);
  local_58 = (string *)0x0;
  psStack_50 = (string *)0x0;
  local_48 = (string *)0x0;
  if (local_a0 != local_98) {
    local_80 = psVar7;
    local_31 = local_e0._1_1_;
    local_c8 = local_98;
    pbVar10 = local_98;
    pbVar12 = local_a0;
    do {
      bVar1 = *pbVar12;
      uVar6 = (unsigned long)(bVar1 >> 1);
      uVar9 = uVar6;
      if ((bVar1 & 1) != 0) {
        uVar9 = *(unsigned long *)(pbVar12 + 8);
      }
      if (uVar9 == 2) {
        if ((bVar1 & 1) == 0) {
          uVar9 = 0;
          do {
            if (pbVar12[uVar9 + 1] != *(byte *)((long)&local_b7 + uVar9)) return;
            uVar9 = uVar9 + 1;
          } while (uVar6 != uVar9);
        }
        else if (**(short **)(pbVar12 + 0x10) != local_b7) return;
        if (local_58 != psStack_50) {
          psStack_50 = psStack_50 + -8;
        }
      }
      else if (uVar9 == 1) {
        if ((bVar1 & 1) == 0) {
          uVar9 = 0;
          do {
            if (pbVar12[uVar9 + 1] != local_de[uVar9 - 1]) return;
            uVar9 = uVar9 + 1;
          } while (uVar6 != uVar9);
        }
        else if (**(char **)(pbVar12 + 0x10) != local_31) return;
      }
      else {
        if (psStack_50 < local_48) {
          *(byte **)psStack_50 = pbVar12;
          psStack_50 = psStack_50 + 8;
        }
        else {
          sVar8 = (long)psStack_50 - (long)local_58;
          lVar5 = (long)sVar8 >> 3;
          uVar9 = lVar5 + 1;
          if (0x1fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          uVar6 = (long)local_48 - (long)local_58 >> 2;
          if (uVar6 < uVar9) {
            uVar6 = uVar9;
          }
          if (0xffffffffffffffe < (unsigned long)((long)local_48 - (long)local_58 >> 3)) {
            uVar6 = 0x1fffffffffffffff;
          }
          local_88 = local_58;
          if (uVar6 == 0) {
            psVar7 = (string *)0x0;
            *(byte **)(lVar5 * 8) = pbVar12;
          }
          else {
            if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            psVar11 = (string *)(uVar6 * 8);
            psVar7 = (string *)new char[(unsigned long]psVar11);
            *(byte **)(psVar7 + lVar5 * 8) = pbVar12;
          }
          if (0 < (long)sVar8) {
            psVar11 = psVar7;
            memcpy(psVar7,local_88,sVar8);
          }
          pbVar10 = local_c8;
          local_58 = psVar7;
          psStack_50 = psVar7 + lVar5 * 8 + 8;
          local_48 = psVar7 + uVar6 * 8;
          if (local_88 != (string *)0x0) {
            psVar11 = local_88;
            delete(local_88);
          }
        }
      }
      pbVar12 = pbVar12 + 0x18;
    } while (pbVar12 != pbVar10);
    psVar7 = local_80;
    if (local_58 != psStack_50) {
      // std code
      if ((long)psStack_50 - (long)local_58 != 8) {
        lVar5 = 1;
        do {
          // std code
          pbVar10 = *(byte **)(local_58 + lVar5 * 8);
          if ((*pbVar10 & 1) == 0) {
            pbVar10 = pbVar10 + 1;
          }
          else {
            pbVar10 = *(byte **)(pbVar10 + 0x10);
          }
          // std code
          lVar5 = lVar5 + 1;
        } while (lVar5 != (long)psStack_50 - (long)local_58 >> 3);
      }
      bVar1 = local_98[-0x18];
      uVar6 = (unsigned long)(bVar1 >> 1);
      uVar9 = uVar6;
      if ((bVar1 & 1) != 0) {
        uVar9 = *(unsigned long *)(local_98 + -0x10);
      }
      if (uVar9 == 1) {
        if ((bVar1 & 1) == 0) {
          if (local_98[-0x17] == 0x2e) {
            lVar5 = 0;
            do {
              if (uVar6 - 1 == lVar5) return;
              lVar3 = lVar5 + -0x16;
              pbVar10 = local_de + lVar5;
              lVar5 = lVar5 + 1;
            } while (local_98[lVar3] == *pbVar10);
          }
          return;
        }
        if (**(char **)(local_98 + -8) != local_e0._1_1_) return;
        // std code
      }
      else {
        if (uVar9 == 2) {
          if ((bVar1 & 1) == 0) {
            if (local_98[-0x17] == 0x2e) {
              lVar5 = 0;
              do {
                if (uVar6 - 1 == lVar5) return;
                lVar3 = lVar5 + -0x16;
                lVar4 = lVar5 + 1;
                lVar5 = lVar5 + 1;
              } while (local_98[lVar3] == *(byte *)((long)&local_b7 + lVar4));
            }
          }
          else if (**(short **)(local_98 + -8) == local_b7) return;
        }
        if (((byte)local_c0[0x48] & 1) == 0) {
          sVar2 = local_80[(byte)local_c0[0x48] >> 1];
        }
        else {
          sVar2 = *(string *)(*(long *)(local_c0 + 0x58) + -1 + *(long *)(local_c0 + 0x50));
        }
        if (sVar2 == (string)0x2f) return;
      }
      // std code
      return;
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  // std code
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  if (local_58 != (string *)0x0) {
    psStack_50 = local_58;
    delete(local_58);
  }
  pbVar10 = local_a0;
  if (local_a0 != (byte *)0x0) {
    while (pbVar12 = local_98, pbVar12 != pbVar10) {
      local_98 = pbVar12 + -0x18;
      if ((pbVar12[-0x18] & 1) != 0) {
        delete(*(void **)(pbVar12 + -8));
      }
    }
    local_98 = pbVar10;
    delete(local_a0);
  }
  return;
}
}
