#include <ni/controller_editor/writeControllerSpecific_pugi.hpp>
namespace NI::NHL2::MapHandlerUT {

void writeControllerSpecific(pugi::xml_node&) const {
uint uVar1;
  uint uVar2;
  ControllerUpdateThread *this_00;
  long lVar3;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  
  this_00 = *(ControllerUpdateThread **)(this + 0x248);
  uVar1 = *(uint *)(this + 0x254);
  uVar2 = *(uint *)(this_00 + 0x44);
  if ((uVar1 < 3) || (uVar2 != uVar1)) {
    this_00[0x41] = (ControllerUpdateThread)0x1;
    if (uVar1 == 7) {
      *(uint *)(this_00 + 0xe87c) = *(uint *)(this_00 + 0xe874);
      *(float *)(this_00 + 0xe888) = (float)*(uint *)(this_00 + 0xe874);
      goto LAB_1000b7201;
    }
    if (uVar1 == 6) {
      *(uint *)(this_00 + 0x7458) = *(uint *)(this_00 + 0x7450);
      *(float *)(this_00 + 0x7464) = (float)*(uint *)(this_00 + 0x7450);
      if (uVar2 == 6) goto LAB_1000b720f;
    }
    else {
      if (uVar1 != 1) goto LAB_1000b7201;
      *(uint *)(this_00 + 0x15ca0) = *(uint *)(this_00 + 0x15c98);
      *(float *)(this_00 + 0x15cac) = (float)*(uint *)(this_00 + 0x15c98);
      if (uVar2 == 1) goto LAB_1000b720f;
    }
  }
  else {
LAB_1000b7201:
    if (uVar2 == uVar1) goto LAB_1000b720f;
  }
  *(unsigned long long *)(this_00 + 0x39) = 0;
LAB_1000b720f:
  *(uint *)(this_00 + 0x44) = uVar1;
  ControllerUpdateThread::invalidateDisplays(this_00,0);
  if (uVar2 != uVar1) {
    (**(code **)(*(long *)this_00 + 0xa8))(this_00,uVar2,uVar1);
  }
  if (uVar1 == 1) {
    ControllerUpdateThread::performPendingUpdates(this_00);
  }
  local_48 = pugi::xml_node::append_child(param_1,2);
  pugi::xml_node::set_name((xml_node *)&local_48,"display_state");
  lVar3 = *(long *)(this + 0x248);
  local_38 = pugi::xml_node::append_child((xml_node *)&local_48,"display_mode");
  local_40 = pugi::xml_node::text((xml_node *)&local_38);
  pugi::xml_text::set((xml_text *)&local_40,*(int *)(lVar3 + 0x44));
  local_38 = pugi::xml_node::append_child((xml_node *)&local_48,"knob_mode");
  local_40 = pugi::xml_node::text((xml_node *)&local_38);
  pugi::xml_text::set((xml_text *)&local_40,(uint)*(byte *)(lVar3 + 0x42));
  return;
}
}
