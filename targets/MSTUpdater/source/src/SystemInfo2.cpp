#include <ni/controller_editor/SystemInfo2.hpp>
namespace NI::GP {

void SystemInfo2::retrieveCPUInfo() {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  unsigned char *puVar4;
  long lVar5;
  unsigned char *puVar6;
  unsigned long uVar7;
  unsigned long uVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned char *puVar11;
  unsigned long long *puVar12;
  unsigned long uVar13;
  unsigned char *puVar14;
  uint uVar15;
  long lVar16;
  unsigned long long *puVar17;
  unsigned char *puVar18;
  unsigned long uVar19;
  algorithm local_68 [24];
  locale local_50 [8];
  size_t local_48;
  locale local_40 [8];
  size_t local_38;
  
  s_calledRetrieveCPUInfo = 1;
  local_38 = local_38 & 0xffffffff00000000;
  local_48 = 4;
  _sysctlbyname("hw.physicalcpu",&local_38,&local_48,(void *)0x0,0);
  s_numPhysicalCores = (uint)local_38;
  local_38 = local_38 & 0xffffffff00000000;
  local_48 = 4;
  _sysctlbyname("hw.logicalcpu",&local_38,&local_48,(void *)0x0,0);
  s_numLogicalCores = (uint)local_38;
  local_38 = local_38 & 0xffffffff00000000;
  local_48 = 4;
  _sysctlbyname("machdep.cpu.core_count",&local_38,&local_48,(void *)0x0,0);
  s_numProcessorPacks = 1;
  if (0 < (int)(uint)local_38) {
    s_numProcessorPacks = s_numPhysicalCores / (uint)local_38;
  }
  puVar4 = (unsigned char *)new(0x200);
  lVar5 = -0x200;
  puVar14 = puVar4;
  do {
    puVar11 = puVar14;
    *puVar11 = 0;
    *(unsigned int *)(puVar11 + 1) = 0;
    *(void2 *)(puVar11 + 5) = 0;
    puVar11[7] = 0;
    puVar14 = puVar11 + 8;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0);
  uVar19 = (long)puVar14 - (long)puVar4;
  local_38 = uVar19;
  _sysctlbyname("machdep.cpu.brand_string",puVar4,&local_38,(void *)0x0,0);
  uVar7 = (unsigned long)(byte)s_processorName;
  if (((byte)s_processorName & 1) == 0) {
    uVar13 = 0x16;
  }
  else {
    uVar7 = 0(s_processorName._1_7_,(byte)s_processorName);
    uVar13 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if (uVar13 <= uVar19 && uVar19 - uVar13 != 0) {
    uVar8 = (uVar7 & 0xff) >> 1;
    if ((uVar7 & 1) != 0) {
      uVar8 = 0;
    }
    // std code
    uVar7 = (unsigned long)(byte)s_processorName;
  }
  puVar6 = (unsigned char *)((long)&s_processorName + 1);
  if ((uVar7 & 1) != 0) {
    puVar6 = 0;
  }
  if (puVar4 == puVar14) goto LAB_1001b4234;
  puVar9 = puVar11 + (8 - (long)puVar4);
  puVar14 = puVar6;
  puVar18 = puVar4;
  if (((puVar9 < (unsigned char *)0x20) ||
      (puVar10 = (unsigned char *)((unsigned long)puVar9 & 0xffffffffffffffe0), puVar10 == (unsigned char *)0x0))
     || ((puVar6 < puVar11 + 8 && (puVar4 < puVar11 + (8 - (long)puVar4) + (long)puVar6)))) {
LAB_1001b421b:
    puVar18 = puVar18 + -8;
    do {
      *puVar14 = puVar18[8];
      puVar14 = puVar14 + 1;
      puVar18 = puVar18 + 1;
    } while (puVar11 != puVar18);
  }
  else {
    uVar15 = ((uint)((unsigned long)(puVar10 + -0x20) >> 5) & 0x7ffffff) + 1;
    if ((uVar15 & 3) == 0) {
      lVar5 = 0;
    }
    else {
      lVar16 = -((unsigned long)uVar15 & 3);
      lVar5 = 0;
      do {
        uVar1 = *(unsigned long long *)((long)(puVar4 + lVar5) + 8);
        uVar2 = *(unsigned long long *)(puVar4 + lVar5 + 0x10);
        uVar3 = *(unsigned long long *)((long)(puVar4 + lVar5 + 0x10) + 8);
        *(unsigned long long *)(puVar6 + lVar5) = *(unsigned long long *)(puVar4 + lVar5);
        *(unsigned long long *)((long)(puVar6 + lVar5) + 8) = uVar1;
        *(unsigned long long *)(puVar6 + lVar5 + 0x10) = uVar2;
        *(unsigned long long *)((long)(puVar6 + lVar5 + 0x10) + 8) = uVar3;
        lVar5 = lVar5 + 0x20;
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0);
    }
    if ((unsigned char *)0x5f < puVar10 + -0x20) {
      lVar16 = (long)puVar10 - lVar5;
      puVar17 = (unsigned long long *)(puVar4 + lVar5 + 0x70);
      puVar12 = (unsigned long long *)(puVar6 + lVar5 + 0x70);
      do {
        uVar1 = puVar17[-0xd];
        uVar2 = puVar17[-0xc];
        uVar3 = puVar17[-0xb];
        puVar12[-0xe] = puVar17[-0xe];
        puVar12[-0xd] = uVar1;
        puVar12[-0xc] = uVar2;
        puVar12[-0xb] = uVar3;
        uVar1 = puVar17[-9];
        uVar2 = puVar17[-8];
        uVar3 = puVar17[-7];
        puVar12[-10] = puVar17[-10];
        puVar12[-9] = uVar1;
        puVar12[-8] = uVar2;
        puVar12[-7] = uVar3;
        uVar1 = puVar17[-5];
        uVar2 = puVar17[-4];
        uVar3 = puVar17[-3];
        puVar12[-6] = puVar17[-6];
        puVar12[-5] = uVar1;
        puVar12[-4] = uVar2;
        puVar12[-3] = uVar3;
        uVar1 = puVar17[-1];
        uVar2 = *puVar17;
        uVar3 = puVar17[1];
        puVar12[-2] = puVar17[-2];
        puVar12[-1] = uVar1;
        *puVar12 = uVar2;
        puVar12[1] = uVar3;
        puVar17 = puVar17 + 0x10;
        puVar12 = puVar12 + 0x10;
        lVar16 = lVar16 + -0x80;
      } while (lVar16 != 0);
    }
    if (puVar9 != puVar10) {
      puVar14 = puVar6 + (long)puVar10;
      puVar18 = puVar4 + (long)puVar10;
      goto LAB_1001b421b;
    }
  }
  puVar6 = puVar6 + uVar19;
LAB_1001b4234:
  *puVar6 = 0;
  if (((byte)s_processorName & 1) == 0) {
    s_processorName._0_1_ = (char)uVar19 * '\x02';
    uVar19 = 0;
  }
  0 = uVar19;
  // std code
  local_48 = CONCAT44(local_48._4_4_,0x4000);
  // std code
  // boost code
            (local_68,&s_processorName,&local_48);
  // std code
  // std code
  // std code
  // std code
  delete(puVar4);
  local_48 = 0;
  local_38 = 8;
  _sysctlbyname("hw.cpufrequency_max",&local_48,&local_38,(void *)0x0,0);
  s_processorSpeed = (int)(local_48 / 1000000);
  return;
}
}
