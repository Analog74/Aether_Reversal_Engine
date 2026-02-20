#include <ni/controller_editor/TraktorKontrolF1PreferencePanel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

TraktorKontrolF1PreferencePanel::~TraktorKontrolF1PreferencePanel() {
PreferencePanelWithModelAndController<NI::TraktorKontrolF1InstanceModel,NI::TraktorKontrolF1Controller>
  ::~PreferencePanelWithModelAndController
            ((PreferencePanelWithModelAndController<NI::TraktorKontrolF1InstanceModel,NI::TraktorKontrolF1Controller>
              *)(this + -0x60));
  delete((PreferencePanelWithModelAndController<NI::TraktorKontrolF1InstanceModel,NI::TraktorKontrolF1Controller>
                   *)(this + -0x60));
  return;
}
}
