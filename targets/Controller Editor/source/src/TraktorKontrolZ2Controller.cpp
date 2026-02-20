#include <ni/controller_editor/TraktorKontrolZ2Controller.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void TraktorKontrolZ2Controller::createControllerPreferencePanel() const {
TraktorKontrolZ2ControllerPreferencePanel *this;
  long lVar1;
  ISingleControllerInstanceModel *pIVar2;
  long *plVar3;
  long *plVar4;
  TraktorKontrolZ2Controller *in_RSI;
  unsigned long long *in_RDI;
  
  pIVar2 = *(ISingleControllerInstanceModel **)(in_RSI + 0x20);
  plVar3 = (long *)new char[0x450];
  plVar3[1] = 0;
  plVar3[2] = 0;
  *plVar3 = (long)&PTR____shared_ptr_emplace_101af3270;
  this = (TraktorKontrolZ2ControllerPreferencePanel *)(plVar3 + 4);
  TraktorKontrolZ2ControllerPreferencePanel::TraktorKontrolZ2ControllerPreferencePanel
            (this,in_RSI,pIVar2);
  if (plVar3[0x21] == 0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x20] = (long)this;
    plVar3[0x21] = (long)plVar3;
  }
  else {
    if (*(long *)(plVar3[0x21] + 8) != -1) return;
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar3[2] = plVar3[2] + 1;
    UNLOCK();
    plVar3[0x20] = (long)this;
    plVar3[0x21] = (long)plVar3;
    // std code
  }
  plVar4 = plVar3 + 1;
  LOCK();
  lVar1 = *plVar4;
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (lVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    // std code
  }
  *in_RDI = this;
  in_RDI[1] = plVar3;
  return;
}

void TraktorKontrolZ2Controller::getName() const {
*this = (TraktorKontrolZ2Controller)0x24;
  *(unsigned long long *)(this + 1) = 0x20726f746b617254;
  *(unsigned long long *)(this + 9) = 0x206c6f72746e6f4b;
  *(void2 *)(this + 0x11) = 0x325a;
  this[0x13] = (TraktorKontrolZ2Controller)0x0;
  return this;
}

TraktorKontrolZ2Controller::~TraktorKontrolZ2Controller() {
long lVar1;
  uint local_24;
  
  *(void ***)this = &PTR__IControllerWithMCSModelsAndWidget_101ad30c0;
  lVar1 = *(long *)(this + 0x18);
  (**(code **)(*(long *)(*(long *)(this + 0x20) + 0x7c8) + 0x18))(*(long *)(this + 0x20) + 0x7c8);
  // std code
  // std code
  __tree<// std code
  ::__erase_unique<unsigned_int>
            ((__tree<// std code
              *)(lVar1 + 0xc88),&local_24);
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
       ::s_uInstancesRefCount + -1;
  // std code
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
      ::s_uInstancesRefCount == 0) {
    if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
        ::s_pMasterInstanceModel != (long *)0x0) {
      (**(code **)(*IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
                    ::s_pMasterInstanceModel + 8))();
    }
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
    ::s_pMasterInstanceModel = (long *)0x0;
  }
  *(unsigned long long *)(this + 0x20) = 0;
  *(void ***)this = &PTR__IControllerWithWidget_101ad3188;
  if (*(long *)(this + 0x10) != 0) {
    // std code
  }
  delete(this);
  return;
}
}
