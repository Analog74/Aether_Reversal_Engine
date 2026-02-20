#include <ni/controller_editor/SystemInfo2.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void SystemInfo2::retrieveCPUInfo() {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned long long *puVar4;
  unsigned long uVar5;
  unsigned long long *puVar6;
  unsigned long uVar7;
  unsigned long long *puVar8;
  long lVar9;
  unsigned long uVar10;
  size_t local_58;
  locale local_50 [8];
  size_t local_48 [2];
  void *local_38;
  size_t local_30;
  locale local_28 [8];
  
  s_calledRetrieveCPUInfo = 1;
  local_30 = local_30 & 0xffffffff00000000;
  local_48[0] = 4;
  _sysctlbyname("hw.physicalcpu",&local_30,local_48,(void *)0x0,0);
  s_numPhysicalCores = (uint)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_48[0] = 4;
  _sysctlbyname("hw.logicalcpu",&local_30,local_48,(void *)0x0,0);
  s_numLogicalCores = (uint)local_30;
  local_30 = local_30 & 0xffffffff00000000;
  local_48[0] = 4;
  _sysctlbyname("machdep.cpu.core_count",&local_30,local_48,(void *)0x0,0);
  if ((int)(uint)local_30 < 1) {
    s_numProcessorPacks = 1;
  }
  else {
    s_numProcessorPacks = s_numPhysicalCores / (uint)local_30;
  }
  puVar4 = (unsigned long long *)new char[0x200];
  ___bzero(puVar4,0x200);
  local_58 = 0x200;
  _sysctlbyname("machdep.cpu.brand_string",puVar4,&local_58,(void *)0x0,0);
  if (((byte)s_processorName & 1) == 0) {
    uVar10 = 0x16;
    uVar7 = (unsigned long)((byte)s_processorName >> 1);
    // std code
    uVar5 = (unsigned long)(byte)s_processorName;
  }
  else {
    uVar5 = 0(s_processorName._1_7_,(byte)s_processorName);
    uVar10 = (uVar5 & 0xfffffffffffffffe) - 1;
    uVar7 = 0;
    if (uVar10 < 0x200) return;
  }
  if ((uVar5 & 1) == 0) {
    puVar6 = (unsigned long long *)((long)&s_processorName + 1);
    puVar8 = (unsigned long long *)((long)&_bio_type_lock + 1);
    if ((unsigned long long *)((long)&s_processorName + 1) < puVar4 + 0x40) return;
  }
  else {
    puVar8 = 0 + 0x40;
    puVar6 = 0;
    if (0 < puVar4 + 0x40) {
      if (puVar4 < puVar8) {
        lVar9 = 0;
        do {
          *(unsigned char *)((long)puVar6 + lVar9) = *(unsigned char *)((long)puVar4 + lVar9);
          *(unsigned char *)((long)puVar6 + lVar9 + 1) = *(unsigned char *)((long)puVar4 + lVar9 + 1);
          *(unsigned char *)((long)puVar6 + lVar9 + 2) = *(unsigned char *)((long)puVar4 + lVar9 + 2);
          *(unsigned char *)((long)puVar6 + lVar9 + 3) = *(unsigned char *)((long)puVar4 + lVar9 + 3);
          *(unsigned char *)((long)puVar6 + lVar9 + 4) = *(unsigned char *)((long)puVar4 + lVar9 + 4);
          *(unsigned char *)((long)puVar6 + lVar9 + 5) = *(unsigned char *)((long)puVar4 + lVar9 + 5);
          *(unsigned char *)((long)puVar6 + lVar9 + 6) = *(unsigned char *)((long)puVar4 + lVar9 + 6);
          *(unsigned char *)((long)puVar6 + lVar9 + 7) = *(unsigned char *)((long)puVar4 + lVar9 + 7);
          lVar9 = lVar9 + 8;
        } while (lVar9 != 0x200);
        *(unsigned char *)(puVar6 + 0x40) = 0;
        goto joined_r0x00010073e760;
      }
    }
  }
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *puVar6 = *puVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  puVar6[3] = uVar3;
  uVar1 = puVar4[5];
  uVar2 = puVar4[6];
  uVar3 = puVar4[7];
  puVar6[4] = puVar4[4];
  puVar6[5] = uVar1;
  puVar6[6] = uVar2;
  puVar6[7] = uVar3;
  uVar1 = puVar4[9];
  uVar2 = puVar4[10];
  uVar3 = puVar4[0xb];
  puVar6[8] = puVar4[8];
  puVar6[9] = uVar1;
  puVar6[10] = uVar2;
  puVar6[0xb] = uVar3;
  uVar1 = puVar4[0xd];
  uVar2 = puVar4[0xe];
  uVar3 = puVar4[0xf];
  puVar6[0xc] = puVar4[0xc];
  puVar6[0xd] = uVar1;
  puVar6[0xe] = uVar2;
  puVar6[0xf] = uVar3;
  uVar1 = puVar4[0x11];
  uVar2 = puVar4[0x12];
  uVar3 = puVar4[0x13];
  puVar6[0x10] = puVar4[0x10];
  puVar6[0x11] = uVar1;
  puVar6[0x12] = uVar2;
  puVar6[0x13] = uVar3;
  uVar1 = puVar4[0x15];
  uVar2 = puVar4[0x16];
  uVar3 = puVar4[0x17];
  puVar6[0x14] = puVar4[0x14];
  puVar6[0x15] = uVar1;
  puVar6[0x16] = uVar2;
  puVar6[0x17] = uVar3;
  uVar1 = puVar4[0x19];
  uVar2 = puVar4[0x1a];
  uVar3 = puVar4[0x1b];
  puVar6[0x18] = puVar4[0x18];
  puVar6[0x19] = uVar1;
  puVar6[0x1a] = uVar2;
  puVar6[0x1b] = uVar3;
  uVar1 = puVar4[0x1d];
  uVar2 = puVar4[0x1e];
  uVar3 = puVar4[0x1f];
  puVar6[0x1c] = puVar4[0x1c];
  puVar6[0x1d] = uVar1;
  puVar6[0x1e] = uVar2;
  puVar6[0x1f] = uVar3;
  uVar1 = puVar4[0x21];
  uVar2 = puVar4[0x22];
  uVar3 = puVar4[0x23];
  puVar6[0x20] = puVar4[0x20];
  puVar6[0x21] = uVar1;
  puVar6[0x22] = uVar2;
  puVar6[0x23] = uVar3;
  uVar1 = puVar4[0x25];
  uVar2 = puVar4[0x26];
  uVar3 = puVar4[0x27];
  puVar6[0x24] = puVar4[0x24];
  puVar6[0x25] = uVar1;
  puVar6[0x26] = uVar2;
  puVar6[0x27] = uVar3;
  uVar1 = puVar4[0x29];
  uVar2 = puVar4[0x2a];
  uVar3 = puVar4[0x2b];
  puVar6[0x28] = puVar4[0x28];
  puVar6[0x29] = uVar1;
  puVar6[0x2a] = uVar2;
  puVar6[0x2b] = uVar3;
  uVar1 = puVar4[0x2d];
  uVar2 = puVar4[0x2e];
  uVar3 = puVar4[0x2f];
  puVar6[0x2c] = puVar4[0x2c];
  puVar6[0x2d] = uVar1;
  puVar6[0x2e] = uVar2;
  puVar6[0x2f] = uVar3;
  uVar1 = puVar4[0x31];
  uVar2 = puVar4[0x32];
  uVar3 = puVar4[0x33];
  puVar6[0x30] = puVar4[0x30];
  puVar6[0x31] = uVar1;
  puVar6[0x32] = uVar2;
  puVar6[0x33] = uVar3;
  uVar1 = puVar4[0x35];
  uVar2 = puVar4[0x36];
  uVar3 = puVar4[0x37];
  puVar6[0x34] = puVar4[0x34];
  puVar6[0x35] = uVar1;
  puVar6[0x36] = uVar2;
  puVar6[0x37] = uVar3;
  uVar1 = puVar4[0x39];
  uVar2 = puVar4[0x3a];
  uVar3 = puVar4[0x3b];
  puVar6[0x38] = puVar4[0x38];
  puVar6[0x39] = uVar1;
  puVar6[0x3a] = uVar2;
  puVar6[0x3b] = uVar3;
  uVar1 = puVar4[0x3d];
  uVar2 = puVar4[0x3e];
  uVar3 = puVar4[0x3f];
  puVar6[0x3c] = puVar4[0x3c];
  puVar6[0x3d] = uVar1;
  puVar6[0x3e] = uVar2;
  puVar6[0x3f] = uVar3;
  *(unsigned char *)puVar8 = 0;
