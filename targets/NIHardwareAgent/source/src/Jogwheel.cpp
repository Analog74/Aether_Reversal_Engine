#include <ni/controller_editor/Jogwheel.hpp>
namespace NI::NHL2::MaschineStudio {

Jogwheel::Jogwheel(unsigned int) {
uint uVar1;
  unsigned char uVar2;
  int iVar3;
  Assignment *pAVar4;
  Assignment *pAVar5;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"jogwheel",0);
  *(void ***)this = &PTR__Jogwheel_1009df0c0;
  uVar2 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  switch(param_1 param_1) {
  }
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,0,&LEDCHAIN_JOGWHEEL_RING_ID);
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 2);
  *(unsigned int *)(pAVar4 + 4) = 1;
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'L');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x200003ea,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,4,&DIAL_JOGWHEEL_TURN_ID);
  *(unsigned int *)pAVar4 = 0;
  Assignment::setMidiControllerMode(pAVar4,0);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'J');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x40000000,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,2,&BUTTON_JOGWHEEL_PUSH_ID);
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000fca9c:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (*(int *)pAVar4 - 1U < 2) goto LAB_1000fca9c;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000fca9c;
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'K');
  pAVar5[0xa0] = (Assignment)0x0;
  pAVar5[0x70] = (Assignment)((byte)pAVar5[0x70] | 0x20);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x10000033,0,true);
switchD_1000fc92f_default:
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
  
}

Jogwheel::~Jogwheel() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
