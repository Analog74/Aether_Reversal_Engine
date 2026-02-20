#include <ni/controller_editor/Map.hpp>
namespace NI::NHL2::Komplete::KontrolMK1 {

void Map::setupMappingSection(unsigned char) {
uint uVar1;
  unsigned char uVar2;
  int iVar3;
  Assignment *pAVar4;
  Assignment *pAVar5;
  string local_48;
  unsigned int local_47;
  void2 local_43;
  unsigned char local_41;
  void *local_38;
  
  uVar2 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,8,&POTI_TSTTOUCHSTRIP_LEFTS1_ID);
  Assignment::setMidiType(pAVar4);
  Assignment::setMidiID(pAVar4,'\0');
  pAVar4[0xa0] = (Assignment)0x0;
  *(unsigned int *)(pAVar4 + 0x8c) = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x7c));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  *(void2 *)(pAVar4 + 8) = 1;
  *(unsigned int *)(pAVar4 + 0x10) = 3;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x80000000,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,2,&BUTTON_TOUCHSTRIP_LEFT_ID);
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 2;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000bee08:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bee2e;
      goto LAB_1000bee08;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000bee08;
LAB_1000bee2e:
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  pAVar5[0x70] = (Assignment)((byte)pAVar5[0x70] | 0x40);
  Assignment::setMidiType(pAVar5);
  Assignment::setMidiID(pAVar5,'\0');
  pAVar5[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x100003e8,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,8,&POTI_TSTTOUCHSTRIP_RIGHTS1_ID);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x01');
  pAVar4[0xa0] = (Assignment)0x0;
  *(void2 *)(pAVar4 + 8) = 0;
  *(void2 *)(pAVar4 + 0x12) = 0;
  pAVar4[0x16] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x80000001,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,2,&BUTTON_TOUCHSTRIP_RIGHT_ID);
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 2;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000bef67:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bef8d;
      goto LAB_1000bef67;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000bef67;
LAB_1000bef8d:
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  pAVar5[0x70] = (Assignment)((byte)pAVar5[0x70] | 0x40);
  Assignment::setMidiType(pAVar5,0x90);
  Assignment::setMidiID(pAVar5,'\x01');
  pAVar5[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x100003e9,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,2,&BUTTON_BTNKEYSS1_ID);
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000bf05f:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bf085;
      goto LAB_1000bf05f;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000bf05f;
LAB_1000bf085:
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'-');
  pAVar5[0xa0] = (Assignment)0x0;
  pAVar5[0xa2] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x10000011,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,2,&BUTTON_BTNARPS1_ID);
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000bf15a:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bf180;
      goto LAB_1000bf15a;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000bf15a;
LAB_1000bf180:
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'.');
  pAVar5[0xa0] = (Assignment)0x0;
  pAVar5[0xa2] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x10000012,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,3,&FOOTSWITCH_TIP_ID);
  Assignment::setMidiType(pAVar5,0xb0);
  *(unsigned int *)(pAVar5 + 0x10) = 1;
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 2;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (*(int *)(pAVar5 + 0x84) - 0x10U < 5) {
LAB_1000bf269:
    Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bf28f;
      goto LAB_1000bf269;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar5 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar5 + 0x70) & 2) != 0 && (*(int *)(pAVar5 + 4) == 1))))))
    goto LAB_1000bf269;
LAB_1000bf28f:
    *(unsigned int *)(pAVar5 + 0x80) = 0;
  }
  Assignment::setMidiID(pAVar5,'@');
  pAVar5[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x10000022,0,true);
  pAVar5 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar5,3,&FOOTSWITCH_RING_ID);
  Assignment::setMidiType(pAVar5,0xb0);
  *(unsigned int *)(pAVar5 + 0x10) = 1;
  pAVar4 = pAVar5 + 8;
  if ((*(uint *)(pAVar5 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar5;
  }
  *(int *)pAVar4 = 2;
  iVar3 = Assignment::boundValueToMinMax(pAVar5,*(int *)(pAVar5 + 0x90));
  Assignment::setMidiValue(pAVar5,iVar3,true);
  if (4 < *(int *)(pAVar5 + 0x84) - 0x10U) {
    uVar1 = *(uint *)(pAVar5 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar4 = pAVar5 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar4 = pAVar5;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000bf38a;
    }
    else if ((uVar1 != 0) ||
            (((*(uint *)(pAVar5 + 0x70) & 8) == 0 &&
             (((*(uint *)(pAVar5 + 0x70) & 2) == 0 || (*(int *)(pAVar5 + 4) != 1)))))) {
LAB_1000bf38a:
      *(unsigned int *)(pAVar5 + 0x80) = 0;
      goto LAB_1000bf394;
    }
  }
  Assignment::setExternalMidiValue(pAVar5,*(int *)(pAVar5 + 0x80));
LAB_1000bf394:
  Assignment::setMidiID(pAVar5,'A');
  pAVar5[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x10000021,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,1,&PEDAL_SUSTAIN_ID);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'@');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x30000001,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,1,&PEDAL_EXPRESSION_ID);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\v');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x30000000,0,true);
  local_48 = (string)0xc;
  local_47 = 0x65676150;
  local_43 = 0x3120;
  local_41 = 0;
  AssignmentMapCollBase::add
            ((AssignmentMapCollBase *)(this + 0xe0),&local_48,true,(uint)param_1 << 8);
  if (((byte)local_48 & 1) != 0) {
    delete(local_38);
  }
  local_48 = (string)0xc;
  local_47 = 0x65676150;
  local_43 = 0x3220;
  local_41 = 0;
  AssignmentMapCollBase::add
            ((AssignmentMapCollBase *)(this + 0xe0),&local_48,false,(uint)param_1 << 8 | 1);
  if (((byte)local_48 & 1) != 0) {
    delete(local_38);
  }
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
  return;
}
}
