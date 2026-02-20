#include <ni/controller_editor/match_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::option_description {

void match(std::string const&, bool, bool, bool) const {
byte *pbVar1;
  string sVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  void7 in_register_00000009;
  string *psVar6;
  option_description *poVar7;
  unsigned long uVar8;
  void7 in_register_00000011;
  size_t sVar9;
  unsigned long uVar10;
  long lVar11;
  size_t sVar12;
  void7 in_register_00000081;
  size_t sVar13;
  string *psVar14;
  byte *pbVar15;
  byte bVar16;
  unsigned int uVar17;
  byte *pbVar18;
  size_t sVar19;
  bool bVar20;
  string local_d0;
  byte local_cf [7];
  size_t local_c8;
  byte *local_c0;
  option_description *local_b8;
  size_t local_b0;
  unsigned int local_a8;
  unsigned int local_a4;
  unsigned long local_a0;
  byte *local_98;
  byte *local_90;
  unsigned int local_84;
  byte *local_80;
  unsigned long long local_78;
  size_t sStack_70;
  byte *local_68;
  unsigned long long local_58;
  size_t sStack_50;
  byte *local_48;
  unsigned long local_40;
  byte local_31;
  
  local_a4 = (int)0(in_register_00000081,param_4);
  local_84 = (int)0(in_register_00000011,param_2);
  local_a8 = (int)0(in_register_00000009,param_3);
  if (param_3 param_1) {
  }
  else {
    // std code
  }
  psVar14 = *(string **)(this + 0x20);
  if (psVar14 == *(string **)(this + 0x28)) {
    iVar4 = 0;
  }
  else {
    local_31 = (byte)local_84 ^ 1;
    local_40 = 0;
    local_b8 = this;
    do {
      if ((char)local_a8 == '\0') {
        // std code
      }
      else {
        local_58 = 0;
        sStack_50 = 0;
        local_48 = (byte *)0x0;
        uVar10 = 0;
        sVar2 = *psVar14;
        if (((byte)sVar2 & 1) == 0) return;
        while (uVar10 < *(unsigned long *)(psVar14 + 8)) {
          psVar6 = *(string **)(psVar14 + 0x10);
          while( true ) {
            ___tolower((int)(char)psVar6[uVar10]);
            // std code
            uVar10 = uVar10 + 1;
            sVar2 = *psVar14;
            if (((byte)sVar2 & 1) != 0) break;
            psVar6 = psVar14 + 1;
            if ((byte)sVar2 >> 1 <= uVar10) return;
          }
        }
      }
      uVar10 = local_58 & 0xff;
      sVar13 = (size_t)((byte)local_58._0_1_ >> 1);
      bVar16 = (byte)local_58._0_1_ & 1;
      sVar19 = sStack_50;
      if ((local_58 & 1) == 0) {
        sVar19 = sVar13;
      }
      if (sVar19 == 0) {
        bVar3 = true;
        if (bVar16 != 0) {
          uVar10 = local_40 & 0xffffffff;
          return;
        }
        iVar4 = (int)local_40;
      }
      else {
        if ((int)local_40 == 0) {
          pbVar5 = (byte *)((long)&local_58 + 1);
          if ((local_58 & 1) != 0) {
            pbVar5 = local_48;
          }
          local_40 = 0;
          if (pbVar5[sVar19 - 1] == 0x2a) {
            // std code if(1 param_1, 1 param_1, 1 param_1, (local_78 & 1 == 0 {
              sVar19 = local_78 >> 1 & 0x7f;
              pbVar5 = (byte *((long)&local_78 + 1);
              if (((byte)local_d0 & 1) != 0) return;
              uVar10 = (unsigned long)((byte)local_d0 >> 1);
              pbVar18 = local_cf;
              if ((unsigned long)((byte)local_d0 >> 1) != 0) return;
              lVar11 = 0;
              pbVar5 = local_c0;
              if (((byte)local_d0 & 1) != 0) return;
            }
            else {
              sVar19 = sStack_70;
              pbVar5 = local_68;
              if (((byte)local_d0 & 1) == 0) return;
              uVar10 = local_c8;
              pbVar18 = local_c0;
              if (local_c8 == 0) return;
              local_a0 = (unsigned long)(byte)local_d0;
              local_80 = local_c0;
              pbVar1 = pbVar5 + sVar19;
              local_90 = pbVar5;
              pbVar15 = pbVar1;
              if ((long)uVar10 <= (long)sVar19) {
                local_40 = CONCAT44(local_40._4_4_,(uint)*pbVar18);
                while (sVar19 = (sVar19 - uVar10) + 1, pbVar15 = pbVar1, sVar19 != 0) {
                  pbVar5 = (byte *)_memchr(pbVar5,(int)local_40,sVar19);
                  if ((pbVar5 == (byte *)0x0) ||
                     (iVar4 = _memcmp(pbVar5,pbVar18,uVar10), pbVar15 = pbVar5, iVar4 == 0)) break;
                  pbVar5 = pbVar5 + 1;
                  sVar19 = (long)pbVar1 - (long)pbVar5;
                  pbVar15 = pbVar1;
                  if ((long)sVar19 < (long)uVar10) break;
                }
              }
              lVar11 = (long)pbVar15 - (long)local_90;
              if (pbVar15 == pbVar1) {
                lVar11 = -1;
              }
              pbVar5 = local_80;
              if ((local_a0 & 1) != 0) {
                delete(pbVar5);
              }
            }
            local_40 = (unsigned long)((uint)(lVar11 == 0) * 2);
            uVar10 = local_58 & 0xff;
            sVar13 = local_58 >> 1 & 0x7f;
          }
        }
        sVar19 = sStack_50;
        uVar8 = local_78;
        bVar16 = (byte)uVar10 & 1;
        sVar9 = sStack_50;
        if ((uVar10 & 1) == 0) {
          sVar9 = sVar13;
        }
        if ((local_78 & 1) == 0) {
          sVar12 = local_78 >> 1 & 0x7f;
          if (sVar9 == sVar12) return;
          if ((char)local_84 != '\0') {
            local_b0 = sVar12;
            local_98 = (byte *)((long)&local_58 + 1);
            if ((uVar10 & 1) != 0) {
              local_98 = local_48;
            }
            sVar19 = sVar9;
            sVar13 = local_b0;
            local_80 = (byte *)((long)&local_78 + 1);
            if ((uVar8 & 1) != 0) {
              local_80 = local_68;
            }
            if (local_b0 == 0) {
              local_40 = 2;
            }
            else if(1 param_1, 1 param_1, 1 param_1, (longlocal_b0 <= (longsVar19 {
              local_90 = local_98 + sVar19;
              local_a0 = CONCAT44(local_a0._4_4_,(uint)*local_80);
              pbVar5 = local_98;
              while (sVar19 = (sVar19 - sVar13) + 1, sVar19 != 0) {
                pbVar5 = (byte *)_memchr(pbVar5,(int)local_a0,sVar19);
                if (pbVar5 == (byte *)0x0) break;
                iVar4 = _memcmp(pbVar5,local_80,sVar13);
                if (iVar4 == 0) {
                  if ((pbVar5 != local_90) && (pbVar5 == local_98)) return;
                  break;
                }
                pbVar5 = pbVar5 + 1;
                sVar19 = (long)local_90 - (long)pbVar5;
                if ((long)sVar19 < (long)sVar13) break;
              }
            }
          }
          return;
        }
        sVar12 = sStack_70;
        if (sVar9 != sStack_70) return;
        pbVar5 = (byte *)((long)&local_78 + 1);
        if ((local_78 & 1) != 0) {
          pbVar5 = local_68;
        }
        if ((uVar10 & 1) == 0) {
          if (sVar9 != 0) {
            sVar19 = 0;
            while (*(byte *)((long)&local_58 + sVar19 + 1) == pbVar5[sVar19]) {
              sVar19 = sVar19 + 1;
              if (sVar13 == sVar19) return;
            }
            return;
          }
          return;
        }
        if (sVar9 != 0) {
          local_98 = local_48;
          local_b0 = sVar12;
          iVar4 = _memcmp(local_48,pbVar5,sVar9);
          bVar20 = iVar4 == 0;
          bVar3 = !bVar20;
          uVar10 = local_40 & 0xffffffff;
          if (bVar20) {
            uVar10 = 1;
          }
          if (bVar20 || local_31 != 0) return;
          return;
        }
        uVar10 = 1;
        bVar3 = false;
        iVar4 = (int)uVar10;
        delete(local_48);
        local_40 = uVar10;
        if (!bVar3) break;
      }
      psVar14 = psVar14 + 0x18;
    } while (psVar14 != *(string **)(local_b8 + 0x28));
    uVar17 = 1;
    this = local_b8;
    if (iVar4 == 1) goto joined_r0x0001005a5d88;
  }
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  psVar14 = (string *)(this + 8);
  if ((char)local_a4 == '\0') {
    // std code
  }
  else {
    local_58 = 0;
    sStack_50 = 0;
    local_48 = (byte *)0x0;
    uVar10 = 0;
    sVar2 = *psVar14;
    if (((byte)sVar2 & 1) == 0) return;
    while (uVar10 < *(unsigned long *)(this + 0x10)) {
      poVar7 = *(option_description **)(this + 0x18);
      while( true ) {
        ___tolower((int)(char)poVar7[uVar10]);
        // std code
        uVar10 = uVar10 + 1;
        sVar2 = *psVar14;
        if (((byte)sVar2 & 1) != 0) break;
        poVar7 = this + 9;
        if ((byte)sVar2 >> 1 <= uVar10) return;
      }
    }
  }
  pbVar5 = local_48;
  uVar8 = local_58 >> 1 & 0x7f;
  uVar10 = uVar8;
  if ((local_58 & 1) != 0) {
    uVar10 = sStack_50;
  }
  uVar17 = (int)local_40;
  if ((local_78 & 1) == 0) {
    if (uVar10 == (local_78 >> 1 & 0x7f)) return;
    if ((local_58 & 1) == 0) goto joined_r0x0001005a5d88;
  }
  else {
    if (uVar10 != sStack_70) return;
    pbVar18 = local_68;
    if ((local_78 & 1) == 0) {
      pbVar18 = (byte *)((long)&local_78 + 1);
    }
    if ((local_58 & 1) == 0) {
      if (uVar10 == 0) {
        uVar17 = 1;
        goto joined_r0x0001005a5d88;
      }
      uVar10 = 0;
      do {
        if (*(byte *)((long)&local_58 + uVar10 + 1) != pbVar18[uVar10]) return;
        uVar10 = uVar10 + 1;
      } while (uVar8 != uVar10);
      uVar17 = 1;
      return;
    }
    if ((uVar10 == 0) || (iVar4 = _memcmp(local_48,pbVar18,uVar10), iVar4 == 0)) {
      uVar17 = 1;
    }
  }
  delete(pbVar5);
joined_r0x0001005a5d88:
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  return uVar17;
}
}
