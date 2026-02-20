#include <ni/controller_editor/split_query_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::uri {

void split_query(1 param_1, std::string const& {
unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned long long uVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  bool bVar10;
  unsigned long uVar11;
  unsigned char *puVar12;
  __tree_node_base **pp_Var13;
  __tree_node_base *p_Var14;
  unsigned char *puVar15;
  unsigned char *puVar16;
  unsigned long uVar17;
  long lVar18;
  long lVar19;
  __tree_node_base *p_Var20;
  unsigned long uVar21;
  unsigned long uVar22;
  unsigned long uVar23;
  unsigned char *puVar24;
  unsigned long uVar25;
  piecewise_construct_t *local_a0;
  string *local_98;
  string local_90;
  unsigned char local_8f;
  unsigned char local_8e [6];
  unsigned long local_88;
  unsigned char *local_80;
  string *local_78;
  unsigned long long local_70;
  unsigned long uStack_68;
  unsigned char *puStack_60;
  unsigned long long uStack_58;
  unsigned long uStack_50;
  unsigned char *puStack_48;
  
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(uri **)this = this + 8;
  uVar17 = 0;
  local_98 = (string *)this;
  local_78 = param_1;
  do {
    uVar11 = // std code if(1 param_1, 1 param_1, (uVar11 == 0xffffffffffffffff &&
       (uVar11 = // std code if(1 param_1, ((byte*param_1 & 1 == 0) {
        uVar11 = (unsigned long)((byte)*param_1 >> 1);
      }
      else {
        uVar11 = *(unsigned long *)(param_1 + 8);
      }
      uVar22 = 0xffffffffffffffff;
      bVar10 = true;
    }
    else {
      bVar10 = false;
      uVar22 = uVar11;
    }
    // std code
    uVar17 = uVar22 + 1;
    if (bVar10) {
      uVar17 = 0xffffffffffffffff;
    }
    uVar11 = // std code if(1 param_1, 1 param_1, uVar11 != 0xffffffffffffffff {
      if (uVar11 == 0 {
        puVar24 = local_80;
        uVar11 = local_88;
        if (((byte)local_90 & 1) == 0) {
          puVar24 = &local_8f;
          uVar11 = (unsigned long)((byte)local_90 >> 1);
        }
        uVar22 = uVar11 - 1;
        if (0xffffffffffffffef < uVar22) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (uVar22 < 0x17) {
          local_70 = 0(local_70._1_7_,(char)uVar22 * '\x02');
          puVar12 = (unsigned char *)((long)&local_70 + 1);
          if (uVar11 != 1) goto joined_r0x000100532d49;
        }
        else {
          uVar21 = uVar11 + 0xf & 0xfffffffffffffff0;
          puVar12 = (unsigned char *)new char[uVar21];
          puStack_60 = puVar12;
          local_70 = uVar21 | 1;
          uStack_68 = uVar22;
joined_r0x000100532d49:
          puVar16 = puVar24 + 1;
          if ((0x1f < uVar22) &&
             ((puVar16 = puVar24 + 1, puVar24 + uVar11 <= puVar12 ||
              (puVar12 + (uVar11 - 1) <= puVar16)))) {
            uVar23 = uVar22 & 0xffffffffffffffe0;
            uVar21 = (uVar23 - 0x20 >> 5) + 1;
            uVar25 = (unsigned long)((uint)uVar21 & 3);
            if (uVar23 - 0x20 < 0x60) {
              lVar19 = 0;
            }
            else {
              lVar18 = -(uVar21 & 0xfffffffffffffffc);
              lVar19 = 0;
              do {
                uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 1) + 8);
                uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x11);
                uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x11) + 8);
                *(unsigned long long *)(puVar12 + lVar19) = *(unsigned long long *)(puVar24 + lVar19 + 1);
                *(unsigned long long *)((long)(puVar12 + lVar19) + 8) = uVar7;
                *(unsigned long long *)(puVar12 + lVar19 + 0x10) = uVar8;
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x10) + 8) = uVar9;
                uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x21) + 8);
                uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x31);
                uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x31) + 8);
                *(unsigned long long *)(puVar12 + lVar19 + 0x20) = *(unsigned long long *)(puVar24 + lVar19 + 0x21);
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x20) + 8) = uVar7;
                *(unsigned long long *)(puVar12 + lVar19 + 0x30) = uVar8;
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x30) + 8) = uVar9;
                uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x41) + 8);
                uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x51);
                uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x51) + 8);
                *(unsigned long long *)(puVar12 + lVar19 + 0x40) = *(unsigned long long *)(puVar24 + lVar19 + 0x41);
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x40) + 8) = uVar7;
                *(unsigned long long *)(puVar12 + lVar19 + 0x50) = uVar8;
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x50) + 8) = uVar9;
                puVar2 = (unsigned int *)(puVar24 + lVar19 + 0x61);
                uVar4 = puVar2[1];
                uVar5 = puVar2[2];
                uVar6 = puVar2[3];
                uVar7 = *(unsigned long long *)(puVar24 + lVar19 + 0x71);
                uVar8 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x71) + 8);
                puVar3 = (unsigned int *)(puVar12 + lVar19 + 0x60);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                puVar3[2] = uVar5;
                puVar3[3] = uVar6;
                *(unsigned long long *)(puVar12 + lVar19 + 0x70) = uVar7;
                *(unsigned long long *)((long)(puVar12 + lVar19 + 0x70) + 8) = uVar8;
                lVar19 = lVar19 + 0x80;
                lVar18 = lVar18 + 4;
              } while (lVar18 != 0);
            }
            if (uVar25 != 0) {
              lVar18 = 0;
              do {
                puVar2 = (unsigned int *)(puVar24 + lVar18 + lVar19 + 1);
                uVar4 = puVar2[1];
                uVar5 = puVar2[2];
                uVar6 = puVar2[3];
                uVar7 = *(unsigned long long *)(puVar24 + lVar18 + lVar19 + 0x11);
                uVar8 = *(unsigned long long *)((long)(puVar24 + lVar18 + lVar19 + 0x11) + 8);
                puVar3 = (unsigned int *)(puVar12 + lVar18 + lVar19);
                *puVar3 = *puVar2;
                puVar3[1] = uVar4;
                puVar3[2] = uVar5;
                puVar3[3] = uVar6;
                *(unsigned long long *)(puVar12 + lVar18 + lVar19 + 0x10) = uVar7;
                *(unsigned long long *)((long)(puVar12 + lVar18 + lVar19 + 0x10) + 8) = uVar8;
                lVar18 = lVar18 + 0x20;
              } while (uVar25 << 5 != lVar18);
            }
            puVar12 = puVar12 + uVar23;
            if (uVar22 == uVar23) return;
            puVar16 = puVar16 + uVar23;
          }
          do {
            *puVar12 = *puVar16;
            puVar16 = puVar16 + 1;
            puVar12 = puVar12 + 1;
          } while (puVar24 + uVar11 != puVar16);
        }
        *puVar12 = 0;
        uStack_58 = 0;
        uStack_50 = 0;
        puStack_48 = (unsigned char *)0x0;
        pp_Var13 = // std code
                   __tree<// std code
                   ::__find_equal<// std code
                             ((__tree<// std code
                               *)this,(__tree_end_node **)&local_a0,(string *)&uStack_58);
        param_1 = local_78;
        p_Var14 = *pp_Var13;
        if (p_Var14 == (__tree_node_base *)0x0) {
          p_Var14 = (__tree_node_base *)new char[0x50];
          *(unsigned char **)(p_Var14 + 0x30) = puStack_48;
          *(unsigned long *)(p_Var14 + 0x20) = uStack_58;
          *(unsigned long *)(p_Var14 + 0x28) = uStack_50;
          uStack_58 = 0;
          uStack_50 = 0;
          puStack_48 = (unsigned char *)0x0;
          *(unsigned long long *)(p_Var14 + 0x38) = 0;
          *(unsigned long long *)(p_Var14 + 0x40) = 0;
          *(unsigned long long *)(p_Var14 + 0x48) = 0;
          *(unsigned long long *)p_Var14 = 0;
          *(unsigned long long *)(p_Var14 + 8) = 0;
          *(piecewise_construct_t **)(p_Var14 + 0x10) = local_a0;
          *pp_Var13 = p_Var14;
          p_Var20 = p_Var14;
          if (**(long **)this != 0) {
            *(long *)this = **(long **)this;
            p_Var20 = *pp_Var13;
          }
          // std code
                    (*(__tree_node_base **)
                      ((__tree<// std code
                        *)this + 8),p_Var20);
          *(long *)((__tree<// std code
                     *)this + 0x10) =
               *(long *)((__tree<// std code
                          *)this + 0x10) + 1;
        }
        // std code
      }
      else {
        puVar24 = &local_8f;
        if (((byte)local_90 & 1) != 0) {
          puVar24 = local_80;
        }
        if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        puVar12 = puVar24;
        if (uVar11 < 0x17) {
          local_70 = 0(local_70._1_7_,(char)uVar11 * '\x02');
          puVar16 = (unsigned char *)((long)&local_70 + 1);
          if (uVar11 < 0x20) return;
          if ((puVar16 < puVar24 + uVar11) && (puVar24 < puVar16 + uVar11)) return;
          uVar21 = uVar11 & 0xffffffffffffffe0;
          uVar22 = (uVar21 - 0x20 >> 5) + 1;
          uVar23 = (unsigned long)((uint)uVar22 & 3);
          if (uVar21 - 0x20 < 0x60) {
            lVar19 = 0;
          }
          else {
            lVar18 = -(uVar22 & 0xfffffffffffffffc);
            lVar19 = 0;
            do {
              uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19) + 8);
              uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x10);
              uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x10) + 8);
              *(unsigned long long *)(puVar16 + lVar19) = *(unsigned long long *)(puVar24 + lVar19);
              *(unsigned long long *)((long)(puVar16 + lVar19) + 8) = uVar7;
              *(unsigned long long *)(puVar16 + lVar19 + 0x10) = uVar8;
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x10) + 8) = uVar9;
              uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x20) + 8);
              uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x30);
              uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x30) + 8);
              *(unsigned long long *)(puVar16 + lVar19 + 0x20) = *(unsigned long long *)(puVar24 + lVar19 + 0x20);
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x20) + 8) = uVar7;
              *(unsigned long long *)(puVar16 + lVar19 + 0x30) = uVar8;
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x30) + 8) = uVar9;
              uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x40) + 8);
              uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x50);
              uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x50) + 8);
              *(unsigned long long *)(puVar16 + lVar19 + 0x40) = *(unsigned long long *)(puVar24 + lVar19 + 0x40);
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x40) + 8) = uVar7;
              *(unsigned long long *)(puVar16 + lVar19 + 0x50) = uVar8;
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x50) + 8) = uVar9;
              uVar7 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x60) + 8);
              uVar8 = *(unsigned long long *)(puVar24 + lVar19 + 0x70);
              uVar9 = *(unsigned long long *)((long)(puVar24 + lVar19 + 0x70) + 8);
              *(unsigned long long *)(puVar16 + lVar19 + 0x60) = *(unsigned long long *)(puVar24 + lVar19 + 0x60);
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x60) + 8) = uVar7;
              *(unsigned long long *)(puVar16 + lVar19 + 0x70) = uVar8;
              *(unsigned long long *)((long)(puVar16 + lVar19 + 0x70) + 8) = uVar9;
              lVar19 = lVar19 + 0x80;
              lVar18 = lVar18 + 4;
            } while (lVar18 != 0);
          }
          if (uVar23 != 0) {
            lVar18 = 0;
            do {
              uVar7 = *(unsigned long long *)((long)(puVar24 + lVar18 + lVar19) + 8);
              uVar8 = *(unsigned long long *)(puVar24 + lVar18 + lVar19 + 0x10);
              uVar9 = *(unsigned long long *)((long)(puVar24 + lVar18 + lVar19 + 0x10) + 8);
              *(unsigned long long *)(puVar16 + lVar18 + lVar19) =
                   *(unsigned long long *)(puVar24 + lVar18 + lVar19);
              *(unsigned long long *)((long)(puVar16 + lVar18 + lVar19) + 8) = uVar7;
              *(unsigned long long *)(puVar16 + lVar18 + lVar19 + 0x10) = uVar8;
              *(unsigned long long *)((long)(puVar16 + lVar18 + lVar19 + 0x10) + 8) = uVar9;
              lVar18 = lVar18 + 0x20;
            } while (uVar23 << 5 != lVar18);
          }
          puVar16 = puVar16 + uVar21;
          if (uVar11 != uVar21) {
            puVar12 = puVar24 + uVar21;
            return;
          }
        }
        else {
          uVar22 = uVar11 + 0x10 & 0xfffffffffffffff0;
          puVar16 = (unsigned char *)new char[uVar22];
          puStack_60 = puVar16;
          local_70 = uVar22 | 1;
          uStack_68 = uVar11;
          if (0x1f < uVar11) return;
          do {
            *puVar16 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar16 = puVar16 + 1;
          } while (puVar24 + uVar11 != puVar12);
        }
        *puVar16 = 0;
        if (((byte)local_90 & 1) == 0) {
          uVar22 = (unsigned long)((byte)local_90 >> 1);
          puVar12 = local_8e + uVar11;
          puVar24 = &local_8f;
        }
        else {
          puVar12 = local_80 + uVar11 + 1;
          puVar24 = local_80;
          uVar22 = local_88;
        }
        puVar16 = puVar24 + uVar22;
        uVar11 = (long)puVar16 - (long)puVar12;
        if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
          // std code
        }
        if (uVar11 < 0x17) {
          uStack_58 = 0(uStack_58._1_7_,(char)uVar11 * '\x02');
          puVar15 = (unsigned char *)((long)&uStack_58 + 1);
          this = (uri *)local_98;
          param_1 = local_78;
        }
        else {
          uVar21 = uVar11 + 0x10 & 0xfffffffffffffff0;
          puVar15 = (unsigned char *)new char[uVar21];
          puStack_48 = puVar15;
          uStack_58 = uVar21 | 1;
          uStack_50 = uVar11;
          this = (uri *)local_98;
          param_1 = local_78;
        }
        if (puVar12 != puVar16) {
          puVar1 = puVar24 + (uVar22 - (long)puVar12);
          if (((unsigned char *)0x1f < puVar1) &&
             ((puVar16 <= puVar15 ||
              (puVar24 + (long)(puVar15 + (uVar22 - (long)puVar12)) <= puVar12)))) {
            puVar24 = (unsigned char *)((unsigned long)puVar1 & 0xffffffffffffffe0);
            uVar22 = ((unsigned long)(puVar24 + -0x20) >> 5) + 1;
            uVar11 = (unsigned long)((uint)uVar22 & 3);
            if (puVar24 + -0x20 < (unsigned char *)0x60) {
              lVar19 = 0;
            }
            else {
              lVar18 = -(uVar22 & 0xfffffffffffffffc);
              lVar19 = 0;
              do {
                uVar7 = *(unsigned long long *)((long)(puVar12 + lVar19) + 8);
                uVar8 = *(unsigned long long *)(puVar12 + lVar19 + 0x10);
                uVar9 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x10) + 8);
                *(unsigned long long *)(puVar15 + lVar19) = *(unsigned long long *)(puVar12 + lVar19);
                *(unsigned long long *)((long)(puVar15 + lVar19) + 8) = uVar7;
                *(unsigned long long *)(puVar15 + lVar19 + 0x10) = uVar8;
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x10) + 8) = uVar9;
                uVar7 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x20) + 8);
                uVar8 = *(unsigned long long *)(puVar12 + lVar19 + 0x30);
                uVar9 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x30) + 8);
                *(unsigned long long *)(puVar15 + lVar19 + 0x20) = *(unsigned long long *)(puVar12 + lVar19 + 0x20);
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x20) + 8) = uVar7;
                *(unsigned long long *)(puVar15 + lVar19 + 0x30) = uVar8;
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x30) + 8) = uVar9;
                uVar7 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x40) + 8);
                uVar8 = *(unsigned long long *)(puVar12 + lVar19 + 0x50);
                uVar9 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x50) + 8);
                *(unsigned long long *)(puVar15 + lVar19 + 0x40) = *(unsigned long long *)(puVar12 + lVar19 + 0x40);
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x40) + 8) = uVar7;
                *(unsigned long long *)(puVar15 + lVar19 + 0x50) = uVar8;
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x50) + 8) = uVar9;
                uVar7 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x60) + 8);
                uVar8 = *(unsigned long long *)(puVar12 + lVar19 + 0x70);
                uVar9 = *(unsigned long long *)((long)(puVar12 + lVar19 + 0x70) + 8);
                *(unsigned long long *)(puVar15 + lVar19 + 0x60) = *(unsigned long long *)(puVar12 + lVar19 + 0x60);
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x60) + 8) = uVar7;
                *(unsigned long long *)(puVar15 + lVar19 + 0x70) = uVar8;
                *(unsigned long long *)((long)(puVar15 + lVar19 + 0x70) + 8) = uVar9;
                lVar19 = lVar19 + 0x80;
                lVar18 = lVar18 + 4;
              } while (lVar18 != 0);
            }
            if (uVar11 != 0) {
              lVar18 = 0;
              do {
                uVar7 = *(unsigned long long *)((long)(puVar12 + lVar18 + lVar19) + 8);
                uVar8 = *(unsigned long long *)(puVar12 + lVar18 + lVar19 + 0x10);
                uVar9 = *(unsigned long long *)((long)(puVar12 + lVar18 + lVar19 + 0x10) + 8);
                *(unsigned long long *)(puVar15 + lVar18 + lVar19) =
                     *(unsigned long long *)(puVar12 + lVar18 + lVar19);
                *(unsigned long long *)((long)(puVar15 + lVar18 + lVar19) + 8) = uVar7;
                *(unsigned long long *)(puVar15 + lVar18 + lVar19 + 0x10) = uVar8;
                *(unsigned long long *)((long)(puVar15 + lVar18 + lVar19 + 0x10) + 8) = uVar9;
                lVar18 = lVar18 + 0x20;
              } while (uVar11 << 5 != lVar18);
            }
            puVar15 = puVar15 + (long)puVar24;
            if (puVar24 == puVar1) return;
            puVar12 = puVar12 + (long)puVar24;
          }
          do {
            *puVar15 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar15 = puVar15 + 1;
          } while (puVar16 != puVar12);
        }
        *puVar15 = 0;
        local_a0 = (piecewise_construct_t *)&local_70;
        local_98 = (string *)this;
        local_78 = param_1;
        lVar19 = // std code
                 __tree<// std code
                 ::
                 __emplace_unique_key_args<// std code
                           ((string *)this,local_a0,(tuple *)&// std code
                            (tuple *)&local_a0);
        // std code
      }
      if ((uStack_58 & 1) != 0) {
        delete(puStack_48);
      }
      if ((local_70 & 1) != 0) {
        delete(puStack_60);
      }
    }
    if (((byte)local_90 & 1) != 0) {
      delete(local_80);
    }
    if (uVar17 == 0xffffffffffffffff) {
      return (string *)this;
    }
  } while( true );
}
}
