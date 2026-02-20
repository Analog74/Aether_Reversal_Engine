#include <ni/controller_editor/KompleteKontrolInstanceModel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

KompleteKontrolInstanceModel::~KompleteKontrolInstanceModel() {
KompleteKontrolInstanceModel *pKVar1;
  
  *(void ***)(this + -0x980) = &PTR__IMultiControllerInstance_101ad8628;
  *(void ***)(this + -0x960) = &PTR__IMultiControllerInstance_101ad8990;
  *(void ***)(this + -0x1c0) = &PTR_getNumberOfDeviceSections_101ad89b8;
  *(void ***)(this + -0x1b8) = &PTR__IMultiControllerInstance_101ad89d0;
  *(void ***)(this + -0x1a8) = &PTR__IMultiControllerInstance_101ad8a50;
  *(void ***)(this + -0x1a0) = &PTR__IMultiControllerInstance_101ad8a90;
  *(void ***)this = &PTR__IMultiControllerInstance_101ad8ac0;
  pKVar1 = *(KompleteKontrolInstanceModel **)(this + 0x3a0);
  if (this + 0x380 == pKVar1) {
    (**(code **)(*(long *)pKVar1 + 0x20))();
  }
  else if (pKVar1 != (KompleteKontrolInstanceModel *)0x0) {
    (**(code **)(*(long *)pKVar1 + 0x28))();
  }
  KompleteKontrolModelBase::~KompleteKontrolModelBase((KompleteKontrolModelBase *)(this + -0x980));
  delete((KompleteKontrolModelBase *)(this + -0x980));
  return;
}
}
