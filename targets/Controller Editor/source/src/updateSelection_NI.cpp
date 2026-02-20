#include <ni/controller_editor/updateSelection_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget {

void updateSelection(NI::InspectorPanelAction) {
list *plVar1;
  ControllerManager *this_00;
  IAssignmentSupport *this_01;
  unsigned long uVar2;
  long lVar3;
  list *plVar4;
  unsigned long uVar5;
  list *local_48;
  list *local_40;
  long local_38;
  
  this_00 = (ControllerManager *)ControllerManager::getInstance();
  this_01 = (IAssignmentSupport *)ControllerManager::getSelectedControllerModel(this_00);
  if (this_01 != (IAssignmentSupport *)0x0) {
    local_48 = (list *)&local_48;
    local_38 = 0;
    local_40 = local_48;
    uVar2 = IAssignmentSupport::getNumSelectedAssignments(this_01);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        lVar3 = IAssignmentSupport::getSelectedAssignment(this_01,uVar5 & 0xffffffff,0);
        plVar4 = (list *)new char[0x28];
        *(unsigned long long *)plVar4 = 0;
        // std code
        *(list ***)(plVar4 + 8) = &local_48;
        *(list **)plVar4 = local_48;
        *(list **)(local_48 + 8) = plVar4;
        local_38 = local_38 + 1;
        uVar5 = uVar5 + 1;
        local_48 = plVar4;
      } while (uVar2 != uVar5);
    }
    setAssignmentSelection(this,(list *)&local_48);
    if ((param_2 == 0) && (*(MidiAssignmentPanel **)(this + 0x568) != (MidiAssignmentPanel *)0x0)) {
      NI::MidiAssignmentPanel::updateValues(*(MidiAssignmentPanel **)(this + 0x568));
    }
    if (local_38 != 0) {
      lVar3 = *(long *)local_40;
      *(unsigned long long *)(lVar3 + 8) = *(unsigned long long *)(local_48 + 8);
      **(long **)(local_48 + 8) = lVar3;
      local_38 = 0;
      plVar4 = local_40;
      while (plVar4 != (list *)&local_48) {
        plVar1 = *(list **)(plVar4 + 8);
        if (((byte)plVar4[0x10] & 1) != 0) {
          delete(*(void **)(plVar4 + 0x20));
        }
        delete(plVar4);
        plVar4 = plVar1;
      }
    }
  }
  return;
}
}
