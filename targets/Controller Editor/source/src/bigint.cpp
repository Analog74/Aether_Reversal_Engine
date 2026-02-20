#include <ni/controller_editor/bigint.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace fmt::v9::detail {

void bigint::assign_pow10(int param_1) {
}

void bigint::TEMPNAMEPLACEHOLDERVALUE(int param_1) {
}

void bigint::square() {
unsigned long long *puVar1;
  basic_memory_buffer<unsigned_int,32ul,// std code
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned long long uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  uint uVar9;
  unsigned long uVar10;
  unsigned long uVar11;
  uint uVar12;
  unsigned long uVar13;
  long lVar14;
  bigint *pbVar15;
  unsigned long uVar16;
  basic_memory_buffer<unsigned_int,32ul,// std code
  uint uVar18;
  unsigned long uVar19;
  unsigned long uVar20;
  long lVar21;
  long lVar22;
  basic_memory_buffer<unsigned_int,32ul,// std code
  uint uVar24;
  basic_memory_buffer<unsigned_int,32ul,// std code
  bool bVar26;
  void **local_118;
  basic_memory_buffer<unsigned_int,32ul,// std code
  unsigned long uStack_108;
  unsigned long local_100;
  basic_memory_buffer<unsigned_int,32ul,// std code
  basic_memory_buffer<unsigned_int,32ul,// std code
  basic_memory_buffer<unsigned_int,32ul,// std code
  basic_memory_buffer<unsigned_int,32ul,// std code
  unsigned long long local_e8 [10];
  unsigned long auStack_98 [6];
  basic_memory_buffer<unsigned_int,32ul,// std code
  unsigned long local_60;
  unsigned long local_58;
  bigint *local_50;
  long local_48;
  unsigned long local_40;
  uint local_34;
  
  uVar16 = *(unsigned long *)(this + 0x10);
  uStack_108 = 0;
  local_118 = &PTR_grow_101b17268;
  pbVar23 = *(basic_memory_buffer<unsigned_int,32ul,// std code
  uVar10 = *(unsigned long *)(this + 0x18);
  local_100 = uVar10;
  if (pbVar23 ==
      (basic_memory_buffer<unsigned_int,32ul,// std code
    pbVar17 = local_f8;
    uVar11 = uVar10;
    local_110 = pbVar17;
    if (uVar16 != 0) {
      lVar22 = uVar16 * 4 + 0x1c;
      if (((bigint *)0x1b < this + (lVar22 - (long)pbVar23)) &&
         ((lVar21 = uVar16 * 4 - (long)pbVar23,
          pbVar23 + ((unsigned long)(this + lVar21 + 0x1c) & 0xfffffffffffffffc) + 4 <= local_f8 ||
          ((basic_memory_buffer<unsigned_int,32ul,// std code
           ((long)&local_118 + ((unsigned long)(this + lVar21 + 0x40) & 0xfffffffffffffffc)) <= pbVar23))))
      {
        uVar20 = ((unsigned long)(this + (lVar22 - (long)pbVar23)) >> 2) + 1;
        uVar19 = uVar20 & 0xfffffffffffffff8;
        pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
                  ((uVar19 - 8 >> 3) + 1);
        uVar13 = (unsigned long)((uint)pbVar17 & 3);
        if (uVar19 - 8 < 0x18) {
          lVar21 = 0;
        }
        else {
          pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
                    -((unsigned long)pbVar17 & 0xfffffffffffffffc);
          lVar21 = 0;
          do {
            uVar6 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 8);
            uVar7 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x10);
            uVar8 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x10 + 8);
            *(unsigned long long *)(local_f8 + lVar21 * 4) = *(unsigned long long *)(pbVar23 + lVar21 * 4);
            *(unsigned long long *)(abStack_f0 + lVar21 * 4) = uVar6;
            *(unsigned long long *)((long)local_e8 + lVar21 * 4) = uVar7;
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -0x12) * 4) = uVar8;
            uVar6 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x20 + 8);
            uVar7 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x30);
            uVar8 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x30 + 8);
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -0x10) * 4) =
                 *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x20);
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -0xe) * 4) = uVar6;
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -0xc) * 4) = uVar7;
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -10) * 4) = uVar8;
            uVar6 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x40 + 8);
            uVar7 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x50);
            uVar8 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x50 + 8);
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -8) * 4) =
                 *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x40);
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -6) * 4) = uVar6;
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -4) * 4) = uVar7;
            *(unsigned long long *)((long)auStack_98 + (lVar21 + -2) * 4) = uVar8;
            pbVar25 = pbVar23 + lVar21 * 4 + 0x60;
            uVar3 = *(unsigned int *)(pbVar25 + 4);
            uVar4 = *(unsigned int *)(pbVar25 + 8);
            uVar5 = *(unsigned int *)(pbVar25 + 0xc);
            uVar6 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x70);
            uVar7 = *(unsigned long long *)(pbVar23 + lVar21 * 4 + 0x70 + 8);
            *(unsigned int *)((long)auStack_98 + lVar21 * 4) = *(unsigned int *)pbVar25;
            *(unsigned int *)((long)auStack_98 + (lVar21 + 1) * 4) = uVar3;
            *(unsigned int *)((long)auStack_98 + (lVar21 + 2) * 4) = uVar4;
            *(unsigned int *)((long)auStack_98 + (lVar21 + 3) * 4) = uVar5;
            *(unsigned long long *)((long)auStack_98 + lVar21 * 4 + 0x10) = uVar6;
            *(unsigned long long *)((long)auStack_98 + lVar21 * 4 + 0x18) = uVar7;
            lVar21 = lVar21 + 0x20;
            pbVar17 = pbVar17 + 4;
          } while (pbVar17 !=
                   (basic_memory_buffer<unsigned_int,32ul,// std code
        }
        if (uVar13 != 0) {
          pbVar17 = pbVar23 + lVar21 * 4 + 0x10;
          lVar14 = 0;
          do {
            pbVar25 = pbVar23 + lVar14 + lVar21 * 4;
            uVar3 = *(unsigned int *)(pbVar25 + 4);
            uVar4 = *(unsigned int *)(pbVar25 + 8);
            uVar5 = *(unsigned int *)(pbVar25 + 0xc);
            uVar6 = *(unsigned long long *)(pbVar17 + lVar14);
            uVar7 = *(unsigned long long *)(pbVar17 + lVar14 + 8);
            pbVar2 = local_f8 + lVar14 + lVar21 * 4;
            *(unsigned int *)pbVar2 = *(unsigned int *)pbVar25;
            *(unsigned int *)(pbVar2 + 4) = uVar3;
            *(unsigned int *)(pbVar2 + 8) = uVar4;
            *(unsigned int *)(pbVar2 + 0xc) = uVar5;
            puVar1 = (unsigned long long *)((long)local_e8 + lVar14 + lVar21 * 4);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            lVar14 = lVar14 + 0x20;
          } while (uVar13 << 5 != lVar14);
        }
        if (uVar20 == uVar19) return;
        pbVar17 = local_f8 + uVar19 * 4;
        pbVar23 = pbVar23 + uVar19 * 4;
      }
      pbVar15 = (bigint *)0x0;
      do {
        *(unsigned int *)(pbVar17 + (long)pbVar15) = *(unsigned int *)(pbVar23 + (long)pbVar15);
        pbVar15 = pbVar15 + 4;
      } while (this + (lVar22 - (long)pbVar23) + 4 != pbVar15);
    }
  }
  else {
    *(basic_memory_buffer<unsigned_int,32ul,// std code
         (basic_memory_buffer<unsigned_int,32ul,// std code
    *(unsigned long *)(this + 0x10) = 0;
    *(unsigned long long *)(this + 0x18) = 0;
    uVar11 = 0;
    pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
    local_110 = pbVar23;
  }
  if (uVar10 < uVar16) {
    pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
    basic_memory_buffer<unsigned_int,32ul,// std code
    uVar11 = *(unsigned long *)(this + 0x18);
    uVar10 = local_100;
  }
  uStack_108 = uVar10;
  if (uVar16 <= uVar10) {
    uStack_108 = uVar16;
  }
  uVar9 = (uint)uVar16;
  uVar12 = uVar9 * 2;
  uVar10 = (unsigned long)uVar12;
  if (uVar11 < uVar10) {
    pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
    (*(code *)**(unsigned long long **)this)();
    uVar11 = *(unsigned long *)(this + 0x18);
  }
  local_58 = uVar10;
  if (uVar11 < uVar10) {
    local_58 = uVar11;
  }
  *(unsigned long *)(this + 0x10) = local_58;
  if ((int)uVar9 < 1) {
    pbVar23 = (basic_memory_buffer<unsigned_int,32ul,// std code
    uVar16 = 0;
  }
  else {
    local_48 = *(long *)(this + 8);
    local_40 = uVar16 & 0xffffffff;
    lVar22 = -1;
    uVar13 = 1;
    pbVar23 = (basic_memory_buffer<unsigned_int,32ul,// std code
    uVar16 = 0;
    uVar10 = 0;
    do {
      uVar19 = uVar10 + 1;
      if (uVar10 == 0) {
        pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
        lVar21 = 0;
      }
      else {
        pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
        lVar21 = lVar22;
        do {
          bVar26 = CARRY8((unsigned long)*(uint *)(local_110 + lVar21 * 4 + 4) *
                          (unsigned long)*(uint *)(local_110 + (long)pbVar17 * 4),(unsigned long)pbVar23);
          pbVar25 = pbVar23 + (unsigned long)*(uint *)(local_110 + lVar21 * 4 + 4) *
                              (unsigned long)*(uint *)(local_110 + (long)pbVar17 * 4);
          pbVar23 = pbVar25 + (unsigned long)*(uint *)(local_110 + lVar21 * 4) *
                              (unsigned long)*(uint *)(local_110 + (long)pbVar17 * 4 + 4);
          uVar16 = uVar16 + bVar26 +
                   (unsigned long)CARRY8((unsigned long)*(uint *)(local_110 + lVar21 * 4) *
                                 (unsigned long)*(uint *)(local_110 + (long)pbVar17 * 4 + 4),(unsigned long)pbVar25)
          ;
          pbVar17 = pbVar17 + 2;
          lVar21 = lVar21 + -2;
        } while ((basic_memory_buffer<unsigned_int,32ul,// std code
                 (uVar13 & 0xfffffffffffffffe) != pbVar17);
        lVar21 = uVar10 - (long)pbVar17;
      }
      if ((uVar19 & 1) != 0) {
        pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
                  ((unsigned long)*(uint *)(local_110 + (long)pbVar17 * 4) *
                  (unsigned long)*(uint *)(local_110 + lVar21 * 4));
        bVar26 = CARRY8((unsigned long)pbVar23,(unsigned long)pbVar17);
        pbVar23 = pbVar23 + (long)pbVar17;
        uVar16 = uVar16 + bVar26;
      }
      *(int *)(local_48 + uVar10 * 4) = (int)pbVar23;
      pbVar23 = (basic_memory_buffer<unsigned_int,32ul,// std code
                ((unsigned long)pbVar23 >> 0x20 | uVar16 << 0x20);
      uVar16 = uVar16 >> 0x20;
      lVar22 = lVar22 + 1;
      uVar13 = uVar13 + 1;
      uVar10 = uVar19;
    } while (uVar19 != local_40);
  }
  local_34 = uVar12;
  if ((int)uVar9 < (int)uVar12) {
    local_48 = *(long *)(this + 8);
    local_40 = (unsigned long)(int)uVar9;
    local_34 = uVar9 - 2;
    auStack_98[5] = local_40 - 1;
    local_68 = local_110 + -4;
    uVar18 = 0;
    uVar12 = uVar9;
    uVar24 = 1;
    do {
      if ((int)((1 - uVar9) + uVar12) < (int)uVar9) {
        lVar22 = (long)(int)uVar24;
        uVar10 = local_40;
        pbVar25 = pbVar23;
        if ((~uVar18 + uVar9 & 1) != 0) {
          lVar21 = lVar22 * 4;
          lVar22 = lVar22 + 1;
          uVar16 = uVar16 + CARRY8((unsigned long)pbVar23,
                                   (unsigned long)*(uint *)(local_110 + local_40 * 4 + -4) *
                                   (unsigned long)*(uint *)(local_110 + lVar21));
          uVar10 = auStack_98[5];
          pbVar17 = pbVar23 + (unsigned long)*(uint *)(local_110 + local_40 * 4 + -4) *
                              (unsigned long)*(uint *)(local_110 + lVar21);
          pbVar25 = pbVar23 + (unsigned long)*(uint *)(local_110 + local_40 * 4 + -4) *
                              (unsigned long)*(uint *)(local_110 + lVar21);
        }
        pbVar23 = pbVar17;
        if (local_34 != uVar18) {
          pbVar17 = local_68 + uVar10 * 4;
          pbVar23 = pbVar25;
          do {
            lVar21 = lVar22 * 4;
            bVar26 = CARRY8((unsigned long)*(uint *)pbVar17 * (unsigned long)*(uint *)(local_110 + lVar22 * 4),
                            (unsigned long)pbVar23);
            pbVar25 = pbVar23 + (unsigned long)*(uint *)pbVar17 * (unsigned long)*(uint *)(local_110 + lVar22 * 4);
            lVar22 = lVar22 + 2;
            pbVar23 = pbVar25 + (unsigned long)*(uint *)(pbVar17 + -4) *
                                (unsigned long)*(uint *)(local_110 + lVar21 + 4);
            uVar16 = uVar16 + bVar26 +
                     (unsigned long)CARRY8((unsigned long)*(uint *)(pbVar17 + -4) *
                                   (unsigned long)*(uint *)(local_110 + lVar21 + 4),(unsigned long)pbVar25);
            pbVar17 = pbVar17 + -8;
          } while (uVar9 != (uint)lVar22);
        }
      }
      *(int *)(local_48 + (unsigned long)uVar12 * 4) = (int)pbVar23;
      pbVar17 = (basic_memory_buffer<unsigned_int,32ul,// std code
                ((unsigned long)pbVar23 >> 0x20 | uVar16 << 0x20);
      uVar16 = uVar16 >> 0x20;
      uVar12 = uVar12 + 1;
      uVar18 = uVar18 + 1;
      bVar26 = uVar24 != uVar9;
      pbVar23 = pbVar17;
      uVar24 = uVar24 + 1;
    } while (bVar26);
  }
  uVar16 = 1;
  if ((int)local_58 < 1) {
    uVar16 = local_58;
  }
  uVar10 = local_58;
  do {
    uVar12 = (uint)uVar10;
    uVar9 = (uint)uVar16;
    if ((int)uVar12 < 2) break;
    lVar22 = uVar10 * 4;
    uVar10 = uVar10 - 1;
    uVar9 = uVar12;
  } while (*(int *)(*(long *)(this + 8) + -4 + lVar22) == 0);
  uVar16 = (unsigned long)uVar9;
  local_60 = uVar11;
  local_50 = this;
  if (uVar11 < uVar16) {
    (*(code *)**(unsigned long long **)this)(this,uVar16);
    uVar11 = *(unsigned long *)(this + 0x18);
  }
  if (uVar11 < uVar16) {
    uVar16 = uVar11;
  }
  *(unsigned long *)(this + 0x10) = uVar16;
  *(int *)(this + 0xa8) = *(int *)(this + 0xa8) << 1;
  local_118 = &PTR_grow_101b17268;
  if (local_110 != local_f8) {
    delete(local_110);
  }
  return;
}
}
