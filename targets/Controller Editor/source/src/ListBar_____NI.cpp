#include <ni/controller_editor/ListBar_____NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget::pasteSelection(std::weak_ptr<NI::NWL::Vector<NI {

void ListBar> >, NI::IController*) {
long *plVar1;
  uint uVar2;
  Widget *pWVar3;
  char cVar4;
  ControllerManager *this;
  Model *this_00;
  long *plVar5;
  Widget *pWVar6;
  unsigned long uVar7;
  __tree_node_base *p_Var8;
  long lVar9;
  Widget *pWVar10;
  Widget *pWVar11;
  long lVar12;
  unsigned long uVar13;
  long local_78;
  long *local_70;
  Widget *local_68;
  unsigned long local_60;
  Widget *local_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  *(unsigned char *)(param_1 + 0x651) = 1;
  local_38 = param_1;
  this = (ControllerManager *)ControllerManager::getInstance();
  this_00 = (Model *)ControllerManager::getSelectedControllerModel(this);
  if (this_00 == (Model *)0x0) return;
  if ((*(long *)(local_38 + 0x400) == 0) ||
     (local_48 = (long *)// std code
    lVar12 = 0;
    local_48 = (long *)0x0;
    if (param_2[1] != 0) return;
    lVar9 = 0;
    plVar5 = (long *)0x0;
    if (lVar12 != 0) {
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar5[2] = plVar5[2] + 1;
        UNLOCK();
      }
      local_78 = lVar9;
      local_70 = plVar5;
      IListSupport::getPageListFrom(&local_58,local_38 + 0x3f0,&local_78);
      if (local_70 != (long *)0x0) {
        // std code
      }
      uVar2 = *(uint *)(local_58 + 0x908);
      local_40 = plVar5;
      local_60 = Model::getNumPages(this_00,uVar2);
      cVar4 = Model::isPageSetInClipboard((uint)this_00);
      if (cVar4 != '\0') {
        if (*(long *)(local_58 + 0x760) == 0) {
          uVar13 = 0;
        }
        else {
          lVar12 = *(long *)(local_58 + 0x758);
          if (*(long *)(local_58 + 0x758) == 0) {
            pWVar6 = local_58 + 0x768;
            if ((Widget *)**(long **)(local_58 + 0x768) == local_58 + 0x758) {
              do {
                lVar12 = *(long *)pWVar6;
                pWVar6 = (Widget *)(lVar12 + 0x10);
              } while (**(long **)(lVar12 + 0x10) == lVar12);
            }
            lVar9 = *(long *)pWVar6;
          }
          else {
            do {
              lVar9 = lVar12;
              lVar12 = *(long *)(lVar9 + 8);
            } while (*(long *)(lVar9 + 8) != 0);
          }
          uVar13 = *(long *)(lVar9 + 0x20) + 1;
        }
        Model::insertPageSelectionFromClipboard(this_00,uVar2,uVar13);
        uVar7 = Model::getNumPages(this_00,uVar2);
        pWVar6 = local_58;
        if (local_60 < uVar7) {
          local_68 = local_58 + 0x758;
          // std code
                    ((__tree<unsigned_long,// std code
                     )(local_58 + 0x750),*(__tree_node **)(local_58 + 0x758));
          *(Widget **)(pWVar6 + 0x750) = local_68;
          *(unsigned long long *)(pWVar6 + 0x758) = 0;
          *(unsigned long long *)(pWVar6 + 0x760) = 0;
          *(unsigned long long *)(pWVar6 + 0x768) = 0xffffffffffffffff;
          Model::selectPage(this_00,uVar2,uVar13);
          uVar7 = (uVar13 - local_60) + uVar7;
          if (uVar13 < uVar7) {
            do {
              pWVar6 = local_58;
              if (*(Widget **)(local_58 + 0x758) == (Widget *)0x0) {
                pWVar10 = local_58 + 0x758;
              }
              else {
                pWVar3 = *(Widget **)(local_58 + 0x758);
                pWVar11 = local_58 + 0x758;
                do {
                  pWVar10 = pWVar3;
                  if (*(unsigned long *)(pWVar10 + 0x20) <= uVar13) {
                    if (*(unsigned long *)(pWVar10 + 0x20) < uVar13) {
                      pWVar11 = pWVar10 + 8;
                      pWVar3 = *(Widget **)(pWVar10 + 8);
                      if (*(Widget **)(pWVar10 + 8) != (Widget *)0x0) return;
                    }
                    if (*(long *)pWVar11 != 0) return;
                    return;
                  }
                  pWVar3 = *(Widget **)pWVar10;
                  pWVar11 = pWVar10;
                } while (*(Widget **)pWVar10 != (Widget *)0x0);
              }
              pWVar11 = pWVar10;
              if (*(long *)pWVar10 == 0) {
                p_Var8 = (__tree_node_base *)new char[0x28];
                *(unsigned long *)(p_Var8 + 0x20) = uVar13;
                *(unsigned long long *)p_Var8 = 0;
                *(unsigned long long *)(p_Var8 + 8) = 0;
                *(Widget **)(p_Var8 + 0x10) = pWVar10;
                *(__tree_node_base **)pWVar11 = p_Var8;
                if (**(long **)(pWVar6 + 0x750) != 0) {
                  *(long *)(pWVar6 + 0x750) = **(long **)(pWVar6 + 0x750);
                  p_Var8 = *(__tree_node_base **)pWVar11;
                }
                // std code
                          (*(__tree_node_base **)(pWVar6 + 0x758),p_Var8);
                *(long *)(pWVar6 + 0x760) = *(long *)(pWVar6 + 0x760) + 1;
              }
              *(unsigned long *)(pWVar6 + 0x768) = uVar13;
              uVar13 = uVar13 + 1;
            } while (uVar13 != uVar7);
          }
          NWL::Widget::setAlign(local_58);
        }
      }
      plVar5 = local_40;
      if (local_50 != (long *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar12 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
          // std code
          plVar5 = local_40;
        }
      }
    }
  }
  else {
    lVar12 = *(long *)(local_38 + 0x3f8);
    if (param_2[1] == 0) return;
    plVar5 = (long *)// std code
    if (plVar5 == (long *)0x0) return;
    lVar9 = *param_2;
    if (lVar12 != lVar9) return;
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar12 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      // std code
    }
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar5 = local_48 + 1;
    lVar12 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar12 == 0) {
      (**(code **)(*local_48 + 0x10))(local_48);
      // std code
    }
  }
  *(unsigned char *)(local_38 + 0x651) = 0;
  return;
}
}
