#include <ni/controller_editor/ControllerManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void ControllerManager::addSupportedControllers() {
KompleteKontrolController *pKVar1;
  IController *pIVar2;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
  *pIVar3;
  unsigned long long uVar4;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
  *pIVar5;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
  *pIVar6;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
  *pIVar7;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
  *pIVar8;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
  *pIVar9;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
  *pIVar10;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
  *pIVar11;
  MaschineJamController *pMVar12;
  TraktorKontrolD2Controller *pTVar13;
  TraktorKontrolF1Controller *pTVar14;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
  *pIVar15;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
  *pIVar16;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
  *pIVar17;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
  *pIVar18;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
  *pIVar19;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
  *pIVar20;
  TraktorKontrolX1Controller *pTVar21;
  TraktorKontrolX1MK2Controller *pTVar22;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
  *pIVar23;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
  *pIVar24;
  
  pKVar1 = (KompleteKontrolController *)new char[0x28];
  KompleteKontrolController::KompleteKontrolController(pKVar1,0);
  addController(this,(IController *)pKVar1);
  pKVar1 = (KompleteKontrolController *)new char[0x28];
  KompleteKontrolController::KompleteKontrolController(pKVar1,1);
  addController(this,(IController *)pKVar1);
  pKVar1 = (KompleteKontrolController *)new char[0x28];
  KompleteKontrolController::KompleteKontrolController(pKVar1,2);
  addController(this,(IController *)pKVar1);
  pKVar1 = (KompleteKontrolController *)new char[0x28];
  KompleteKontrolController::KompleteKontrolController(pKVar1,3);
  addController(this,(IController *)pKVar1);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ab89a8;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
       *)0x0) {
    pIVar3 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
              *)new char[0xe30];
    ___bzero(pIVar3);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
    ::IMultiControllerMaster(pIVar3);
    *(void ***)pIVar3 = &PTR__ISingleController_101ab8b18;
    *(void ***)(pIVar3 + 0x20) = &PTR__ISingleController_101ab8e60;
    *(void ***)(pIVar3 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ab8e88;
    *(void ***)(pIVar3 + 0x7c8) = &PTR__ISingleController_101ab8ea0;
    *(void ***)(pIVar3 + 0x7d8) = &PTR__ISingleController_101ab8f20;
    *(void ***)(pIVar3 + 0x7e0) = &PTR__ISingleController_101ab8f60;
    *(void ***)(pIVar3 + 0x980) = &PTR__ISingleController_101ab8f90;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
    ::s_pMasterInstanceModel = pIVar3;
  }
  pIVar3 = IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::MaschineModelBase,NI::ISingleControllerInstanceModel<NI::MaschineModelBase,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>,NI::NHL2::MaschineMK1::Subscription,NI::NHL2::MaschineMK1::Controller,NI::NHL2::MaschineMK1::MapHandler>
          ::getInstanceModel(pIVar3,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineController_101ada628;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101aba680;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
       *)0x0) {
    pIVar5 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
              *)new char[0xe30];
    ___bzero(pIVar5);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
    ::IMultiControllerMaster(pIVar5);
    *(void ***)pIVar5 = &PTR__ISingleController_101aba7e0;
    *(void ***)(pIVar5 + 0x20) = &PTR__ISingleController_101abab28;
    *(void ***)(pIVar5 + 0x7c0) = &PTR_getNumberOfDeviceSections_101abab50;
    *(void ***)(pIVar5 + 0x7c8) = &PTR__ISingleController_101abab68;
    *(void ***)(pIVar5 + 0x7d8) = &PTR__ISingleController_101ababe8;
    *(void ***)(pIVar5 + 0x7e0) = &PTR__ISingleController_101abac28;
    *(void ***)(pIVar5 + 0x980) = &PTR__ISingleController_101abac58;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
    ::s_pMasterInstanceModel = pIVar5;
  }
  pIVar5 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::MaschineMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK2ModelBase,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>,NI::NHL2::MaschineMK2::Subscription,NI::NHL2::MaschineMK2::Controller,NI::NHL2::MaschineMK2::MapHandler>
          ::getInstanceModel(pIVar5,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMK2Controller_101adb5a0;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101abc290;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
       *)0x0) {
    pIVar6 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
              *)new char[0xe20];
    ___bzero(pIVar6);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
    ::IMultiControllerMaster(pIVar6);
    *(void ***)pIVar6 = &PTR__ISingleController_101abc3c0;
    *(void ***)(pIVar6 + 0x20) = &PTR__ISingleController_101abc708;
    *(void ***)(pIVar6 + 0x7c0) = &PTR_getNumberOfDeviceSections_101abc730;
    *(void ***)(pIVar6 + 0x7c8) = &PTR__ISingleController_101abc748;
    *(void ***)(pIVar6 + 0x7d8) = &PTR__ISingleController_101abc7c8;
    *(void ***)(pIVar6 + 0x7e0) = &PTR__ISingleController_101abc808;
    *(void ***)(pIVar6 + 0x980) = &PTR__ISingleController_101abc838;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
    ::s_pMasterInstanceModel = pIVar6;
  }
  pIVar6 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::MaschineMK3StandardModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3StandardModelBase,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>,NI::NHL2::MaschineMK3::Subscription,NI::NHL2::MaschineMK3::Controller,NI::NHL2::MaschineMK3::MapHandlerStandard>
          ::getInstanceModel(pIVar6,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMK3StandardController_101abc198;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101abe1f8;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
       *)0x0) {
    pIVar7 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
              *)new char[0xe30];
    ___bzero(pIVar7);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
    ::IMultiControllerMaster(pIVar7);
    *(void ***)pIVar7 = &PTR__ISingleController_101abe358;
    *(void ***)(pIVar7 + 0x20) = &PTR__ISingleController_101abe6a0;
    *(void ***)(pIVar7 + 0x7c0) = &PTR_getNumberOfDeviceSections_101abe6c8;
    *(void ***)(pIVar7 + 0x7c8) = &PTR__ISingleController_101abe6e0;
    *(void ***)(pIVar7 + 0x7d8) = &PTR__ISingleController_101abe760;
    *(void ***)(pIVar7 + 0x7e0) = &PTR__ISingleController_101abe7a0;
    *(void ***)(pIVar7 + 0x980) = &PTR__ISingleController_101abe7d0;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
    ::s_pMasterInstanceModel = pIVar7;
  }
  pIVar7 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::MaschineMikroModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroModelBase,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>,NI::NHL2::MaschineMikroMK1::Subscription,NI::NHL2::MaschineMikroMK1::Controller,NI::NHL2::MaschineMikroMK1::MapHandler>
          ::getInstanceModel(pIVar7,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMikroController_101adced8;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101abfd10;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
       *)0x0) {
    pIVar8 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
              *)new char[0xe30];
    ___bzero(pIVar8);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
    ::IMultiControllerMaster(pIVar8);
    *(void ***)pIVar8 = &PTR__ISingleController_101abfe70;
    *(void ***)(pIVar8 + 0x20) = &PTR__ISingleController_101ac01b8;
    *(void ***)(pIVar8 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac01e0;
    *(void ***)(pIVar8 + 0x7c8) = &PTR__ISingleController_101ac01f8;
    *(void ***)(pIVar8 + 0x7d8) = &PTR__ISingleController_101ac0278;
    *(void ***)(pIVar8 + 0x7e0) = &PTR__ISingleController_101ac02b8;
    *(void ***)(pIVar8 + 0x980) = &PTR__ISingleController_101ac02e8;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
    ::s_pMasterInstanceModel = pIVar8;
  }
  pIVar8 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::MaschineMikroMK2ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK2ModelBase,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>,NI::NHL2::MaschineMikroMK2::Subscription,NI::NHL2::MaschineMikroMK2::Controller,NI::NHL2::MaschineMikroMK2::MapHandler>
          ::getInstanceModel(pIVar8,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMikroMK2Controller_101addbb8;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ac1828;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
       *)0x0) {
    pIVar9 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
              *)new char[0xe20];
    ___bzero(pIVar9);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
    ::IMultiControllerMaster(pIVar9);
    *(void ***)pIVar9 = &PTR__ISingleController_101ac1988;
    *(void ***)(pIVar9 + 0x20) = &PTR__ISingleController_101ac1cd0;
    *(void ***)(pIVar9 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac1cf8;
    *(void ***)(pIVar9 + 0x7c8) = &PTR__ISingleController_101ac1d10;
    *(void ***)(pIVar9 + 0x7d8) = &PTR__ISingleController_101ac1d90;
    *(void ***)(pIVar9 + 0x7e0) = &PTR__ISingleController_101ac1dd0;
    *(void ***)(pIVar9 + 0x980) = &PTR__ISingleController_101ac1e00;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
    ::s_pMasterInstanceModel = pIVar9;
  }
  pIVar9 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
           ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::MaschineMikroMK3ModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMikroMK3ModelBase,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>,NI::NHL2::MaschineMikroMK3::Subscription,NI::NHL2::MaschineMikroMK3::Controller,NI::NHL2::MaschineMikroMK3::MapHandler>
          ::getInstanceModel(pIVar9,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMikroMK3Controller_101ade5e0;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ac3420;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
       *)0x0) {
    pIVar10 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
               *)new char[0xe20];
    ___bzero(pIVar10);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
    ::IMultiControllerMaster(pIVar10);
    *(void ***)pIVar10 = &PTR__ISingleController_101ac34b8;
    *(void ***)(pIVar10 + 0x20) = &PTR__ISingleController_101ac3800;
    *(void ***)(pIVar10 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac3828;
    *(void ***)(pIVar10 + 0x7c8) = &PTR__ISingleController_101ac3840;
    *(void ***)(pIVar10 + 0x7d8) = &PTR__ISingleController_101ac38c0;
    *(void ***)(pIVar10 + 0x7e0) = &PTR__ISingleController_101ac3900;
    *(void ***)(pIVar10 + 0x980) = &PTR__ISingleController_101ac3930;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
    ::s_pMasterInstanceModel = pIVar10;
  }
  pIVar10 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::MaschineMK3PlusModelBase,NI::ISingleControllerInstanceModel<NI::MaschineMK3PlusModelBase,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>,NI::NHL2::MaschinePlus::Subscription,NI::NHL2::MaschinePlus::Controller,NI::NHL2::MaschineMK3::MapHandlerPlus>
          ::getInstanceModel(pIVar10,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineMK3PlusController_101ac3340;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ac52a0;
  if (IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
       *)0x0) {
    pIVar11 = (IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
               *)new char[0xe30];
    ___bzero(pIVar11);
    IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
    ::IMultiControllerMaster(pIVar11);
    *(void ***)pIVar11 = &PTR__ISingleController_101ac5400;
    *(void ***)(pIVar11 + 0x20) = &PTR__ISingleController_101ac5768;
    *(void ***)(pIVar11 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac5790;
    *(void ***)(pIVar11 + 0x7c8) = &PTR__ISingleController_101ac57a8;
    *(void ***)(pIVar11 + 0x7d8) = &PTR__ISingleController_101ac5828;
    *(void ***)(pIVar11 + 0x7e0) = &PTR__ISingleController_101ac5868;
    *(void ***)(pIVar11 + 0x980) = &PTR__ISingleController_101ac5898;
    IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
    ::s_pMasterInstanceModel = pIVar11;
  }
  pIVar11 = IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::MaschineStudioModelBase,NI::ISingleControllerInstanceModel<NI::MaschineStudioModelBase,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>,NI::NHL2::MaschineStudio::Subscription,NI::NHL2::MaschineStudio::Controller,NI::NHL2::MaschineStudio::MapHandler>
          ::getInstanceModel(pIVar11,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__MaschineStudioController_101adf1c8;
  addController(this,pIVar2);
  pMVar12 = (MaschineJamController *)new char[0x28];
  MaschineJamController::MaschineJamController(pMVar12,0);
  addController(this,(IController *)pMVar12);
  pMVar12 = (MaschineJamController *)new char[0x28];
  MaschineJamController::MaschineJamController(pMVar12,1);
  addController(this,(IController *)pMVar12);
  pMVar12 = (MaschineJamController *)new char[0x28];
  MaschineJamController::MaschineJamController(pMVar12,2);
  addController(this,(IController *)pMVar12);
  pMVar12 = (MaschineJamController *)new char[0x28];
  MaschineJamController::MaschineJamController(pMVar12,3);
  addController(this,(IController *)pMVar12);
  pTVar13 = (TraktorKontrolD2Controller *)new char[0x28];
  TraktorKontrolD2Controller::TraktorKontrolD2Controller(pTVar13,0);
  addController(this,(IController *)pTVar13);
  pTVar13 = (TraktorKontrolD2Controller *)new char[0x28];
  TraktorKontrolD2Controller::TraktorKontrolD2Controller(pTVar13,1);
  addController(this,(IController *)pTVar13);
  pTVar14 = (TraktorKontrolF1Controller *)new char[0x28];
  TraktorKontrolF1Controller::TraktorKontrolF1Controller(pTVar14,0);
  addController(this,(IController *)pTVar14);
  pTVar14 = (TraktorKontrolF1Controller *)new char[0x28];
  TraktorKontrolF1Controller::TraktorKontrolF1Controller(pTVar14,1);
  addController(this,(IController *)pTVar14);
  pTVar14 = (TraktorKontrolF1Controller *)new char[0x28];
  TraktorKontrolF1Controller::TraktorKontrolF1Controller(pTVar14,2);
  addController(this,(IController *)pTVar14);
  pTVar14 = (TraktorKontrolF1Controller *)new char[0x28];
  TraktorKontrolF1Controller::TraktorKontrolF1Controller(pTVar14,3);
  addController(this,(IController *)pTVar14);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ac6e38;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
       *)0x0) {
    pIVar15 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar15);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
    ::IMultiControllerMaster(pIVar15);
    *(void ***)pIVar15 = &PTR__ISingleController_101ac6f98;
    *(void ***)(pIVar15 + 0x20) = &PTR__ISingleController_101ac72e0;
    *(void ***)(pIVar15 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac7308;
    *(void ***)(pIVar15 + 0x7c8) = &PTR__ISingleController_101ac7320;
    *(void ***)(pIVar15 + 0x7d8) = &PTR__ISingleController_101ac73a0;
    *(void ***)(pIVar15 + 0x7e0) = &PTR__ISingleController_101ac73e0;
    *(void ***)(pIVar15 + 0x980) = &PTR__ISingleController_101ac7410;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
    ::s_pMasterInstanceModel = pIVar15;
  }
  pIVar15 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::TraktorKontrolS2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2ModelBase,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>,NI::NHL2::Traktor::KontrolS2MK1::Subscription,NI::NHL2::Traktor::KontrolS2MK1::Controller,NI::NHL2::Traktor::KontrolS2MK1::MapHandler>
          ::getInstanceModel(pIVar15,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS2Controller_101ae70b8;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ac89f0;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
       *)0x0) {
    pIVar16 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar16);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
    ::IMultiControllerMaster(pIVar16);
    *(void ***)pIVar16 = &PTR__ISingleController_101ac8b50;
    *(void ***)(pIVar16 + 0x20) = &PTR__ISingleController_101ac8eb0;
    *(void ***)(pIVar16 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ac8ed8;
    *(void ***)(pIVar16 + 0x7c8) = &PTR__ISingleController_101ac8ef0;
    *(void ***)(pIVar16 + 0x7d8) = &PTR__ISingleController_101ac8f70;
    *(void ***)(pIVar16 + 0x7e0) = &PTR__ISingleController_101ac8fb0;
    *(void ***)(pIVar16 + 0x980) = &PTR__ISingleController_101ac8fe0;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
    ::s_pMasterInstanceModel = pIVar16;
  }
  pIVar16 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::TraktorKontrolS2MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS2MK2ModelBase,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>,NI::NHL2::Traktor::KontrolS2MK2::Subscription,NI::NHL2::Traktor::KontrolS2MK2::Controller,NI::NHL2::Traktor::KontrolS2MK2::MapHandler>
          ::getInstanceModel(pIVar16,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS2MK2Controller_101ae8430;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101aca5f8;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
       *)0x0) {
    pIVar17 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar17);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
    ::IMultiControllerMaster(pIVar17);
    *(void ***)pIVar17 = &PTR__ISingleController_101aca758;
    *(void ***)(pIVar17 + 0x20) = &PTR__ISingleController_101acaaa0;
    *(void ***)(pIVar17 + 0x7c0) = &PTR_getNumberOfDeviceSections_101acaac8;
    *(void ***)(pIVar17 + 0x7c8) = &PTR__ISingleController_101acaae0;
    *(void ***)(pIVar17 + 0x7d8) = &PTR__ISingleController_101acab60;
    *(void ***)(pIVar17 + 0x7e0) = &PTR__ISingleController_101acaba0;
    *(void ***)(pIVar17 + 0x980) = &PTR__ISingleController_101acabd0;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
    ::s_pMasterInstanceModel = pIVar17;
  }
  pIVar17 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::TraktorKontrolS4ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4ModelBase,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>,NI::NHL2::Traktor::KontrolS4MK1::Subscription,NI::NHL2::Traktor::KontrolS4MK1::Controller,NI::NHL2::Traktor::KontrolS4MK1::MapHandler>
          ::getInstanceModel(pIVar17,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS4Controller_101ae9868;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101acc1b0;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
       *)0x0) {
    pIVar18 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar18);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
    ::IMultiControllerMaster(pIVar18);
    *(void ***)pIVar18 = &PTR__ISingleController_101acc310;
    *(void ***)(pIVar18 + 0x20) = &PTR__ISingleController_101acc670;
    *(void ***)(pIVar18 + 0x7c0) = &PTR_getNumberOfDeviceSections_101acc698;
    *(void ***)(pIVar18 + 0x7c8) = &PTR__ISingleController_101acc6b0;
    *(void ***)(pIVar18 + 0x7d8) = &PTR__ISingleController_101acc730;
    *(void ***)(pIVar18 + 0x7e0) = &PTR__ISingleController_101acc770;
    *(void ***)(pIVar18 + 0x980) = &PTR__ISingleController_101acc7a0;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
    ::s_pMasterInstanceModel = pIVar18;
  }
  pIVar18 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::TraktorKontrolS4MK2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS4MK2ModelBase,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>,NI::NHL2::Traktor::KontrolS4MK2::Subscription,NI::NHL2::Traktor::KontrolS4MK2::Controller,NI::NHL2::Traktor::KontrolS4MK2::MapHandler>
          ::getInstanceModel(pIVar18,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS4MK2Controller_101aeace8;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101acddc8;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
       *)0x0) {
    pIVar19 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
               *)new char[0xe30];
    ___bzero(pIVar19);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
    ::IMultiControllerMaster(pIVar19);
    *(void ***)pIVar19 = &PTR__ISingleController_101acdf28;
    *(void ***)(pIVar19 + 0x20) = &PTR__ISingleController_101ace288;
    *(void ***)(pIVar19 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ace2b0;
    *(void ***)(pIVar19 + 0x7c8) = &PTR__ISingleController_101ace2c8;
    *(void ***)(pIVar19 + 0x7d8) = &PTR__ISingleController_101ace348;
    *(void ***)(pIVar19 + 0x7e0) = &PTR__ISingleController_101ace388;
    *(void ***)(pIVar19 + 0x980) = &PTR__ISingleController_101ace3b8;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
    ::s_pMasterInstanceModel = pIVar19;
  }
  pIVar19 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::TraktorKontrolS5ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS5ModelBase,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>,NI::NHL2::Traktor::KontrolS5::Subscription,NI::NHL2::Traktor::KontrolS5::Controller,NI::NHL2::Traktor::KontrolS5::MapHandler>
          ::getInstanceModel(pIVar19,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS5Controller_101aeb970;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101acf940;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
       *)0x0) {
    pIVar20 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
               *)new char[0xe30];
    ___bzero(pIVar20);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
    ::IMultiControllerMaster(pIVar20);
    *(void ***)pIVar20 = &PTR__ISingleController_101acfaa0;
    *(void ***)(pIVar20 + 0x20) = &PTR__ISingleController_101acfe00;
    *(void ***)(pIVar20 + 0x7c0) = &PTR_getNumberOfDeviceSections_101acfe28;
    *(void ***)(pIVar20 + 0x7c8) = &PTR__ISingleController_101acfe40;
    *(void ***)(pIVar20 + 0x7d8) = &PTR__ISingleController_101acfec0;
    *(void ***)(pIVar20 + 0x7e0) = &PTR__ISingleController_101acff00;
    *(void ***)(pIVar20 + 0x980) = &PTR__ISingleController_101acff30;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
    ::s_pMasterInstanceModel = pIVar20;
  }
  pIVar20 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::TraktorKontrolS8ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolS8ModelBase,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>,NI::NHL2::Traktor::KontrolS8::Subscription,NI::NHL2::Traktor::KontrolS8::Controller,NI::NHL2::Traktor::KontrolS8::MapHandler>
          ::getInstanceModel(pIVar20,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolS8Controller_101aec7c8;
  addController(this,pIVar2);
  pTVar21 = (TraktorKontrolX1Controller *)new char[0x28];
  TraktorKontrolX1Controller::TraktorKontrolX1Controller(pTVar21,0);
  addController(this,(IController *)pTVar21);
  pTVar21 = (TraktorKontrolX1Controller *)new char[0x28];
  TraktorKontrolX1Controller::TraktorKontrolX1Controller(pTVar21,1);
  addController(this,(IController *)pTVar21);
  pTVar21 = (TraktorKontrolX1Controller *)new char[0x28];
  TraktorKontrolX1Controller::TraktorKontrolX1Controller(pTVar21,2);
  addController(this,(IController *)pTVar21);
  pTVar21 = (TraktorKontrolX1Controller *)new char[0x28];
  TraktorKontrolX1Controller::TraktorKontrolX1Controller(pTVar21,3);
  addController(this,(IController *)pTVar21);
  pTVar22 = (TraktorKontrolX1MK2Controller *)new char[0x28];
  TraktorKontrolX1MK2Controller::TraktorKontrolX1MK2Controller(pTVar22,0);
  addController(this,(IController *)pTVar22);
  pTVar22 = (TraktorKontrolX1MK2Controller *)new char[0x28];
  TraktorKontrolX1MK2Controller::TraktorKontrolX1MK2Controller(pTVar22,1);
  addController(this,(IController *)pTVar22);
  pTVar22 = (TraktorKontrolX1MK2Controller *)new char[0x28];
  TraktorKontrolX1MK2Controller::TraktorKontrolX1MK2Controller(pTVar22,2);
  addController(this,(IController *)pTVar22);
  pTVar22 = (TraktorKontrolX1MK2Controller *)new char[0x28];
  TraktorKontrolX1MK2Controller::TraktorKontrolX1MK2Controller(pTVar22,3);
  addController(this,(IController *)pTVar22);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ad14b8;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
       *)0x0) {
    pIVar23 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar23);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
    ::IMultiControllerMaster(pIVar23);
    *(void ***)pIVar23 = &PTR__ISingleController_101ad1618;
    *(void ***)(pIVar23 + 0x20) = &PTR__ISingleController_101ad1978;
    *(void ***)(pIVar23 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ad19a0;
    *(void ***)(pIVar23 + 0x7c8) = &PTR__ISingleController_101ad19b8;
    *(void ***)(pIVar23 + 0x7d8) = &PTR__ISingleController_101ad1a38;
    *(void ***)(pIVar23 + 0x7e0) = &PTR__ISingleController_101ad1a78;
    *(void ***)(pIVar23 + 0x980) = &PTR__ISingleController_101ad1aa8;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
    ::s_pMasterInstanceModel = pIVar23;
  }
  pIVar23 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::TraktorKontrolZ1ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ1ModelBase,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>,NI::NHL2::Traktor::KontrolZ1::Subscription,NI::NHL2::Traktor::KontrolZ1::Controller,NI::NHL2::Traktor::KontrolZ1::MapHandler>
          ::getInstanceModel(pIVar23,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolZ1Controller_101af23b0;
  addController(this,pIVar2);
  pIVar2 = (IController *)new char[0x28];
  *(unsigned long long *)(pIVar2 + 8) = 0;
  *(unsigned long long *)(pIVar2 + 0x10) = 0;
  *(void ***)pIVar2 = &PTR__IControllerWithMCSModelsAndWidget_101ad30c0;
  if (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
      ::s_pMasterInstanceModel ==
      (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
       *)0x0) {
    pIVar24 = (IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
               *)new char[0xe10];
    ___bzero(pIVar24);
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
    ::IMultiControllerMaster(pIVar24);
    *(void ***)pIVar24 = &PTR__ISingleController_101ad3220;
    *(void ***)(pIVar24 + 0x20) = &PTR__ISingleController_101ad3568;
    *(void ***)(pIVar24 + 0x7c0) = &PTR_getNumberOfDeviceSections_101ad3590;
    *(void ***)(pIVar24 + 0x7c8) = &PTR__ISingleController_101ad35a8;
    *(void ***)(pIVar24 + 0x7d8) = &PTR__ISingleController_101ad3628;
    *(void ***)(pIVar24 + 0x7e0) = &PTR__ISingleController_101ad3668;
    *(void ***)(pIVar24 + 0x980) = &PTR__ISingleController_101ad3698;
    IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
    ::s_pMasterInstanceModel = pIVar24;
  }
  pIVar24 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
            ::s_pMasterInstanceModel;
  IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
  ::s_uInstancesRefCount =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
       ::s_uInstancesRefCount + 1;
  *(IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
    **)(pIVar2 + 0x18) =
       IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
       ::s_pMasterInstanceModel;
  uVar4 = IMultiControllerMaster<NI::ISingleController<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::TraktorKontrolZ2ModelBase,NI::ISingleControllerInstanceModel<NI::TraktorKontrolZ2ModelBase,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>,NI::NHL2::Traktor::KontrolZ2::Subscription,NI::NHL2::Traktor::KontrolZ2::Controller,NI::NHL2::Traktor::KontrolZ2::MapHandler>
          ::getInstanceModel(pIVar24,0);
  *(unsigned long long *)(pIVar2 + 0x20) = uVar4;
  *(void ***)pIVar2 = &PTR__TraktorKontrolZ2Controller_101af31c0;
  addController(this,pIVar2);
  return;
}

