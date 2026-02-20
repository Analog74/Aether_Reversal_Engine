#include <ni/controller_editor/selectedAssignmentChanged_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget {

void selectedAssignmentChanged(2 param_2, NI::SelectionContentUpdateScope {
long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ControllerManager *this_00;
  unsigned long uVar6;
  __tree_node_base *p_Var7;
  __tree_node_base *p_Var8;
  long *plVar9;
  long *plVar10;
  __tree_node_base *p_Var11;
  __tree_node_base *p_Var12;
  string *psVar13;
  unsigned long uVar14;
  unsigned long local_58;
  unsigned long long uStack_50;
  void *local_48;
  Assignment *local_40;
  IAssignmentSupport *local_38;
  
  if (param_2 == '\0') {
    NI::MidiAssignmentPanel::showLabel(*(MidiAssignmentPanel **)(this + 0x568));
  }
  else if (param_2 == '\x01') {
    NI::MidiAssignmentPanel::updateValues(*(MidiAssignmentPanel **)(this + 0x568));
  }
  lVar1 = *(long *)(this + 0x468);
  lVar2 = *(long *)(lVar1 + 0x120);
  if ((unsigned long)(long)*(int *)(lVar1 + 0x2f0) < (unsigned long)(*(long *)(lVar1 + 0x128) - lVar2 >> 4)) {
    lVar5 = (long)*(int *)(lVar1 + 0x2f0) * 0x10;
    lVar1 = *(long *)(lVar2 + lVar5);
    plVar3 = *(long **)(lVar2 + 8 + lVar5);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar3 + 1;
      lVar2 = *plVar10;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        // std code
      }
    }
    if (lVar1 != 0) {
      this_00 = (ControllerManager *)ControllerManager::getInstance();
      local_38 = (IAssignmentSupport *)ControllerManager::getSelectedControllerModel(this_00);
      if ((local_38 != (IAssignmentSupport *)0x0) &&
         (uVar6 = IAssignmentSupport::getNumSelectedAssignments(local_38), uVar6 != 0)) {
        plVar3 = (long *)(lVar1 + 0x648);
        uVar14 = 0;
        do {
          local_40 = (Assignment *)
                     IAssignmentSupport::getSelectedAssignment(local_38,uVar14 & 0xffffffff,0);
          plVar10 = plVar3;
          plVar9 = plVar3;
          if ((long *)*plVar3 == (long *)0x0) {
            lVar2 = *plVar9;
          }
          else {
            plVar4 = (long *)*plVar3;
            do {
              while (plVar10 = plVar4, *(uint *)(plVar10 + 4) <= *(uint *)(lVar1 + 0x670)) {
                if (*(uint *)(lVar1 + 0x670) <= *(uint *)(plVar10 + 4)) return;
                plVar4 = (long *)plVar10[1];
                plVar9 = plVar10 + 1;
                if ((long *)plVar10[1] == (long *)0x0) return;
              }
              plVar4 = (long *)*plVar10;
              plVar9 = plVar10;
            } while ((long *)*plVar10 != (long *)0x0);
            lVar2 = *plVar10;
          }
          if (lVar2 == 0) {
            p_Var12 = (__tree_node_base *)new char[0x40];
            *(unsigned int *)(p_Var12 + 0x20) = *(unsigned int *)(lVar1 + 0x670);
            *(unsigned long long *)(p_Var12 + 0x30) = 0;
            *(unsigned long long *)(p_Var12 + 0x38) = 0;
            *(__tree_node_base **)(p_Var12 + 0x28) = p_Var12 + 0x30;
            *(unsigned long long *)p_Var12 = 0;
            *(unsigned long long *)(p_Var12 + 8) = 0;
            *(long **)(p_Var12 + 0x10) = plVar10;
            *plVar9 = (long)p_Var12;
            p_Var11 = p_Var12;
            if (**(long **)(lVar1 + 0x640) != 0) {
              *(long *)(lVar1 + 0x640) = **(long **)(lVar1 + 0x640);
              p_Var11 = (__tree_node_base *)*plVar9;
            }
            // std code
                      (*(__tree_node_base **)(lVar1 + 0x648),p_Var11);
            *(long *)(lVar1 + 0x650) = *(long *)(lVar1 + 0x650) + 1;
            p_Var11 = *(__tree_node_base **)(p_Var12 + 0x28);
            p_Var12 = p_Var12 + 0x30;
            if (p_Var11 != p_Var12) return;
          }
          else {
            p_Var11 = *(__tree_node_base **)(lVar2 + 0x28);
            p_Var12 = (__tree_node_base *)(lVar2 + 0x30);
            if (p_Var11 != p_Var12) {
              psVar13 = (string *)(local_40 + 0x30);
              do {
                p_Var8 = (__tree_node_base *)
                         // std code
                         __tree<// std code
                         ::find<// std code
                                              *)(p_Var11 + 0x28),psVar13);
                if (p_Var8 != p_Var11 + 0x30) {
                  local_58 = 0;
                  uStack_50 = 0;
                  local_48 = (void *)0x0;
                  NHL2::Assignment::getLabel(local_40,(string *)&local_58);
                  plVar9 = (long *)___dynamic_cast(*(unsigned long long *)(p_Var8 + 0x38),
                                                   &NWL::Widget::typeinfo,&IAssignable::typeinfo,
                                                   0xfffffffffffffffe);
                  plVar10 = *(long **)(p_Var8 + 0x40);
                  if (plVar10 != (long *)0x0) {
                    LOCK();
                    plVar10[1] = plVar10[1] + 1;
                    UNLOCK();
                  }
                  (**(code **)(*plVar9 + 0x10))(plVar9,(string *)&local_58);
                  if (plVar10 != (long *)0x0) {
                    LOCK();
                    plVar9 = plVar10 + 1;
                    lVar2 = *plVar9;
                    *plVar9 = *plVar9 + -1;
                    UNLOCK();
                    if (lVar2 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      // std code
                    }
                  }
                  if ((local_58 & 1) != 0) {
                    delete(local_48);
                  }
                  break;
                }
                p_Var8 = *(__tree_node_base **)(p_Var11 + 8);
                if (*(__tree_node_base **)(p_Var11 + 8) == (__tree_node_base *)0x0) {
                  p_Var7 = *(__tree_node_base **)(p_Var11 + 0x10);
                  if (*(__tree_node_base **)p_Var7 != p_Var11) {
                    do {
                      p_Var11 = *(__tree_node_base **)(p_Var11 + 0x10);
                      p_Var7 = *(__tree_node_base **)(p_Var11 + 0x10);
                    } while (*(__tree_node_base **)p_Var7 != p_Var11);
                  }
                }
                else {
                  do {
                    p_Var7 = p_Var8;
                    p_Var8 = *(__tree_node_base **)p_Var7;
                  } while (*(__tree_node_base **)p_Var7 != (__tree_node_base *)0x0);
                }
                p_Var11 = p_Var7;
              } while (p_Var7 != p_Var12);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar6);
      }
    }
  }
  return;
}
}
