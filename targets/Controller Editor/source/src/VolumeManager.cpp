#include <ni/controller_editor/VolumeManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void VolumeManager::getNumVolumes() {
unsigned long uVar1;
  
  // std code
  uVar1 = 0 - s_collVolumeInfos;
  // std code
  return (int)(uVar1 >> 3) * -0x49249249;
}

void VolumeManager::rescanInternal() {
unsigned long *puVar1;
  byte bVar2;
  code *pcVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned long *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  size_t sVar10;
  string *psVar11;
  long lVar12;
  void *pvVar13;
  unsigned long *puVar14;
  unsigned long *puVar15;
  unsigned long *puVar16;
  unsigned long uVar17;
  long lVar18;
  char *pcVar19;
  unsigned long *puVar20;
  unsigned long uVar21;
  unsigned long uVar22;
  
  void *local_a8;
  unsigned long local_a0 [2];
  void *local_90;
  unsigned long local_88;
  unsigned long uStack_80;
  void *local_78;
  unsigned long uStack_70;
  unsigned long local_68;
  void *pvStack_60;
  int local_58;
  unsigned long long local_48;
  size_t sStack_40;
  string *local_38;
  
  puVar1 = s_collVolumeInfos;
  puVar16 = 0;
  if (0 != s_collVolumeInfos) {
    do {
      if ((puVar16[-4] & 1) == 0) {
        bVar2 = (byte)puVar16[-7];
      }
      else {
        delete((void *)puVar16[-2]);
        bVar2 = (byte)puVar16[-7];
      }
      if ((bVar2 & 1) != 0) {
        delete((void *)puVar16[-5]);
      }
      puVar16 = puVar16 + -7;
    } while (puVar1 != puVar16);
  }
  0 = puVar1;
  ni::filesystem::home_dir((filesystem *)local_a0);
  // boost code
  if (1 < (uint)local_88) {
    // boost code
    puVar1 = 0;
    if (0 < 0) {
      // std code
      // std code
      puVar1[2] = (unsigned long)local_78;
      *puVar1 = local_88;
      puVar1[1] = uStack_80;
      puVar1[3] = local_48;
      puVar1[4] = sStack_40;
      puVar1[5] = (unsigned long)local_38;
      *(unsigned int *)(puVar1 + 6) = 0x40;
      0 = puVar1 + 7;
    }
    else {
      lVar18 = (long)0 - (long)s_collVolumeInfos >> 3;
      uVar22 = lVar18 * 0x6db6db6db6db6db7 + 1;
      if (0x492492492492492 < uVar22) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      lVar12 = (long)0 - (long)s_collVolumeInfos >> 3;
      uVar17 = lVar12 * -0x2492492492492492;
      if (uVar17 < uVar22) {
        uVar17 = uVar22;
      }
      if (0x249249249249248 < (unsigned long)(lVar12 * 0x6db6db6db6db6db7)) {
        uVar17 = 0x492492492492492;
      }
      if (uVar17 == 0) {
        pvVar13 = (void *)0x0;
      }
      else {
        if (0x492492492492492 < uVar17) {
          // std code
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pvVar13 = new char[uVar17 * 0x38];
      }
      // std code
      // std code
      lVar18 = lVar18 * 8;
      puVar15 = (unsigned long *)((long)pvVar13 + lVar18);
      0 = (unsigned long *)(uVar17 * 0x38 + (long)pvVar13);
      puVar15[2] = (unsigned long)local_78;
      *puVar15 = local_88;
      puVar15[1] = uStack_80;
      *(string **)((long)pvVar13 + lVar18 + 0x28) = local_38;
      puVar1 = (unsigned long *)((long)pvVar13 + lVar18 + 0x18);
      *puVar1 = local_48;
      puVar1[1] = sStack_40;
      *(unsigned int *)((long)pvVar13 + lVar18 + 0x30) = 0x40;
      puVar20 = s_collVolumeInfos;
      puVar1 = puVar15 + 7;
      puVar16 = 0;
      puVar14 = s_collVolumeInfos;
      if (0 != s_collVolumeInfos) {
        do {
          puVar15[-5] = puVar16[-5];
          uVar22 = puVar16[-6];
          puVar15[-7] = puVar16[-7];
          puVar15[-6] = uVar22;
          puVar16[-7] = 0;
          puVar16[-6] = 0;
          puVar16[-5] = 0;
          puVar15[-2] = puVar16[-2];
          uVar4 = *(unsigned int *)((long)puVar16 - 0x1c);
          uVar22 = puVar16[-3];
          uVar5 = *(unsigned int *)((long)puVar16 - 0x14);
          *(int *)(puVar15 + -4) = (int)puVar16[-4];
          *(unsigned int *)((long)puVar15 - 0x1c) = uVar4;
          *(int *)(puVar15 + -3) = (int)uVar22;
          *(unsigned int *)((long)puVar15 - 0x14) = uVar5;
          puVar16[-4] = 0;
          puVar16[-3] = 0;
          puVar16[-2] = 0;
          *(int *)(puVar15 + -1) = (int)puVar16[-1];
          puVar14 = s_collVolumeInfos;
          puVar15 = puVar15 + -7;
          puVar16 = puVar16 + -7;
          puVar6 = 0;
        } while (puVar20 != puVar16);
        for (; s_collVolumeInfos = puVar15, 0 = puVar1, puVar15 = s_collVolumeInfos,
            puVar1 = 0, puVar6 != puVar14; puVar6 = puVar6 + -7) {
          if ((puVar6[-4] & 1) == 0) {
            bVar2 = (byte)puVar6[-7];
          }
          else {
            delete((void *)puVar6[-2]);
            bVar2 = (byte)puVar6[-7];
          }
          if ((bVar2 & 1) != 0) {
            delete((void *)puVar6[-5]);
          }
          puVar1 = 0;
          puVar15 = s_collVolumeInfos;
        }
      }
      0 = puVar1;
      s_collVolumeInfos = puVar15;
      if (puVar14 != (unsigned long *)0x0) {
        delete(puVar14);
      }
    }
    if (((byte)local_b8[0] & 1) != 0) {
      delete(local_a8);
    }
  }
  if ((local_a0[0] & 1) != 0) {
    delete(local_90);
  }
  local_a0[0] = 0;
  uVar8 = _getmntinfo_INODE64(local_a0,2);
  if ((0 < (int)uVar8) && (local_a0[0] != 0)) {
    uVar22 = 0;
    do {
      uVar17 = local_a0[0];
      iVar9 = GP::(anonymous_namespace)::getTypeByStatFS((statfs *)(local_a0[0] + uVar22 * 0x878));
      if (iVar9 != 0) {
        local_68 = 0;
        pvStack_60 = (void *)0x0;
        local_78 = (void *)0x0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
        pcVar19 = (char *)(uVar17 + uVar22 * 0x878 + 0x58);
        local_58 = iVar9;
        sVar10 = strlen(pcVar19);
        if (0xffffffffffffffef < sVar10) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (sVar10 < 0x17) {
          local_48 = 0(local_48._1_7_,(char)sVar10 * '\x02');
          psVar11 = (string *)((long)&local_48 + 1);
          if (sVar10 != 0) return;
        }
        else {
          uVar17 = sVar10 + 0x10 & 0xfffffffffffffff0;
          psVar11 = (string *)new char[uVar17];
          local_48 = uVar17 | 1;
          sStack_40 = sVar10;
          local_38 = psVar11;
          memcpy(psVar11,pcVar19,sVar10);
        }
        psVar11[sVar10] = (string)0x0;
        psVar11 = (string *)&local_48;
        cVar7 = GP::(anonymous_namespace)::isValidExistentVolume(psVar11,(VolumeInfo *)&local_88);
        if ((local_48 & 1) != 0) {
          psVar11 = local_38;
          delete(local_38);
        }
        puVar16 = 0;
        puVar1 = s_collVolumeInfos;
        if (cVar7 != '\0') {
          if (0 < 0) {
            0[2] = (unsigned long)local_78;
            *0 = local_88;
            0[1] = uStack_80;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = (void *)0x0;
            0[5] = (unsigned long)pvStack_60;
            0[3] = uStack_70;
            0[4] = local_68;
            uStack_70 = 0;
            local_68 = 0;
            pvStack_60 = (void *)0x0;
            *(int *)(0 + 6) = local_58;
            0 = 0 + 7;
          }
          else {
            lVar18 = (long)0 - (long)s_collVolumeInfos >> 3;
            uVar17 = lVar18 * 0x6db6db6db6db6db7 + 1;
            if (0x492492492492492 < uVar17) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            lVar12 = (long)0 - (long)s_collVolumeInfos >> 3;
            uVar21 = lVar12 * -0x2492492492492492;
            if (uVar21 < uVar17) {
              uVar21 = uVar17;
            }
            if (0x249249249249248 < (unsigned long)(lVar12 * 0x6db6db6db6db6db7)) {
              uVar21 = 0x492492492492492;
            }
            if (uVar21 == 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              if (0x492492492492492 < uVar21) {
                // std code
                return;
              }
              pvVar13 = new char[uVar21 * 0x38];
            }
            lVar18 = lVar18 * 8;
            puVar15 = (unsigned long *)((long)pvVar13 + lVar18);
            0 = (unsigned long *)(uVar21 * 0x38 + (long)pvVar13);
            *(void **)((long)pvVar13 + lVar18 + 0x10) = local_78;
            *(unsigned long *)((long)pvVar13 + lVar18) = local_88;
            ((unsigned long *)((long)pvVar13 + lVar18))[1] = uStack_80;
            local_88 = 0;
            uStack_80 = 0;
            local_78 = (void *)0x0;
            *(void **)((long)pvVar13 + lVar18 + 0x28) = pvStack_60;
            puVar20 = (unsigned long *)((long)pvVar13 + lVar18 + 0x18);
            *puVar20 = uStack_70;
            puVar20[1] = local_68;
            uStack_70 = 0;
            local_68 = 0;
            pvStack_60 = (void *)0x0;
            *(int *)((long)pvVar13 + lVar18 + 0x30) = local_58;
            puVar14 = (unsigned long *)((long)pvVar13 + lVar18 + 0x38);
            puVar20 = puVar16;
            if (puVar16 != puVar1) {
              do {
                puVar15[-5] = puVar20[-5];
                uVar17 = puVar20[-6];
                puVar15[-7] = puVar20[-7];
                puVar15[-6] = uVar17;
                puVar20[-7] = 0;
                puVar20[-6] = 0;
                puVar20[-5] = 0;
                puVar15[-2] = puVar20[-2];
                uVar17 = puVar20[-3];
                puVar15[-4] = puVar20[-4];
                puVar15[-3] = uVar17;
                puVar20[-4] = 0;
                puVar20[-3] = 0;
                puVar20[-2] = 0;
                *(int *)(puVar15 + -1) = (int)puVar20[-1];
                puVar16 = s_collVolumeInfos;
                puVar15 = puVar15 + -7;
                puVar20 = puVar20 + -7;
                puVar6 = 0;
              } while (puVar1 != puVar20);
              for (; s_collVolumeInfos = puVar15, 0 = puVar14,
                  puVar15 = s_collVolumeInfos, puVar14 = 0, puVar6 != puVar16;
                  puVar6 = puVar6 + -7) {
                if ((puVar6[-4] & 1) == 0) {
                  bVar2 = (byte)puVar6[-7];
                }
                else {
                  delete((void *)puVar6[-2]);
                  bVar2 = (byte)puVar6[-7];
                }
                if ((bVar2 & 1) != 0) {
                  delete((void *)puVar6[-5]);
                }
                puVar14 = 0;
                puVar15 = s_collVolumeInfos;
              }
            }
            0 = puVar14;
            s_collVolumeInfos = puVar15;
            if (puVar16 != (unsigned long *)0x0) {
              delete(puVar16);
            }
          }
        }
        if ((uStack_70 & 1) != 0) {
          delete(pvStack_60);
        }
        if ((local_88 & 1) != 0) {
          delete(local_78);
        }
      }
      uVar22 = uVar22 + 1;
    } while ((uVar22 < uVar8) && (local_a0[0] != 0));
  }
  return 0 != s_collVolumeInfos;
}
}
