#include <ni/controller_editor/DragDropSupport.hpp>
namespace NI::UIA::DragDropManager::handleDragFinishedEvent(NI::UIA {

void DragDropSupport::DropResult) {
unsigned char uVar1;
  unsigned long long *puVar2;
  long lVar3;
  unsigned long long unaff_R14;
  unsigned long uVar4;
  unsigned int local_30 [2];
  
  if (s_pResultReceiver == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    local_30[0] = param_1;
    uVar1 = (**(code **)(*s_pResultReceiver + 0x10))(s_pResultReceiver,0x518,local_30);
    uVar4 = 0((int7)((unsigned long)unaff_R14 >> 8),uVar1);
    if (0 != 0) {
      lVar3 = 0 << 3;
      puVar2 = s_observerReceivers;
      do {
        (**(code **)(*(long *)*puVar2 + 0x18))((long *)*puVar2,0x518,local_30);
        puVar2 = puVar2 + 1;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  s_pResultReceiver = (long *)0x0;
  0 = 0;
  return uVar4 & 0xffffffff;
}
}
