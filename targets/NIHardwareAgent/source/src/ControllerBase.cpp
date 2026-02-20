#include <ni/controller_editor/ControllerBase.hpp>
namespace NI::NHL2::SERVER::ControllerBase::setStartupMode(NI::NHL2::SERVER {

void ControllerBase::eMode) {
int iVar1;
  checkLockOrder local_20 [8];
  
  if (*(int *)(this + 0x254) != param_2) {
    *(int *)(this + 0x254) = param_2;
    if (*(int *)(this + 0x250) != param_2) {
      // std code
      checkLockOrder::checkLockOrder(local_20,1000);
      if ((*(long *)(this + 0x150) == 0) ||
         (((iVar1 = *(int *)(this + 0x160), iVar1 != 0x496e7374 && (iVar1 != 0x534d6170)) &&
          (iVar1 != 0x536c6570)))) {
        checkLockOrder::~checkLockOrder(local_20);
        // std code
      }
      else {
        checkLockOrder::~checkLockOrder(local_20);
        // std code
        (**(code **)(*(long *)this + 0x240))(this,*(unsigned int *)(this + 0x254),1);
      }
    }
    (**(code **)(*(long *)this + 0x168))(this);
  }
  return;
}
}
