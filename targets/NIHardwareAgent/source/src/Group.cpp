#include <ni/controller_editor/Group.hpp>
namespace NI::NHL2::MaschineStudio {

Group::Group(unsigned int) {
unsigned char uVar1;
  int iVar2;
  Assignment *pAVar3;
  Assignment *pAVar4;
  uint uVar5;
  void **local_40;
  Group *local_38;
  void *local_30;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"group",0);
  *(void ***)this = &PTR__Group_1009defb0;
  *(unsigned int *)(this + 0x5c) = 9;
  uVar1 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  if (7 < (byte)param_1) goto LAB_1000fa8ab;
  uVar5 = param_1 >> 8;
  switch(param_1 & 0xff) {
  case 1:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e78ec:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e7f7d;
        goto LAB_1000e78ec;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e78ec;
LAB_1000e7f7d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8082:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8905;
        goto LAB_1000e8082;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8082;
LAB_1000e8905:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8a0a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e928d;
        goto LAB_1000e8a0a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8a0a;
LAB_1000e928d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9392:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9c15;
        goto LAB_1000e9392;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9392;
LAB_1000e9c15:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9d1a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea59d;
        goto LAB_1000e9d1a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9d1a;
LAB_1000ea59d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea6a2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eaf25;
        goto LAB_1000ea6a2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea6a2;
LAB_1000eaf25:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb02a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb8ad;
        goto LAB_1000eb02a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb02a;
LAB_1000eb8ad:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb9b2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec235;
        goto LAB_1000eb9b2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb9b2;
LAB_1000ec235:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec33a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ecbbd;
        goto LAB_1000ec33a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec33a;
LAB_1000ecbbd:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,' ');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eccc2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed545;
        goto LAB_1000eccc2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eccc2;
LAB_1000ed545:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,' ');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed64a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000edecd;
        goto LAB_1000ed64a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed64a;
LAB_1000edecd:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'!');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000edfd2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee855;
        goto LAB_1000edfd2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000edfd2;
LAB_1000ee855:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'!');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee95a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef1dd;
        goto LAB_1000ee95a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee95a;
LAB_1000ef1dd:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\"');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef2e2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000efb65;
        goto LAB_1000ef2e2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef2e2;
LAB_1000efb65:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\"');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efc6a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f04ed;
        goto LAB_1000efc6a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000efc6a;
LAB_1000f04ed:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'#');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f05f2:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0e75;
        goto LAB_1000f05f2;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f05f2;
LAB_1000f0e75:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'#');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0f7a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f17fd;
        goto LAB_1000f0f7a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0f7a;
LAB_1000f17fd:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1902:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2185;
        goto LAB_1000f1902;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1902;
LAB_1000f2185:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f228a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2b0d;
        goto LAB_1000f228a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f228a;
LAB_1000f2b0d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2c12:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3495;
        goto LAB_1000f2c12;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f2c12;
LAB_1000f3495:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f359a:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3e1d;
        goto LAB_1000f359a;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f359a;
LAB_1000f3e1d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3f22:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f47a5;
        goto LAB_1000f3f22;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3f22;
LAB_1000f47a5:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f48aa:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f512d;
        goto LAB_1000f48aa;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f48aa;
LAB_1000f512d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5232:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5ab5;
        goto LAB_1000f5232;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5232;
LAB_1000f5ab5:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5bba:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f643d;
        goto LAB_1000f5bba;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5bba;
LAB_1000f643d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x18');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6542:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6dc5;
        goto LAB_1000f6542;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6542;
LAB_1000f6dc5:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x18');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6eca:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f774d;
        goto LAB_1000f6eca;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6eca;
LAB_1000f774d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x19');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7852:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f80d5;
        goto LAB_1000f7852;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7852;
LAB_1000f80d5:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x19');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f81da:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8a5d;
        goto LAB_1000f81da;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f81da;