ControllerManager::ControllerManager() {
unsigned long long uVar1;
  void7 uVar2;
  unsigned int uVar3;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned int local_48;
  unsigned int local_44;
  
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0x3cb0b1bb;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x80) = 0x32aaaba7;
  *(unsigned long long *)(this + 0xf0) = 0;
  *(unsigned int *)(this + 0x10c) = 0;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(unsigned long long *)(this + 0x98) = 0;
  *(unsigned long long *)(this + 0xa0) = 0;
  *(unsigned long long *)(this + 0xa8) = 0;
  *(unsigned long long *)(this + 0xb0) = 0;
  *(unsigned long long *)(this + 0xb8) = 0;
  *(unsigned long long *)(this + 0xc0) = 0;
  *(unsigned long long *)(this + 0x100) = 0;
  *(unsigned int *)(this + 0x107) = 0;
  *(void ***)this = &PTR__ControllerManager_101ab7750;
  *(unsigned long long *)(this + 0x110) = 0;
  *(unsigned long long *)(this + 0x118) = 0;
  *(unsigned long long *)(this + 0x120) = 0;
  *(unsigned long long *)(this + 0x130) = 0;
  *(unsigned long long *)(this + 0x138) = 0;
  *(ControllerManager **)(this + 0x128) = this + 0x130;
  *(unsigned long long *)(this + 0x140) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x148) = 0;
  *(unsigned long long *)(this + 0x150) = 0;
  *(unsigned long long *)(this + 0x158) = 0;
  *(unsigned long long *)(this + 0x160) = 0;
  *(unsigned long long *)(this + 0x168) = 0;
  *(unsigned long long *)(this + 0x170) = 0;
  *(unsigned long long *)(this + 0x178) = 0;
  *(ControllerManager **)(this + 0x180) = this + 0x1a0;
  *(unsigned long long *)(this + 0x188) = 0;
  *(unsigned long long *)(this + 400) = 1;
  *(unsigned long long *)(this + 0x1d0) = 0;
  *(void ***)(this + 0x1d8) = &PTR_operator___101ad50d8;
  *(unsigned long long *)(this + 0x1e0) = 0;
  *(unsigned long long *)(this + 0x1e8) = 0;
  *(unsigned long long *)(this + 0x1f0) = 0;
  *(unsigned long long *)(this + 0x200) = 0;
  *(unsigned long long *)(this + 0x208) = 0;
  *(unsigned int *)(this + 0x210) = 0;
  *(unsigned int *)(this + 0x214) = 0xffffffff;
  this[0x218] = (ControllerManager)0x0;
  local_44 = 2;
  local_58 = 0x1000000004;
  uStack_50 = 0x353675600000008;
  uVar1 = NHL2::MessageSendPort::sendMessageToConnectionPort((Message *)&local_58,"NIHWMainHandler")
  ;
  uVar3 = 0;
  if ((char)uVar1 != '\0') {
    uVar3 = local_48;
  }
  *(unsigned int *)(this + 0x210) = uVar3;
  uVar2 = (void7)((unsigned long)uVar1 >> 8);
  if (((byte)this[0x108] & 1) == 0) {
    LOCK();
    this[0x10a] = (ControllerManager)0x0;
    UNLOCK();
    LOCK();
    this[0x108] = (ControllerManager)0x1;
    uVar2 = 0;
    UNLOCK();
  }
  
}

