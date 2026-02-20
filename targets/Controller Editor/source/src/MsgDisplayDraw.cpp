#include <ni/controller_editor/MsgDisplayDraw.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void MsgDisplayDraw::getResult() const {
return *(int *)(this + 0x10) == 0x74727565;
}

void MsgDisplayDraw::setPictureDataSize(unsigned int) {
*(uint *)(this + 0x1c) = param_1;
  *(uint *)this = param_1 + 0x14;
  return;
}
}