LAB_1000f8a5d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8b62:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f93e5;
        goto LAB_1000f8b62;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f8b62;
LAB_1000f93e5:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f94ea:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9d6d;
        goto LAB_1000f94ea;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f94ea;
LAB_1000f9d6d:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9e72:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa625;
        goto LAB_1000f9e72;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9e72;
LAB_1000fa625:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 2:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e79ca:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e80ae;
        goto LAB_1000e79ca;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e79ca;
LAB_1000e80ae:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e81b3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8a36;
        goto LAB_1000e81b3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e81b3;
LAB_1000e8a36:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8b3b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e93be;
        goto LAB_1000e8b3b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8b3b;
LAB_1000e93be:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e94c3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9d46;
        goto LAB_1000e94c3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e94c3;
LAB_1000e9d46:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9e4b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea6ce;
        goto LAB_1000e9e4b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9e4b;
LAB_1000ea6ce:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea7d3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb056;
        goto LAB_1000ea7d3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea7d3;
LAB_1000eb056:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb15b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb9de;
        goto LAB_1000eb15b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb15b;
LAB_1000eb9de:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ebae3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec366;
        goto LAB_1000ebae3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ebae3;
LAB_1000ec366:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec46b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eccee;
        goto LAB_1000ec46b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec46b;
LAB_1000eccee:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,',');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ecdf3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed676;
        goto LAB_1000ecdf3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ecdf3;
LAB_1000ed676:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,',');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed77b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000edffe;
        goto LAB_1000ed77b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed77b;
LAB_1000edffe:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'-');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee103:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee986;
        goto LAB_1000ee103;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee103;
LAB_1000ee986:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'-');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eea8b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef30e;
        goto LAB_1000eea8b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eea8b;
LAB_1000ef30e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'.');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef413:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000efc96;
        goto LAB_1000ef413;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef413;
LAB_1000efc96:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'.');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efd9b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f061e;
        goto LAB_1000efd9b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000efd9b;
LAB_1000f061e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'/');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0723:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0fa6;
        goto LAB_1000f0723;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0723;
LAB_1000f0fa6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'/');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f10ab:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f192e;
        goto LAB_1000f10ab;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f10ab;
LAB_1000f192e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'(');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1a33:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f22b6;
        goto LAB_1000f1a33;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1a33;
LAB_1000f22b6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'(');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f23bb:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2c3e;
        goto LAB_1000f23bb;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f23bb;
LAB_1000f2c3e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,')');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2d43:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f35c6;
        goto LAB_1000f2d43;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f2d43;
LAB_1000f35c6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,')');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f36cb:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3f4e;
        goto LAB_1000f36cb;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f36cb;
LAB_1000f3f4e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'*');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4053:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f48d6;
        goto LAB_1000f4053;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4053;
LAB_1000f48d6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'*');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f49db:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f525e;
        goto LAB_1000f49db;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f49db;
LAB_1000f525e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'+');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5363:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5be6;
        goto LAB_1000f5363;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5363;
LAB_1000f5be6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'+');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5ceb:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f656e;
        goto LAB_1000f5ceb;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5ceb;
LAB_1000f656e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6673:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6ef6;
        goto LAB_1000f6673;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6673;
LAB_1000f6ef6:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6ffb:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f787e;
        goto LAB_1000f6ffb;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6ffb;
LAB_1000f787e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7983:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8206;
        goto LAB_1000f7983;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7983;
LAB_1000f8206:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f830b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8b8e;
        goto LAB_1000f830b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f830b;
LAB_1000f8b8e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8c93:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9516;
        goto LAB_1000f8c93;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f8c93;
LAB_1000f9516:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f961b:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9e9e;
        goto LAB_1000f961b;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f961b;
LAB_1000f9e9e:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9fa3:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa686;
        goto LAB_1000f9fa3;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9fa3;
LAB_1000fa686:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 3:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7aa8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e81df;
        goto LAB_1000e7aa8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e7aa8;