joined_r0x00010073e760:
  if (((byte)s_processorName & 1) == 0) {
    s_processorName._0_1_ = 0;
  }
  else {
    0 = 0x200;
  }
  // std code
  local_30 = CONCAT44(local_30._4_4_,0x4000);
  // std code
  // boost code
            ((algorithm *)local_48,&s_processorName,&local_30);
  // std code
  // std code
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  // std code
  delete(puVar4);
  local_48[0] = 0;
  local_30 = 8;
  _sysctlbyname("hw.cpufrequency_max",local_48,&local_30,(void *)0x0,0);
  s_processorSpeed = (int)(local_48[0] / 1000000);
  return;
}

void SystemInfo2::retrieveDeviceInfo() {
char *pcVar1;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  unsigned long uVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  void *puVar11;
  void *puVar12;
  size_t local_70;
  unsigned long local_68;
  unsigned long uStack_60;
  char *local_58;
  unsigned long long local_48;
  unsigned long uStack_40;
  char *local_38;
  
  s_calledRetrieveDeviceInfo = 1;
  local_70 = 0;
  iVar3 = _sysctlbyname("hw.model",(void *)0x0,&local_70,(void *)0x0,0);
  sVar2 = local_70;
  if ((iVar3 == 0) && (local_70 != 0)) {
    if (0xffffffffffffffef < local_70) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (local_70 < 0x17) {
      local_48 = 0(local_48._1_7_,(char)local_70 * '\x02');
      pcVar6 = (char *)((long)&local_48 + 1);
    }
    else {
      uVar7 = local_70 + 0x10 & 0xfffffffffffffff0;
      pcVar6 = (char *)new char[uVar7];
      local_48 = uVar7 | 1;
      uStack_40 = sVar2;
      local_38 = pcVar6;
    }
    _memset(pcVar6,0x20,sVar2);
    pcVar6[sVar2] = '\0';
    pcVar6 = (char *)((long)&local_48 + 1);
    if ((local_48 & 1) != 0) {
      pcVar6 = local_38;
    }
    iVar3 = _sysctlbyname("hw.model",pcVar6,&local_70,(void *)0x0,0);
    if (iVar3 == 0) {
      uVar7 = uStack_40;
      pcVar6 = local_38;
      if ((local_48 & 1) == 0) {
        uVar7 = local_48 >> 1 & 0x7f;
        pcVar6 = (char *)((long)&local_48 + 1);
      }
      pcVar10 = pcVar6;
      if (uVar7 != 0) {
        pcVar1 = pcVar6 + uVar7;
        pcVar9 = pcVar6;
        do {
          pcVar10 = pcVar9;
          if (*pcVar9 == '\0') break;
          pcVar9 = pcVar9 + 1;
          uVar7 = uVar7 - 1;
          pcVar10 = pcVar1;
        } while (uVar7 != 0);
      }
      // std code
      local_58 = local_38;
      local_68 = local_48;
      uStack_60 = uStack_40;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = (char *)0x0;
    }
    else {
      local_68 = 0x6e776f6e6b6e750e;
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      if ((local_48 & 1) != 0) {
        delete(local_38);
      }
    }
  }
  else {
    local_68 = 0x6e776f6e6b6e750e;
    uStack_60 = uStack_60 & 0xffffffffffffff00;
  }
  // std code
  if ((local_68 & 1) != 0) {
    delete(local_58);
  }
  if ((s_modelIdentifier & 1) == 0) {
    puVar11 = &0;
    uVar7 = (unsigned long)(s_modelIdentifier >> 1);
    piVar5 = (int *)(&0 + uVar7);
    piVar8 = piVar5;
    puVar12 = puVar11;
    if (uVar7 < 4) return;
  }
  else {
    piVar5 = (int *)(0 + 0);
    puVar11 = 0;
    uVar7 = 0;
    piVar8 = piVar5;
    puVar12 = 0;
    if ((long)0 < 4) return;
  }
  do {
    piVar4 = (int *)_memchr(puVar11,0x42,uVar7 - 3);
    piVar5 = piVar8;
    if ((piVar4 == (int *)0x0) || (piVar5 = piVar4, *piVar4 == 0x6b6f6f42)) break;
    uVar7 = (long)piVar8 - ((long)piVar4 + 1);
    puVar11 = (void *)((long)piVar4 + 1);
    piVar5 = piVar8;
  } while (3 < (long)uVar7);
  s_deviceType = 2 - (uint)((long)piVar5 - (long)puVar12 == -1 || piVar5 == piVar8);
  return;
}

