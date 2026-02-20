#include <ni/controller_editor/Touchstrip.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MaschineJam {

Touchstrip::Touchstrip(unsigned int) {
uint uVar1;
  uint uVar2;
  Assignment *pAVar3;
  uchar uVar4;
  uint uVar5;
  int iVar6;
  unsigned long long local_78;
  unsigned char local_70;
  unsigned long local_68;
  uint local_60;
  int local_5c;
  int local_58;
  void *local_50;
  Touchstrip *local_48;
  uint local_3c;
  unsigned int local_38;
  char local_33 [3];
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"page",0);
  *(void ***)this = &PTR__Touchstrip_101b030c0;
  local_33[2] = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  local_38 = IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior;
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = 2;
  local_3c = param_1 >> 8 & 0xffff0f;
  local_78 = 0x100000002;
  local_70 = 0;
  local_68 = (unsigned long)((param_1 & 7) << 3);
  uVar5 = 0x100003e8;
  iVar6 = 0x87;
  local_48 = this;
  do {
    local_33[0] = (char)uVar5 + 'Y';
    local_33[1] = 0;
    pAVar3 = (Assignment *)new char[0xa8];
    GP::DETAIL::BasicFormat<char,char[2]>((DETAIL *)&local_60,"Tst%1%",local_33);
    Assignment::Assignment(pAVar3,0,(DETAIL *)&local_60);
    if ((local_60 & 1) != 0) {
      delete(local_50);
    }
    *(unsigned int *)(pAVar3 + 4) = 0;
    uVar1 = *(uint *)(pAVar3 + 0x60);
    uVar2 = *(uint *)(pAVar3 + 0x70);
    *(uint *)(pAVar3 + 0x70) = uVar2 | 9;
    if ((((uVar2 | 9) & 0x21) == 0x21) || ((uVar1 & 0xfffffffe) == 2)) {
      *(unsigned int *)(pAVar3 + 0xc) = 1;
    }
    else if (uVar1 - 5 < 2) {
      *(unsigned int *)(pAVar3 + 0x14) = 1;
    }
    else if (uVar1 == 0) {
      pAVar3[0x14] = (Assignment)((byte)pAVar3[0x14] | 1);
    }
    Assignment::setMidiType(pAVar3,0xb0);
    uVar4 = (char)local_68 + (char)uVar5 + 'H';
    Assignment::setMidiID(pAVar3,uVar4);
    pAVar3[0xa0] = SUB41(local_3c,0);
    IMapAssignmentStorage::addAssignment
              ((IMapAssignmentStorage *)local_48,pAVar3,uVar5 + 0x6ffffc18,0,true);
    local_60 = iVar6 - 2;
    local_5c = iVar6 + -1;
    local_58 = iVar6;
    IMapAssignmentStorage::addRGBChildAssignments
              ((IMapAssignmentStorage *)local_48,pAVar3,&local_78,&local_60,0);
    pAVar3 = (Assignment *)new char[0xa8];
    GP::DETAIL::BasicFormat<char,char[2]>((DETAIL *)&local_60,"CapTst%1%",local_33);
    Assignment::Assignment(pAVar3,2,(DETAIL *)&local_60);
    if ((local_60 & 1) != 0) {
      delete(local_50);
    }
    pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x40);
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,uVar4);
    pAVar3[0xa0] = SUB41(local_3c,0);
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)local_48,pAVar3,uVar5,0,true);
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0xb;
  } while (uVar5 != 0x100003f0);
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = local_38;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = local_33[2];
  
}

Touchstrip::~Touchstrip() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
