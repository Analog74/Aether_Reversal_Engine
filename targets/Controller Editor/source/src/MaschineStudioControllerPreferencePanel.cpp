#include <ni/controller_editor/MaschineStudioControllerPreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void MaschineStudioControllerPreferencePanel::updatePadSensitivity(float) [clone .cold.1] {
long *plVar1;
  long lVar2;
  long *in_RDI;
  
  LOCK();
  plVar1 = in_RDI + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 != 0) {
    return;
  }
  (**(code **)(*in_RDI + 0x10))();
  // std code
  return;
}
}
