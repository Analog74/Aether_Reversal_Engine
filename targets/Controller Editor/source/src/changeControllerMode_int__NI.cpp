#include <ni/controller_editor/changeControllerMode_int__NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel {

void changeControllerMode(3 param_3, int, NI::AssignmentActionType {
ControllerManager *this;
  Model *pMVar1;
  
  this = (ControllerManager *)ControllerManager::getInstance();
  pMVar1 = (Model *)ControllerManager::getSelectedControllerModel(this);
  if (param_3 != '\0') {
    return;
  }
  Model::setSelectedAssignmentMidiControllerMode(pMVar1,param_1,0);
  return;
}
}
