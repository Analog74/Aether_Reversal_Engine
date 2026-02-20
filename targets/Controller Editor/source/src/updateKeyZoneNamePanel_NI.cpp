#include <ni/controller_editor/updateKeyZoneNamePanel_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel {

void updateKeyZoneNamePanel(NI::KompleteKontrolModelBase&) {
int iVar1;
  string local_30;
  uint uStack_2f;
  void2 uStack_2b;
  unsigned char uStack_29;
  unsigned char uStack_28;
  unsigned char local_27;
  void *local_20;
  
  NWL::Widget::setVisible(*(Widget **)(this + 0x460),false);
  NWL::Widget::setVisible(*(Widget **)(this + 0x450),false);
  NWL::Widget::setActive(*(Widget **)(this + 0x520),false);
  local_30 = (string)0xc;
  uStack_2f = 0x6d726f6e;
  uStack_2b = 0x6c61;
  uStack_29 = 0;
  NWL::Widget::setAttribute(*(unsigned long long *)(this + 0x440),NI::symbolDimension,&local_30);
  if (((byte)local_30 & 1) != 0) {
    delete(local_20);
  }
  local_30 = (string)0x10;
  uStack_2f = 0x2079654b;
  uStack_2b = 0x6f5a;
  uStack_29 = 0x6e;
  uStack_28 = 0x65;
  local_27 = 0;
  NWL::TextPanel<NI::NWL::Label>::setText(*(TextPanel<NI::NWL::Label> **)(this + 0x470),&local_30);
  if (((byte)local_30 & 1) != 0) {
    delete(local_20);
  }
  iVar1 = KompleteKontrolModelBase::getNumSelectedKeyZones(param_1);
  if (iVar1 == 0) {
    local_30 = (string)0x0;
    uStack_2f = uStack_2f & 0xffffff00;
    NWL::TextEdit::setText(*(TextEdit **)(this + 0x480),&local_30,true);
    if (((byte)local_30 & 1) != 0) {
      delete(local_20);
    }
    NWL::Widget::setEnabled(*(Widget **)(this + 0x480),false);
    NWL::Widget::setActive(*(Widget **)(this + 0x4e0),false);
  }
  else {
    NWL::Widget::setActive(*(Widget **)(this + 0x4e0),true);
    NWL::Widget::setEnabled(*(Widget **)(this + 0x480),true);
    showLabel(this);
  }
  return;
}
}
