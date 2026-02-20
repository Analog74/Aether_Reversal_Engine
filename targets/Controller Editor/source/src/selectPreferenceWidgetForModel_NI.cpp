#include <ni/controller_editor/selectPreferenceWidgetForModel_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::PreferenceWidget {

void selectPreferenceWidgetForModel(1 param_1, NI::Model const* {
uint uVar1;
  unsigned long long uVar2;
  long *plVar3;
  PreferenceWidget *this;
  byte local_50 [16];
  void *local_40;
  
  void *local_28;
  
  uVar2 = UIA::Application::getApplication();
  plVar3 = (long *)___dynamic_cast(uVar2,&NWL::App::typeinfo,&ControllerEditorApp::typeinfo,0);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3);
  this = (PreferenceWidget *)(**(code **)(*plVar3 + 0x60))(plVar3);
  if (this != (PreferenceWidget *)0x0) {
    uVar1 = (**(code **)(*(long *)(param_1 + 0x7c8) + 0x10))(param_1 + 0x7c8);
    if (uVar1 < 2) {
      (**(code **)(*(long *)param_1 + 0x180))(local_38,param_1);
      selectController(this,local_38,true);
    }
    else {
      (**(code **)(*(long *)param_1 + 0x180))(local_50,param_1);
      (**(code **)(*(long *)(param_1 + 0x7c8) + 0x18))(param_1 + 0x7c8);
      IMultiControllerSupport::createMultiControllerDisplayName(local_38,(uint)local_50);
      if ((local_50[0] & 1) != 0) {
        delete(local_40);
      }
      selectController(this,local_38,true);
    }
    if (((byte)local_38[0] & 1) != 0) {
      delete(local_28);
    }
    NWL::Widget::setCanInput((Widget *)this,true);
    NWL::Widget::setCanFocus((Widget *)this,true);
  }
  return;
}
}