LAB_1000e81df:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e82e4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8b67;
        goto LAB_1000e82e4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e82e4;
LAB_1000e8b67:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8c6c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e94ef;
        goto LAB_1000e8c6c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8c6c;
LAB_1000e94ef:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e95f4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9e77;
        goto LAB_1000e95f4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e95f4;
LAB_1000e9e77:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9f7c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea7ff;
        goto LAB_1000e9f7c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9f7c;
LAB_1000ea7ff:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea904:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb187;
        goto LAB_1000ea904;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea904;
LAB_1000eb187:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb28c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ebb0f;
        goto LAB_1000eb28c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb28c;
LAB_1000ebb0f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ebc14:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec497;
        goto LAB_1000ebc14;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ebc14;
LAB_1000ec497:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec59c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ece1f;
        goto LAB_1000ec59c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec59c;
LAB_1000ece1f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'8');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ecf24:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed7a7;
        goto LAB_1000ecf24;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ecf24;
LAB_1000ed7a7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'8');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed8ac:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee12f;
        goto LAB_1000ed8ac;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed8ac;
LAB_1000ee12f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'9');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee234:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eeab7;
        goto LAB_1000ee234;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee234;
LAB_1000eeab7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'9');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eebbc:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef43f;
        goto LAB_1000eebbc;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eebbc;
LAB_1000ef43f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,':');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef544:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000efdc7;
        goto LAB_1000ef544;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef544;
LAB_1000efdc7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,':');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efecc:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f074f;
        goto LAB_1000efecc;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000efecc;
LAB_1000f074f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,';');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0854:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f10d7;
        goto LAB_1000f0854;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0854;
LAB_1000f10d7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,';');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f11dc:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1a5f;
        goto LAB_1000f11dc;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f11dc;
LAB_1000f1a5f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'4');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1b64:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f23e7;
        goto LAB_1000f1b64;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1b64;
LAB_1000f23e7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'4');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f24ec:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2d6f;
        goto LAB_1000f24ec;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f24ec;
LAB_1000f2d6f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'5');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2e74:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f36f7;
        goto LAB_1000f2e74;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f2e74;
LAB_1000f36f7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'5');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f37fc:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f407f;
        goto LAB_1000f37fc;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f37fc;
LAB_1000f407f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'6');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4184:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4a07;
        goto LAB_1000f4184;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4184;
LAB_1000f4a07:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'6');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4b0c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f538f;
        goto LAB_1000f4b0c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4b0c;
LAB_1000f538f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'7');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5494:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5d17;
        goto LAB_1000f5494;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5494;
LAB_1000f5d17:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'7');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5e1c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f669f;
        goto LAB_1000f5e1c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5e1c;
LAB_1000f669f:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f67a4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7027;
        goto LAB_1000f67a4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f67a4;
LAB_1000f7027:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f712c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f79af;
        goto LAB_1000f712c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f712c;
LAB_1000f79af:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7ab4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8337;
        goto LAB_1000f7ab4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7ab4;
LAB_1000f8337:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f843c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8cbf;
        goto LAB_1000f843c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f843c;
LAB_1000f8cbf:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8dc4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9647;
        goto LAB_1000f8dc4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f8dc4;
LAB_1000f9647:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f974c:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9fcf;
        goto LAB_1000f974c;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f974c;
LAB_1000f9fcf:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000fa0d4:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa6e7;
        goto LAB_1000fa0d4;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000fa0d4;
LAB_1000fa6e7:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 4:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7b86:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8310;
        goto LAB_1000e7b86;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e7b86;
LAB_1000e8310:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8415:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8c98;
        goto LAB_1000e8415;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8415;
LAB_1000e8c98:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8d9d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9620;
        goto LAB_1000e8d9d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8d9d;
LAB_1000e9620:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9725:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9fa8;
        goto LAB_1000e9725;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9725;
LAB_1000e9fa8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea0ad:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea930;
        goto LAB_1000ea0ad;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea0ad;
