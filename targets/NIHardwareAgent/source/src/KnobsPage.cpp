#include <ni/controller_editor/KnobsPage.hpp>
namespace NI::NHL2::Komplete::KontrolMK1 {

KnobsPage::KnobsPage(unsigned int) {
unsigned char uVar1;
  Assignment *pAVar2;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"KnobsPage",0);
  *(void ***)this = &PTR__KnobsPage_1009db0d0;
  uVar1 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  if ((char)param_1 == '\x01') {
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END1_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x16');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000000,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END2_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x17');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000001,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END3_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x18');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000002,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END4_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x19');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000003,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END5_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x1a');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000004,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END6_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x1b');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000005,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END7_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x1c');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000006,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END8_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x1d');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000007,0,true);
  }
  else if ((char)param_1 == '\0') {
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END1_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x0e');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000000,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END2_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x0f');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000001,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END3_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x10');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000002,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END4_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x11');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000003,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END5_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x12');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000004,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END6_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x13');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000005,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END7_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x14');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000006,0,true);
    pAVar2 = (Assignment *)new(0xa8);
    Assignment::Assignment(pAVar2,0,&ENCODER_END8_KNOBS1_ID);
    *(unsigned int *)(pAVar2 + 4) = 0;
    Assignment::setMidiType(pAVar2,0xb0);
    Assignment::setMidiID(pAVar2,'\x15');
    pAVar2[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar2,0x20000007,0,true);
  }
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar1;
  
}

KnobsPage::~KnobsPage() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
