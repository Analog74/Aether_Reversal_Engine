#include <ni/controller_editor/common_config_file_iterator.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::detail {

void common_config_file_iterator::add_option(char const*) {
byte bVar1;
  common_config_file_iterator cVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  common_config_file_iterator *pcVar7;
  byte *pbVar8;
  void *pvVar9;
  unsigned long long *puVar10;
  unsigned long uVar11;
  unsigned long uVar12;
  size_t sVar13;
  long lVar14;
  byte *pbVar15;
  common_config_file_iterator *pcVar16;
  common_config_file_iterator *pcVar17;
  byte *pbVar18;
  unsigned long uVar19;
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long local_f8;
  unsigned long long uStack_f0;
  unsigned long long local_e8;
  unsigned long long local_d8;
  unsigned long long uStack_d0;
  unsigned long long local_c8;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  void *local_98 [2];
  unsigned long long local_88;
  size_t local_80;
  void *local_78;
  char *local_70;
  unsigned long long local_68;
  size_t local_60;
  byte *local_58;
  common_config_file_iterator *local_50;
  common_config_file_iterator *local_48;
  byte *local_40;
  common_config_file_iterator *local_38;
  
  local_48 = this;
  sVar6 = strlen(param_1);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar6 < 0x17) {
    local_68 = 0(local_68._1_7_,(char)sVar6 * '\x02');
    pbVar8 = (byte *)((long)&local_68 + 1);
    if (sVar6 != 0) return;
  }
  else {
    uVar19 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pbVar8 = (byte *)new char[uVar19];
    local_68 = uVar19 | 1;
    local_60 = sVar6;
    local_58 = pbVar8;
    memcpy(pbVar8,param_1,sVar6);
  }
  pbVar8[sVar6] = 0;
  pbVar8 = (byte *)((long)&local_68 + 1);
  if ((local_68 & 1) == 0) {
    bVar1 = *(byte *)((long)&local_68 + (unsigned long)((byte)local_68._0_1_ >> 1));
    sVar6 = (unsigned long)((byte)local_68._0_1_ >> 1);
  }
  else {
    bVar1 = local_58[local_60 - 1];
    sVar6 = local_60;
  }
  if (bVar1 != 0x2a) return;
  lVar14 = sVar6 - 1;
  // std code
  local_38 = local_48 + 0x80;
  pcVar17 = *(common_config_file_iterator **)(local_48 + 0x88);
  pcVar7 = local_48 + 0x88;
  pbVar15 = (byte *)0((int7)((unsigned long)lVar14 >> 8),1);
  local_70 = param_1;
  if (pcVar17 == (common_config_file_iterator *)0x0) {
    if (pcVar7 != *(common_config_file_iterator **)local_38) return;
    if ((char)pbVar15 != '\0') {
      // std code
      __emplace_unique_key_args<// std code
                ((__tree<// std code
                 (string *)&local_68,(string *)&local_68);
      if (((byte)local_68._0_1_ & 1) != 0) {
        delete(local_58);
      }
      return;
    }
  }
  else {
    local_48 = pcVar7;
    local_40 = pbVar8;
    pbVar18 = local_58;
    uVar19 = local_60;
    if ((local_68 & 1) == 0) {
      pbVar18 = pbVar8;
      uVar19 = local_68 >> 1 & 0x7f;
    }
    do {
      cVar2 = pcVar17[0x20];
      if (((byte)cVar2 & 1) == 0) {
        uVar12 = (unsigned long)((byte)cVar2 >> 1);
      }
      else {
        uVar12 = *(unsigned long *)(pcVar17 + 0x28);
      }
      uVar11 = uVar12;
      if (uVar19 < uVar12) {
        uVar11 = uVar19;
      }
      if (uVar11 == 0) {
        uVar4 = (uint)(uVar19 < uVar12);
        if (uVar12 < uVar19) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        if (((byte)cVar2 & 1) == 0) {
          pbVar15 = pbVar18;
          uVar4 = _memcmp(pcVar17 + 0x21,pbVar18,uVar11);
        }
        else {
          pbVar15 = pbVar18;
          uVar4 = _memcmp(*(void **)(pcVar17 + 0x30),pbVar18,uVar11);
        }
        if (uVar4 == 0) return;
      }
      pcVar16 = pcVar7;
      if (-1 < (int)uVar4) {
        pcVar16 = pcVar17;
      }
      pcVar17 = *(common_config_file_iterator **)(pcVar17 + (unsigned long)(uVar4 >> 0x1f) * 8);
      pcVar7 = pcVar16;
    } while (pcVar17 != (common_config_file_iterator *)0x0);
    pcVar7 = local_48;
    if (pcVar16 != local_48) {
      if (((byte)pcVar16[0x20] & 1) == 0) {
        pcVar17 = pcVar16 + 0x21;
        uVar12 = (unsigned long)((byte)pcVar16[0x20] >> 1);
      }
      else {
        uVar12 = *(unsigned long *)(pcVar16 + 0x28);
        pcVar17 = *(common_config_file_iterator **)(pcVar16 + 0x30);
      }
      if (uVar19 == 0) {
        pbVar15 = (byte *)0x0;
        pbVar8 = local_40;
        pcVar7 = pcVar16;
        if (pcVar16 != *(common_config_file_iterator **)local_38) return;
        return;
      }
      pcVar7 = pcVar16;
      if ((long)uVar19 <= (long)uVar12) {
        local_48 = pcVar17 + uVar12;
        bVar1 = *pbVar18;
        local_50 = pcVar17;
        while (sVar6 = (uVar12 - uVar19) + 1, sVar6 != 0) {
          pbVar15 = (byte *)0x0;
          pcVar17 = (common_config_file_iterator *)_memchr(pcVar17,(uint)bVar1,sVar6);
          if (pcVar17 == (common_config_file_iterator *)0x0) break;
          pbVar15 = pbVar18;
          iVar5 = _memcmp(pcVar17,pbVar18,uVar19);
          if (iVar5 == 0) {
            if ((pcVar17 != local_48) && (pcVar17 == local_50)) return;
            break;
          }
          pcVar17 = pcVar17 + 1;
          uVar12 = (long)local_48 - (long)pcVar17;
          if ((long)uVar12 < (long)uVar19) break;
        }
      }
    }
    pbVar15 = (byte *)0((int7)((unsigned long)pbVar15 >> 8),1);
    pbVar8 = local_40;
    if (pcVar7 == *(common_config_file_iterator **)local_38) return;
    pcVar17 = *(common_config_file_iterator **)pcVar7;
    if (*(common_config_file_iterator **)pcVar7 == (common_config_file_iterator *)0x0) {
      pcVar17 = pcVar7 + 0x10;
      if ((common_config_file_iterator *)**(unsigned long long **)(pcVar7 + 0x10) == pcVar7) {
        do {
          lVar14 = *(long *)pcVar17;
          pcVar17 = (common_config_file_iterator *)(lVar14 + 0x10);
        } while (**(long **)(lVar14 + 0x10) == lVar14);
      }
      pcVar7 = *(common_config_file_iterator **)pcVar17;
      if ((local_68 & 1) == 0) return;
      cVar2 = pcVar7[0x20];
      sVar6 = local_60;
      pbVar8 = local_58;
      if (((byte)cVar2 & 1) == 0) return;
      local_48 = *(common_config_file_iterator **)(pcVar7 + 0x30);
      sVar13 = *(size_t *)(pcVar7 + 0x28);
    }
    else {
      do {
        pcVar7 = pcVar17;
        pcVar17 = *(common_config_file_iterator **)(pcVar7 + 8);
      } while (*(common_config_file_iterator **)(pcVar7 + 8) != (common_config_file_iterator *)0x0);
      if ((local_68 & 1) != 0) return;
      sVar6 = local_68 >> 1 & 0x7f;
      cVar2 = pcVar7[0x20];
      if (((byte)cVar2 & 1) != 0) return;
      local_48 = pcVar7 + 0x21;
      sVar13 = (size_t)((byte)cVar2 >> 1);
    }
    if (sVar13 != 0) {
      if ((long)sVar13 <= (long)sVar6) {
        local_50 = (common_config_file_iterator *)CONCAT44(local_50._4_4_,(int)pbVar15);
        pbVar15 = pbVar8 + sVar6;
        cVar2 = *local_48;
        local_40 = pbVar8;
        do {
          sVar6 = (sVar6 - sVar13) + 1;
          if ((sVar6 == 0) ||
             (pbVar8 = (byte *)_memchr(pbVar8,(uint)(byte)cVar2,sVar6), pbVar8 == (byte *)0x0))
          break;
          iVar5 = _memcmp(pbVar8,local_48,sVar13);
          if (iVar5 == 0) {
            if (pbVar8 != pbVar15) {
              pbVar15 = (byte *)((unsigned long)local_50 & 0xffffffff);
              if (pbVar8 != local_40) return;
              return;
            }
            break;
          }
          pbVar8 = pbVar8 + 1;
          sVar6 = (long)pbVar15 - (long)pbVar8;
        } while ((long)sVar13 <= (long)sVar6);
        pbVar15 = (byte *)((unsigned long)local_50 & 0xffffffff);
      }
      return;
    }
  }
  sVar6 = strlen(local_70);
  if (0xffffffffffffffef < sVar6) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar6 < 0x17) {
    local_88 = 0(local_88._1_7_,(char)sVar6 * '\x02');
    pvVar9 = (void *)((long)&local_88 + 1);
    if (sVar6 == 0) return;
  }
  else {
    uVar19 = sVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar9 = new char[uVar19];
    local_88 = uVar19 | 1;
    local_80 = sVar6;
    local_78 = pvVar9;
  }
  memcpy(pvVar9,local_70,sVar6);
  *(unsigned char *)((long)pvVar9 + sVar6) = 0;
  puVar10 = (unsigned long long *)// std code
  local_a8 = puVar10[2];
  local_b8 = *puVar10;
  uStack_b0 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10 = (unsigned long long *)// std code
  local_c8 = puVar10[2];
  local_d8 = *puVar10;
  uStack_d0 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  if (((byte)pcVar7[0x20] & 1) == 0) {
    pcVar7 = pcVar7 + 0x21;
  }
  else {
    pcVar7 = *(common_config_file_iterator **)(pcVar7 + 0x30);
  }
  puVar10 = (unsigned long long *)// std code
  local_e8 = puVar10[2];
  local_f8 = *puVar10;
  uStack_f0 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10 = (unsigned long long *)// std code
  local_108 = puVar10[2];
  local_118 = *puVar10;
  uStack_110 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  // std code
  local_98[0] = (char*)PTR_vtable_101ab44c8 + 0x10;
  throw_exception<// boost code
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

