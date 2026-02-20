#include <ni/controller_editor/ILEDProperties.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ColorModeEdit::selectValue(NI::NHL2 {

void ILEDProperties::eLEDColorMode) {
uint local_1c;
  
  NWL::TextPanel<NI::NWL::Button>::setText
            (*(TextPanel<NI::NWL::Button> **)(this + 0x3f0),
             (string *)((unsigned long)param_2 * 0x18 + m_ColorModeTitles));
  local_1c = param_2;
  nod::signal_type<nod::multithread_policy,void(NI::NHL2::ILEDProperties::eLEDColorMode)>::
  operator()((signal_type<nod::multithread_policy,void(NI::NHL2::ILEDProperties::eLEDColorMode)> *)
             (this + 0x400),(eLEDColorMode *)&local_1c);
  return;
}
}
