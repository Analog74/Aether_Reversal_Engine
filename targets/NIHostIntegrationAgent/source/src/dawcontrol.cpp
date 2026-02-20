#include <ni/controller_editor/dawcontrol.hpp>
namespace (anonymous namespace)::processTrackName(NI {

void dawcontrol::Track&) {
Track TVar1;
  unsigned char *puVar2;
  unsigned long long uVar3;
  unsigned long long uVar4;
  unsigned long long uVar5;
  bool bVar6;
  int iVar7;
  unsigned char *puVar8;
  unsigned long uVar9;
  unsigned long long *puVar10;
  long lVar11;
  uint uVar12;
  unsigned long long *puVar13;
  char *pcVar14;
  unsigned char *puVar15;
  unsigned long uVar16;
  long lVar17;
  unsigned char *puVar18;
  unsigned char *puVar19;
  Track *pTVar20;
  void *local_118;
  void *pvStack_110;
  unsigned long long local_108;
  unsigned char uStack_100;
  void7 uStack_ff;
  unsigned char local_f8;
  unsigned long long uStack_f7;
  unsigned long long local_e8;
  unsigned long long uStack_e0;
  unsigned char local_d8;
  unsigned long long local_d0;
  unsigned long long uStack_c8;
  char local_c0;
  unsigned char local_b8;
  unsigned long long local_b0;
  unsigned long long local_a8;
  unsigned char *puStack_a0;
  unsigned char *local_98;
  unsigned char uStack_90;
  void7 uStack_8f;
  unsigned char uStack_88;
  unsigned long long uStack_87;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned char local_68;
  unsigned long long local_60;
  unsigned long long uStack_58;
  unsigned char local_50;
  unsigned char local_48;
  unsigned long long local_40;
  
  if (*(int *)(param_1 + 0x80) != 4) {
    return;
  }
  if ((processTrackName(NI::dawcontrol::Track&)::regex == '\0') &&
     (iVar7 = ___cxa_guard_acquire(&processTrackName(NI::dawcontrol::Track&)::regex), iVar7 != 0)) {
    // std code
              ((regex *)&processTrackName(NI::dawcontrol::Track&)::regex,"^([A-Z]+)(-)(.*)$",0);
    ___cxa_atexit(// std code
                  0x100000000);
    ___cxa_guard_release(&processTrackName(NI::dawcontrol::Track&)::regex);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = '\0';
  local_b8 = 0;
  local_b0 = 0;
  local_118 = (void *)0x0;
  pvStack_110 = (void *)0x0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  local_f8 = 0;
  uStack_f7 = 0;
  if (((byte)param_1[0x18] & 1) == 0) {
    pTVar20 = param_1 + 0x19;
    uVar9 = (unsigned long)((byte)param_1[0x18] >> 1);
  }
  else {
    pTVar20 = *(Track **)(param_1 + 0x28);
    uVar9 = *(unsigned long *)(param_1 + 0x20);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a8 = (unsigned char *)0x0;
  puStack_a0 = (unsigned char *)0x0;
  local_98 = (unsigned char *)0x0;
  uStack_90 = 0;
  uStack_8f = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  bVar6 = // std code
                    ((regex *)&processTrackName(NI::dawcontrol::Track&)::regex,pTVar20,
                     pTVar20 + uVar9,&local_a8,0x1040);
  // std code
  match_results<// std code
  ::__assign_abi_v15006_<char_const*,// std code
            ((match_results<// std code
              *)&local_118,pTVar20,pTVar20 + uVar9,&local_a8,0);
  if (local_a8 != (unsigned char *)0x0) {
    puStack_a0 = local_a8;
    delete(local_a8);
  }
  if ((bVar6) && (local_c0 != '\0')) {
    pvStack_110 = local_118;
  }
  uVar9 = ((long)pvStack_110 - (long)local_118 >> 3) * -0x5555555555555555;
  if (uVar9 < 3) goto LAB_100014ebd;
  if (*(char *)((long)local_118 + 0x28) == '\0') {
    local_a8 = (unsigned char *)0x0;
    puStack_a0 = (unsigned char *)0x0;
    local_98 = (unsigned char *)0x0;
    TVar1 = *param_1;
  }
  else {
    puVar13 = (unsigned long long *)((long)local_118 + 0x18);
    if (uVar9 < 2) {
      puVar13 = (unsigned long long *)&uStack_100;
    }
    puVar10 = (unsigned long long *)&local_f8;
    if (uVar9 >= 2) {
      puVar10 = (unsigned long long *)((long)local_118 + 0x20);
    }
    puVar15 = (unsigned char *)*puVar13;
    puVar2 = (unsigned char *)*puVar10;
    puVar19 = puVar2 + -(long)puVar15;
    if ((unsigned char *)0xffffffffffffffef < puVar19) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (&0 < puVar19) {
      puVar8 = (unsigned char *)new((unsigned long)(puVar19 + 0x10) & 0xfffffffffffffff0);
      local_98 = puVar8;
      local_a8 = (unsigned char *)((unsigned long)(puVar19 + 0x10) & 0xfffffffffffffff0 | 1);
      puStack_a0 = puVar19;
    }
    else {
      local_a8 = (unsigned char *)0(local_a8._1_7_,(char)puVar19 * '\x02');
      puVar8 = (unsigned char *)((long)&local_a8 + 1);
    }
    if (puVar15 != puVar2) {
      if (((unsigned char *)0x1f < puVar19) && (0x1f < (unsigned long)((long)puVar8 - (long)puVar15))) {
        puVar18 = (unsigned char *)((unsigned long)puVar19 & 0xffffffffffffffe0);
        uVar16 = ((unsigned long)(puVar18 + -0x20) >> 5) + 1;
        uVar9 = (unsigned long)((uint)uVar16 & 3);
        if (puVar18 + -0x20 < (unsigned char *)0x60) {
          lVar17 = 0;
        }
        else {
          uVar16 = uVar16 & 0xfffffffffffffffc;
          lVar17 = 0;
          do {
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x10);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x10) + 8);
            *(unsigned long long *)(puVar8 + lVar17) = *(unsigned long long *)(puVar15 + lVar17);
            *(unsigned long long *)((long)(puVar8 + lVar17) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x10) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x10) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x20) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x30);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x30) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x20) = *(unsigned long long *)(puVar15 + lVar17 + 0x20);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x20) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x30) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x30) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x40) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x50);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x50) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x40) = *(unsigned long long *)(puVar15 + lVar17 + 0x40);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x40) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x50) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x50) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x60) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x70);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x70) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x60) = *(unsigned long long *)(puVar15 + lVar17 + 0x60);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x60) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x70) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x70) + 8) = uVar5;
            lVar17 = lVar17 + 0x80;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
        }
        if (uVar9 != 0) {
          lVar11 = 0;
          do {
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar11 + lVar17) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar11 + lVar17 + 0x10);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar11 + lVar17 + 0x10) + 8);
            *(unsigned long long *)(puVar8 + lVar11 + lVar17) = *(unsigned long long *)(puVar15 + lVar11 + lVar17);
            *(unsigned long long *)((long)(puVar8 + lVar11 + lVar17) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar11 + lVar17 + 0x10) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar11 + lVar17 + 0x10) + 8) = uVar5;
            lVar11 = lVar11 + 0x20;
          } while (uVar9 << 5 != lVar11);
        }
        puVar8 = puVar8 + (long)puVar18;
        if (puVar19 == puVar18) goto LAB_100014c23;
        puVar15 = puVar15 + (long)puVar18;
      }
      uVar12 = (int)puVar2 - (int)puVar15;
      uVar16 = ~(unsigned long)puVar15;
      uVar9 = (unsigned long)uVar12 & 7;
      if ((uVar12 & 7) != 0) {
        do {
          *puVar8 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if ((unsigned char *)0x6 < puVar2 + uVar16) {
        do {
          *puVar8 = *puVar15;
          puVar8[1] = puVar15[1];
          puVar8[2] = puVar15[2];
          puVar8[3] = puVar15[3];
          puVar8[4] = puVar15[4];
          puVar8[5] = puVar15[5];
          puVar8[6] = puVar15[6];
          puVar8[7] = puVar15[7];
          puVar8 = puVar8 + 8;
          puVar15 = puVar15 + 8;
        } while (puVar15 != puVar2);
      }
    }
LAB_100014c23:
    *puVar8 = 0;
    TVar1 = *param_1;
  }
  if (((byte)TVar1 & 1) != 0) {
    delete(*(void **)(param_1 + 0x10));
  }
  *(unsigned char **)(param_1 + 0x10) = local_98;
  *(unsigned char **)param_1 = local_a8;
  *(unsigned char **)(param_1 + 8) = puStack_a0;
  uVar9 = ((long)pvStack_110 - (long)local_118 >> 3) * -0x5555555555555555;
  pcVar14 = (char *)((long)&uStack_f7 + 7);
  if (3 < uVar9) {
    pcVar14 = (char *)((long)local_118 + 0x58);
  }
  if (*pcVar14 == '\0') {
    local_a8 = (unsigned char *)0x0;
    puStack_a0 = (unsigned char *)0x0;
    local_98 = (unsigned char *)0x0;
    TVar1 = param_1[0x18];
  }
  else {
    puVar13 = (unsigned long long *)&uStack_100;
    if (3 < uVar9) {
      puVar13 = (unsigned long long *)((long)local_118 + 0x48);
    }
    puVar10 = (unsigned long long *)&local_f8;
    if (3 < uVar9) {
      puVar10 = (unsigned long long *)((long)local_118 + 0x50);
    }
    puVar15 = (unsigned char *)*puVar13;
    puVar2 = (unsigned char *)*puVar10;
    puVar19 = puVar2 + -(long)puVar15;
    if ((unsigned char *)0xffffffffffffffef < puVar19) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    if (&0 < puVar19) {
      puVar8 = (unsigned char *)new((unsigned long)(puVar19 + 0x10) & 0xfffffffffffffff0);
      local_a8 = (unsigned char *)((unsigned long)(puVar19 + 0x10) & 0xfffffffffffffff0 | 1);
      puStack_a0 = puVar19;
      local_98 = puVar8;
    }
    else {
      local_a8 = (unsigned char *)0(local_a8._1_7_,(char)puVar19 * '\x02');
      puVar8 = (unsigned char *)((long)&local_a8 + 1);
    }
    if (puVar15 != puVar2) {
      if (((unsigned char *)0x1f < puVar19) && (0x1f < (unsigned long)((long)puVar8 - (long)puVar15))) {
        puVar18 = (unsigned char *)((unsigned long)puVar19 & 0xffffffffffffffe0);
        uVar16 = ((unsigned long)(puVar18 + -0x20) >> 5) + 1;
        uVar9 = (unsigned long)((uint)uVar16 & 3);
        if (puVar18 + -0x20 < (unsigned char *)0x60) {
          lVar17 = 0;
        }
        else {
          uVar16 = uVar16 & 0xfffffffffffffffc;
          lVar17 = 0;
          do {
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x10);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x10) + 8);
            *(unsigned long long *)(puVar8 + lVar17) = *(unsigned long long *)(puVar15 + lVar17);
            *(unsigned long long *)((long)(puVar8 + lVar17) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x10) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x10) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x20) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x30);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x30) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x20) = *(unsigned long long *)(puVar15 + lVar17 + 0x20);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x20) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x30) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x30) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x40) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x50);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x50) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x40) = *(unsigned long long *)(puVar15 + lVar17 + 0x40);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x40) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x50) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x50) + 8) = uVar5;
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x60) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar17 + 0x70);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar17 + 0x70) + 8);
            *(unsigned long long *)(puVar8 + lVar17 + 0x60) = *(unsigned long long *)(puVar15 + lVar17 + 0x60);
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x60) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar17 + 0x70) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar17 + 0x70) + 8) = uVar5;
            lVar17 = lVar17 + 0x80;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
        }
        if (uVar9 != 0) {
          lVar11 = 0;
          do {
            uVar3 = *(unsigned long long *)((long)(puVar15 + lVar11 + lVar17) + 8);
            uVar4 = *(unsigned long long *)(puVar15 + lVar11 + lVar17 + 0x10);
            uVar5 = *(unsigned long long *)((long)(puVar15 + lVar11 + lVar17 + 0x10) + 8);
            *(unsigned long long *)(puVar8 + lVar11 + lVar17) = *(unsigned long long *)(puVar15 + lVar11 + lVar17);
            *(unsigned long long *)((long)(puVar8 + lVar11 + lVar17) + 8) = uVar3;
            *(unsigned long long *)(puVar8 + lVar11 + lVar17 + 0x10) = uVar4;
            *(unsigned long long *)((long)(puVar8 + lVar11 + lVar17 + 0x10) + 8) = uVar5;
            lVar11 = lVar11 + 0x20;
          } while (uVar9 << 5 != lVar11);
        }
        puVar8 = puVar8 + (long)puVar18;
        if (puVar19 == puVar18) goto LAB_100014e93;
        puVar15 = puVar15 + (long)puVar18;
      }
      uVar12 = (int)puVar2 - (int)puVar15;
      uVar16 = ~(unsigned long)puVar15;
      uVar9 = (unsigned long)uVar12 & 7;
      if ((uVar12 & 7) != 0) {
        do {
          *puVar8 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if ((unsigned char *)0x6 < puVar2 + uVar16) {
        do {
          *puVar8 = *puVar15;
          puVar8[1] = puVar15[1];
          puVar8[2] = puVar15[2];
          puVar8[3] = puVar15[3];
          puVar8[4] = puVar15[4];
          puVar8[5] = puVar15[5];
          puVar8[6] = puVar15[6];
          puVar8[7] = puVar15[7];
          puVar8 = puVar8 + 8;
          puVar15 = puVar15 + 8;
        } while (puVar15 != puVar2);
      }
    }
LAB_100014e93:
    *puVar8 = 0;
    TVar1 = param_1[0x18];
  }
  if (((byte)TVar1 & 1) != 0) {
    delete(*(void **)(param_1 + 0x28));
  }
  *(unsigned char **)(param_1 + 0x28) = local_98;
  *(unsigned char **)(param_1 + 0x18) = local_a8;
  *(unsigned char **)(param_1 + 0x20) = puStack_a0;
LAB_100014ebd:
  if (local_118 != (void *)0x0) {
    pvStack_110 = local_118;
    delete(local_118);
  }
  return;
}
}
