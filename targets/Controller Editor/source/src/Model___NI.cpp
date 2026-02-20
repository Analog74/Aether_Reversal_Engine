#include <ni/controller_editor/Model___NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel::createLEDSettingsEdits(NI {

void Model*, NI::AssignmentActionType) {
long *plVar1;
  long lVar2;
  long *plVar3;
  void2 uVar4;
  uint uVar5;
  int iVar6;
  unsigned long long uVar7;
  unsigned long uVar8;
  unsigned long long local_58;
  long *local_50;
  unsigned long long local_48;
  long *local_40;
  unsigned long long local_38;
  
  uVar4 = (**(code **)(*(long *)param_1 + 0x210))(param_1,param_3);
  if (((byte)((byte)((ushort)uVar4 >> 8) | 2) != 2) && ((char)uVar4 != '\0')) {
    param_3 = param_3 & 0xff;
    uVar7 = (**(code **)(*(long *)param_1 + 0x228))(param_1,param_3);
    if ((((byte)((byte)((unsigned long)uVar7 >> 0x20) | 2) != 2) &&
        (uVar8 = Model::getSelectedAssignmentMidiType(param_1,param_3),
        (uVar8 & 0xff00000000) != 0x200000000)) &&
       ((uVar5 = (int)uVar8 - 0xf2, 10 < uVar5 || ((0x701U >> (uVar5 & 0x1f) & 1) == 0)))) {
      uVar4 = (**(code **)(*(long *)param_1 + 0x218))(param_1,param_3);
      if ((byte)((byte)((ushort)uVar4 >> 8) | 2) == 2) {
        if ((int)uVar7 != 2) {
          return;
        }
      }
      else if (((int)uVar7 != 2) && ((char)uVar4 == '\0')) {
        return;
      }
      iVar6 = (**(code **)(*(long *)param_1 + 0x228))(param_1,param_3);
      local_38 = (**(code **)(*(long *)param_1 + 0x230))(param_1,param_3);
      local_58 = *(unsigned long long *)(this + 0x4f0);
      plVar3 = *(long **)(this + 0x4f8);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar3[1] = plVar3[1] + 1;
        UNLOCK();
      }
      local_50 = plVar3;
      createLEDControlAndStyleEdits(this,param_1,param_3,&local_58,iVar6,0,local_38,0,0,0,0);
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          // std code
        }
      }
      if (iVar6 == 2) {
        local_48 = *(unsigned long long *)(this + 0x4f0);
        plVar3 = *(long **)(this + 0x4f8);
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar3[1] = plVar3[1] + 1;
          UNLOCK();
        }
        local_40 = plVar3;
        createLEDStyleRGBEdits();
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            // std code
            return;
          }
        }
      }
    }
  }
  return;
}
}
