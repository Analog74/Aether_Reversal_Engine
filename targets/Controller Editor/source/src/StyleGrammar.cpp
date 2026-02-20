#include <ni/controller_editor/StyleGrammar.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

void StyleGrammar::assignErrorHandlers() {
// boost code
  on_error<(// boost code
            (this + 0x360);
  // boost code
  on_error<(// boost code
            (this + 0x6a0);
  // boost code
  on_error<(// boost code
            (this + 0xde0);
  // boost code
  on_error<(// boost code
            (this + 0xe20);
  // boost code
  on_error<(// boost code
            (this + 0xf20);
  // boost code
  on_error<(// boost code
            (this + 4000);
  return;
}

void StyleGrammar::onProperty() {
void *pvVar1;
  string *psVar2;
  StyleGrammar *pSVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  unsigned long uVar7;
  long lVar8;
  unsigned char *puVar9;
  void *pvVar10;
  unsigned char *puVar11;
  unsigned long uVar12;
  unsigned int *local_b8 [2];
  unsigned int local_a8 [20];
  uint local_58;
  unsigned int *local_48;
  unsigned int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  if (((byte)this[0x10c0] & 1) == 0) {
    if ((byte)this[0x10c0] >> 1 == 0) return;
  }
  else if (*(long *)(this + 0x10c8) == 0) return;
  local_a8[0] = 0;
  local_58 = 0;
  ni::symbol::symbol((symbol *)&local_48);
  psVar2 = (string *)(this + 0x10c0);
  local_40 = 0;
  ni::symbol::symbol((symbol *)local_b8,psVar2);
  local_48 = local_b8[0];
  pSVar3 = this + 0x10e0;
  uVar4 = *(uint *)(this + 0x1130);
  if ((unsigned long)local_58 == 0xffffffff) {
    if (uVar4 != 0xffffffff) return;
  }
  else if (uVar4 == 0xffffffff) {
    (*(code *)(&
              PTR___dispatch<// std code
              )[local_58])(local_b8,local_a8);
    local_58 = 0xffffffff;
  }
  else {
    local_b8[0] = local_a8;
    (*(code *)(&
              PTR___dispatch<// std code
              )[uVar4])(local_b8,local_b8[0],pSVar3);
  }
  local_40 = *(unsigned int *)(this + 0x1140);
  puVar11 = *(unsigned char **)(this + 0x1170);
  if (puVar11 == *(unsigned char **)(this + 0x1178)) {
    puVar9 = *(unsigned char **)(this + 0x1168);
    lVar8 = (long)puVar11 - (long)puVar9 >> 4;
    uVar7 = lVar8 * 0x6db6db6db6db6db7 + 1;
    if (0x249249249249249 < uVar7) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar12 = lVar8 * -0x2492492492492492;
    if ((unsigned long)(lVar8 * -0x2492492492492492) < uVar7) {
      uVar12 = uVar7;
    }
    if (0x124924924924923 < (unsigned long)(lVar8 * 0x6db6db6db6db6db7)) {
      uVar12 = 0x249249249249249;
    }
    if (uVar12 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (0x249249249249249 < uVar12) {
        // std code
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      pvVar6 = new char[uVar12 * 0x70];
    }
    lVar8 = lVar8 * 0x10;
    pvVar1 = (void *)((long)pvVar6 + lVar8);
    *(unsigned char *)((long)pvVar6 + lVar8) = 0;
    *(unsigned int *)((long)pvVar6 + lVar8 + 0x50) = 0xffffffff;
    if ((unsigned long)local_58 != 0xffffffff) {
      (*(code *)(&
                PTR___dispatch<// std code
                )[local_58])(local_b8,pvVar1,local_a8);
      *(uint *)((long)pvVar6 + lVar8 + 0x50) = local_58;
      puVar9 = *(unsigned char **)(this + 0x1168);
      puVar11 = *(unsigned char **)(this + 0x1170);
    }
    pvVar10 = (void *)(uVar12 * 0x70 + (long)pvVar6);
    *(unsigned int *)((long)pvVar6 + lVar8 + 0x68) = local_40;
    *(unsigned int **)((long)pvVar6 + lVar8 + 0x60) = local_48;
    if (puVar11 == puVar9) {
      *(void **)(this + 0x1168) = pvVar1;
      *(long *)(this + 0x1170) = (long)pvVar1 + 0x70;
      *(void **)(this + 0x1178) = pvVar10;
    }
    else {
      lVar8 = 0;
      do {
        *(unsigned char *)((long)pvVar1 + lVar8 + -0x70) = 0;
        *(unsigned int *)((long)pvVar1 + lVar8 + -0x20) = 0xffffffff;
        if ((unsigned long)*(uint *)(puVar11 + lVar8 + -0x20) != 0xffffffff) {
          (*(code *)(&
                    PTR___dispatch<// std code
                    )[*(uint *)(puVar11 + lVar8 + -0x20)])
                    (local_b8,(long)pvVar1 + lVar8 + -0x70,puVar11 + lVar8 + -0x70);
          *(unsigned int *)((long)pvVar1 + lVar8 + -0x20) = *(unsigned int *)(puVar11 + lVar8 + -0x20);
        }
        *(unsigned int *)((long)pvVar1 + lVar8 + -8) = *(unsigned int *)(puVar11 + lVar8 + -8);
        *(unsigned long long *)((long)pvVar1 + lVar8 + -0x10) = *(unsigned long long *)(puVar11 + lVar8 + -0x10);
        lVar8 = lVar8 + -0x70;
      } while ((long)puVar9 - (long)puVar11 != lVar8);
      puVar11 = *(unsigned char **)(this + 0x1168);
      puVar9 = *(unsigned char **)(this + 0x1170);
      *(long *)(this + 0x1168) = (long)pvVar1 + lVar8;
      *(long *)(this + 0x1170) = (long)pvVar1 + 0x70;
      *(void **)(this + 0x1178) = pvVar10;
      if (puVar9 != puVar11) {
        do {
          if ((unsigned long)*(uint *)(puVar9 + -0x20) != 0xffffffff) {
            (*(code *)(&
                      PTR___dispatch<// std code
                      )[*(uint *)(puVar9 + -0x20)])(local_b8,puVar9 + -0x70);
          }
          *(unsigned int *)(puVar9 + -0x20) = 0xffffffff;
          puVar9 = puVar9 + -0x70;
        } while (puVar11 != puVar9);
      }
    }
    if (puVar11 != (unsigned char *)0x0) {
      delete(puVar11);
    }
  }
  else {
    *puVar11 = 0;
    *(unsigned int *)(puVar11 + 0x50) = 0xffffffff;
    if ((unsigned long)local_58 != 0xffffffff) {
      (*(code *)(&
                PTR___dispatch<// std code
                )[local_58])(local_b8,puVar11,local_a8);
      *(uint *)(puVar11 + 0x50) = local_58;
    }
    *(unsigned int *)(puVar11 + 0x68) = local_40;
    *(unsigned int **)(puVar11 + 0x60) = local_48;
    *(unsigned char **)(this + 0x1170) = puVar11 + 0x70;
  }
  if (((byte)*psVar2 & 1) == 0) {
    *(void2 *)psVar2 = 0;
    uVar7 = (unsigned long)*(uint *)(this + 0x1130);
    if (uVar7 == 0xffffffff) return;
    if ((int)uVar7 != 2) {
      (*(code *)(&
                PTR___dispatch<// std code
                )[uVar7])(local_b8,pSVar3);
      return;
    }
    *(unsigned int *)pSVar3 = 0;
  }
  else {
    **(unsigned char **)(this + 0x10d0) = 0;
    *(unsigned long long *)(this + 0x10c8) = 0;
    uVar7 = (unsigned long)*(uint *)(this + 0x1130);
    if (uVar7 != 0xffffffff) return;
    *(unsigned int *)(this + 0x10e0) = 0;
    *(unsigned int *)(this + 0x1130) = 2;
  }
  *(unsigned int *)(this + 0x1140) = 0;
  if ((unsigned long)local_58 != 0xffffffff) {
    (*(code *)(&
              PTR___dispatch<// std code
              )[local_58])(local_b8,local_a8);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

void StyleGrammar::onSelector() {
unsigned long uVar1;
  unsigned int uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  StyleGrammar *pSVar6;
  tSimpleSelector *ptVar7;
  unsigned long long uVar8;
  unsigned long long uVar9;
  unsigned long long uVar10;
  unsigned long long uVar11;
  unsigned long long uVar12;
  long lVar13;
  _Unwind_Exception *exception_object;
  long lVar14;
  Selector *pSVar15;
  tSimpleSelector *this_00;
  StyleGrammar *pSVar16;
  Selector *pSVar17;
  StyleGrammar *pSVar18;
  StyleGrammar *pSVar19;
  unsigned long uVar20;
  
  Selector *local_40;
  StyleGrammar *local_38;
  
  if (*(long *)(this + 0x10a0) != *(long *)(this + 0x10a8)) {
    pSVar15 = *(Selector **)(this + 0x1158);
    uVar2 = *(unsigned int *)(this + 0x1180);
    if (pSVar15 < *(Selector **)(this + 0x1160)) {
      // std code
      pSVar16 = (StyleGrammar *)pSVar15;
      Selector::Selector(pSVar15,uVar2,local_50);
      if (((byte)local_50[0] & 1) != 0) {
        delete(local_40);
        pSVar16 = (StyleGrammar *)local_40;
      }
      *(Selector **)(this + 0x1158) = pSVar15 + 0x78;
    }
    else {
      lVar13 = *(long *)(this + 0x1150);
      lVar14 = (long)pSVar15 - lVar13 >> 3;
      uVar1 = lVar14 * -0x1111111111111111 + 1;
      if (0x222222222222222 < uVar1) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      lVar13 = (long)*(Selector **)(this + 0x1160) - lVar13 >> 3;
      uVar20 = lVar13 * -0x2222222222222222;
      if (uVar20 < uVar1) {
        uVar20 = uVar1;
      }
      if (0x111111111111110 < (unsigned long)(lVar13 * -0x1111111111111111)) {
        uVar20 = 0x222222222222222;
      }
      if (uVar20 == 0) {
        local_38 = (StyleGrammar *)0x0;
      }
      else {
        if (0x222222222222222 < uVar20) {
          exception_object = (_Unwind_Exception *)// std code
          ;
          if (((byte)local_50[0] & 1) != 0) {
            delete(local_40);
          }
          if (local_38 != (StyleGrammar *)0x0) {
            delete(local_38);
                    /* WARNING: Subroutine does not return */
            __Unwind_Resume(exception_object);
          }
                    /* WARNING: Subroutine does not return */
          __Unwind_Resume(exception_object);
        }
        local_38 = (StyleGrammar *)new char[uVar20 * 0x78];
      }
      // std code
      pSVar15 = (Selector *)(local_38 + lVar14 * 8);
      Selector::Selector(pSVar15,uVar2,local_50);
      if (((byte)local_50[0] & 1) != 0) {
        delete(local_40);
      }
      pSVar16 = *(StyleGrammar **)(this + 0x1150);
      pSVar18 = *(StyleGrammar **)(this + 0x1158);
      if (pSVar18 == pSVar16) {
        *(Selector **)(this + 0x1150) = pSVar15;
        *(Selector **)(this + 0x1158) = pSVar15 + 0x78;
        *(StyleGrammar **)(this + 0x1160) = local_38 + uVar20 * 0x78;
      }
      else {
        lVar13 = 0;
        do {
          *(unsigned long long *)(pSVar15 + lVar13 + -0x68) = *(unsigned long long *)(pSVar18 + lVar13 + -0x68);
          uVar8 = *(unsigned long long *)(pSVar18 + lVar13 + -0x78 + 8);
          *(unsigned long long *)(pSVar15 + lVar13 + -0x78) = *(unsigned long long *)(pSVar18 + lVar13 + -0x78);
          *(unsigned long long *)(pSVar15 + lVar13 + -0x78 + 8) = uVar8;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x60) = *(unsigned long long *)(pSVar18 + lVar13 + -0x60);
          lVar14 = *(long *)(pSVar18 + lVar13 + -0x58);
          *(long *)(pSVar15 + lVar13 + -0x58) = lVar14;
          lVar3 = *(long *)(pSVar18 + lVar13 + -0x50);
          *(long *)(pSVar15 + lVar13 + -0x50) = lVar3;
          if (lVar3 == 0) {
            *(Selector **)(pSVar15 + lVar13 + -0x60) = pSVar15 + lVar13 + -0x58;
          }
          else {
            *(Selector **)(lVar14 + 0x10) = pSVar15 + lVar13 + -0x58;
            *(StyleGrammar **)(pSVar18 + lVar13 + -0x60) = pSVar18 + lVar13 + -0x58;
            *(unsigned long long *)(pSVar18 + lVar13 + -0x58) = 0;
            *(unsigned long long *)(pSVar18 + lVar13 + -0x58 + 8) = 0;
          }
          pSVar17 = pSVar15 + lVar13 + -0x48;
          *(Selector **)(pSVar15 + lVar13 + -0x48) = pSVar17;
          *(Selector **)(pSVar15 + lVar13 + -0x40) = pSVar17;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x38) = 0;
          lVar14 = *(long *)(pSVar18 + lVar13 + -0x38);
          if (lVar14 != 0) {
            lVar3 = *(long *)(pSVar18 + lVar13 + -0x48);
            plVar4 = *(long **)(pSVar18 + lVar13 + -0x40);
            lVar5 = *plVar4;
            *(unsigned long long *)(lVar5 + 8) = *(unsigned long long *)(lVar3 + 8);
            **(long **)(lVar3 + 8) = lVar5;
            lVar5 = *(long *)(pSVar15 + lVar13 + -0x48);
            *(long **)(lVar5 + 8) = plVar4;
            *plVar4 = lVar5;
            *(long *)(pSVar15 + lVar13 + -0x48) = lVar3;
            *(Selector **)(lVar3 + 8) = pSVar17;
            *(long *)(pSVar15 + lVar13 + -0x38) = lVar14;
            *(unsigned long long *)(pSVar18 + lVar13 + -0x38) = 0;
          }
          uVar8 = *(unsigned long long *)(pSVar18 + lVar13 + -0x30);
          uVar9 = *(unsigned long long *)(pSVar18 + lVar13 + -0x30 + 8);
          uVar10 = *(unsigned long long *)(pSVar18 + lVar13 + -0x20);
          uVar11 = *(unsigned long long *)(pSVar18 + lVar13 + -0x20 + 8);
          uVar12 = *(unsigned long long *)(pSVar18 + lVar13 + -0x14 + 8);
          *(unsigned long long *)(pSVar15 + lVar13 + -0x14) = *(unsigned long long *)(pSVar18 + lVar13 + -0x14);
          *(unsigned long long *)(pSVar15 + lVar13 + -0x14 + 8) = uVar12;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x20) = uVar10;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x20 + 8) = uVar11;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x30) = uVar8;
          *(unsigned long long *)(pSVar15 + lVar13 + -0x30 + 8) = uVar9;
          lVar13 = lVar13 + -0x78;
        } while ((long)pSVar16 - (long)pSVar18 != lVar13);
        pSVar16 = *(StyleGrammar **)(this + 0x1150);
        pSVar18 = *(StyleGrammar **)(this + 0x1158);
        *(Selector **)(this + 0x1150) = pSVar15 + lVar13;
        *(Selector **)(this + 0x1158) = pSVar15 + 0x78;
        *(StyleGrammar **)(this + 0x1160) = local_38 + uVar20 * 0x78;
        if (pSVar18 != pSVar16) {
          do {
            local_38 = pSVar16;
            pSVar19 = pSVar18 + -0x78;
            if (*(long *)(pSVar18 + -0x38) != 0) {
              lVar13 = *(long *)(pSVar18 + -0x48);
              pSVar16 = *(StyleGrammar **)(pSVar18 + -0x40);
              lVar14 = *(long *)pSVar16;
              *(unsigned long long *)(lVar14 + 8) = *(unsigned long long *)(lVar13 + 8);
              **(long **)(lVar13 + 8) = lVar14;
              *(unsigned long long *)(pSVar18 + -0x38) = 0;
              while (pSVar16 != pSVar18 + -0x48) {
                pSVar6 = *(StyleGrammar **)(pSVar16 + 8);
                // std code
                __tree<// std code
                ::destroy((__tree<// std code
                           *)(pSVar16 + 0x28),*(__tree_node **)(pSVar16 + 0x30));
                delete(pSVar16);
                pSVar16 = pSVar6;
              }
            }
            // std code
            __tree<// std code
            ::destroy((__tree<// std code
                       *)(pSVar18 + -0x60),*(__tree_node **)(pSVar18 + -0x58));
            pSVar18 = pSVar19;
            pSVar16 = local_38;
          } while (pSVar19 != local_38);
        }
      }
      if (pSVar16 != (StyleGrammar *)0x0) {
        delete(pSVar16);
      }
    }
    transferSelector(pSVar16,(vector *)(this + 0x10a0),
                     (Selector *)(*(long *)(this + 0x1158) + -0x78));
    ptVar7 = *(tSimpleSelector **)(this + 0x10a0);
    this_00 = *(tSimpleSelector **)(this + 0x10a8);
    while (this_00 != ptVar7) {
      this_00 = this_00 + -0x98;
      StyleParser2::tSimpleSelector::~tSimpleSelector(this_00);
    }
    *(tSimpleSelector **)(this + 0x10a8) = ptVar7;
  }
  return;
}

void StyleGrammar::setNames() {
string local_38;
  unsigned char uStack_37;
  unsigned char uStack_36;
  unsigned char uStack_35;
  unsigned char uStack_34;
  unsigned char uStack_33;
  unsigned char uStack_32;
  unsigned char uStack_31;
  unsigned char uStack_30;
  unsigned char uStack_2f;
  unsigned char uStack_2e;
  unsigned char uStack_2d;
  unsigned char uStack_2c;
  unsigned char uStack_2b;
  unsigned char uStack_2a;
  unsigned char uStack_29;
  unsigned char local_28;
  unsigned char uStack_27;
  unsigned char uStack_26;
  void5 uStack_25;
  
  local_38 = (string)0x6;
  uStack_37 = 0x45;
  uStack_36 = 0x4f;
  uStack_35 = 0x4c;
  uStack_34 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x4;
  uStack_37 = 0x57;
  uStack_36 = 0x53;
  uStack_35 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x2;
  uStack_37 = 0x3b;
  uStack_36 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x2;
  uStack_37 = 0x28;
  uStack_36 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x2;
  uStack_37 = 0x29;
  uStack_36 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x14;
  uStack_37 = 0x49;
  uStack_36 = 100;
  uStack_35 = 0x65;
  uStack_34 = 0x6e;
  uStack_33 = 0x74;
  uStack_32 = 0x69;
  uStack_31 = 0x66;
  uStack_30 = 0x69;
  uStack_2f = 0x65;
  uStack_2e = 0x72;
  uStack_2d = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1e;
  uStack_37 = 0x43;
  uStack_36 = 0x6f;
  uStack_35 = 0x6e;
  uStack_34 = 0x73;
  uStack_33 = 0x74;
  uStack_32 = 0x49;
  uStack_31 = 100;
  uStack_30 = 0x65;
  uStack_2f = 0x6e;
  uStack_2e = 0x74;
  uStack_2d = 0x69;
  uStack_2c = 0x66;
  uStack_2b = 0x69;
  uStack_2a = 0x65;
  uStack_29 = 0x72;
  local_28 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0xc;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x72;
  uStack_34 = 0x69;
  uStack_33 = 0x6e;
  uStack_32 = 0x67;
  uStack_31 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x18;
  uStack_37 = 0x51;
  uStack_36 = 0x75;
  uStack_35 = 0x6f;
  uStack_34 = 0x74;
  uStack_33 = 0x65;
  uStack_32 = 100;
  uStack_31 = 0x53;
  uStack_30 = 0x74;
  uStack_2f = 0x72;
  uStack_2e = 0x69;
  uStack_2d = 0x6e;
  uStack_2c = 0x67;
  uStack_2b = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x12;
  uStack_37 = 0x41;
  uStack_36 = 0x74;
  uStack_35 = 0x74;
  uStack_34 = 0x72;
  uStack_33 = 0x69;
  uStack_32 = 0x62;
  uStack_31 = 0x75;
  uStack_30 = 0x74;
  uStack_2f = 0x65;
  uStack_2e = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x18;
  uStack_37 = 0x54;
  uStack_36 = 0x79;
  uStack_35 = 0x70;
  uStack_34 = 0x65;
  uStack_33 = 0x53;
  uStack_32 = 0x65;
  uStack_31 = 0x6c;
  uStack_30 = 0x65;
  uStack_2f = 99;
  uStack_2e = 0x74;
  uStack_2d = 0x6f;
  uStack_2c = 0x72;
  uStack_2b = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1a;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x79;
  uStack_34 = 0x6c;
  uStack_33 = 0x65;
  uStack_32 = 0x53;
  uStack_31 = 0x65;
  uStack_30 = 0x6c;
  uStack_2f = 0x65;
  uStack_2e = 99;
  uStack_2d = 0x74;
  uStack_2c = 0x6f;
  uStack_2b = 0x72;
  uStack_2a = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1e;
  uStack_37 = 0x45;
  uStack_36 = 0x6c;
  uStack_35 = 0x65;
  uStack_34 = 0x6d;
  uStack_33 = 0x65;
  uStack_32 = 0x6e;
  uStack_31 = 0x74;
  uStack_30 = 0x53;
  uStack_2f = 0x65;
  uStack_2e = 0x6c;
  uStack_2d = 0x65;
  uStack_2c = 99;
  uStack_2b = 0x74;
  uStack_2a = 0x6f;
  uStack_29 = 0x72;
  local_28 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x22;
  uStack_37 = 0x41;
  uStack_36 = 0x74;
  uStack_35 = 0x74;
  uStack_34 = 0x72;
  uStack_33 = 0x69;
  uStack_32 = 0x62;
  uStack_31 = 0x75;
  uStack_30 = 0x74;
  uStack_2f = 0x65;
  uStack_2e = 0x53;
  uStack_2d = 0x65;
  uStack_2c = 0x6c;
  uStack_2b = 0x65;
  uStack_2a = 99;
  uStack_29 = 0x74;
  local_28 = 0x6f;
  uStack_27 = 0x72;
  uStack_26 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1a;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x61;
  uStack_34 = 0x74;
  uStack_33 = 0x65;
  uStack_32 = 0x53;
  uStack_31 = 0x65;
  uStack_30 = 0x6c;
  uStack_2f = 0x65;
  uStack_2e = 99;
  uStack_2d = 0x74;
  uStack_2c = 0x6f;
  uStack_2b = 0x72;
  uStack_2a = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1c;
  uStack_37 = 0x53;
  uStack_36 = 0x69;
  uStack_35 = 0x6d;
  uStack_34 = 0x70;
  uStack_33 = 0x6c;
  uStack_32 = 0x65;
  uStack_31 = 0x53;
  uStack_30 = 0x65;
  uStack_2f = 0x6c;
  uStack_2e = 0x65;
  uStack_2d = 99;
  uStack_2c = 0x74;
  uStack_2b = 0x6f;
  uStack_2a = 0x72;
  uStack_29 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x22;
  uStack_37 = 0x53;
  uStack_36 = 0x65;
  uStack_35 = 0x6c;
  uStack_34 = 0x65;
  uStack_33 = 99;
  uStack_32 = 0x74;
  uStack_31 = 0x6f;
  uStack_30 = 0x72;
  uStack_2f = 0x52;
  uStack_2e = 0x65;
  uStack_2d = 0x6c;
  uStack_2c = 0x61;
  uStack_2b = 0x74;
  uStack_2a = 0x69;
  uStack_29 = 0x6f;
  local_28 = 0x6e;
  uStack_27 = 0x73;
  uStack_26 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x6;
  uStack_37 = 0x55;
  uStack_36 = 0x52;
  uStack_35 = 0x4c;
  uStack_34 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x10;
  uStack_37 = 0x48;
  uStack_36 = 0x65;
  uStack_35 = 0x78;
  uStack_34 = 0x43;
  uStack_33 = 0x6f;
  uStack_32 = 0x6c;
  uStack_31 = 0x6f;
  uStack_30 = 0x72;
  uStack_2f = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0xa;
  uStack_37 = 0x43;
  uStack_36 = 0x6f;
  uStack_35 = 0x6c;
  uStack_34 = 0x6f;
  uStack_33 = 0x72;
  uStack_32 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1e;
  uStack_37 = 0x4e;
  uStack_36 = 0x75;
  uStack_35 = 0x6d;
  uStack_34 = 0x65;
  uStack_33 = 0x72;
  uStack_32 = 0x69;
  uStack_31 = 99;
  uStack_30 = 0x50;
  uStack_2f = 0x72;
  uStack_2e = 0x6f;
  uStack_2d = 0x70;
  uStack_2c = 0x65;
  uStack_2b = 0x72;
  uStack_2a = 0x74;
  uStack_29 = 0x79;
  local_28 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x18;
  uStack_37 = 0x42;
  uStack_36 = 0x6f;
  uStack_35 = 0x6f;
  uStack_34 = 0x6c;
  uStack_33 = 0x50;
  uStack_32 = 0x72;
  uStack_31 = 0x6f;
  uStack_30 = 0x70;
  uStack_2f = 0x65;
  uStack_2e = 0x72;
  uStack_2d = 0x74;
  uStack_2c = 0x79;
  uStack_2b = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x16;
  uStack_37 = 0x55;
  uStack_36 = 0x52;
  uStack_35 = 0x4c;
  uStack_34 = 0x50;
  uStack_33 = 0x72;
  uStack_32 = 0x6f;
  uStack_31 = 0x70;
  uStack_30 = 0x65;
  uStack_2f = 0x72;
  uStack_2e = 0x74;
  uStack_2d = 0x79;
  uStack_2c = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1a;
  uStack_37 = 0x43;
  uStack_36 = 0x6f;
  uStack_35 = 0x6c;
  uStack_34 = 0x6f;
  uStack_33 = 0x72;
  uStack_32 = 0x50;
  uStack_31 = 0x72;
  uStack_30 = 0x6f;
  uStack_2f = 0x70;
  uStack_2e = 0x65;
  uStack_2d = 0x72;
  uStack_2c = 0x74;
  uStack_2b = 0x79;
  uStack_2a = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x20;
  uStack_37 = 0x43;
  uStack_36 = 0x6f;
  uStack_35 = 0x6e;
  uStack_34 = 0x73;
  uStack_33 = 0x74;
  uStack_32 = 0x61;
  uStack_31 = 0x6e;
  uStack_30 = 0x74;
  uStack_2f = 0x50;
  uStack_2e = 0x72;
  uStack_2d = 0x6f;
  uStack_2c = 0x70;
  uStack_2b = 0x65;
  uStack_2a = 0x72;
  uStack_29 = 0x74;
  local_28 = 0x79;
  uStack_27 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1c;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x72;
  uStack_34 = 0x69;
  uStack_33 = 0x6e;
  uStack_32 = 0x67;
  uStack_31 = 0x50;
  uStack_30 = 0x72;
  uStack_2f = 0x6f;
  uStack_2e = 0x70;
  uStack_2d = 0x65;
  uStack_2c = 0x72;
  uStack_2b = 0x74;
  uStack_2a = 0x79;
  uStack_29 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x10;
  uStack_37 = 0x50;
  uStack_36 = 0x72;
  uStack_35 = 0x6f;
  uStack_34 = 0x70;
  uStack_33 = 0x65;
  uStack_32 = 0x72;
  uStack_31 = 0x74;
  uStack_30 = 0x79;
  uStack_2f = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x10;
  uStack_37 = 0x43;
  uStack_36 = 0x6f;
  uStack_35 = 0x6e;
  uStack_34 = 0x73;
  uStack_33 = 0x74;
  uStack_32 = 0x61;
  uStack_31 = 0x6e;
  uStack_30 = 0x74;
  uStack_2f = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0xc;
  uStack_37 = 0x49;
  uStack_36 = 0x6d;
  uStack_35 = 0x70;
  uStack_34 = 0x6f;
  uStack_33 = 0x72;
  uStack_32 = 0x74;
  uStack_31 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x10;
  uStack_37 = 0x53;
  uStack_36 = 0x65;
  uStack_35 = 0x6c;
  uStack_34 = 0x65;
  uStack_33 = 99;
  uStack_32 = 0x74;
  uStack_31 = 0x6f;
  uStack_30 = 0x72;
  uStack_2f = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x16;
  uStack_37 = 0x44;
  uStack_36 = 0x65;
  uStack_35 = 99;
  uStack_34 = 0x6c;
  uStack_33 = 0x61;
  uStack_32 = 0x72;
  uStack_31 = 0x61;
  uStack_30 = 0x74;
  uStack_2f = 0x69;
  uStack_2e = 0x6f;
  uStack_2d = 0x6e;
  uStack_2c = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x12;
  uStack_37 = 0x53;
  uStack_36 = 0x65;
  uStack_35 = 0x6c;
  uStack_34 = 0x65;
  uStack_33 = 99;
  uStack_32 = 0x74;
  uStack_31 = 0x6f;
  uStack_30 = 0x72;
  uStack_2f = 0x73;
  uStack_2e = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x14;
  uStack_37 = 0x50;
  uStack_36 = 0x72;
  uStack_35 = 0x6f;
  uStack_34 = 0x70;
  uStack_33 = 0x65;
  uStack_32 = 0x72;
  uStack_31 = 0x74;
  uStack_30 = 0x69;
  uStack_2f = 0x65;
  uStack_2e = 0x73;
  uStack_2d = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x1a;
  uStack_37 = 0x41;
  uStack_36 = 0x54;
  uStack_35 = 0x44;
  uStack_34 = 0x65;
  uStack_33 = 99;
  uStack_32 = 0x6c;
  uStack_31 = 0x61;
  uStack_30 = 0x72;
  uStack_2f = 0x61;
  uStack_2e = 0x74;
  uStack_2d = 0x69;
  uStack_2c = 0x6f;
  uStack_2b = 0x6e;
  uStack_2a = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0xa;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x79;
  uStack_34 = 0x6c;
  uStack_33 = 0x65;
  uStack_32 = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x12;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x61;
  uStack_34 = 0x74;
  uStack_33 = 0x65;
  uStack_32 = 0x6d;
  uStack_31 = 0x65;
  uStack_30 = 0x6e;
  uStack_2f = 0x74;
  uStack_2e = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  local_38 = (string)0x14;
  uStack_37 = 0x53;
  uStack_36 = 0x74;
  uStack_35 = 0x79;
  uStack_34 = 0x6c;
  uStack_33 = 0x65;
  uStack_32 = 0x73;
  uStack_31 = 0x68;
  uStack_30 = 0x65;
  uStack_2f = 0x65;
  uStack_2e = 0x74;
  uStack_2d = 0;
  // std code
  if (((byte)local_38 & 1) != 0) {
    delete((void *)CONCAT53(uStack_25,CONCAT12(uStack_26,CONCAT11(uStack_27,local_28))));
  }
  return;
}

StyleGrammar::~StyleGrammar() {
long *plVar1;
  int *piVar2;
  long *plVar3;
  void *pvVar4;
  tSimpleSelector *ptVar5;
  unsigned long uVar6;
  void *pvVar7;
  tSimpleSelector *this_00;
  void *pvVar8;
  tSimpleSelector *ptVar9;
  unsigned char local_40 [8];
  unsigned char local_38 [8];
  
  if (((byte)this[0x1230] & 1) != 0) {
    delete(*(void **)(this + 0x1240));
  }
  plVar3 = *(long **)(this + 0x1228);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (((byte)this[0x11f0] & 1) != 0) {
    delete(*(void **)(this + 0x1200));
  }
  plVar3 = *(long **)(this + 0x11e8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (((byte)this[0x11b0] & 1) != 0) {
    delete(*(void **)(this + 0x11c0));
  }
  plVar3 = *(long **)(this + 0x11a8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      LOCK();
      piVar2 = (int *)((long)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  pvVar4 = *(void **)(this + 0x1168);
  if (pvVar4 != (void *)0x0) {
    pvVar7 = *(void **)(this + 0x1170);
    pvVar8 = pvVar4;
    if (pvVar7 != pvVar4) {
      do {
        if ((unsigned long)*(uint *)((long)pvVar7 + -0x20) != 0xffffffff) {
          (*(code *)(&
                    PTR___dispatch<// std code
                    )[*(uint *)((long)pvVar7 + -0x20)])(local_38,(long)pvVar7 + -0x70);
        }
        *(unsigned int *)((long)pvVar7 + -0x20) = 0xffffffff;
        pvVar7 = (void *)((long)pvVar7 + -0x70);
      } while (pvVar4 != pvVar7);
      pvVar8 = *(void **)(this + 0x1168);
    }
    *(void **)(this + 0x1170) = pvVar4;
    delete(pvVar8);
  }
  // std code
            ((__vector_base<NI::NWL::Selector,// std code
  if ((unsigned long)*(uint *)(this + 0x1130) != 0xffffffff) {
    (*(code *)(&
              PTR___dispatch<// std code
              )[*(uint *)(this + 0x1130)])(local_40,this + 0x10e0);
  }
  *(unsigned int *)(this + 0x1130) = 0xffffffff;
  if (((byte)this[0x10c0] & 1) != 0) {
    delete(*(void **)(this + 0x10d0));
  }
  ptVar5 = *(tSimpleSelector **)(this + 0x10a0);
  if (ptVar5 != (tSimpleSelector *)0x0) {
    this_00 = *(tSimpleSelector **)(this + 0x10a8);
    ptVar9 = ptVar5;
    if (this_00 != ptVar5) {
      do {
        this_00 = this_00 + -0x98;
        StyleParser2::tSimpleSelector::~tSimpleSelector(this_00);
      } while (ptVar5 != this_00);
      ptVar9 = *(tSimpleSelector **)(this + 0x10a0);
    }
    *(tSimpleSelector **)(this + 0x10a8) = ptVar5;
    delete(ptVar9);
  }
  StyleParser2::tSimpleSelector::~tSimpleSelector((tSimpleSelector *)(this + 0x1008));
  if (((byte)this[0xff0] & 1) != 0) {
    delete(*(void **)(this + 0x1000));
  }
  uVar6 = *(unsigned long *)(this + 0xfc0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xfc8,this + 0xfc8,2);
    }
    *(unsigned long long *)(this + 0xfc0) = 0;
  }
  if (((byte)this[0xfa8] & 1) != 0) {
    delete(*(void **)(this + 0xfb8));
  }
  uVar6 = *(unsigned long *)(this + 0xf80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xf88,this + 0xf88,2);
    }
    *(unsigned long long *)(this + 0xf80) = 0;
  }
  if (((byte)this[0xf68] & 1) != 0) {
    delete(*(void **)(this + 0xf78));
  }
  uVar6 = *(unsigned long *)(this + 0xf40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xf48,this + 0xf48,2);
    }
    *(unsigned long long *)(this + 0xf40) = 0;
  }
  if (((byte)this[0xf28] & 1) != 0) {
    delete(*(void **)(this + 0xf38));
  }
  uVar6 = *(unsigned long *)(this + 0xf00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xf08,this + 0xf08,2);
    }
    *(unsigned long long *)(this + 0xf00) = 0;
  }
  if (((byte)this[0xee8] & 1) != 0) {
    delete(*(void **)(this + 0xef8));
  }
  uVar6 = *(unsigned long *)(this + 0xec0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xec8,this + 0xec8,2);
    }
    *(unsigned long long *)(this + 0xec0) = 0;
  }
  if (((byte)this[0xea8] & 1) != 0) {
    delete(*(void **)(this + 0xeb8));
  }
  uVar6 = *(unsigned long *)(this + 0xe80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xe88,this + 0xe88,2);
    }
    *(unsigned long long *)(this + 0xe80) = 0;
  }
  if (((byte)this[0xe68] & 1) != 0) {
    delete(*(void **)(this + 0xe78));
  }
  uVar6 = *(unsigned long *)(this + 0xe40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xe48,this + 0xe48,2);
    }
    *(unsigned long long *)(this + 0xe40) = 0;
  }
  if (((byte)this[0xe28] & 1) != 0) {
    delete(*(void **)(this + 0xe38));
  }
  uVar6 = *(unsigned long *)(this + 0xe00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xe08,this + 0xe08,2);
    }
    *(unsigned long long *)(this + 0xe00) = 0;
  }
  if (((byte)this[0xde8] & 1) != 0) {
    delete(*(void **)(this + 0xdf8));
  }
  uVar6 = *(unsigned long *)(this + 0xdc0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xdc8,this + 0xdc8,2);
    }
    *(unsigned long long *)(this + 0xdc0) = 0;
  }
  if (((byte)this[0xda8] & 1) != 0) {
    delete(*(void **)(this + 0xdb8));
  }
  uVar6 = *(unsigned long *)(this + 0xd80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xd88,this + 0xd88,2);
    }
    *(unsigned long long *)(this + 0xd80) = 0;
  }
  if (((byte)this[0xd68] & 1) != 0) {
    delete(*(void **)(this + 0xd78));
  }
  uVar6 = *(unsigned long *)(this + 0xd40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xd48,this + 0xd48,2);
    }
    *(unsigned long long *)(this + 0xd40) = 0;
  }
  if (((byte)this[0xd28] & 1) != 0) {
    delete(*(void **)(this + 0xd38));
  }
  uVar6 = *(unsigned long *)(this + 0xd00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xd08,this + 0xd08,2);
    }
    *(unsigned long long *)(this + 0xd00) = 0;
  }
  if (((byte)this[0xce8] & 1) != 0) {
    delete(*(void **)(this + 0xcf8));
  }
  uVar6 = *(unsigned long *)(this + 0xcc0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xcc8,this + 0xcc8,2);
    }
    *(unsigned long long *)(this + 0xcc0) = 0;
  }
  if (((byte)this[0xca8] & 1) != 0) {
    delete(*(void **)(this + 0xcb8));
  }
  uVar6 = *(unsigned long *)(this + 0xc80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xc88,this + 0xc88,2);
    }
    *(unsigned long long *)(this + 0xc80) = 0;
  }
  if (((byte)this[0xc68] & 1) != 0) {
    delete(*(void **)(this + 0xc78));
  }
  uVar6 = *(unsigned long *)(this + 0xc40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xc48,this + 0xc48,2);
    }
    *(unsigned long long *)(this + 0xc40) = 0;
  }
  if (((byte)this[0xc28] & 1) != 0) {
    delete(*(void **)(this + 0xc38));
  }
  uVar6 = *(unsigned long *)(this + 0xc00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xc08,this + 0xc08,2);
    }
    *(unsigned long long *)(this + 0xc00) = 0;
  }
  if (((byte)this[0xbe8] & 1) != 0) {
    delete(*(void **)(this + 0xbf8));
  }
  uVar6 = *(unsigned long *)(this + 0xbc0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xbc8,this + 0xbc8,2);
    }
    *(unsigned long long *)(this + 0xbc0) = 0;
  }
  if (((byte)this[0xba8] & 1) != 0) {
    delete(*(void **)(this + 3000));
  }
  uVar6 = *(unsigned long *)(this + 0xb80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xb88,this + 0xb88,2);
    }
    *(unsigned long long *)(this + 0xb80) = 0;
  }
  if (((byte)this[0xb68] & 1) != 0) {
    delete(*(void **)(this + 0xb78));
  }
  uVar6 = *(unsigned long *)(this + 0xb40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xb48,this + 0xb48,2);
    }
    *(unsigned long long *)(this + 0xb40) = 0;
  }
  if (((byte)this[0xb28] & 1) != 0) {
    delete(*(void **)(this + 0xb38));
  }
  uVar6 = *(unsigned long *)(this + 0xb00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xb08,this + 0xb08,2);
    }
    *(unsigned long long *)(this + 0xb00) = 0;
  }
  if (((byte)this[0xae8] & 1) != 0) {
    delete(*(void **)(this + 0xaf8));
  }
  uVar6 = *(unsigned long *)(this + 0xac0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xac8,this + 0xac8,2);
    }
    *(unsigned long long *)(this + 0xac0) = 0;
  }
  if (((byte)this[0xaa8] & 1) != 0) {
    delete(*(void **)(this + 0xab8));
  }
  uVar6 = *(unsigned long *)(this + 0xa80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xa88,this + 0xa88,2);
    }
    *(unsigned long long *)(this + 0xa80) = 0;
  }
  if (((byte)this[0xa68] & 1) != 0) {
    delete(*(void **)(this + 0xa78));
  }
  uVar6 = *(unsigned long *)(this + 0xa40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xa48,this + 0xa48,2);
    }
    *(unsigned long long *)(this + 0xa40) = 0;
  }
  if (((byte)this[0xa28] & 1) != 0) {
    delete(*(void **)(this + 0xa38));
  }
  uVar6 = *(unsigned long *)(this + 0xa00);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0xa08,this + 0xa08,2);
    }
    *(unsigned long long *)(this + 0xa00) = 0;
  }
  if (((byte)this[0x9e8] & 1) != 0) {
    delete(*(void **)(this + 0x9f8));
  }
  uVar6 = *(unsigned long *)(this + 0x9c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x9c8,this + 0x9c8,2);
    }
    *(unsigned long long *)(this + 0x9c0) = 0;
  }
  if (((byte)this[0x9a8] & 1) != 0) {
    delete(*(void **)(this + 0x9b8));
  }
  uVar6 = *(unsigned long *)(this + 0x980);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x988,this + 0x988,2);
    }
    *(unsigned long long *)(this + 0x980) = 0;
  }
  if (((byte)this[0x968] & 1) != 0) {
    delete(*(void **)(this + 0x978));
  }
  uVar6 = *(unsigned long *)(this + 0x940);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x948,this + 0x948,2);
    }
    *(unsigned long long *)(this + 0x940) = 0;
  }
  if (((byte)this[0x928] & 1) != 0) {
    delete(*(void **)(this + 0x938));
  }
  uVar6 = *(unsigned long *)(this + 0x900);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x908,this + 0x908,2);
    }
    *(unsigned long long *)(this + 0x900) = 0;
  }
  if (((byte)this[0x8e8] & 1) != 0) {
    delete(*(void **)(this + 0x8f8));
  }
  uVar6 = *(unsigned long *)(this + 0x8c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x8c8,this + 0x8c8,2);
    }
    *(unsigned long long *)(this + 0x8c0) = 0;
  }
  if (((byte)this[0x8a8] & 1) != 0) {
    delete(*(void **)(this + 0x8b8));
  }
  uVar6 = *(unsigned long *)(this + 0x880);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x888,this + 0x888,2);
    }
    *(unsigned long long *)(this + 0x880) = 0;
  }
  if (((byte)this[0x868] & 1) != 0) {
    delete(*(void **)(this + 0x878));
  }
  uVar6 = *(unsigned long *)(this + 0x840);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x848,this + 0x848,2);
    }
    *(unsigned long long *)(this + 0x840) = 0;
  }
  if (((byte)this[0x828] & 1) != 0) {
    delete(*(void **)(this + 0x838));
  }
  uVar6 = *(unsigned long *)(this + 0x800);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x808,this + 0x808,2);
    }
    *(unsigned long long *)(this + 0x800) = 0;
  }
  if (((byte)this[0x7e8] & 1) != 0) {
    delete(*(void **)(this + 0x7f8));
  }
  uVar6 = *(unsigned long *)(this + 0x7c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x7c8,this + 0x7c8,2);
    }
    *(unsigned long long *)(this + 0x7c0) = 0;
  }
  if (((byte)this[0x7a8] & 1) != 0) {
    delete(*(void **)(this + 0x7b8));
  }
  uVar6 = *(unsigned long *)(this + 0x780);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x788,this + 0x788,2);
    }
    *(unsigned long long *)(this + 0x780) = 0;
  }
  if (((byte)this[0x768] & 1) != 0) {
    delete(*(void **)(this + 0x778));
  }
  uVar6 = *(unsigned long *)(this + 0x740);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x748,this + 0x748,2);
    }
    *(unsigned long long *)(this + 0x740) = 0;
  }
  if (((byte)this[0x728] & 1) != 0) {
    delete(*(void **)(this + 0x738));
  }
  uVar6 = *(unsigned long *)(this + 0x700);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x708,this + 0x708,2);
    }
    *(unsigned long long *)(this + 0x700) = 0;
  }
  if (((byte)this[0x6e8] & 1) != 0) {
    delete(*(void **)(this + 0x6f8));
  }
  uVar6 = *(unsigned long *)(this + 0x6c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x6c8,this + 0x6c8,2);
    }
    *(unsigned long long *)(this + 0x6c0) = 0;
  }
  if (((byte)this[0x6a8] & 1) != 0) {
    delete(*(void **)(this + 0x6b8));
  }
  uVar6 = *(unsigned long *)(this + 0x680);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x688,this + 0x688,2);
    }
    *(unsigned long long *)(this + 0x680) = 0;
  }
  if (((byte)this[0x668] & 1) != 0) {
    delete(*(void **)(this + 0x678));
  }
  uVar6 = *(unsigned long *)(this + 0x640);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x648,this + 0x648,2);
    }
    *(unsigned long long *)(this + 0x640) = 0;
  }
  if (((byte)this[0x628] & 1) != 0) {
    delete(*(void **)(this + 0x638));
  }
  uVar6 = *(unsigned long *)(this + 0x600);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x608,this + 0x608,2);
    }
    *(unsigned long long *)(this + 0x600) = 0;
  }
  if (((byte)this[0x5e8] & 1) != 0) {
    delete(*(void **)(this + 0x5f8));
  }
  uVar6 = *(unsigned long *)(this + 0x5c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x5c8,this + 0x5c8,2);
    }
    *(unsigned long long *)(this + 0x5c0) = 0;
  }
  if (((byte)this[0x5a8] & 1) != 0) {
    delete(*(void **)(this + 0x5b8));
  }
  uVar6 = *(unsigned long *)(this + 0x580);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x588,this + 0x588,2);
    }
    *(unsigned long long *)(this + 0x580) = 0;
  }
  if (((byte)this[0x568] & 1) != 0) {
    delete(*(void **)(this + 0x578));
  }
  uVar6 = *(unsigned long *)(this + 0x540);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x548,this + 0x548,2);
    }
    *(unsigned long long *)(this + 0x540) = 0;
  }
  if (((byte)this[0x528] & 1) != 0) {
    delete(*(void **)(this + 0x538));
  }
  uVar6 = *(unsigned long *)(this + 0x500);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x508,this + 0x508,2);
    }
    *(unsigned long long *)(this + 0x500) = 0;
  }
  if (((byte)this[0x4e8] & 1) != 0) {
    delete(*(void **)(this + 0x4f8));
  }
  uVar6 = *(unsigned long *)(this + 0x4c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x4c8,this + 0x4c8,2);
    }
    *(unsigned long long *)(this + 0x4c0) = 0;
  }
  if (((byte)this[0x4a8] & 1) != 0) {
    delete(*(void **)(this + 0x4b8));
  }
  uVar6 = *(unsigned long *)(this + 0x480);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x488,this + 0x488,2);
    }
    *(unsigned long long *)(this + 0x480) = 0;
  }
  if (((byte)this[0x468] & 1) != 0) {
    delete(*(void **)(this + 0x478));
  }
  uVar6 = *(unsigned long *)(this + 0x440);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x448,this + 0x448,2);
    }
    *(unsigned long long *)(this + 0x440) = 0;
  }
  if (((byte)this[0x428] & 1) != 0) {
    delete(*(void **)(this + 0x438));
  }
  uVar6 = *(unsigned long *)(this + 0x400);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x408,this + 0x408,2);
    }
    *(unsigned long long *)(this + 0x400) = 0;
  }
  // FIXED: if ((byte)this[1000] & 1) != 0) {
    delete(*(void **)(this + 0x3f8));
  }
  uVar6 = *(unsigned long *)(this + 0x3c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x3c8,this + 0x3c8,2);
    }
    *(unsigned long long *)(this + 0x3c0) = 0;
  }
  if (((byte)this[0x3a8] & 1) != 0) {
    delete(*(void **)(this + 0x3b8));
  }
  uVar6 = *(unsigned long *)(this + 0x380);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x388,this + 0x388,2);
    }
    *(unsigned long long *)(this + 0x380) = 0;
  }
  if (((byte)this[0x368] & 1) != 0) {
    delete(*(void **)(this + 0x378));
  }
  uVar6 = *(unsigned long *)(this + 0x340);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x348,this + 0x348,2);
    }
    *(unsigned long long *)(this + 0x340) = 0;
  }
  if (((byte)this[0x328] & 1) != 0) {
    delete(*(void **)(this + 0x338));
  }
  uVar6 = *(unsigned long *)(this + 0x300);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x308,this + 0x308,2);
    }
    *(unsigned long long *)(this + 0x300) = 0;
  }
  if (((byte)this[0x2e8] & 1) != 0) {
    delete(*(void **)(this + 0x2f8));
  }
  uVar6 = *(unsigned long *)(this + 0x2c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x2c8,this + 0x2c8,2);
    }
    *(unsigned long long *)(this + 0x2c0) = 0;
  }
  if (((byte)this[0x2a8] & 1) != 0) {
    delete(*(void **)(this + 0x2b8));
  }
  uVar6 = *(unsigned long *)(this + 0x280);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x288,this + 0x288,2);
    }
    *(unsigned long long *)(this + 0x280) = 0;
  }
  if (((byte)this[0x268] & 1) != 0) {
    delete(*(void **)(this + 0x278));
  }
  uVar6 = *(unsigned long *)(this + 0x240);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x248,this + 0x248,2);
    }
    *(unsigned long long *)(this + 0x240) = 0;
  }
  if (((byte)this[0x228] & 1) != 0) {
    delete(*(void **)(this + 0x238));
  }
  uVar6 = *(unsigned long *)(this + 0x200);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x208,this + 0x208,2);
    }
    *(unsigned long long *)(this + 0x200) = 0;
  }
  if (((byte)this[0x1e8] & 1) != 0) {
    delete(*(void **)(this + 0x1f8));
  }
  uVar6 = *(unsigned long *)(this + 0x1c0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x1c8,this + 0x1c8,2);
    }
    *(unsigned long long *)(this + 0x1c0) = 0;
  }
  if (((byte)this[0x1a8] & 1) != 0) {
    delete(*(void **)(this + 0x1b8));
  }
  uVar6 = *(unsigned long *)(this + 0x180);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x188,this + 0x188,2);
    }
    *(unsigned long long *)(this + 0x180) = 0;
  }
  if (((byte)this[0x168] & 1) != 0) {
    delete(*(void **)(this + 0x178));
  }
  uVar6 = *(unsigned long *)(this + 0x140);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x148,this + 0x148,2);
    }
    *(unsigned long long *)(this + 0x140) = 0;
  }
  if (((byte)this[0x128] & 1) != 0) {
    delete(*(void **)(this + 0x138));
  }
  uVar6 = *(unsigned long *)(this + 0x100);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x108,this + 0x108,2);
    }
    *(unsigned long long *)(this + 0x100) = 0;
  }
  if (((byte)this[0xe8] & 1) != 0) {
    delete(*(void **)(this + 0xf8));
  }
  uVar6 = *(unsigned long *)(this + 0xc0);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 200,this + 200,2);
    }
    *(unsigned long long *)(this + 0xc0) = 0;
  }
  if (((byte)this[0xa8] & 1) != 0) {
    delete(*(void **)(this + 0xb8));
  }
  uVar6 = *(unsigned long *)(this + 0x80);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x88,this + 0x88,2);
    }
    *(unsigned long long *)(this + 0x80) = 0;
  }
  if (((byte)this[0x68] & 1) != 0) {
    delete(*(void **)(this + 0x78));
  }
  uVar6 = *(unsigned long *)(this + 0x40);
  if (uVar6 != 0) {
    if (((uVar6 & 1) == 0) && (*(code **)(uVar6 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)(uVar6 & 0xfffffffffffffffe))(this + 0x48,this + 0x48,2);
    }
    *(unsigned long long *)(this + 0x40) = 0;
  }
  if (((byte)this[0x28] & 1) != 0) {
    delete(*(void **)(this + 0x38));
  }
  // FIXED: if ((byte)this[8] & 1) != 0) {
    delete(*(void **)(this + 0x18));
  }
  return;
}
}
