#include <ni/controller_editor/PIDController.hpp>
namespace NI::NHL2::PIDController::setParameters(NI::NHL2 {

void PIDController::Parameters const&) {
unsigned long long uVar1;
  unsigned long long uVar2;
  unsigned long long uVar3;
  
  uVar1 = *(unsigned long long *)param_1;
  uVar2 = *(unsigned long long *)(param_1 + 8);
  uVar3 = *(unsigned long long *)(param_1 + 0x18);
  *(unsigned long long *)(this + 0x10) = *(unsigned long long *)(param_1 + 0x10);
  *(unsigned long long *)(this + 0x18) = uVar3;
  *(unsigned long long *)this = uVar1;
  *(unsigned long long *)(this + 8) = uVar2;
  return;
}
}
