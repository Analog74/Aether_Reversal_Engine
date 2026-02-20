#include <ni/controller_editor/DataDefs.hpp>
namespace NI::NHL2::Display {

void DataDefs::areScreenshotsEnabled() {
return s_bScreenShotsEnabled;
}

void DataDefs::getBarValueForMidi(int, bool) {
if (param_2 param_1) {
  }
  else if (param_1 == 0) {
    return 0;
  }
  return param_1 / 3;
}
}
