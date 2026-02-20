#include <ni/controller_editor/setTitleText_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IModalOverlay {

void setTitleText(1 param_1, std::string const& {
NWL::TextPanel<NI::NWL::Label>::setText(*(TextPanel<NI::NWL::Label> **)(this + 0x4d0),param_1);
  return;
}
}
