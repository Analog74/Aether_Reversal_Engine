#include <ni/controller_editor/IMultiControllerSupport.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void IMultiControllerSupport::applyIdToMapping(unsigned char) {
return;
}

void IMultiControllerSupport::getModelInstanceID() const {
return *(unsigned int *)(this + 8);
}

void IMultiControllerSupport::setModelInstanceID(unsigned int) {
*(uint *)(this + 8) = param_1;
  return;
}
}
