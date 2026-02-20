#include <ni/controller_editor/getCroppedString_float__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::PanelDrawer {

void getCroppedString(float, std::string const&, int) const {
unsigned long long *puVar1;
  Font *this;
  long *plVar2;
  char cVar3;
  StateSelector *pSVar4;
  int in_ECX;
  byte *in_RDX;
  StateSelector *pSVar5;
  unsigned int in_register_00000034;
  long *plVar6;
  bool bVar7;
  float fVar8;
  unsigned int local_4c;
  float local_48;
  int local_44;
  byte *local_40;
  unsigned long local_38;
  
  plVar6 = (long *)CONCAT44(in_register_00000034,param_3);
  puVar1 = (unsigned long long *)*plVar6;
  local_40 = (byte *)puVar1[0x2e];
  pSVar5 = (StateSelector *)puVar1[0x2b];
  pSVar4 = (StateSelector *)puVar1[0x2c];
  local_48 = param_1;
  local_44 = in_ECX;
  do {
    if (pSVar5 == pSVar4) {
      pSVar5 = (StateSelector *)0x0;
      pSVar4 = (StateSelector *)&local_40;
      if (pSVar5 != (StateSelector *)0x0) {
        pSVar4 = pSVar5;
      }
      this = *(Font **)pSVar4;
      fVar8 = (float)Widget::getBackingScaleFactor((Widget *)*puVar1);
      UIA::Font::setBackingScaleFactor(this,fVar8);
      local_4c = _lroundf((float)local_44 * local_48);
      plVar2 = (long *)plVar6[6];
      if (plVar2 == (long *)0x0) {
        bVar7 = (*in_RDX & 1) != 0;
        local_40 = in_RDX + 1;
        if (bVar7) {
          local_40 = *(byte **)(in_RDX + 0x10);
        }
        local_38 = (unsigned long)(*in_RDX >> 1);
        if (bVar7) {
          local_38 = *(unsigned long *)(in_RDX + 8);
        }
        UIA::StringCropper::cropString
                  ((CharSequence *)param_2,(Font *)(plVar6 + 0xe),(int)&local_40);
      }
      else {
        bVar7 = (*in_RDX & 1) != 0;
        local_40 = in_RDX + 1;
        if (bVar7) {
          local_40 = *(byte **)(in_RDX + 0x10);
        }
        local_38 = (unsigned long)(*in_RDX >> 1);
        if (bVar7) {
          local_38 = *(unsigned long *)(in_RDX + 8);
        }
        (**(code **)(*plVar2 + 0x30))(param_2,plVar2,&local_40,this,&local_4c);
      }
      return param_2;
    }
    cVar3 = StateSelector::doesApply(pSVar5,(Widget *)*puVar1);
    if (cVar3 != '\0') {
      pSVar5 = pSVar5 + 0x20;
      return;
    }
    pSVar5 = pSVar5 + 0x28;
  } while( true );
}
}
