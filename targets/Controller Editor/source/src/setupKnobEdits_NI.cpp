#include <ni/controller_editor/setupKnobEdits_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel {

void setupKnobEdits(NI::AssignmentActionType) [clone .cold.6] {
long *plVar1;
  long lVar2;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*param_1 + 0x10))();
    // std code
  }
  return;
}
}