void ControllerManager::createControllerFamilyTree() {
ControllerManager *pCVar1;
  int iVar2;
  ControllerManager *pCVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  long *plVar7;
  unsigned long uVar8;
  __tree_node_base *p_Var9;
  __tree_node_base *p_Var10;
  unsigned long uVar11;
  ControllerManager *pCVar12;
  __tree_node_base *p_Var13;
  IController **ppIVar14;
  __tree_node_base *p_Var15;
  __tree<// std code
  *this_00;
  ControllerManager *pCVar16;
  unsigned int uVar17;
  unsigned long local_78;
  unsigned long uStack_70;
  void *local_68;
  IController **local_58;
  ControllerManager *local_50;
  uint local_48;
  unsigned int uStack_44;
  unsigned char uStack_40;
  unsigned char uStack_3f;
  void6 uStack_3e;
  void *local_38;
  
  this_00 = (__tree<// std code
             *)(this + 0x128);
  pCVar1 = this + 0x130;
  // std code
  __tree<// std code
  ::destroy(this_00,*(__tree_node **)(this + 0x130));
  *(ControllerManager **)(this + 0x128) = pCVar1;
  *(unsigned long long *)(this + 0x130) = 0;
  *(unsigned long long *)(this + 0x138) = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = (void *)0x0;
  ppIVar14 = *(IController ***)(this + 0x110);
  pCVar16 = this;
  if (ppIVar14 != *(IController ***)(this + 0x118)) {
    do {
      local_50 = pCVar16;
      local_58 = ppIVar14;
      plVar7 = (long *)(**(code **)(*(long *)*ppIVar14 + 0x10))();
      iVar2 = *(int *)((long)plVar7 + 0x7ec);
      cVar6 = (**(code **)(*plVar7 + 0x1b0))();
      if (cVar6 != '\0') {
        (**(code **)(*(long *)*local_58 + 0x18))(&local_48);
        if ((local_78 & 1) != 0) {
          delete(local_68);
        }
        uVar5 = local_48;
        local_68 = local_38;
        uVar11 = CONCAT44(uStack_44,local_48);
        uStack_70 = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
        local_48 = 0x73614d10;
        uStack_44 = 0x6e696863;
        uStack_40 = 0x65;
        uStack_3f = 0;
        local_78._0_1_ = SUB41(uVar5,0);
        local_78 = uVar11;
        if ((uVar5 & 1) == 0) {
          bVar4 = (byte)local_78._0_1_ >> 1;
          if (7 < bVar4) return;
          local_48 = 0x6172540e;
          uStack_44 = 0x726f746b;
          uStack_40 = 0;
          if ((local_78 & 1) == 0) {
            if (6 < (byte)local_78._0_1_ >> 1) return;
          }
          else if (6 < uStack_70) {
            uVar8 = GP::StringUtil::countMatchingCharacters
                              ((string *)&local_78,(string *)&local_48,0,true);
            uVar11 = (unsigned long)((byte)local_48._0_1_ >> 1);
            if ((local_48 & 1) != 0) {
              uVar11 = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
              delete(local_38);
            }
            if (uVar8 == uVar11) {
              pCVar3 = *(ControllerManager **)pCVar1;
              pCVar16 = pCVar1;
              pCVar12 = pCVar1;
              while (pCVar3 != (ControllerManager *)0x0) {
                while (pCVar12 = pCVar3, 2 < *(int *)(pCVar12 + 0x20)) {
                  pCVar3 = *(ControllerManager **)pCVar12;
                  pCVar16 = pCVar12;
                  if (*(ControllerManager **)pCVar12 == (ControllerManager *)0x0) {
                    p_Var9 = *(__tree_node_base **)pCVar12;
                    goto joined_r0x00010004634a;
                  }
                }
                if (*(int *)(pCVar12 + 0x20) == 2) break;
                pCVar16 = pCVar12 + 8;
                pCVar3 = *(ControllerManager **)(pCVar12 + 8);
              }
              p_Var9 = *(__tree_node_base **)pCVar16;
joined_r0x00010004634a:
              if (p_Var9 == (__tree_node_base *)0x0) {
                p_Var9 = (__tree_node_base *)new char[0x40];
                pCVar3 = local_50;
                *(unsigned int *)(p_Var9 + 0x20) = 2;
                *(unsigned long long *)(p_Var9 + 0x30) = 0;
                *(unsigned long long *)(p_Var9 + 0x38) = 0;
                *(__tree_node_base **)(p_Var9 + 0x28) = p_Var9 + 0x30;
                *(unsigned long long *)p_Var9 = 0;
                *(unsigned long long *)(p_Var9 + 8) = 0;
                *(ControllerManager **)(p_Var9 + 0x10) = pCVar12;
                *(__tree_node_base **)pCVar16 = p_Var9;
                p_Var10 = p_Var9;
                if (**(long **)this_00 != 0) {
                  *(long *)this_00 = **(long **)this_00;
                  p_Var10 = *(__tree_node_base **)pCVar16;
                }
                // std code
                          (*(__tree_node_base **)(local_50 + 0x130),p_Var10);
                *(long *)(pCVar3 + 0x138) = *(long *)(pCVar3 + 0x138) + 1;
                p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
              }
              else {
                p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
              }
              if (p_Var10 == (__tree_node_base *)0x0) {
                p_Var15 = p_Var9 + 0x30;
                p_Var10 = *(__tree_node_base **)p_Var15;
                p_Var13 = p_Var15;
              }
              else {
                p_Var13 = p_Var9 + 0x30;
                do {
                  while (p_Var15 = p_Var10, iVar2 < *(int *)(p_Var15 + 0x20)) {
                    p_Var13 = p_Var15;
                    p_Var10 = *(__tree_node_base **)p_Var15;
                    if (*(__tree_node_base **)p_Var15 == (__tree_node_base *)0x0)
                    return;
                  }
                  if (iVar2 <= *(int *)(p_Var15 + 0x20)) break;
                  p_Var13 = p_Var15 + 8;
                  p_Var10 = *(__tree_node_base **)(p_Var15 + 8);
                } while (*(__tree_node_base **)(p_Var15 + 8) != (__tree_node_base *)0x0);
                p_Var10 = *(__tree_node_base **)p_Var13;
              }
              if (p_Var10 == (__tree_node_base *)0x0) {
                p_Var10 = (__tree_node_base *)new char[0x40];
                *(int *)(p_Var10 + 0x20) = iVar2;
                *(unsigned long long *)(p_Var10 + 0x30) = 0;
                *(unsigned long long *)(p_Var10 + 0x38) = 0;
                *(__tree_node_base **)(p_Var10 + 0x28) = p_Var10 + 0x30;
                *(unsigned long long *)p_Var10 = 0;
                *(unsigned long long *)(p_Var10 + 8) = 0;
                *(__tree_node_base **)(p_Var10 + 0x10) = p_Var15;
                *(__tree_node_base **)p_Var13 = p_Var10;
                p_Var15 = p_Var10;
                if (**(long **)(p_Var9 + 0x28) != 0) {
                  *(long *)(p_Var9 + 0x28) = **(long **)(p_Var9 + 0x28);
                  p_Var15 = *(__tree_node_base **)p_Var13;
                }
                // std code
                          (*(__tree_node_base **)(p_Var9 + 0x30),p_Var15);
                *(long *)(p_Var9 + 0x38) = *(long *)(p_Var9 + 0x38) + 1;
              }
              uVar17 = 2;
              // std code
              __tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
              ::__emplace_unique_key_args<NI::IController*,NI::IController*const&>
                        ((__tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
                          *)(p_Var10 + 0x28),local_58,local_58);
              return;
            }
          }
          pCVar3 = *(ControllerManager **)pCVar1;
          pCVar16 = pCVar1;
          pCVar12 = pCVar1;
          while (pCVar3 != (ControllerManager *)0x0) {
            while (pCVar12 = pCVar3, 0 < *(int *)(pCVar12 + 0x20)) {
              pCVar3 = *(ControllerManager **)pCVar12;
              pCVar16 = pCVar12;
              if (*(ControllerManager **)pCVar12 == (ControllerManager *)0x0) {
                p_Var9 = *(__tree_node_base **)pCVar12;
                goto joined_r0x000100046154;
              }
            }
            if (-1 < *(int *)(pCVar12 + 0x20)) break;
            pCVar16 = pCVar12 + 8;
            pCVar3 = *(ControllerManager **)(pCVar12 + 8);
          }
          p_Var9 = *(__tree_node_base **)pCVar16;
joined_r0x000100046154:
          if (p_Var9 == (__tree_node_base *)0x0) {
            p_Var9 = (__tree_node_base *)new char[0x40];
            pCVar3 = local_50;
            *(unsigned int *)(p_Var9 + 0x20) = 0;
            *(unsigned long long *)(p_Var9 + 0x30) = 0;
            *(unsigned long long *)(p_Var9 + 0x38) = 0;
            *(__tree_node_base **)(p_Var9 + 0x28) = p_Var9 + 0x30;
            *(unsigned long long *)p_Var9 = 0;
            *(unsigned long long *)(p_Var9 + 8) = 0;
            *(ControllerManager **)(p_Var9 + 0x10) = pCVar12;
            *(__tree_node_base **)pCVar16 = p_Var9;
            p_Var10 = p_Var9;
            if (**(long **)this_00 != 0) {
              *(long *)this_00 = **(long **)this_00;
              p_Var10 = *(__tree_node_base **)pCVar16;
            }
            // std code
                      (*(__tree_node_base **)(local_50 + 0x130),p_Var10);
            *(long *)(pCVar3 + 0x138) = *(long *)(pCVar3 + 0x138) + 1;
            p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
          }
          else {
            p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
          }
          if (p_Var10 == (__tree_node_base *)0x0) {
            p_Var15 = p_Var9 + 0x30;
            p_Var10 = *(__tree_node_base **)p_Var15;
            p_Var13 = p_Var15;
          }
          else {
            p_Var13 = p_Var9 + 0x30;
            do {
              while (p_Var15 = p_Var10, iVar2 < *(int *)(p_Var15 + 0x20)) {
                p_Var13 = p_Var15;
                p_Var10 = *(__tree_node_base **)p_Var15;
                if (*(__tree_node_base **)p_Var15 == (__tree_node_base *)0x0) return;
              }
              if (iVar2 <= *(int *)(p_Var15 + 0x20)) break;
              p_Var13 = p_Var15 + 8;
              p_Var10 = *(__tree_node_base **)(p_Var15 + 8);
            } while (*(__tree_node_base **)(p_Var15 + 8) != (__tree_node_base *)0x0);
            p_Var10 = *(__tree_node_base **)p_Var13;
          }
          if (p_Var10 == (__tree_node_base *)0x0) {
            p_Var10 = (__tree_node_base *)new char[0x40];
            *(int *)(p_Var10 + 0x20) = iVar2;
            *(unsigned long long *)(p_Var10 + 0x30) = 0;
            *(unsigned long long *)(p_Var10 + 0x38) = 0;
            *(__tree_node_base **)(p_Var10 + 0x28) = p_Var10 + 0x30;
            *(unsigned long long *)p_Var10 = 0;
            *(unsigned long long *)(p_Var10 + 8) = 0;
            *(__tree_node_base **)(p_Var10 + 0x10) = p_Var15;
            *(__tree_node_base **)p_Var13 = p_Var10;
            p_Var15 = p_Var10;
            if (**(long **)(p_Var9 + 0x28) != 0) {
              *(long *)(p_Var9 + 0x28) = **(long **)(p_Var9 + 0x28);
              p_Var15 = *(__tree_node_base **)p_Var13;
            }
            // std code
                      (*(__tree_node_base **)(p_Var9 + 0x30),p_Var15);
            *(long *)(p_Var9 + 0x38) = *(long *)(p_Var9 + 0x38) + 1;
          }
          uVar17 = 0;
          // std code
          __tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
          ::__emplace_unique_key_args<NI::IController*,NI::IController*const&>
                    ((__tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
                      *)(p_Var10 + 0x28),local_58,local_58);
        }
        else {
          if (uStack_70 < 8) return;
          uVar8 = GP::StringUtil::countMatchingCharacters
                            ((string *)&local_78,(string *)&local_48,0,true);
          uVar11 = (unsigned long)((byte)local_48._0_1_ >> 1);
          if ((local_48 & 1) != 0) {
            uVar11 = CONCAT62(uStack_3e,CONCAT11(uStack_3f,uStack_40));
            delete(local_38);
          }
          if (uVar8 != uVar11) return;
          pCVar3 = *(ControllerManager **)pCVar1;
          pCVar16 = pCVar1;
          pCVar12 = pCVar1;
          while (pCVar3 != (ControllerManager *)0x0) {
            while (pCVar12 = pCVar3, 1 < *(int *)(pCVar12 + 0x20)) {
              pCVar3 = *(ControllerManager **)pCVar12;
              pCVar16 = pCVar12;
              if (*(ControllerManager **)pCVar12 == (ControllerManager *)0x0) {
                p_Var9 = *(__tree_node_base **)pCVar12;
                goto joined_r0x0001000462f1;
              }
            }
            if (*(int *)(pCVar12 + 0x20) == 1) break;
            pCVar16 = pCVar12 + 8;
            pCVar3 = *(ControllerManager **)(pCVar12 + 8);
          }
          p_Var9 = *(__tree_node_base **)pCVar16;
joined_r0x0001000462f1:
          if (p_Var9 == (__tree_node_base *)0x0) {
            p_Var9 = (__tree_node_base *)new char[0x40];
            pCVar3 = local_50;
            *(unsigned int *)(p_Var9 + 0x20) = 1;
            *(unsigned long long *)(p_Var9 + 0x30) = 0;
            *(unsigned long long *)(p_Var9 + 0x38) = 0;
            *(__tree_node_base **)(p_Var9 + 0x28) = p_Var9 + 0x30;
            *(unsigned long long *)p_Var9 = 0;
            *(unsigned long long *)(p_Var9 + 8) = 0;
            *(ControllerManager **)(p_Var9 + 0x10) = pCVar12;
            *(__tree_node_base **)pCVar16 = p_Var9;
            p_Var10 = p_Var9;
            if (**(long **)this_00 != 0) {
              *(long *)this_00 = **(long **)this_00;
              p_Var10 = *(__tree_node_base **)pCVar16;
            }
            // std code
                      (*(__tree_node_base **)(local_50 + 0x130),p_Var10);
            *(long *)(pCVar3 + 0x138) = *(long *)(pCVar3 + 0x138) + 1;
            p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
          }
          else {
            p_Var10 = *(__tree_node_base **)(p_Var9 + 0x30);
          }
          if (p_Var10 == (__tree_node_base *)0x0) {
            p_Var15 = p_Var9 + 0x30;
            p_Var10 = *(__tree_node_base **)p_Var15;
            p_Var13 = p_Var15;
          }
          else {
            p_Var13 = p_Var9 + 0x30;
            do {
              while (p_Var15 = p_Var10, iVar2 < *(int *)(p_Var15 + 0x20)) {
                p_Var13 = p_Var15;
                p_Var10 = *(__tree_node_base **)p_Var15;
                if (*(__tree_node_base **)p_Var15 == (__tree_node_base *)0x0) return;
              }
              if (iVar2 <= *(int *)(p_Var15 + 0x20)) break;
              p_Var13 = p_Var15 + 8;
              p_Var10 = *(__tree_node_base **)(p_Var15 + 8);
            } while (*(__tree_node_base **)(p_Var15 + 8) != (__tree_node_base *)0x0);
            p_Var10 = *(__tree_node_base **)p_Var13;
          }
          if (p_Var10 == (__tree_node_base *)0x0) {
            p_Var10 = (__tree_node_base *)new char[0x40];
            *(int *)(p_Var10 + 0x20) = iVar2;
            *(unsigned long long *)(p_Var10 + 0x30) = 0;
            *(unsigned long long *)(p_Var10 + 0x38) = 0;
            *(__tree_node_base **)(p_Var10 + 0x28) = p_Var10 + 0x30;
            *(unsigned long long *)p_Var10 = 0;
            *(unsigned long long *)(p_Var10 + 8) = 0;
            *(__tree_node_base **)(p_Var10 + 0x10) = p_Var15;
            *(__tree_node_base **)p_Var13 = p_Var10;
            p_Var15 = p_Var10;
            if (**(long **)(p_Var9 + 0x28) != 0) {
              *(long *)(p_Var9 + 0x28) = **(long **)(p_Var9 + 0x28);
              p_Var15 = *(__tree_node_base **)p_Var13;
            }
            // std code
                      (*(__tree_node_base **)(p_Var9 + 0x30),p_Var15);
            *(long *)(p_Var9 + 0x38) = *(long *)(p_Var9 + 0x38) + 1;
          }
          uVar17 = 1;
          // std code
          __tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
          ::__emplace_unique_key_args<NI::IController*,NI::IController*const&>
                    ((__tree<NI::IController*,NI::NHL2::ProductDB::SortByInstanceIdOrName<NI::IController,NI::Model>,// std code
                      *)(p_Var10 + 0x28),local_58,local_58);
        }
        *(unsigned int *)(plVar7 + 0xfd) = uVar17;
      }
      ppIVar14 = local_58 + 1;
      pCVar16 = local_50;
    } while (ppIVar14 != *(IController ***)(local_50 + 0x118));
    if (*(IController ***)(local_50 + 0x110) != ppIVar14) {
      // std code
      __sort<NI::NHL2::ProductDB::SortByFamilyAndTypeAndInstanceId<NI::IController,NI::Model>&,NI::IController**>
                (*(IController ***)(local_50 + 0x110),ppIVar14,
                 (SortByFamilyAndTypeAndInstanceId *)&local_48);
    }
  }
  removeLegacyFactoryContentHistoryFolder();
  if ((local_78 & 1) != 0) {
    delete(local_68);
  }
  return;
}

