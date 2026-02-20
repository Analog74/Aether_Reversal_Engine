#include <ni/controller_editor/ButtonImpl.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MaschineMikroMK2Widget::selectPrev(NI::NWL {

void ButtonImpl::tSignalData const*) {
if (((byte)param_1[3] & 0x10) == 0) {
    Model::selectPreviousPage(*(Model **)(this + 0x780),0);
    return;
  }
  Model::selectPreviousTemplate(*(Model **)(this + 0x780));
  return;
}
}
