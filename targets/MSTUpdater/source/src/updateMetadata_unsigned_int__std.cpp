#include <ni/controller_editor/updateMetadata_unsigned_int__std.hpp>
namespace NI::GP::FileContainerStorage {

void updateMetadata(unsigned int, std::string const&) {
int iVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  unsigned long uVar5;
  unsigned long long uVar6;
  long lVar7;
  unsigned long uVar8;
  long lVar9;
  void *pvVar10;
  unsigned long uVar11;
  unsigned long uVar12;
  long lVar13;
  bool bVar14;
  unsigned int local_138;
  unsigned int uStack_134;
  unsigned int uStack_130;
  unsigned int uStack_12c;
  unsigned long local_128;
  void *pvStack_120;
  unsigned long long local_118;
  unsigned long long uStack_110;
  unsigned long long local_108;
  unsigned long long uStack_100;
  unsigned long long local_f8;
  unsigned long long uStack_f0;
  unsigned long long local_e8;
  unsigned long long uStack_e0;
  unsigned long long local_d8;
  unsigned long long uStack_d0;
  unsigned long long local_c8;
  unsigned long long uStack_c0;
  unsigned long long local_b8;
  unsigned long uStack_b0;
  unsigned long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  queryMetaHeaders(this);
  if (((byte)this[8] & 2) != 0) {
    lVar4 = (**(code **)(*(long *)this + 0x30))(this);
    lVar7 = 0;
    if (lVar4 != -1) {
      lVar7 = lVar4;
    }
    lVar4 = *(long *)(this + 0x80);
    uVar11 = *(long *)(this + 0x88) - lVar4 >> 8;
    if (uVar11 == 0) {
      uVar8 = 0xffffffffffffffff;
      lVar9 = 0;
    }
    else {
      uVar8 = 0xffffffffffffffff;
      lVar13 = 0;
      uVar12 = 0;
      lVar9 = 0;
      do {
        if (((*(int *)(lVar4 + 0x84 + lVar13) == 1) &&
            (*(long *)(lVar4 + lVar13) == 0x434620494e205c2f)) &&
           (*(long *)(lVar4 + 8 + lVar13) == 0x5c2f202044544d20)) {
          this[0x1f0] = (FileContainerStorage)((byte)this[0x1f0] | 1);
          uVar5 = (unsigned long)((byte)*param_2 >> 1);
          if (((byte)*param_2 & 1) != 0) {
            uVar5 = *(unsigned long *)(param_2 + 8);
          }
          if (uVar5 != 0) {
            details::utf_to_utf_chseqref<char16_t,char,true>::create
                      ((utf_to_utf_chseqref<char16_t,char,true> *)&local_138,param_2);
            pvVar3 = pvStack_120;
            uVar2 = uStack_130 & 1;
            bVar14 = (uStack_130 & 1) == 0;
            pvVar10 = pvStack_120;
            if (bVar14) {
              pvVar10 = (void *)((long)&uStack_130 + 2);
            }
            uVar5 = (unsigned long)((byte)uStack_130 >> 1);
            if (!bVar14) {
              uVar5 = local_128;
            }
            memcpy((void *)(lVar4 + 0x42 + lVar13),pvVar10,uVar5 * 2);
            if (uVar2 != 0) {
              delete(pvVar3);
            }
            (**(code **)(*(long *)this + 0x40))(this,0,0);
            lVar4 = (**(code **)(*(long *)this + 0x20))(this,*(long *)(this + 0x80) + lVar13,0x100);
            if (lVar4 != 0x100) {
              bVar14 = true;
              goto LAB_10019b68c;
            }
            // std code
            lVar4 = *(long *)(this + 0x80);
          }
          lVar9 = lVar9 + 0x100 + (unsigned long)*(uint *)(lVar4 + 0x94 + lVar13);
        }
        else if (*(int *)(lVar4 + 0x84 + lVar13) == 2) {
          uVar5 = uVar8;
          if (*(long *)(lVar4 + 8 + lVar13) == 0x5c2f202044544d20) {
            uVar5 = uVar12;
          }
          if (*(long *)(lVar4 + lVar13) == 0x434620494e205c2f) {
            uVar8 = uVar5;
          }
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x100;
      } while (uVar12 < uVar11);
    }
    (**(code **)(*(long *)this + 0x40))(this,lVar9,0);
    bVar14 = true;
    if (*(int *)(this + 0xc) - 1U < 2) {
      uVar11 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
      local_a8 = 1;
      if (1 < uVar11) {
        local_a8 = uVar11;
      }
      if (param_1 == 0xffffffff) {
        param_1 = *(uint *)(this + 0x1c0);
      }
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      uStack_a0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      pvStack_120 = (void *)0x0;
      local_138 = 0x4e205c2f;
      uStack_134 = 0x43462049;
      uStack_130 = 0x44544d20;
      uStack_12c = 0x5c2f2020;
      local_b8 = 0x200000000;
      uStack_b0 = (unsigned long)param_1;
      local_a8 = local_a8 & 0xffffffff;
      lVar4 = (**(code **)(*(long *)this + 0x20))(this,&local_138,0x100);
      bVar14 = true;
      if (lVar4 == 0x100) {
        if (uVar8 == 0xffffffffffffffff) {
          if (*(void **)(this + 0x88) == *(void **)(this + 0x90)) {
            // std code
            vector<NI::GP::FileContainer::tMetaHeader,// std code
            ::__push_back_slow_path<NI::GP::FileContainer::tMetaHeader_const&>
                      ((vector<NI::GP::FileContainer::tMetaHeader,// std code
                        *)(this + 0x80),(tMetaHeader *)&local_138);
          }
          else {
            memcpy(*(void **)(this + 0x88),&local_138,0x100);
            *(long *)(this + 0x88) = *(long *)(this + 0x88) + 0x100;
          }
          this[0x1f0] = (FileContainerStorage)((byte)this[0x1f0] | 2);
        }
        else {
          memcpy((void *)(uVar8 * 0x100 + *(long *)(this + 0x80)),&local_138,0x100);
        }
        *(unsigned int *)(this + 0x1c0) = (unsigned int)uStack_b0;
        bVar14 = false;
        (**(code **)(*(long *)this + 0x60))(this);
      }
    }
LAB_10019b68c:
    iVar1 = *(int *)(this + 0xc);
    (**(code **)(*(long *)this + 0x40))(this,lVar7,0);
    if ((iVar1 == 3) || (iVar1 == 0)) {
      *(int *)(this + 0xc) = 3;
    }
    if (bVar14) {
      uVar6 = 0;
      goto LAB_10019b6c0;
    }
  }
  uVar6 = 1;
LAB_10019b6c0:
  if (*(long *)PTR____stack_chk_guard_1002272e0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}
}
