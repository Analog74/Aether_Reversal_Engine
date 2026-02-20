#include <ni/controller_editor/runCalibrationFunction_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ICalibrationDialog {

void runCalibrationFunction(NI::CalibrationStep) const [clone .cold.1] {
if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  return;
}
}