void SystemInfo2::retrieveGPUInfo() {
unsigned long *puVar1;
  void *pvVar2;
  unsigned long *puVar3;
  int iVar4;
  unsigned long long uVar5;
  long lVar6;
  long lVar7;
  unsigned long uVar8;
  size_t sVar9;
  unsigned long *puVar10;
  char *pcVar11;
  void *pvVar12;
  unsigned long *puVar13;
  unsigned long *puVar14;
  unsigned long uVar15;
  unsigned long *puVar16;
  unsigned long *puVar17;
  void *local_160;
  void *local_150;
  unsigned int local_144;
  void *local_140;
  unsigned long local_138 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  uVar5 = _IOServiceMatching("IOPCIDevice");
  _IOServiceGetMatchingServices(*(unsigned int *)PTR__kIOMasterPortDefault_101ab46a0,uVar5,&local_144)
  ;
  iVar4 = _IOIteratorNext(local_144);
  if (iVar4 != 0) {
    uVar5 = *(unsigned long long *)PTR__kCFAllocatorDefault_101ab4648;
    do {
      lVar6 = _IORegistryEntryCreateCFProperty(iVar4,&cf_IOName,uVar5,0);
      if (lVar6 != 0) {
        lVar7 = _CFStringCompare(lVar6,&cf_display,0);
        _CFRelease(lVar6);
        if ((lVar7 == 0) &&
           (lVar6 = _IORegistryEntryCreateCFProperty(iVar4,&cf_model,uVar5,0), lVar6 != 0)) {
          uVar8 = _CFDataGetLength(lVar6);
          if (0xfe < uVar8) {
            uVar8 = 0xff;
          }
          _CFDataGetBytes(lVar6,0,uVar8);
          *(unsigned char *)((long)local_138 + uVar8) = 0;
          _CFRelease(lVar6);
          local_150 = (void *)0x0;
          lVar6 = _IORegistryEntryCreateCFProperty(iVar4,&cf_ATY_memsize,uVar5,0);
          if (lVar6 != 0) {
            _CFNumberGetValue(lVar6,4,&local_150);
            _CFRelease(lVar6);
          }
          if ((local_150 == (void *)0x0) &&
             (lVar6 = _IORegistryEntryCreateCFProperty(iVar4,&cf_VRAM_totalsize,uVar5,0), lVar6 != 0
             )) {
            lVar7 = _CFDataGetLength(lVar6);
            if (lVar7 == 8) {
              _CFDataGetBytes(lVar6,0,8);
              local_150 = local_160;
            }
            _CFRelease(lVar6);
          }
          puVar14 = 0;
          if (0 <= 0) {
            lVar6 = (long)0 - (long)s_gpuNames >> 3;
            puVar16 = (unsigned long *)0xaaaaaaaaaaaaaaab;
            uVar8 = lVar6 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar8) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            lVar7 = (long)0 - (long)s_gpuNames >> 3;
            uVar15 = lVar7 * 0x5555555555555556;
            if (uVar15 < uVar8) {
              uVar15 = uVar8;
            }
            if (0x555555555555554 < (unsigned long)(lVar7 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            if (uVar15 == 0) {
              local_140 = (void *)0x0;
              puVar14 = (unsigned long *)((long)local_140 + lVar6 * 8);
              sVar9 = strlen((char *)local_138);
              if (0xffffffffffffffef < sVar9) return;
              if (sVar9 < 0x17) {
                *(char *)puVar14 = (char)sVar9 * '\x02';
                pcVar11 = (char *)((long)puVar14 + 1);
                if (sVar9 != 0) return;
              }
              else {
                uVar8 = sVar9 + 0x10 & 0xfffffffffffffff0;
                pcVar11 = (char *)new char[uVar8];
                *(char **)((long)local_140 + lVar6 * 8 + 0x10) = pcVar11;
                *puVar14 = uVar8 | 1;
                *(size_t *)((long)local_140 + lVar6 * 8 + 8) = sVar9;
                memcpy(pcVar11,local_138,sVar9);
              }
              puVar16 = (unsigned long *)((long)local_140 + uVar15 * 0x18);
              pcVar11[sVar9] = '\0';
              puVar1 = s_gpuNames;
              puVar10 = puVar14 + 3;
              puVar13 = 0;
              puVar17 = s_gpuNames;
              0 = puVar16;
              if (0 != s_gpuNames) {
                do {
                  puVar14[-1] = puVar13[-1];
                  uVar8 = puVar13[-2];
                  puVar14[-3] = puVar13[-3];
                  puVar14[-2] = uVar8;
                  puVar14 = puVar14 + -3;
                  puVar13[-3] = 0;
                  puVar13[-2] = 0;
                  puVar13[-1] = 0;
                  puVar17 = s_gpuNames;
                  puVar13 = puVar13 + -3;
                  puVar3 = 0;
                } while (puVar1 != puVar13);
                while (puVar13 = puVar3, s_gpuNames = puVar14, 0 = puVar10,
                      puVar14 = s_gpuNames, puVar10 = 0, puVar13 != puVar17) {
                  puVar3 = puVar13 + -3;
                  if ((puVar13[-3] & 1) != 0) {
                    puVar16 = (unsigned long *)puVar13[-1];
                    delete(puVar16);
                    puVar10 = 0;
                    puVar14 = s_gpuNames;
                  }
                }
              }
              0 = puVar10;
              s_gpuNames = puVar14;
              if (puVar17 != (unsigned long *)0x0) {
                delete(puVar17);
                puVar16 = puVar17;
              }
              return;
            }
            if (uVar15 < 0xaaaaaaaaaaaaaab) {
              local_140 = new char[uVar15 * 0x18];
              return;
            }
            // std code
                    /* WARNING: Subroutine does not return */
            // std code
          }
          puVar16 = local_138;
          sVar9 = strlen((char *)puVar16);
          if (0xffffffffffffffef < sVar9) {
                    /* WARNING: Subroutine does not return */
            // std code
          }
          if (sVar9 < 0x17) {
            *(char *)puVar14 = (char)sVar9 * '\x02';
            puVar10 = (unsigned long *)((long)puVar14 + 1);
            if (sVar9 != 0) return;
          }
          else {
            uVar8 = sVar9 + 0x10 & 0xfffffffffffffff0;
            puVar10 = (unsigned long *)new char[uVar8];
            puVar14[2] = (unsigned long)puVar10;
            *puVar14 = uVar8 | 1;
            puVar14[1] = sVar9;
            puVar16 = puVar10;
            memcpy(puVar10,local_138,sVar9);
          }
          *(char *)((long)puVar10 + sVar9) = '\0';
          0 = puVar14 + 3;
          pvVar2 = s_gpuMemorySizes;
          if (0 < 0) {
            *0 = local_150;
            0 = 0 + 1;
          }
          else {
            sVar9 = (long)0 - (long)s_gpuMemorySizes;
            lVar6 = (long)sVar9 >> 3;
            uVar8 = lVar6 + 1;
            if (0x1fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            uVar15 = (long)0 - (long)s_gpuMemorySizes >> 2;
            if (uVar15 < uVar8) {
              uVar15 = uVar8;
            }
            if (0xffffffffffffffe < (unsigned long)((long)0 - (long)s_gpuMemorySizes >> 3)) {
              uVar15 = 0x1fffffffffffffff;
            }
            if (uVar15 == 0) {
              pvVar12 = (void *)0x0;
              *(void **)(lVar6 * 8) = local_150;
            }
            else {
              local_140 = local_150;
              if (0x1fffffffffffffff < uVar15) return;
              pvVar12 = new char[uVar15 * 8];
              *(void **)((long)pvVar12 + lVar6 * 8) = local_140;
            }
            if (0 < (long)sVar9) {
              memcpy(pvVar12,pvVar2,sVar9);
            }
            0 = (unsigned long long *)((long)pvVar12 + uVar15 * 8);
            0 = (unsigned long long *)((long)pvVar12 + lVar6 * 8 + 8);
            s_gpuMemorySizes = pvVar12;
            if (pvVar2 != (void *)0x0) {
              delete(pvVar2);
            }
          }
        }
      }
      iVar4 = _IOIteratorNext(local_144);
    } while (iVar4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

void SystemInfo2::retrieveHWInfo() {
size_t local_10;
  
  s_calledRetrieveHWInfo = 1;
  s_szSystemMemory = 0;
  local_10 = 8;
  _sysctlbyname("hw.memsize",&s_szSystemMemory,&local_10,(void *)0x0,0);
  return;
}
}
