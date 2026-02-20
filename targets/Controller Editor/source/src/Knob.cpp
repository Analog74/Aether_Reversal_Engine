#include <ni/controller_editor/Knob.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MaschineStudio {

Knob::Knob(unsigned int) {
uint uVar1;
  unsigned char uVar2;
  int iVar3;
  Assignment *pAVar4;
  Assignment *pAVar5;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"knob",0);
  *(void ***)this = &PTR__Knob_101b026e8;
  this[0x9c] = (Knob)0x0;
  uVar2 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  *(unsigned long long *)(this + 0x7c) = 0x1200000012;
  *(unsigned long long *)(this + 0x84) = 0x1200000012;
  *(unsigned long long *)(this + 0x5c) = 0x1200000012;
  *(unsigned long long *)(this + 100) = 0x1200000012;
  *(unsigned long long *)(this + 0x8c) = 0x1200000012;
  *(unsigned long long *)(this + 0x94) = 0x1200000012;
  *(unsigned long long *)(this + 0x6c) = 0x1200000012;
  *(unsigned long long *)(this + 0x74) = 0x1200000012;
  if (param_1 == 1) {
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_1_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'6');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000040,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_2_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'7');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000047,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_3_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'8');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000046,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_4_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'9');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000041,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_5_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,':');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000045,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_6_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,';');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000042,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_7_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'<');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000044,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_8_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'=');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000043,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_1_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'\x1e');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 1;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000000,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_1_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'\x1f');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000058,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_2_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,' ');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x101;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000001,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_2_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'!');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000059,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_3_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'\"');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x201;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000002,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_3_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'#');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005a,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_4_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'$');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x301;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000003,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_4_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'%');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005b,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_5_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'&');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x401;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000004,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_5_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'\'');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005c,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_6_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'(');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x501;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000005,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_6_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,')');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005d,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_7_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,'*');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x601;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000006,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_7_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'+');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005e,0,true);
    pAVar5 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_8_ID);
    *(unsigned int *)(pAVar5 + 4) = 0;
    Assignment::setMidiType(pAVar5,0xb0);
    Assignment::setMidiID(pAVar5,',');
    pAVar5[0xa0] = (Assignment)0x0;
    *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x701;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000007,0,true);
    pAVar4 = (Assignment *)new char[0xa8];
    Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_8_ID);
    pAVar5 = pAVar4 + 8;
    if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
      pAVar5 = pAVar4;
    }
    *(int *)pAVar5 = 0;
    iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
    Assignment::setMidiValue(pAVar4,iVar3,true);
    if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
      Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
    }
    else {
      uVar1 = *(uint *)(pAVar4 + 0x60);
      if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
        pAVar5 = pAVar4 + 8;
        if ((uVar1 & 0xfffffffe) == 2) {
          pAVar5 = pAVar4;
        }
        if (*(int *)pAVar5 - 1U < 2) return;
      }
      else if ((uVar1 == 0) &&
              (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
               (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
      return;
      *(unsigned int *)(pAVar4 + 0x80) = 0;
    }
    pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
    Assignment::setMidiType(pAVar4,0xb0);
    Assignment::setMidiID(pAVar4,'-');
    pAVar4[0xa0] = (Assignment)0x0;
    IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005f,0,true);
    ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
    
  }
  if (param_1 != 0) {
    ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
    
  }
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_1_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'.');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 1;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000040,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_2_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'/');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x101;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000047,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_3_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'0');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x201;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000046,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_4_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'1');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x301;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000041,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_5_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'2');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x401;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000045,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_6_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'3');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x501;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000042,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_7_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'4');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x601;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000044,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_BUTTON_8_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'5');
  pAVar4[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar4 + 0x6c) = *(uint *)(pAVar4 + 0x6c) & 0xffff00fe | 0x701;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000043,0,true);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_1_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x0e');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 1;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000000,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_1_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x0f');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000058,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_2_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x10');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x101;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000001,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_2_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x11');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000059,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_3_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x12');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x201;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000002,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_3_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x13');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005a,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_4_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x14');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x301;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000003,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_4_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x15');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005b,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_5_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x16');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x401;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000004,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_5_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x17');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005c,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_6_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x18');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x501;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000005,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_6_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x19');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005d,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_7_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x1a');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x601;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000006,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_7_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x1b');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005e,0,false);
  pAVar5 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar5,0,&ENCODER_KNOB_8_ID);
  *(unsigned int *)(pAVar5 + 4) = 0;
  Assignment::setMidiType(pAVar5,0xb0);
  Assignment::setMidiID(pAVar5,'\x1c');
  pAVar5[0xa0] = (Assignment)0x0;
  *(uint *)(pAVar5 + 0x6c) = *(uint *)(pAVar5 + 0x6c) & 0xffff00fe | 0x701;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar5,0x20000007,0,true);
  pAVar4 = (Assignment *)new char[0xa8];
  Assignment::Assignment(pAVar4,2,&BUTTON_KNOB_CAP_8_ID);
  pAVar5 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar5 = pAVar4;
  }
  *(int *)pAVar5 = 0;
  iVar3 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar3,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar5 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar5 = pAVar4;
      }
      if (*(int *)pAVar5 - 1U < 2) return;
    }
    else if ((uVar1 == 0) &&
            (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
             (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    return;
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  pAVar4[0x70] = (Assignment)((byte)pAVar4[0x70] | 0x40);
  Assignment::setMidiType(pAVar4,0xb0);
  Assignment::setMidiID(pAVar4,'\x1d');
  pAVar4[0xa0] = (Assignment)0x0;
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000005f,0,false);
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = uVar2;
  
}

Knob::~Knob() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
