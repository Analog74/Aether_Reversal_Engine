#include <ni/controller_editor/Page.hpp>
namespace NI::NHL2::Traktor::KontrolZ2 {

Page::Page(unsigned int) {
uint uVar1;
  int iVar2;
  Assignment *pAVar3;
  Assignment *pAVar4;
  unsigned long long *puVar5;
  long lVar6;
  unsigned long uVar7;
  long lVar8;
  uchar uVar9;
  unsigned long long *puVar10;
  uint uVar11;
  unsigned long uVar12;
  size_t sVar13;
  unsigned long long local_88;
  unsigned char local_80;
  unsigned int local_78;
  unsigned int local_74;
  unsigned int local_70;
  unsigned long long *local_68;
  uint local_5c;
  Page *local_58;
  unsigned char local_49;
  unsigned long long *local_48;
  unsigned long long *puStack_40;
  unsigned long long *local_38;
  
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"page",0);
  *(void ***)this = &PTR__Page_1009e5490;
  local_49 = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 0;
  local_48 = (unsigned long long *)0x0;
  puStack_40 = (unsigned long long *)0x0;
  local_38 = (unsigned long long *)0x0;
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_DW_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '5';
  if (param_1 == 0) {
    uVar9 = '\0';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000006,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_FX_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '6';
  if (param_1 == 0) {
    uVar9 = '\x01';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000007,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_SELECT_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_100189b5c:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar11 = *(uint *)(pAVar4 + 0x60);
    if ((uVar11 - 2 < 2) || (uVar11 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar11 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_100189b81;
      goto LAB_100189b5c;
    }
    if ((uVar11 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_100189b5c;
LAB_100189b81:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '7';
  if (param_1 == 0) {
    uVar9 = '\x02';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000011,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_DECK_C_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '8';
  if (param_1 == 0) {
    uVar9 = '\x03';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000014,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,4,&DIAL_LEFT_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '9';
  if (param_1 == 0) {
    uVar9 = '\x04';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x40000001,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&BUTTON_LEFT_DIAL_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'j' - (param_1 == 0));
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x20);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x10000016,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_C_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_100189d8d:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar11 = *(uint *)(pAVar4 + 0x60);
    if ((uVar11 - 2 < 2) || (uVar11 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar11 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_100189db2;
      goto LAB_100189d8d;
    }
    if ((uVar11 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_100189d8d;
LAB_100189db2:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = ':';
  if (param_1 == 0) {
    uVar9 = '\x05';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000018,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_A_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_100189e8b:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar11 = *(uint *)(pAVar4 + 0x60);
    if ((uVar11 - 2 < 2) || (uVar11 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar11 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_100189eb0;
      goto LAB_100189e8b;
    }
    if ((uVar11 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_100189e8b;
LAB_100189eb0:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = ';';
  if (param_1 == 0) {
    uVar9 = '\x06';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000019,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_1_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_100189f90:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar11 = *(uint *)(pAVar4 + 0x60);
    if ((uVar11 - 2 < 2) || (uVar11 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar11 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_100189fb5;
      goto LAB_100189f90;
    }
    if ((uVar11 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_100189f90;
LAB_100189fb5:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '<';
  if (param_1 == 0) {
    uVar9 = '\a';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  local_5c = param_1;
  local_58 = this;
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x1a;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x1a;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000001a,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_2_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018a195:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018a1ba;
      goto LAB_10018a195;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018a195;
LAB_10018a1ba:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '=';
  if (uVar11 == 0) {
    uVar9 = '\b';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x1b;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x1b;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000001b,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_3_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018a393:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018a3b8;
      goto LAB_10018a393;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018a393;
LAB_10018a3b8:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '>';
  if (uVar11 == 0) {
    uVar9 = '\t';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x1c;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x1c;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000001c,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_4_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018a591:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018a5b6;
      goto LAB_10018a591;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018a591;
LAB_10018a5b6:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '?';
  if (uVar11 == 0) {
    uVar9 = '\n';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x1d;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x1d;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000001d,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_MACRO_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018a788:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018a7ad;
      goto LAB_10018a788;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018a788;
LAB_10018a7ad:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '@';
  if (uVar11 == 0) {
    uVar9 = '\v';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000001e,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_GAIN_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'A';
  if (uVar11 == 0) {
    uVar9 = '\f';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000008,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_HI_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'B';
  if (uVar11 == 0) {
    uVar9 = '\r';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000009,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_MID_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'C';
  if (uVar11 == 0) {
    uVar9 = '\x0e';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000a,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_LOW_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'D';
  if (uVar11 == 0) {
    uVar9 = '\x0f';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000b,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_FILTER_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'E';
  if (uVar11 == 0) {
    uVar9 = '\x10';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000c,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_FX_1_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018aa93:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018aab8;
      goto LAB_10018aa93;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018aa93;
LAB_10018aab8:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'F';
  if (uVar11 == 0) {
    uVar9 = '\x11';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000012,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_LEFT_FX_2_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018ab91:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018abb6;
      goto LAB_10018ab91;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018ab91;
LAB_10018abb6:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'G';
  if (uVar11 == 0) {
    uVar9 = '\x12';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000013,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_LEFT_FADER_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'H';
  if (uVar11 == 0) {
    uVar9 = '\x14';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x10);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000016,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_SNAP_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018acfc:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018ad21;
      goto LAB_10018acfc;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018acfc;
LAB_10018ad21:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'I';
  if (uVar11 == 0) {
    uVar9 = '\x15';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000002,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_QUANTIZE_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018adfa:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018ae1f;
      goto LAB_10018adfa;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018adfa;
LAB_10018ae1f:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'K';
  if (uVar11 == 0) {
    uVar9 = '\x17';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000004,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,4,&DIAL_MIDDLE_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'L';
  if (uVar11 == 0) {
    uVar9 = '\x18';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x40000000,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&BUTTON_MIDDLE_DIAL_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'l' - (uVar11 == 0));
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x20);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x10000007,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_LOAD_A_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018afc2:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018afe7;
      goto LAB_10018afc2;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018afc2;
LAB_10018afe7:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'M';
  if (uVar11 == 0) {
    uVar9 = '\x19';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000008,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_LOAD_B_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b0c0:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b0e5;
      goto LAB_10018b0c0;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b0c0;
LAB_10018b0e5:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'N';
  if (uVar11 == 0) {
    uVar9 = '\x1a';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000009,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_REL_A_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b1be:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b1e3;
      goto LAB_10018b1be;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b1be;
LAB_10018b1e3:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'O';
  if (uVar11 == 0) {
    uVar9 = '\x1b';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000000c,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_REL_B_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b2bc:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b2e1;
      goto LAB_10018b2bc;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b2bc;
LAB_10018b2e1:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'P';
  if (uVar11 == 0) {
    uVar9 = '\x1c';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000000d,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_SYNC_A_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b3ba:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b3df;
      goto LAB_10018b3ba;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b3ba;
LAB_10018b3df:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'Q';
  if (uVar11 == 0) {
    uVar9 = '\x1d';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000000e,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_MIDDLE_SYNC_B_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b4b8:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b4dd;
      goto LAB_10018b4b8;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b4b8;
LAB_10018b4dd:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'R';
  if (uVar11 == 0) {
    uVar9 = '\x1e';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000000f,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_MIDDLE_XFADER_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'S';
  if (uVar11 == 0) {
    uVar9 = '\x1f';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000018,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_GAIN_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'T';
  if (uVar11 == 0) {
    uVar9 = ' ';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000f,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_HI_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'U';
  if (uVar11 == 0) {
    uVar9 = '!';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000010,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_MID_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'V';
  if (uVar11 == 0) {
    uVar9 = '\"';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000011,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_LOW_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'W';
  if (uVar11 == 0) {
    uVar9 = '#';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000012,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_FILTER_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'X';
  if (uVar11 == 0) {
    uVar9 = '$';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000013,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_FX_1_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b82c:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b851;
      goto LAB_10018b82c;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b82c;
LAB_10018b851:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'Y';
  if (uVar11 == 0) {
    uVar9 = '%';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000029,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_FX_2_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018b92a:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018b94f;
      goto LAB_10018b92a;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018b92a;
LAB_10018b94f:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'Z';
  if (uVar11 == 0) {
    uVar9 = '&';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x1000002a,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_FADER_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '[';
  if (uVar11 == 0) {
    uVar9 = '\'';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x10);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000017,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_DW_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '\\';
  if (uVar11 == 0) {
    uVar9 = '(';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000d,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_FX_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = ']';
  if (uVar11 == 0) {
    uVar9 = ')';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x2000000e,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_SELECT_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018bb67:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018bb8c;
      goto LAB_10018bb67;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018bb67;
LAB_10018bb8c:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = '^';
  if (uVar11 == 0) {
    uVar9 = '*';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000028,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,0,&POTI_RIGHT_DECK_D_ID);
  *(unsigned int *)(pAVar3 + 4) = 1;
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = '_';
  if (uVar11 == 0) {
    uVar9 = '+';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x20000015,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,4,&DIAL_RIGHT_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  uVar9 = 'a';
  if (uVar11 == 0) {
    uVar9 = '-';
  }
  Assignment::setMidiID(pAVar3,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x40000002,0,true);
  pAVar3 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar3,2,&BUTTON_RIGHT_DIAL_ID);
  pAVar3[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar3,0xb0);
  Assignment::setMidiID(pAVar3,'n' - (uVar11 == 0));
  pAVar3[0x70] = (Assignment)((byte)pAVar3[0x70] | 0x20);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar3,0x1000002d,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_B_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018bd98:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018bdbd;
      goto LAB_10018bd98;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018bd98;
LAB_10018bdbd:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'b';
  if (uVar11 == 0) {
    uVar9 = '.';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000021,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_D_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018be96:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018bebb;
      goto LAB_10018be96;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018be96;
LAB_10018bebb:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'c';
  if (uVar11 == 0) {
    uVar9 = '/';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000022,0,true);
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_1_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018bf9b:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018bfc0;
      goto LAB_10018bf9b;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018bf9b;
LAB_10018bfc0:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'd';
  if (uVar11 == 0) {
    uVar9 = '0';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x23;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x23;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000023,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_2_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018c199:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018c1be;
      goto LAB_10018c199;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018c199;
LAB_10018c1be:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'e';
  if (uVar11 == 0) {
    uVar9 = '1';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x24;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x24;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000024,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_3_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018c397:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018c3bc;
      goto LAB_10018c397;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018c397;
LAB_10018c3bc:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'f';
  if (uVar11 == 0) {
    uVar9 = '2';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x25;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x25;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000025,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_4_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (*(int *)(pAVar4 + 0x84) - 0x10U < 5) {
LAB_10018c595:
    Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
  }
  else {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018c5ba;
      goto LAB_10018c595;
    }
    if ((uVar1 == 0) &&
       (((*(uint *)(pAVar4 + 0x70) & 8) != 0 ||
        (((*(uint *)(pAVar4 + 0x70) & 2) != 0 && (*(int *)(pAVar4 + 4) == 1))))))
    goto LAB_10018c595;
LAB_10018c5ba:
    *(unsigned int *)(pAVar4 + 0x80) = 0;
  }
  uVar9 = 'g';
  if (uVar11 == 0) {
    uVar9 = '3';
  }
  pAVar3 = pAVar4;
  Assignment::setMidiID(pAVar4,uVar9);
  if (puStack_40 < local_38) {
    *puStack_40 = pAVar4;
    *(unsigned int *)(puStack_40 + 1) = 0x26;
    puStack_40 = puStack_40 + 2;
  }
  else {
    sVar13 = (long)puStack_40 - (long)local_48;
    lVar8 = (long)sVar13 >> 4;
    uVar12 = lVar8 + 1;
    if (0xfffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
      // std code
    }
    uVar7 = (long)local_38 - (long)local_48 >> 3;
    if (uVar7 < uVar12) {
      uVar7 = uVar12;
    }
    if (0x7fffffffffffffe < (unsigned long)((long)local_38 - (long)local_48 >> 4)) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      puVar5 = (unsigned long long *)0x0;
      puVar10 = local_48;
    }
    else {
      local_68 = local_48;
      if (0xfffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      puVar5 = (unsigned long long *)new(uVar7 << 4);
      puVar10 = local_68;
    }
    puVar5[lVar8 * 2] = pAVar4;
    *(unsigned int *)(puVar5 + lVar8 * 2 + 1) = 0x26;
    if (0 < (long)sVar13) {
      memcpy(puVar5,puVar10,sVar13);
    }
    this = local_58;
    local_48 = puVar5;
    puStack_40 = puVar5 + lVar8 * 2 + 2;
    local_38 = puVar5 + uVar7 * 2;
    if (puVar10 != (unsigned long long *)0x0) {
      delete(puVar10);
    }
  }
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000026,0,true);
  uVar11 = local_5c;
  pAVar4 = (Assignment *)new(0xa8);
  Assignment::Assignment(pAVar4,2,&BUTTON_RIGHT_MACRO_ID);
  pAVar4[0xa0] = (Assignment)0x3;
  Assignment::setMidiType(pAVar4,0xb0);
  pAVar3 = pAVar4 + 8;
  if ((*(uint *)(pAVar4 + 0x60) & 0xfffffffe) == 2) {
    pAVar3 = pAVar4;
  }
  *(int *)pAVar3 = 0;
  iVar2 = Assignment::boundValueToMinMax(pAVar4,*(int *)(pAVar4 + 0x90));
  Assignment::setMidiValue(pAVar4,iVar2,true);
  if (4 < *(int *)(pAVar4 + 0x84) - 0x10U) {
    uVar1 = *(uint *)(pAVar4 + 0x60);
    if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
      pAVar3 = pAVar4 + 8;
      if ((uVar1 & 0xfffffffe) == 2) {
        pAVar3 = pAVar4;
      }
      if (1 < *(int *)pAVar3 - 1U) goto LAB_10018c7b1;
    }
    else if ((uVar1 != 0) ||
            (((*(uint *)(pAVar4 + 0x70) & 8) == 0 &&
             (((*(uint *)(pAVar4 + 0x70) & 2) == 0 || (*(int *)(pAVar4 + 4) != 1)))))) {
LAB_10018c7b1:
      *(unsigned int *)(pAVar4 + 0x80) = 0;
      goto LAB_10018c7bb;
    }
  }
  Assignment::setExternalMidiValue(pAVar4,*(int *)(pAVar4 + 0x80));
LAB_10018c7bb:
  uVar9 = 'h';
  if (uVar11 == 0) {
    uVar9 = '4';
  }
  Assignment::setMidiID(pAVar4,uVar9);
  IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)this,pAVar4,0x10000027,0,true);
  if (puStack_40 != local_48) {
    lVar8 = 8;
    uVar12 = 0;
    do {
      local_80 = 1;
      local_88 = 0x100000002;
      uVar11 = *(int *)((long)local_48 + lVar8) - 0x1a;
      local_74 = 0x1c;
      local_78 = 0x1c;
      local_70 = 0x1c;
      if (uVar11 < 0xd) {
        lVar6 = (long)(int)uVar11;
        local_74 = *(unsigned int *)(&0 + lVar6 * 4);
        local_78 = *(unsigned int *)(&0 + lVar6 * 4);
        local_70 = *(unsigned int *)(&0 + lVar6 * 4);
      }
      IMapAssignmentStorage::addRGBChildAssignments
                ((IMapAssignmentStorage *)local_58,*(unsigned long long *)((long)local_48 + lVar8 + -8),
                 &local_88,&local_78,3);
      uVar12 = uVar12 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar12 < (unsigned long)((long)puStack_40 - (long)local_48 >> 4));
  }
  if (local_48 != (unsigned long long *)0x0) {
    puStack_40 = local_48;
    delete(local_48);
  }
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = local_49;
  
}

Page::~Page() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