void common_config_file_iterator::get() [clone .cold.2] {
if (((byte)this[0x48] & 1) != 0) {
    delete(*(void **)(this + 0x58));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x30),*(__tree_node **)(this + 0x38));
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x18),*(__tree_node **)(this + 0x20));
  // std code
  return;
}

common_config_file_iterator::~common_config_file_iterator() {
void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(void ***)this = &PTR__common_config_file_iterator_101b221d8;
  if (((byte)this[0x98] & 1) != 0) {
    delete(*(void **)(this + 0xa8));
  }
  // std code
            ((__tree<// std code
             ,*(__tree_node **)(this + 0x88));
  // std code
            ((__tree<// std code
             ,*(__tree_node **)(this + 0x70));
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x50);
    pvVar3 = pvVar1;
    if (*(void **)(this + 0x50) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x18);
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = pvVar3;
      } while (pvVar1 != pvVar3);
      pvVar3 = *(void **)(this + 0x48);
    }
    *(void **)(this + 0x50) = pvVar1;
    delete(pvVar3);
  }
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(this + 0x38);
    pvVar3 = pvVar1;
    if (*(void **)(this + 0x38) != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar2 + -0x18);
        if ((*(byte *)((long)pvVar2 + -0x18) & 1) != 0) {
          delete(*(void **)((long)pvVar2 + -8));
        }
        pvVar2 = pvVar3;
      } while (pvVar1 != pvVar3);
      pvVar3 = *(void **)(this + 0x30);
    }
    *(void **)(this + 0x38) = pvVar1;
    delete(pvVar3);
  }
  if (((byte)this[0x10] & 1) != 0) {
    delete(*(void **)(this + 0x20));
    return;
  }
  return;
}
}
