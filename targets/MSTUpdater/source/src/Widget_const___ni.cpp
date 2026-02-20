#include <ni/controller_editor/Widget_const___ni.hpp>
namespace NI::NWL::StyleSheet::getPropertyCache(NI::NWL {

void Widget const&, ni::symbol const&) const {
Selector *pSVar1;
  char cVar2;
  __tree_node_base *p_Var3;
  long lVar4;
  StyleSheet *pSVar5;
  StyleSheet *pSVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  StyleSheet *pSVar9;
  Selector *this_00;
  __tree_node_base *p_Var10;
  __tree_node_base *p_Var11;
  Selector *local_40;
  unsigned char local_38 [8];
  
  if (*(StyleSheet **)(this + 0x58) == (StyleSheet *)0x0) {
    pSVar6 = this + 0x58;
    pSVar9 = pSVar6;
  }
  else {
    pSVar5 = *(StyleSheet **)(this + 0x58);
    pSVar9 = this + 0x58;
    do {
      while (pSVar6 = pSVar5, param_1 < *(Widget **)(pSVar6 + 0x20)) {
        pSVar5 = *(StyleSheet **)pSVar6;
        pSVar9 = pSVar6;
        if (*(StyleSheet **)pSVar6 == (StyleSheet *)0x0) goto LAB_10003b5a8;
      }
      if (param_1 <= *(Widget **)(pSVar6 + 0x20)) break;
      pSVar9 = pSVar6 + 8;
      pSVar5 = *(StyleSheet **)(pSVar6 + 8);
    } while (*(StyleSheet **)(pSVar6 + 8) != (StyleSheet *)0x0);
  }
LAB_10003b5a8:
  p_Var3 = *(__tree_node_base **)pSVar9;
  if (p_Var3 == (__tree_node_base *)0x0) {
    p_Var3 = (__tree_node_base *)new(0x40);
    *(Widget **)(p_Var3 + 0x20) = param_1;
    *(unsigned long long *)(p_Var3 + 0x38) = 0;
    *(unsigned long long *)(p_Var3 + 0x30) = 0;
    *(__tree_node_base **)(p_Var3 + 0x28) = p_Var3 + 0x30;
    *(unsigned long long *)(p_Var3 + 8) = 0;
    *(unsigned long long *)p_Var3 = 0;
    *(StyleSheet **)(p_Var3 + 0x10) = pSVar6;
    *(__tree_node_base **)pSVar9 = p_Var3;
    p_Var10 = p_Var3;
    if (**(long **)(this + 0x50) != 0) {
      *(long *)(this + 0x50) = **(long **)(this + 0x50);
      p_Var10 = *(__tree_node_base **)pSVar9;
    }
    // std code
              (*(__tree_node_base **)(this + 0x58),p_Var10);
    *(long *)(this + 0x60) = *(long *)(this + 0x60) + 1;
  }
  p_Var10 = p_Var3 + 0x30;
  if (*(__tree_node_base **)(p_Var3 + 0x30) != (__tree_node_base *)0x0) {
    p_Var7 = *(__tree_node_base **)(p_Var3 + 0x30);
    p_Var11 = p_Var10;
    do {
      if (*(unsigned long *)(p_Var7 + 0x20) < *(unsigned long *)param_2) {
        p_Var8 = *(__tree_node_base **)(p_Var7 + 8);
      }
      else {
        p_Var8 = *(__tree_node_base **)p_Var7;
        p_Var11 = p_Var7;
      }
      p_Var7 = p_Var8;
    } while (p_Var8 != (__tree_node_base *)0x0);
    if ((p_Var11 != p_Var10) && (p_Var10 = p_Var11, *(unsigned long *)(p_Var11 + 0x20) <= *(unsigned long *)param_2)
       ) {
      return (vector<// std code
              *)(p_Var11 + 0x28);
    }
  }
  local_40 = (Selector *)param_2;
  lVar4 = // std code
          __tree<// std code
          ::
          __emplace_hint_unique_impl<// std code
                    (p_Var3 + 0x28,p_Var10,&// std code
  if (*(StyleSheet **)(this + 0x10) != (StyleSheet *)0x0) {
    pSVar5 = this + 0x10;
    pSVar9 = *(StyleSheet **)(this + 0x10);
    do {
      pSVar6 = pSVar9;
      if (*(unsigned long *)(pSVar6 + 0x20) < *(unsigned long *)param_2) {
        pSVar9 = *(StyleSheet **)(pSVar6 + 8);
        pSVar6 = pSVar5;
      }
      else {
        pSVar9 = *(StyleSheet **)pSVar6;
      }
      pSVar5 = pSVar6;
    } while (pSVar9 != (StyleSheet *)0x0);
    if ((pSVar6 != this + 0x10) && (*(unsigned long *)(pSVar6 + 0x20) <= *(unsigned long *)param_2)) {
      pSVar1 = *(Selector **)(pSVar6 + 0x30);
      for (this_00 = *(Selector **)(pSVar6 + 0x28); this_00 != pSVar1; this_00 = this_00 + 0xf0) {
        cVar2 = Selector::doClassIdsApply(this_00,param_1);
        if (cVar2 != '\0') {
          local_40 = this_00;
          if (*(unsigned long long **)(lVar4 + 0x30) < *(unsigned long long **)(lVar4 + 0x38)) {
            **(unsigned long long **)(lVar4 + 0x30) = this_00;
            *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + 8;
          }
          else {
            // std code
            vector<// std code
            ::
            __push_back_slow_path<// std code
                      ((vector<// std code
                        *)(lVar4 + 0x28),(reference_wrapper *)&local_40);
          }
        }
      }
    }
  }
  return (vector<// std code
          *)(lVar4 + 0x28);
}
}
