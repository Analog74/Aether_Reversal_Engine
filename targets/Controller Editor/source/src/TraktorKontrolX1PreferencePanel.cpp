#include <ni/controller_editor/TraktorKontrolX1PreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolX1PreferencePanel::~TraktorKontrolX1PreferencePanel() {
PreferencePanelWithModelAndController<NI::TraktorKontrolX1InstanceModel,NI::TraktorKontrolX1Controller>
  ::~PreferencePanelWithModelAndController
            ((PreferencePanelWithModelAndController<NI::TraktorKontrolX1InstanceModel,NI::TraktorKontrolX1Controller>
              *)(this + -0x60));
  delete((PreferencePanelWithModelAndController<NI::TraktorKontrolX1InstanceModel,NI::TraktorKontrolX1Controller>
                   *)(this + -0x60));
  return;
}
}
