#include <ni/controller_editor/IOLevel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MaschineJam {

IOLevel::IOLevel(unsigned int) {
unsigned char uVar1;
  unsigned int uVar2;
  uchar uVar3;
  Assignment *pAVar4;
  Assignment AVar5;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"page",0);
  *(void ***)this = &PTR__IOLevel_101b03038;
  uVar2 = IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior;
  uVar1 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = 2;
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,0,&LEVEL_METER_1_ID);
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 2);
  *(unsigned int *)(pAVar4 + 4) = 1;
  Assignment::setMidiType(pAVar4,0xb0);
  uVar3 = ((byte)param_1 & 7) + 0x2a;
  Assignment::setMidiID(pAVar4,uVar3);
  AVar5 = (Assignment)((byte)(param_1 >> 8) & 0xf);
  pAVar4[0xa0] = AVar5;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x200003e8,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,0,&LEVEL_METER_2_ID);
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 2);
  *(unsigned int *)(pAVar4 + 4) = 1;
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,uVar3);
  pAVar4[0xa0] = AVar5;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x200003e9,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,4,&ENCODER_BROWSE_ID);
  *(unsigned int *)pAVar4 = 0;
  Assignment::setMidiControllerMode(pAVar4,0);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,uVar3);
  pAVar4[0xa0] = AVar5;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x40000000,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&PUSH_BROWSE_ID);
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x20);
  Assignment::setMidiType(pAVar4,0x90);
  Assignment::setMidiID(pAVar4,uVar3);
  pAVar4[0xa0] = AVar5;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000074,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&TOUCH_BROWSE_ID);
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xa0);
  Assignment::setMidiID(pAVar4,uVar3);
  pAVar4[0xa0] = AVar5;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000073,0,false);
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = uVar2;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar1;
  
}

IOLevel::~IOLevel() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
