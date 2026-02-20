#include <ni/controller_editor/setValueFromText_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::Dragger {

void setValueFromText(1 param_1, std::string const&, bool {
float local_28 [2];
  int local_20;
  bool local_19;
  
  local_19 = false;
  if (*(int *)(this + 0x778) == 1) {
    GP::DETAIL::LexicalCastHelper<float>(param_1,local_28,&local_19);
    if (local_19 == false) {
      return '\0';
    }
    local_20 = (int)((local_28[0] - *(float *)(this + 0x6c8)) / *(float *)(this + 0x6cc) + 0.5);
  }
  else {
    GP::DETAIL::LexicalCastHelper<int>(param_1,&local_20,&local_19);
    if (local_19 == false) {
      return '\0';
    }
  }
  setValue(this,local_20,param_2);
  return local_19;
}
}
