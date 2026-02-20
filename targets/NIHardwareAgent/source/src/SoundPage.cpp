#include <ni/controller_editor/SoundPage.hpp>
namespace NI::NHL2::MaschineMikroMK2 {

SoundPage::SoundPage(unsigned int) {
byte bVar1;
  unsigned char uVar2;
  Assignment *pAVar3;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"page",0);
  *(void ***)this = &PTR__SoundPage_1009de770;
  uVar2 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,4,&DIAL_ID);
  Assignment::setMidiType(pAVar3,0xb0);
  bVar1 = (byte)param_1 & 1;
  Assignment::setMidiID(pAVar3,bVar1 * '\b' + '\x0e');
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x40000000,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&DIAL_PUSH_ID);
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,bVar1 * '\b' + '\x0f');
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x20);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x1000000b,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&F1_ID);
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'Y');
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x10000017,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&F2_ID);
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'Z');
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x10000016,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&F3_ID);
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'[');
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x10000015,0,true);
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
  
}

SoundPage::~SoundPage() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