void ControllerManager::deinitControllers() {
long *plVar1;
  unsigned int uVar2;
  long *plVar3;
  long *plVar4;
  
  this[0x218] = (ControllerManager)0x0;
  plVar1 = *(long **)(this + 0x118);
  for (plVar4 = *(long **)(this + 0x110); plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if ((long *)*plVar4 != (long *)0x0) {
      plVar3 = (long *)(**(code **)(*(long *)*plVar4 + 0x10))();
      (**(code **)(*plVar3 + 0x208))(plVar3);
    }
  }
  *(unsigned int *)(this + 0x214) = 0xffffffff;
  if (*(long *)(this + 0x208) == 0) return;
  plVar4 = *(long **)(this + 0x110);
  plVar1 = *(long **)(this + 0x118);
  plVar3 = plVar4;
  if (plVar4 == plVar1) {
    if (plVar3 == plVar1) return;
    uVar2 = (unsigned int)((unsigned long)((long)plVar3 - (long)plVar4) >> 3);
  }
  else {
    do {
      if (*plVar3 == *(long *)(this + 0x208)) return;
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    uVar2 = 0xffffffff;
  }
  *(unsigned int *)(this + 0x214) = uVar2;
  *(unsigned long long *)(this + 0x208) = 0;
  *(unsigned int *)(this + 0x210) = 0;
  return;
}

void ControllerManager::getControllerAtIndex(int param_1) {
}

void ControllerManager::getNCCMapVersion() {
return 3;
}

void ControllerManager::getSelectedControllerModel() const {
unsigned long long uVar1;
  
  if (*(long **)(this + 0x208) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100043ab4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(this + 0x208) + 0x10))();
    return uVar1;
  }
  return 0;
}