LAB_1000ea930:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eaa35:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb2b8;
        goto LAB_1000eaa35;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eaa35;
LAB_1000eb2b8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb3bd:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ebc40;
        goto LAB_1000eb3bd;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb3bd;
LAB_1000ebc40:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ebd45:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec5c8;
        goto LAB_1000ebd45;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ebd45;
LAB_1000ec5c8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec6cd:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ecf50;
        goto LAB_1000ec6cd;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec6cd;
LAB_1000ecf50:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'D');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed055:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed8d8;
        goto LAB_1000ed055;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed055;
LAB_1000ed8d8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'D');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed9dd:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee260;
        goto LAB_1000ed9dd;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed9dd;
LAB_1000ee260:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'E');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee365:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eebe8;
        goto LAB_1000ee365;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee365;
LAB_1000eebe8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'E');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eeced:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef570;
        goto LAB_1000eeced;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eeced;
LAB_1000ef570:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'F');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef675:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000efef8;
        goto LAB_1000ef675;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef675;
LAB_1000efef8:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'F');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efffd:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0880;
        goto LAB_1000efffd;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000efffd;
LAB_1000f0880:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'G');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0985:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1208;
        goto LAB_1000f0985;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0985;
LAB_1000f1208:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'G');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f130d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1b90;
        goto LAB_1000f130d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f130d;
LAB_1000f1b90:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'@');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1c95:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2518;
        goto LAB_1000f1c95;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1c95;
LAB_1000f2518:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'@');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f261d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2ea0;
        goto LAB_1000f261d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f261d;
LAB_1000f2ea0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'A');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2fa5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3828;
        goto LAB_1000f2fa5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f2fa5;
LAB_1000f3828:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'A');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f392d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f41b0;
        goto LAB_1000f392d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f392d;
LAB_1000f41b0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'B');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f42b5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4b38;
        goto LAB_1000f42b5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f42b5;
LAB_1000f4b38:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'B');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4c3d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f54c0;
        goto LAB_1000f4c3d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4c3d;
LAB_1000f54c0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'C');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f55c5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5e48;
        goto LAB_1000f55c5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f55c5;
LAB_1000f5e48:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'C');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5f4d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f67d0;
        goto LAB_1000f5f4d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5f4d;
LAB_1000f67d0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f68d5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7158;
        goto LAB_1000f68d5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f68d5;
LAB_1000f7158:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f725d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7ae0;
        goto LAB_1000f725d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f725d;
LAB_1000f7ae0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7be5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8468;
        goto LAB_1000f7be5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7be5;
LAB_1000f8468:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f856d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8df0;
        goto LAB_1000f856d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f856d;
LAB_1000f8df0:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8ef5:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9778;
        goto LAB_1000f8ef5;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f8ef5;
LAB_1000f9778:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f987d:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa100;
        goto LAB_1000f987d;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f987d;
LAB_1000fa100:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000fa205:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa748;
        goto LAB_1000fa205;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000fa205;
LAB_1000fa748:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 5:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7c64:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8441;
        goto LAB_1000e7c64;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e7c64;
LAB_1000e8441:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8546:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8dc9;
        goto LAB_1000e8546;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8546;
LAB_1000e8dc9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8ece:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9751;
        goto LAB_1000e8ece;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8ece;
LAB_1000e9751:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9856:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea0d9;
        goto LAB_1000e9856;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9856;
LAB_1000ea0d9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea1de:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eaa61;
        goto LAB_1000ea1de;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea1de;
LAB_1000eaa61:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eab66:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb3e9;
        goto LAB_1000eab66;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eab66;
LAB_1000eb3e9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb4ee:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ebd71;
        goto LAB_1000eb4ee;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb4ee;
LAB_1000ebd71:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ebe76:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec6f9;
        goto LAB_1000ebe76;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ebe76;
