#include <ni/controller_editor/Widget_const___ni.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleSheet::getPropertyCache(NI::NWL {

void Widget const&, ni::symbol const&) const {
unsigned long uVar1;
  Selector *pSVar2;
  unsigned long long *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  StyleSheet *pSVar7;
  void *pvVar8;
  StyleSheet *pSVar9;
  long lVar10;
  long lVar11;
  Selector *pSVar12;
  Selector *this_00;
  Selector *pSVar13;
  size_t sVar14;
  unsigned long uVar15;
  bool bVar16;
  Widget *local_48;
  void *local_40;
  unsigned char local_38 [8];
  
  local_48 = param_1;
  lVar5 = // std code
          unordered_map<NI::NWL::Widget_const*,// std code
          ::operator[]((unordered_map<NI::NWL::Widget_const*,// std code
                        *)(this + 0x50),&local_48);
  lVar6 = lVar5 + 8;
  lVar11 = *(long *)(lVar5 + 8);
  if (lVar11 != 0) {
    uVar1 = *(unsigned long *)param_2;
    lVar10 = lVar6;
    do {
      bVar16 = *(unsigned long *)(lVar11 + 0x20) < uVar1;
      if (!bVar16) {
        lVar10 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (unsigned long)bVar16 * 8);
    } while (lVar11 != 0);
    if ((lVar10 != lVar6) && (lVar6 = lVar10, *(unsigned long *)(lVar10 + 0x20) <= uVar1)) {
      return (long *)(lVar10 + 0x28);
    }
  }
  local_48 = (Widget *)param_2;
  lVar6 = // std code
          __tree<// std code
          ::
          __emplace_hint_unique_impl<// std code
                    (lVar5,lVar6,&// std code
  pSVar9 = *(StyleSheet **)(this + 0x10);
  if (pSVar9 != (StyleSheet *)0x0) {
    uVar1 = *(unsigned long *)param_2;
    pSVar7 = this + 0x10;
    do {
      if (*(unsigned long *)(pSVar9 + 0x20) >= uVar1) {
        pSVar7 = pSVar9;
      }
      pSVar9 = *(StyleSheet **)(pSVar9 + (unsigned long)(*(unsigned long *)(pSVar9 + 0x20) < uVar1) * 8);
    } while (pSVar9 != (StyleSheet *)0x0);
    if ((pSVar7 != this + 0x10) && (*(unsigned long *)(pSVar7 + 0x20) <= uVar1)) {
      pSVar2 = *(Selector **)(pSVar7 + 0x30);
      this_00 = *(Selector **)(pSVar7 + 0x28);
      pSVar13 = this_00;
      for (; this_00 != pSVar2; this_00 = this_00 + 0xf0) {
        pSVar12 = this_00;
        cVar4 = Selector::doClassIdsApply(this_00,param_1);
        if (cVar4 != '\0') {
          puVar3 = *(unsigned long long **)(lVar6 + 0x30);
          if (puVar3 < *(unsigned long long **)(lVar6 + 0x38)) {
            *puVar3 = pSVar13;
            *(unsigned long long **)(lVar6 + 0x30) = puVar3 + 1;
          }
          else {
            pvVar8 = *(void **)(lVar6 + 0x28);
            sVar14 = (long)puVar3 - (long)pvVar8;
            lVar11 = (long)sVar14 >> 3;
            uVar1 = lVar11 + 1;
            if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
              // std code
            }
            lVar5 = (long)*(unsigned long long **)(lVar6 + 0x38) - (long)pvVar8;
            uVar15 = lVar5 >> 2;
            if (uVar15 < uVar1) {
              uVar15 = uVar1;
            }
            if (0xffffffffffffffe < (unsigned long)(lVar5 >> 3)) {
              uVar15 = 0x1fffffffffffffff;
            }
            local_40 = pvVar8;
            if (uVar15 == 0) {
              pvVar8 = (void *)0x0;
              *(Selector **)(lVar11 * 8) = pSVar13;
            }
            else {
              if (0x1fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
                // std code
              }
              pvVar8 = new char[uVar15 * 8];
              *(Selector **)((long)pvVar8 + lVar11 * 8) = pSVar13;
            }
            if (0 < (long)sVar14) {
              memcpy(pvVar8,local_40,sVar14);
            }
            *(void **)(lVar6 + 0x28) = pvVar8;
            *(long *)(lVar6 + 0x30) = (long)pvVar8 + lVar11 * 8 + 8;
            *(void **)(lVar6 + 0x38) = (void *)((long)pvVar8 + uVar15 * 8);
            if (local_40 != (void *)0x0) {
              delete(local_40);
            }
          }
        }
        pSVar13 = pSVar13 + 0xf0;
      }
    }
  }
  return (long *)(lVar6 + 0x28);
}
}