void ControllerManager::isControllerAvailable() const {
unsigned long long *puVar1;
  char cVar2;
  long *plVar3;
  unsigned long long *puVar4;
  
  puVar4 = *(unsigned long long **)(this + 0x110);
  puVar1 = *(unsigned long long **)(this + 0x118);
  while( true ) {
    if (puVar4 == puVar1) {
      return 0;
    }
    plVar3 = (long *)(**(code **)(*(long *)*puVar4 + 0x10))();
    if ((plVar3 != (long *)0x0) && (cVar2 = (**(code **)(*plVar3 + 400))(plVar3), cVar2 != '\0'))
    break;
    puVar4 = puVar4 + 1;
  }
  return 1;
}

void ControllerManager::isDeviceAvailableForFamily(unsigned long) const {
ControllerManager *pCVar1;
  char cVar2;
  ControllerManager *pCVar3;
  long *plVar4;
  ControllerManager *pCVar5;
  ControllerManager *pCVar6;
  int iVar7;
  ControllerManager *pCVar8;
  
  iVar7 = (int)param_1;
  pCVar3 = *(ControllerManager **)(this + 0x130);
  if (pCVar3 != (ControllerManager *)0x0) {
    pCVar8 = this + 0x130;
    do {
      if (iVar7 <= *(int *)(pCVar3 + 0x20)) {
        pCVar8 = pCVar3;
      }
      pCVar3 = *(ControllerManager **)(pCVar3 + (unsigned long)(*(int *)(pCVar3 + 0x20) < iVar7) * 8);
    } while (pCVar3 != (ControllerManager *)0x0);
    if ((pCVar8 != this + 0x130) && (*(int *)(pCVar8 + 0x20) <= iVar7)) {
      pCVar3 = *(ControllerManager **)(pCVar8 + 0x28);
      if (*(ControllerManager **)(pCVar8 + 0x28) != pCVar8 + 0x30) {
        do {
          pCVar5 = *(ControllerManager **)(pCVar3 + 0x28);
          while (pCVar6 = pCVar5, pCVar6 != pCVar3 + 0x30) {
            plVar4 = (long *)(**(code **)(**(long **)(pCVar6 + 0x20) + 0x10))();
            cVar2 = (**(code **)(*plVar4 + 400))(plVar4);
            if (cVar2 != '\0') {
              return 1;
            }
            pCVar1 = *(ControllerManager **)(pCVar6 + 8);
            if (*(ControllerManager **)(pCVar6 + 8) == (ControllerManager *)0x0) {
              pCVar5 = *(ControllerManager **)(pCVar6 + 0x10);
              if (*(ControllerManager **)*(ControllerManager **)(pCVar6 + 0x10) != pCVar6) {
                do {
                  pCVar6 = *(ControllerManager **)(pCVar6 + 0x10);
                  pCVar5 = *(ControllerManager **)(pCVar6 + 0x10);
                } while (*(ControllerManager **)*(ControllerManager **)(pCVar6 + 0x10) != pCVar6);
              }
            }
            else {
              do {
                pCVar5 = pCVar1;
                pCVar1 = *(ControllerManager **)pCVar5;
              } while (pCVar1 != (ControllerManager *)0x0);
            }
          }
          pCVar5 = *(ControllerManager **)(pCVar3 + 8);
          if (*(ControllerManager **)(pCVar3 + 8) == (ControllerManager *)0x0) {
            pCVar6 = *(ControllerManager **)(pCVar3 + 0x10);
            if (*(ControllerManager **)pCVar6 != pCVar3) {
              do {
                pCVar3 = *(ControllerManager **)(pCVar3 + 0x10);
                pCVar6 = *(ControllerManager **)(pCVar3 + 0x10);
              } while (*(ControllerManager **)pCVar6 != pCVar3);
            }
          }
          else {
            do {
              pCVar6 = pCVar5;
              pCVar5 = *(ControllerManager **)pCVar6;
            } while (*(ControllerManager **)pCVar6 != (ControllerManager *)0x0);
          }
          pCVar3 = pCVar6;
        } while (pCVar6 != pCVar8 + 0x30);
        return 0;
      }
    }
  }
  return 0;
}