LAB_1000ec6f9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec7fe:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed081;
        goto LAB_1000ec7fe;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec7fe;
LAB_1000ed081:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'P');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed186:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eda09;
        goto LAB_1000ed186;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed186;
LAB_1000eda09:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'P');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000edb0e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee391;
        goto LAB_1000edb0e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000edb0e;
LAB_1000ee391:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Q');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee496:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eed19;
        goto LAB_1000ee496;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee496;
LAB_1000eed19:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Q');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eee1e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef6a1;
        goto LAB_1000eee1e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eee1e;
LAB_1000ef6a1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'R');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef7a6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0029;
        goto LAB_1000ef7a6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef7a6;
LAB_1000f0029:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'R');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f012e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f09b1;
        goto LAB_1000f012e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f012e;
LAB_1000f09b1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'S');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0ab6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1339;
        goto LAB_1000f0ab6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0ab6;
LAB_1000f1339:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'S');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f143e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1cc1;
        goto LAB_1000f143e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f143e;
LAB_1000f1cc1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'L');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1dc6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2649;
        goto LAB_1000f1dc6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1dc6;
LAB_1000f2649:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'L');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f274e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2fd1;
        goto LAB_1000f274e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f274e;
LAB_1000f2fd1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'M');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f30d6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3959;
        goto LAB_1000f30d6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f30d6;
LAB_1000f3959:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'M');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3a5e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f42e1;
        goto LAB_1000f3a5e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3a5e;
LAB_1000f42e1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'N');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f43e6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4c69;
        goto LAB_1000f43e6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f43e6;
LAB_1000f4c69:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'N');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4d6e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f55f1;
        goto LAB_1000f4d6e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4d6e;
LAB_1000f55f1:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'O');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f56f6:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5f79;
        goto LAB_1000f56f6;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f56f6;
LAB_1000f5f79:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'O');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f607e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6901;
        goto LAB_1000f607e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f607e;
LAB_1000f6901:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6a06:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7289;
        goto LAB_1000f6a06;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6a06;
LAB_1000f7289:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f738e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7c11;
        goto LAB_1000f738e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f738e;
LAB_1000f7c11:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7d16:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8599;
        goto LAB_1000f7d16;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7d16;
LAB_1000f8599:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f869e:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f8f21;
        goto LAB_1000f869e;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f869e;
LAB_1000f8f21:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9026:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f98a9;
        goto LAB_1000f9026;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9026;
LAB_1000f98a9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f99ae:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa231;
        goto LAB_1000f99ae;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f99ae;
LAB_1000fa231:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000fa336:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa7a9;
        goto LAB_1000fa336;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000fa336;
LAB_1000fa7a9:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 6:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7d42:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8572;
        goto LAB_1000e7d42;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e7d42;
LAB_1000e8572:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8677:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e8efa;
        goto LAB_1000e8677;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8677;
LAB_1000e8efa:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e8fff:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9882;
        goto LAB_1000e8fff;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e8fff;
LAB_1000e9882:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9987:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea20a;
        goto LAB_1000e9987;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9987;
LAB_1000ea20a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea30f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eab92;
        goto LAB_1000ea30f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea30f;
LAB_1000eab92:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eac97:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb51a;
        goto LAB_1000eac97;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eac97;
LAB_1000eb51a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb61f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ebea2;
        goto LAB_1000eb61f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb61f;
LAB_1000ebea2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ebfa7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec82a;
        goto LAB_1000ebfa7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ebfa7;
LAB_1000ec82a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec92f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed1b2;
        goto LAB_1000ec92f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec92f;
LAB_1000ed1b2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\\');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed2b7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000edb3a;
        goto LAB_1000ed2b7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed2b7;
LAB_1000edb3a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\\');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000edc3f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee4c2;
        goto LAB_1000edc3f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000edc3f;
LAB_1000ee4c2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,']');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee5c7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eee4a;
        goto LAB_1000ee5c7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee5c7;
