#include <ni/controller_editor/ListBar___.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IEditingSelectable<NI::NWL::Vector<NI {

void ListBar> >::toggleEditingSelection(unsigned long) {
long lVar1;
  long *plVar2;
  __tree_node_base *p_Var3;
  __tree_node_base *p_Var4;
  __tree_node_base *p_Var5;
  long *plVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  
  p_Var7 = (__tree_node_base *)(this + 0x758);
  p_Var5 = *(__tree_node_base **)(this + 0x758);
  p_Var3 = p_Var7;
  p_Var4 = p_Var5;
  if (p_Var5 == (__tree_node_base *)0x0) {
    lVar1 = *(long *)p_Var7;
  }
  else {
    do {
      if (*(unsigned long *)(p_Var4 + 0x20) >= param_1) {
        p_Var3 = p_Var4;
      }
      p_Var8 = p_Var4 + (unsigned long)(*(unsigned long *)(p_Var4 + 0x20) < param_1) * 8;
      p_Var4 = *(__tree_node_base **)p_Var8;
    } while (*(__tree_node_base **)p_Var8 != (__tree_node_base *)0x0);
    if ((p_Var3 != p_Var7) &&
       (p_Var4 = p_Var5, p_Var8 = p_Var7, *(unsigned long *)(p_Var3 + 0x20) <= param_1)) {
      do {
        if (*(unsigned long *)(p_Var4 + 0x20) >= param_1) {
          p_Var8 = p_Var4;
        }
        p_Var3 = p_Var4 + (unsigned long)(*(unsigned long *)(p_Var4 + 0x20) < param_1) * 8;
        p_Var4 = *(__tree_node_base **)p_Var3;
      } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
      if ((p_Var8 != p_Var7) && (*(unsigned long *)(p_Var8 + 0x20) <= param_1)) {
        plVar2 = *(long **)(p_Var8 + 8);
        if (*(long **)(p_Var8 + 8) == (long *)0x0) {
          plVar6 = *(long **)(p_Var8 + 0x10);
          p_Var7 = p_Var8;
          if ((__tree_node_base *)*plVar6 != p_Var8) {
            do {
              p_Var7 = *(__tree_node_base **)(p_Var7 + 0x10);
              plVar6 = *(long **)(p_Var7 + 0x10);
            } while ((__tree_node_base *)*plVar6 != p_Var7);
          }
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if (*(__tree_node_base **)(this + 0x750) == p_Var8) {
          *(long **)(this + 0x750) = plVar6;
        }
        *(long *)(this + 0x760) = *(long *)(this + 0x760) + -1;
        // std code
        delete(p_Var8);
      }
      if (*(unsigned long *)(this + 0x768) != param_1) {
        return;
      }
      *(unsigned long long *)(this + 0x768) = 0xffffffffffffffff;
      return;
    }
    p_Var7 = (__tree_node_base *)(this + 0x758);
    do {
      p_Var3 = p_Var5;
      if (*(unsigned long *)(p_Var3 + 0x20) <= param_1) {
        if (*(unsigned long *)(p_Var3 + 0x20) < param_1) {
          p_Var7 = p_Var3 + 8;
          p_Var5 = *(__tree_node_base **)(p_Var3 + 8);
          if (*(__tree_node_base **)(p_Var3 + 8) != (__tree_node_base *)0x0) return;
        }
        lVar1 = *(long *)p_Var7;
        goto joined_r0x0001002aac0e;
      }
      p_Var7 = p_Var3;
      p_Var5 = *(__tree_node_base **)p_Var3;
    } while (*(__tree_node_base **)p_Var3 != (__tree_node_base *)0x0);
    lVar1 = *(long *)p_Var3;
  }
joined_r0x0001002aac0e:
  if (lVar1 == 0) {
    p_Var5 = (__tree_node_base *)new char[0x28];
    *(unsigned long *)(p_Var5 + 0x20) = param_1;
    *(unsigned long long *)p_Var5 = 0;
    *(unsigned long long *)(p_Var5 + 8) = 0;
    *(__tree_node_base **)(p_Var5 + 0x10) = p_Var3;
    *(__tree_node_base **)p_Var7 = p_Var5;
    if (**(long **)(this + 0x750) != 0) {
      *(long *)(this + 0x750) = **(long **)(this + 0x750);
      p_Var5 = *(__tree_node_base **)p_Var7;
    }
    // std code
              (*(__tree_node_base **)(this + 0x758),p_Var5);
    *(long *)(this + 0x760) = *(long *)(this + 0x760) + 1;
  }
  *(unsigned long *)(this + 0x768) = param_1;
  return;
}
}
