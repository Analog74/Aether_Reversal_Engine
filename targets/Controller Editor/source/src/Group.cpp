#include <ni/controller_editor/Group.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
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
  *(void ***)this = &PTR__Group_101b02770;
  *(unsigned int *)(this + 0x5c) = 9;
  uVar1 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  if (7 < (byte)param_1) return;
  uVar5 = param_1 >> 8;
  switch(param_1 & 0xff) {
  case 1:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,' ');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,' ');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'!');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'!');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\"');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\"');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'#');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'#');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x18');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x18');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x19');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x19');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\x1b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\x1b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 2:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,',');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,',');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'-');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'-');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'.');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'.');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'/');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'/');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'(');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'(');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,')');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,')');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'*');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'*');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'+');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'+');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'$');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'%');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'&');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\'');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 3:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'8');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'8');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'9');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'9');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,':');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,':');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,';');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,';');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'4');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'4');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'5');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'5');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'6');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'6');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'7');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'7');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'0');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'1');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'2');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'3');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 4:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'D');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'D');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'E');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'E');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'F');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'F');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'G');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'G');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'@');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'@');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'A');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'A');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'B');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'B');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'C');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'C');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'<');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'=');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'>');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'?');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 5:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'P');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'P');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Q');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Q');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'R');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'R');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'S');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'S');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'L');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'L');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'M');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'M');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'N');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'N');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'O');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'O');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'H');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'I');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'J');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'K');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 6:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'\\');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'\\');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,']');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,']');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'^');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'^');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'_');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'_');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'X');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'X');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Y');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Y');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'Z');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'Z');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'[');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'[');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'T');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'U');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'V');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'W');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  case 7:
    if ((uVar5 & 3) != 0) return;
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'l');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'l');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'m');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'m');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'n');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'n');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'o');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'o');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'h');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'h');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'i');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'i');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'j');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'j');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'k');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'k');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'d');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'e');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'f');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'g');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'g');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'`');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'a');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'b');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0x90);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
    pAVar3 = (Assignment *)new char[0xa8];
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
      Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
    }
    else {
      uVar5 = *(uint *)(pAVar3 + 0x60);
      if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
        pAVar4 = pAVar3 + 8;
        if ((uVar5 & 0xfffffffe) == 2) {
          pAVar4 = pAVar3;
        }
        if (1 < *(int *)pAVar4 - 1U) return;
        return;
      }
      if ((uVar5 == 0) &&
         (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
          (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar3 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar3,0xa0);
    Assignment::setMidiID(pAVar3,'c');
    pAVar3[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
    return;
  }
  if ((uVar5 & 3) != 0) return;
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x18');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000000,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x18');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000000,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x19');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000001,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x19');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000001,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x1a');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000002,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x1a');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000002,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x1b');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000003,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x1b');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000003,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x14');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000004,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x14');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000004,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x15');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000005,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x15');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000005,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x16');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000006,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x16');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000006,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x17');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000007,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x17');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000007,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x10');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000008,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x10');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000008,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x11');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x50000009,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x11');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x60000009,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x12');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000a,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x12');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000a,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x13');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000b,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x13');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000b,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000c,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000c,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\r');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000d,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\r');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000d,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x0e');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000e,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x0e');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000e,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0x90);
  Assignment::setMidiID(pAVar3,'\x0f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x5000000f,0,true);
  pAVar3 = (Assignment *)new char[0xa8];
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
    Assignment::setExternalMidiValue(pAVar3,*(int *)(pAVar3 + 0x80));
  }
  else {
    uVar5 = *(uint *)(pAVar3 + 0x60);
    if ((uVar5 - 2 < 2) || (uVar5 == 5)) {
      pAVar4 = pAVar3 + 8;
      if ((uVar5 & 0xfffffffe) == 2) {
        pAVar4 = pAVar3;
      }
      if (1 < *(int *)pAVar4 - 1U) return;
      return;
    }
    if ((uVar5 == 0) &&
       (((*(uint *)(pAVar3 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar3 + 0x70) & 2) != 0 && (*(int *)(pAVar3 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar3 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar3,0xa0);
  Assignment::setMidiID(pAVar3,'\x0f');
  pAVar3[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x6000000f,0,true);
  local_40 = &PTR__AdjustRGBAssignments_101b03c40;
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