LAB_1000eee4a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,']');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eef4f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef7d2;
        goto LAB_1000eef4f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eef4f;
LAB_1000ef7d2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'^');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef8d7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f015a;
        goto LAB_1000ef8d7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef8d7;
LAB_1000f015a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'^');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f025f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0ae2;
        goto LAB_1000f025f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f025f;
LAB_1000f0ae2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'_');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0be7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f146a;
        goto LAB_1000f0be7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0be7;
LAB_1000f146a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'_');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f156f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1df2;
        goto LAB_1000f156f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f156f;
LAB_1000f1df2:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'X');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f1ef7:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f277a;
        goto LAB_1000f1ef7;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f1ef7;
LAB_1000f277a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'X');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f287f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3102;
        goto LAB_1000f287f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f287f;
LAB_1000f3102:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Y');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3207:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3a8a;
        goto LAB_1000f3207;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3207;
LAB_1000f3a8a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Y');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3b8f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4412;
        goto LAB_1000f3b8f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3b8f;
LAB_1000f4412:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Z');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4517:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4d9a;
        goto LAB_1000f4517;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4517;
LAB_1000f4d9a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Z');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4e9f:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5722;
        goto LAB_1000f4e9f;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4e9f;
LAB_1000f5722:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'[');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5827:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f60aa;
        goto LAB_1000f5827;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5827;
LAB_1000f60aa:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'[');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f61af:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6a32;
        goto LAB_1000f61af;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f61af;
LAB_1000f6a32:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6b37:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f73ba;
        goto LAB_1000f6b37;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6b37;
LAB_1000f73ba:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f74bf:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7d42;
        goto LAB_1000f74bf;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f74bf;
LAB_1000f7d42:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7e47:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f86ca;
        goto LAB_1000f7e47;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7e47;
LAB_1000f86ca:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f87cf:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9052;
        goto LAB_1000f87cf;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f87cf;
LAB_1000f9052:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9157:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f99da;
        goto LAB_1000f9157;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9157;
LAB_1000f99da:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9adf:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa362;
        goto LAB_1000f9adf;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9adf;
LAB_1000fa362:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000fa467:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa80a;
        goto LAB_1000fa467;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000fa467;
LAB_1000fa80a:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  case 7:
    if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7e20:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e86a3;
        goto LAB_1000e7e20;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e7e20;
LAB_1000e86a3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'l');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e87a8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e902b;
        goto LAB_1000e87a8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e87a8;
LAB_1000e902b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'l');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9130:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e99b3;
        goto LAB_1000e9130;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9130;
LAB_1000e99b3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'m');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9ab8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea33b;
        goto LAB_1000e9ab8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000e9ab8;
LAB_1000ea33b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'m');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea440:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eacc3;
        goto LAB_1000ea440;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ea440;
LAB_1000eacc3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'n');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eadc8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb64b;
        goto LAB_1000eadc8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eadc8;
LAB_1000eb64b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'n');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb750:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ebfd3;
        goto LAB_1000eb750;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eb750;
LAB_1000ebfd3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'o');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec0d8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec95b;
        goto LAB_1000ec0d8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ec0d8;
LAB_1000ec95b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'o');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eca60:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed2e3;
        goto LAB_1000eca60;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000eca60;
LAB_1000ed2e3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'h');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed3e8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000edc6b;
        goto LAB_1000ed3e8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ed3e8;
LAB_1000edc6b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'h');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000edd70:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee5f3;
        goto LAB_1000edd70;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000edd70;
LAB_1000ee5f3:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'i');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee6f8:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eef7b;
        goto LAB_1000ee6f8;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ee6f8;
LAB_1000eef7b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'i');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef080:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef903;
        goto LAB_1000ef080;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000ef080;
LAB_1000ef903:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'j');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efa08:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f028b;
        goto LAB_1000efa08;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000efa08;
LAB_1000f028b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'j');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0390:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0c13;
        goto LAB_1000f0390;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0390;
