#include <ni/controller_editor/SystemInfo2.hpp>
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
  puVar4 = (unsigned long long *)new(0x200);
  ___bzero(puVar4,0x200);
  local_58 = 0x200;
  _sysctlbyname("machdep.cpu.brand_string",puVar4,&local_58,(void *)0x0,0);
  if (((byte)s_processorName & 1) == 0) {
    uVar10 = 0x16;
    uVar7 = (unsigned long)((byte)s_processorName >> 1);
LAB_100301273:
    // std code
    uVar5 = (unsigned long)(byte)s_processorName;
  }
  else {
    uVar5 = 0(s_processorName._1_7_,(byte)s_processorName);
    uVar10 = (uVar5 & 0xfffffffffffffffe) - 1;
    uVar7 = 0;
    if (uVar10 < 0x200) goto LAB_100301273;
  }
  if ((uVar5 & 1) == 0) {
    puVar6 = (unsigned long long *)((long)&s_processorName + 1);
    puVar8 = (unsigned long long *)((long)&_OPENSSL_ia32cap_P + 1);
    if ((unsigned long long *)((long)&s_processorName + 1) < puVar4 + 0x40) goto LAB_1003012d6;
  }
  else {
    puVar8 = 0 + 0x40;
    puVar6 = 0;
    if (0 < puVar4 + 0x40) {
LAB_1003012d6:
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
        goto joined_r0x000100301340;
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
joined_r0x000100301340:
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
}