void ControllerManager::isDeviceAvailableForFamilyAtIndex(unsigned long, unsigned long) const {
long lVar1;
  ControllerManager *pCVar2;
  bool bVar3;
  char cVar4;
  ControllerManager *pCVar5;
  ControllerManager *pCVar6;
  long *plVar7;
  ControllerManager *pCVar8;
  int iVar9;
  
  pCVar5 = *(ControllerManager **)(this + 0x130);
  if (pCVar5 != (ControllerManager *)0x0) {
    pCVar6 = this + 0x130;
    do {
      iVar9 = (int)param_1;
      if (iVar9 <= *(int *)(pCVar5 + 0x20)) {
        pCVar6 = pCVar5;
      }
      pCVar5 = *(ControllerManager **)(pCVar5 + (unsigned long)(*(int *)(pCVar5 + 0x20) < iVar9) * 8);
    } while (pCVar5 != (ControllerManager *)0x0);
    if ((((pCVar6 != this + 0x130) && (*(int *)(pCVar6 + 0x20) <= iVar9)) &&
        (pCVar5 = *(ControllerManager **)(pCVar6 + 0x28), pCVar5 != pCVar6 + 0x30)) &&
       (param_2 < *(unsigned long *)(pCVar6 + 0x38))) {
      if ((long)param_2 < 0) {
        do {
          pCVar6 = *(ControllerManager **)pCVar5;
          if (*(ControllerManager **)pCVar5 == (ControllerManager *)0x0) {
            pCVar6 = pCVar5 + 0x10;
            if ((ControllerManager *)**(unsigned long long **)(pCVar5 + 0x10) == pCVar5) {
              do {
                lVar1 = *(long *)pCVar6;
                pCVar6 = (ControllerManager *)(lVar1 + 0x10);
              } while (**(long **)(lVar1 + 0x10) == lVar1);
            }
            pCVar5 = *(ControllerManager **)pCVar6;
          }
          else {
            do {
              pCVar5 = pCVar6;
              pCVar6 = *(ControllerManager **)(pCVar5 + 8);
            } while (*(ControllerManager **)(pCVar5 + 8) != (ControllerManager *)0x0);
          }
          param_2 = param_2 + 1;
        } while (param_2 != 0);
      }
      else if (param_2 != 0) {
        do {
          pCVar6 = *(ControllerManager **)(pCVar5 + 8);
          if (*(ControllerManager **)(pCVar5 + 8) == (ControllerManager *)0x0) {
            pCVar8 = *(ControllerManager **)(pCVar5 + 0x10);
            if (*(ControllerManager **)*(ControllerManager **)(pCVar5 + 0x10) != pCVar5) {
              do {
                pCVar5 = *(ControllerManager **)(pCVar5 + 0x10);
                pCVar8 = *(ControllerManager **)(pCVar5 + 0x10);
              } while (*(ControllerManager **)*(ControllerManager **)(pCVar5 + 0x10) != pCVar5);
            }
          }
          else {
            do {
              pCVar8 = pCVar6;
              pCVar6 = *(ControllerManager **)pCVar8;
            } while (pCVar6 != (ControllerManager *)0x0);
          }
          pCVar5 = pCVar8;
          bVar3 = 1 < (long)param_2;
          param_2 = param_2 - 1;
        } while (bVar3);
      }
      pCVar6 = *(ControllerManager **)(pCVar5 + 0x28);
      while (pCVar8 = pCVar6, pCVar8 != pCVar5 + 0x30) {
        plVar7 = (long *)(**(code **)(**(long **)(pCVar8 + 0x20) + 0x10))();
        cVar4 = (**(code **)(*plVar7 + 400))(plVar7);
        if (cVar4 != '\0') {
          return 1;
        }
        pCVar2 = *(ControllerManager **)(pCVar8 + 8);
        if (*(ControllerManager **)(pCVar8 + 8) == (ControllerManager *)0x0) {
          pCVar6 = *(ControllerManager **)(pCVar8 + 0x10);
          if (*(ControllerManager **)*(ControllerManager **)(pCVar8 + 0x10) != pCVar8) {
            do {
              pCVar8 = *(ControllerManager **)(pCVar8 + 0x10);
              pCVar6 = *(ControllerManager **)(pCVar8 + 0x10);
            } while (*(ControllerManager **)*(ControllerManager **)(pCVar8 + 0x10) != pCVar8);
          }
        }
        else {
          do {
            pCVar6 = pCVar2;
            pCVar2 = *(ControllerManager **)pCVar6;
          } while (pCVar2 != (ControllerManager *)0x0);
        }
      }
    }
  }
  return 0;
}

