#include <ni/controller_editor/MIDI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MainWidget::setMidiPort(NI::NHL2 {

void MIDI::PortType) {
TextPanel<NI::NWL::Button> *this_00;
  char *pcVar1;
  char cVar2;
  int iVar3;
  ControllerManager *this_01;
  long *plVar4;
  size_t sVar5;
  void *pvVar6;
  unsigned long uVar7;
  unsigned long long local_48;
  size_t local_40;
  void *local_38;
  
  this_01 = (ControllerManager *)ControllerManager::getInstance();
  plVar4 = (long *)ControllerManager::getSelectedControllerModel(this_01);
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar7 = 0;
  cVar2 = (**(code **)(*plVar4 + 0x2c0))(plVar4,0x4d704d70,0);
  if (cVar2 == '\0') {
    return;
  }
  (**(code **)(*plVar4 + 0x2a0))(plVar4,0x4d704d70,param_2,0);
  if (param_2 - 1 < 2) {
    uVar7 = (unsigned long)param_2;
  }
  this_00 = *(TextPanel<NI::NWL::Button> **)(this + 0x528);
  pcVar1 = (&NI::(anonymous_namespace)::getMidiDestinationPortText(unsigned_int)::pText)[uVar7];
  sVar5 = strlen(pcVar1);
  if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
    // std code
  }
  if (sVar5 < 0x17) {
    local_48 = 0(local_48._1_7_,(char)sVar5 * '\x02');
    pvVar6 = (void *)((long)&local_48 + 1);
    if (sVar5 == 0) return;
  }
  else {
    uVar7 = sVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = new char[uVar7];
    local_48 = uVar7 | 1;
    local_40 = sVar5;
    local_38 = pvVar6;
  }
  memcpy(pvVar6,pcVar1,sVar5);
  *(unsigned char *)((long)pvVar6 + sVar5) = 0;
  NWL::TextPanel<NI::NWL::Button>::setText(this_00,(string *)&local_48);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  if (((char)param_2 == '\x02') &&
     (iVar3 = (**(code **)(*plVar4 + 0x2b0))(plVar4,0x4d70546d,0), iVar3 != 0)) {
    (**(code **)(*plVar4 + 0x2a0))(plVar4,0x4d70546d,0,0);
    NWL::Switcher::setValue(*(Switcher **)(this + 0x548),0,false);
  }
  return;
}
}
