#include <ni/controller_editor/getCroppedString_float__std.hpp>
namespace NI::NWL::PanelDrawer {

void getCroppedString(float, std::string const&, int) const {
long *plVar1;
  StateSelector *pSVar2;
  Font *this;
  long *plVar3;
  char cVar4;
  int in_ECX;
  byte *in_RDX;
  byte bVar5;
  StateSelector *pSVar6;
  StateSelector *pSVar7;
  unsigned int in_register_00000034;
  float fVar8;
  unsigned int local_58;
  float local_54;
  byte *local_50;
  unsigned long local_48;
  long *local_40;
  int local_34;
  
  local_40 = (long *)CONCAT44(in_register_00000034,param_3);
  plVar1 = *(long **)CONCAT44(in_register_00000034,param_3);
  local_50 = (byte *)plVar1[0x2e];
  pSVar6 = (StateSelector *)plVar1[0x2b];
  pSVar2 = (StateSelector *)plVar1[0x2c];
  pSVar7 = (StateSelector *)0x0;
  local_54 = param_1;
  local_34 = in_ECX;
  do {
    if (pSVar6 == pSVar2) {
LAB_100035322:
      plVar3 = local_40;
      pSVar6 = (StateSelector *)&local_50;
      if (pSVar7 != (StateSelector *)0x0) {
        pSVar6 = pSVar7;
      }
      this = *(Font **)pSVar6;
      if (*(long *)(*plVar1 + 0x138) == 0) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = *(float *)(*(long *)(*plVar1 + 0x138) + 0x1a8);
      }
      UIA::Font::setBackingScaleFactor(this,fVar8);
      local_58 = _lroundf((float)local_34 * local_54);
      plVar1 = (long *)plVar3[6];
      if (plVar1 == (long *)0x0) {
        bVar5 = *in_RDX & 1;
        local_50 = in_RDX + 1;
        if (bVar5 != 0) {
          local_50 = *(byte **)(in_RDX + 0x10);
        }
        local_48 = (unsigned long)(*in_RDX >> 1);
        if (bVar5 != 0) {
          local_48 = *(unsigned long *)(in_RDX + 8);
        }
        UIA::StringCropper::cropString
                  ((CharSequence *)param_2,(Font *)(plVar3 + 0xe),(int)&local_50);
      }
      else {
        bVar5 = *in_RDX & 1;
        local_50 = in_RDX + 1;
        if (bVar5 != 0) {
          local_50 = *(byte **)(in_RDX + 0x10);
        }
        local_48 = (unsigned long)(*in_RDX >> 1);
        if (bVar5 != 0) {
          local_48 = *(unsigned long *)(in_RDX + 8);
        }
        (**(code **)(*plVar1 + 0x30))(param_2,plVar1,&local_50,this,&local_58);
      }
      return param_2;
    }
    cVar4 = StateSelector::doesApply(pSVar6,(Widget *)*plVar1);
    if (cVar4 != '\0') {
      pSVar7 = pSVar6 + 0x20;
      goto LAB_100035322;
    }
    pSVar6 = pSVar6 + 0x28;
  } while( true );
}
}
