#include <ni/controller_editor/setInfoPanelSuccess_std.hpp>
namespace NI::UpdateWizardMainWidget {

void setInfoPanelSuccess(std::string const&) {
Widget *pWVar1;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long local_38;
  unsigned long long uStack_30;
  unsigned long long local_28;
  
  pWVar1 = *(Widget **)(this + 0x590);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::setAttribute(pWVar1,(string *)&local_58,(string *)&local_38);
  // std code
  // std code
  pWVar1 = *(Widget **)(this + 0x5a0);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  // std code
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  // std code
  NWL::Widget::setAttribute(pWVar1,(string *)&local_58,(string *)&local_38);
  // std code
  // std code
  (**(code **)(**(long **)(this + 0x5b0) + 0xd0))(*(long **)(this + 0x5b0),param_1);
  return;
}
}
