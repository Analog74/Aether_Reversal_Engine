#include <ni/controller_editor/selectionContentChanged_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget {

void selectionContentChanged(2 param_2, NI::SelectionContentUpdateScope {
char cVar1;
  ControllerManager *this_00;
  long lVar2;
  
  this_00 = (ControllerManager *)ControllerManager::getInstance();
  lVar2 = ControllerManager::getSelectedControllerModel(this_00);
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*(long *)(lVar2 + 0x20) + 0x10))(lVar2 + 0x20);
    if (cVar1 == '\x01') {
      if (param_2 == '\0') {
        NI::MidiAssignmentPanel::showLabel(*(MidiAssignmentPanel **)(this + 0x568));
        return;
      }
      if (param_2 == '\x01') {
        NI::MidiAssignmentPanel::updateValues(*(MidiAssignmentPanel **)(this + 0x568));
        return;
      }
    }
    else if(2 param_2, 2 param_2, cVar1 == '\0' {
      selectedAssignmentChanged(this,param_2;
      return;
    }
  }
  return;
}
}