LAB_1000f0c13:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'k');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0d18:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f159b;
        goto LAB_1000f0d18;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f0d18;
LAB_1000f159b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'k');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f16a0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f1f23;
        goto LAB_1000f16a0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f16a0;
LAB_1000f1f23:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2028:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f28ab;
        goto LAB_1000f2028;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f2028;
LAB_1000f28ab:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f29b0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3233;
        goto LAB_1000f29b0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f29b0;
LAB_1000f3233:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3338:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3bbb;
        goto LAB_1000f3338;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3338;
LAB_1000f3bbb:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3cc0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4543;
        goto LAB_1000f3cc0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f3cc0;
LAB_1000f4543:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4648:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4ecb;
        goto LAB_1000f4648;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4648;
LAB_1000f4ecb:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4fd0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5853;
        goto LAB_1000f4fd0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f4fd0;
LAB_1000f5853:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'g');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5958:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f61db;
        goto LAB_1000f5958;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f5958;
LAB_1000f61db:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'g');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f62e0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6b63;
        goto LAB_1000f62e0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f62e0;
LAB_1000f6b63:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6c68:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f74eb;
        goto LAB_1000f6c68;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f6c68;
LAB_1000f74eb:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f75f0:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7e73;
        goto LAB_1000f75f0;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f75f0;
LAB_1000f7e73:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7f78:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f87fb;
        goto LAB_1000f7f78;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f7f78;
LAB_1000f87fb:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8900:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9183;
        goto LAB_1000f8900;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f8900;
LAB_1000f9183:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9288:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9b0b;
        goto LAB_1000f9288;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9288;
LAB_1000f9b0b:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,5,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9c10:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa493;
        goto LAB_1000f9c10;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000f9c10;
LAB_1000fa493:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new(0xa8);
    GP::DETAIL::BasicFormat<char,// std code
              ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
    Assignment::Assignment(pAVar3,6,&local_40);
    if (((unsigned long)local_40 & 1) != 0) {
      delete(local_30);
    }
    pAVar4 = pAVar3 + 8;
    if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
      pAVar4 = pAVar3;
    }
    *(int *)pAVar4 = 2;
    iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
    Assignment::setMidiValue(pAVar3,iVar2,true);
    if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000fa598:
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa868;
        goto LAB_1000fa598;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      goto LAB_1000fa598;
LAB_1000fa868:
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    goto LAB_1000fa8ab;
  }
  if ((uVar5 & 3) != 0) goto LAB_1000fa8ab;
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_13_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e780e:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e7e4c;
      goto LAB_1000e780e;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000e780e;
LAB_1000e7e4c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x18');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_13_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e7f51:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e87d4;
      goto LAB_1000e7f51;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000e7f51;
LAB_1000e87d4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x18');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_14_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e88d9:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e915c;
      goto LAB_1000e88d9;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000e88d9;
LAB_1000e915c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x19');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_14_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9261:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000e9ae4;
      goto LAB_1000e9261;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000e9261;
LAB_1000e9ae4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x19');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_15_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000e9be9:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ea46c;
      goto LAB_1000e9be9;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000e9be9;
LAB_1000ea46c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x1a');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_15_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ea571:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eadf4;
      goto LAB_1000ea571;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ea571;
LAB_1000eadf4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x1a');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_16_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eaef9:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eb77c;
      goto LAB_1000eaef9;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000eaef9;
LAB_1000eb77c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x1b');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_16_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000eb881:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ec104;
      goto LAB_1000eb881;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000eb881;
LAB_1000ec104:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x1b');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_9_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ec209:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000eca8c;
      goto LAB_1000ec209;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ec209;
LAB_1000eca8c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x14');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_9_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ecb91:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ed414;
      goto LAB_1000ecb91;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ecb91;
LAB_1000ed414:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x14');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_10_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ed519:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000edd9c;
      goto LAB_1000ed519;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ed519;