void ControllerManager::releaseInstance() {
long *plVar1;
  
  plVar1 = s_pInstance;
  s_pInstance = (long *)0x0;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100042f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

void ControllerManager::showConnectionErrors() const {
unsigned long long *puVar1;
  long *plVar2;
  unsigned long uVar3;
  byte bVar4;
  byte bVar5;
  unsigned char *puVar6;
  unsigned long long *puVar7;
  byte local_160 [16];
  void *local_150;
  byte local_148 [8];
  long local_140;
  void *local_138;
  FormatApply<char> local_130;
  unsigned char local_12f [15];
  unsigned char *local_120;
  byte local_118 [8];
  unsigned long uStack_110;
  byte *local_108;
  byte *local_100;
  unsigned long local_f8;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  uStack_110 = 0;
  local_108 = (byte *)0x0;
  puVar7 = *(unsigned long long **)(this + 0x110);
  puVar1 = *(unsigned long long **)(this + 0x118);
  if (puVar7 == puVar1) {
    bVar4 = 0;
  }
  else {
    do {
      plVar2 = (long *)(**(code **)(*(long *)*puVar7 + 0x10))();
      (**(code **)(*plVar2 + 0x158))(plVar2);
      NHL2::Controller::getLastConnectionErrorAsUserMessage();
      bVar4 = local_148[0] & 1;
      if ((local_148[0] & 1) == 0) {
        if (local_148[0] >> 1 != 0) return;
      }
      else if (local_140 != 0) {
        (**(code **)(*(long *)*puVar7 + 0x18))(local_160);
        // boost code
                  ((basic_format<char,// std code
                   "%1%: %2%\n");
        GP::DETAIL::FormatApply<char>::apply<// std code
                  (&local_130,
                   (basic_format<char,// std code
                   local_160,local_148);
        // boost code
                  ((basic_format<char,// std code
        puVar6 = local_120;
        if (((byte)local_130 & 1) == 0) {
          puVar6 = local_12f;
        }
        // std code
        if (((byte)local_130 & 1) != 0) {
          delete(local_120);
        }
        if ((local_160[0] & 1) != 0) {
          delete(local_150);
        }
        bVar4 = local_148[0] & 1;
      }
      if (bVar4 != 0) {
        delete(local_138);
      }
      puVar7 = puVar7 + 1;
    } while (puVar1 != puVar7);
    bVar4 = local_118[0];
  }
  bVar5 = bVar4 & 1;
  uVar3 = (unsigned long)(bVar4 >> 1);
  if (bVar5 != 0) {
    uVar3 = uStack_110;
  }
  if (uVar3 != 0) {
    local_100 = local_108;
    if (bVar5 == 0) {
      local_100 = local_118 + 1;
    }
    local_f8 = uVar3;
    GP::Message::show(&local_100,0,7,0,0);
    bVar5 = local_118[0] & 1;
  }
  if (bVar5 != 0) {
    delete(local_108);
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

ControllerManager::~ControllerManager() {
~ControllerManager(this);
  delete(this);
  return;
}
}
