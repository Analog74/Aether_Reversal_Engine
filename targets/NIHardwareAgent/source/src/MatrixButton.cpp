#include <ni/controller_editor/MatrixButton.hpp>
namespace NI::NHL2::MaschineJam {

MatrixButton::MatrixButton(unsigned int) {
uint3 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  Assignment *this_00;
  uint uVar5;
  unsigned long uVar6;
  unsigned long uVar7;
  int iVar8;
  unsigned long long local_168;
  unsigned char local_160;
  FormatApply<char> local_158 [16];
  void *local_148;
  unsigned long local_140;
  unsigned int local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  MatrixButton *local_118;
  unsigned long local_110;
  unsigned int local_108;
  char local_103 [3];
  int local_100 [50];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009cc2c8;
  AssignmentMap::AssignmentMap((AssignmentMap *)this,"scene",0);
  *(void ***)this = &PTR__MatrixButton_1009df7f0;
  *(unsigned int *)(this + 0x5c) = 9;
  local_103[2] = ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = 1;
  local_108 = IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior;
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = 2;
  local_168 = 0x100000002;
  local_160 = 0;
  local_130 = param_1 >> 8 & 0xffffff0f;
  uVar7 = (unsigned long)((uint)((byte)param_1 & 7) * 0xc);
  iVar4 = 0;
  local_110 = 0x1000004a;
  local_118 = this;
  do {
    local_134 = 8 - iVar4;
    uVar6 = 0;
    local_12c = iVar4;
    do {
      local_103[0] = (char)uVar6 + 'A';
      local_103[1] = 0;
      local_128 = local_134;
      // boost code
                ((basic_format<char,// std code
                 "Btn%1%%2%");
      GP::DETAIL::FormatApply<char>::apply<char[2],int>
                (local_158,
                 (basic_format<char,// std code
                 local_103,&local_128);
      local_140 = uVar6;
      // boost code
                ((basic_format<char,// std code
      this_00 = (Assignment *)new(0xa8);
      Assignment::Assignment(this_00,2,local_158);
      Assignment::setMidiType(this_00,0x90);
      Assignment::setMidiID(this_00,(uchar)uVar7);
      uVar5 = (int)local_110 + (int)local_140;
      this_00[0xa0] = SUB41(local_130,0);
      IMapAssignmentStorage::addAssignment((IMapAssignmentStorage *)local_118,this_00,uVar5,0,true);
      local_138 = (unsigned int)uVar7;
      uVar5 = uVar5 & 0xefffffff;
      local_100[2]._0_3_ = 0;
      local_100[0] = 0;
      local_100[1] = 0;
      cVar2 = MaschineJam::getLEDForControl
                        (0,uVar5,(basic_format<char,// std code
                                 local_100);
      iVar4 = 0;
      if (cVar2 != '\0') {
        iVar4 = local_100[0];
      }
      local_100[2]._0_3_ = 0;
      local_100[0] = 0;
      local_100[1] = 0;
      cVar2 = MaschineJam::getLEDForControl(0,uVar5,local_100);
      iVar8 = local_100[0];
      local_100[2]._0_3_ = 0;
      local_100[0] = 0;
      local_100[1] = 0;
      cVar3 = MaschineJam::getLEDForControl(0,uVar5,local_100);
      if (cVar2 == '\0') {
        iVar8 = 0;
      }
      local_120 = 0;
      if (cVar3 != '\0') {
        local_120 = local_100[0];
      }
      local_128 = iVar4;
      local_124 = iVar8;
      IMapAssignmentStorage::addRGBChildAssignments
                ((IMapAssignmentStorage *)local_118,this_00,&local_168,&local_128,0);
      uVar1 = (uint3)((uint)local_138 >> 8);
      cVar2 = (char)local_138 + '\x01';
      uVar7 = (unsigned long)CONCAT31(uVar1,cVar2);
      iVar4 = (int)local_140;
      if (cVar2 < '\0') {
        this_00[0xa2] = (Assignment)0x0;
        uVar7 = 0((uint7)uVar1,0x7f);
      }
      if (((byte)local_158[0] & 1) != 0) {
        delete(local_148);
      }
      uVar5 = iVar4 + 1;
      uVar6 = (unsigned long)uVar5;
    } while (uVar5 != 8);
    iVar4 = local_12c + 1;
    local_110 = (unsigned long)((int)local_110 - 8);
  } while (iVar4 != 8);
  IButtonAssignment::getDefaultButtonBehaviorInternal()::s_eDefaultButtonBehavior = local_108;
  ILEDControl::getDefaultLEDOnIfButtonDown()::s_bDefaultLEDOnIfButtonDown = local_103[2];
  if (*(long *)PTR____stack_chk_guard_1009cc2c8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  
}

MatrixButton::~MatrixButton() {
AssignmentMap::~AssignmentMap((AssignmentMap *)this);
  delete(this);
  return;
}
}