LAB_1000edd9c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x15');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_10_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000edea1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ee724;
      goto LAB_1000edea1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000edea1;
LAB_1000ee724:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x15');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_11_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ee829:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000ef0ac;
      goto LAB_1000ee829;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ee829;
LAB_1000ef0ac:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x16');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_11_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000ef1b1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000efa34;
      goto LAB_1000ef1b1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000ef1b1;
LAB_1000efa34:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x16');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_12_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000efb39:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f03bc;
      goto LAB_1000efb39;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000efb39;
LAB_1000f03bc:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x17');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_12_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f04c1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f0d44;
      goto LAB_1000f04c1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f04c1;
LAB_1000f0d44:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x17');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_5_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f0e49:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f16cc;
      goto LAB_1000f0e49;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f0e49;
LAB_1000f16cc:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x10');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_5_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f17d1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f2054;
      goto LAB_1000f17d1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f17d1;
LAB_1000f2054:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x10');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_6_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2159:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f29dc;
      goto LAB_1000f2159;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f2159;
LAB_1000f29dc:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x11');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_6_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f2ae1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3364;
      goto LAB_1000f2ae1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f2ae1;
LAB_1000f3364:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x11');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_7_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3469:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f3cec;
      goto LAB_1000f3469;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f3469;
LAB_1000f3cec:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x12');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_7_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f3df1:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4674;
      goto LAB_1000f3df1;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f3df1;
LAB_1000f4674:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x12');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_8_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f4779:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f4ffc;
      goto LAB_1000f4779;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f4779;
LAB_1000f4ffc:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x13');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_8_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5101:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f5984;
      goto LAB_1000f5101;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f5101;
LAB_1000f5984:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x13');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_1_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f5a89:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f630c;
      goto LAB_1000f5a89;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f5a89;
LAB_1000f630c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_1_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6411:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f6c94;
      goto LAB_1000f6411;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f6411;
LAB_1000f6c94:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_2_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f6d99:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f761c;
      goto LAB_1000f6d99;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f6d99;
LAB_1000f761c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\r');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_2_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f7721:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f7fa4;
      goto LAB_1000f7721;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f7721;
LAB_1000f7fa4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\r');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_3_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f80a9:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f892c;
      goto LAB_1000f80a9;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f80a9;
LAB_1000f892c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x0e');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_3_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f8a31:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f92b4;
      goto LAB_1000f8a31;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f8a31;
LAB_1000f92b4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x0e');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_TRIGGER",(string *)&PAD_PAD_4_ID);
  Assignment::Assignment(pAVar3,5,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f93b9:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000f9c3c;
      goto LAB_1000f93b9;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f93b9;
LAB_1000f9c3c:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x0f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  GP::DETAIL::BasicFormat<char,// std code
            ((DETAIL *)&local_40,"%1%_PRESSURE",(string *)&PAD_PAD_4_ID);
  Assignment::Assignment(pAVar3,6,&local_40);
  if (((unsigned long)local_40 & 1) != 0) {
    delete(local_30);
  }
  pAVar4 = pAVar3 + 8;
  if ((*(uint *)(pAVar3 + 0x60) & 0xfffffffe) == 2) {
    pAVar4 = pAVar3;
  }
  *(int *)pAVar4 = 2;
  iVar2 = Assignment::boundValueToMinMax(pAVar3,*(int *)(pAVar3 + 0x90));
  Assignment::setMidiValue(pAVar3,iVar2,true);
  if (*(int *)(pAVar3 + 0x84) - 0x10U < 5) {
LAB_1000f9d41:
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) goto LAB_1000fa5c4;
      goto LAB_1000f9d41;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    goto LAB_1000f9d41;
LAB_1000fa5c4:
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x0f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
LAB_1000fa8ab:
  local_40 = &PTR__AdjustRGBAssignments_1009e0390;
  local_38 = this;
  (**(code **)(*(long *)this + 0x70))(this,&local_40);
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar1;
  
}

Group::~Group() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
