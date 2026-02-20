#include <ni/controller_editor/TimedNHL2MessageProcessing.hpp>
namespace NI::dawcontrol {

TimedNHL2MessageProcessing::~TimedNHL2MessageProcessing() {
long *plVar1;
  TimedNHL2MessageProcessing *pTVar2;
  
  plVar1 = *(long **)(this + 0x88);
  *(unsigned long long *)(this + 0x88) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  // boost code
  ~stack((stack<NI::dawcontrol::NHL2MessageVariant,// boost code
         (this + 0x30));
  pTVar2 = *(TimedNHL2MessageProcessing **)(this + 0x20);
  if (this != pTVar2) {
    if (pTVar2 != (TimedNHL2MessageProcessing *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010005ba66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)pTVar2 + 0x28))();
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010005ba72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pTVar2 + 0x20))();
  return;
}
}
