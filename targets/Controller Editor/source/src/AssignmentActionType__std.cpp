#include <ni/controller_editor/AssignmentActionType__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::MidiAssignmentPanel::addTypeMenuEntry(int, NI {

void AssignmentActionType, std::string const&) {
long *plVar1;
  long lVar2;
  long lVar3;
  MenuBar *local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  unsigned int local_7b;
  void3 uStack_77;
  unsigned char local_6d;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101ab4610;
  NWL::ButtonMenu::getMenuBar();
  NWL::ButtonMenu::getMenuBar();
  lVar2 = *local_a0;
  lVar3 = local_a0[1];
  local_48 = (long *)0x0;
  local_48 = (long *)new char[0x30];
  *local_48 = (long)&PTR____func_101afcc60;
  local_48[1] = (long)changeType;
  local_48[2] = 0;
  local_48[3] = (long)this;
  *(unsigned int *)(local_48 + 4) = param_1;
  *(int *)((long)local_48 + 0x24) = (int)((unsigned long)(lVar3 - lVar2) >> 4) * -0x49249249;
  *(unsigned char *)(local_48 + 5) = param_3;
  local_6d = (unsigned char)((uint)local_7b >> 0x18);
  *(unsigned int *)((long)local_48 + 0x29) = local_7b;
  *(uint *)((long)local_48 + 0x2c) = CONCAT31(uStack_77,local_6d);
  NWL::MenuBar::addItem(local_b0,param_4,(function *)local_68);
  if (local_68 == local_48) {
    (**(code **)(*local_48 + 0x20))();
  }
  else if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x28))();
  }
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar1 = local_98 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      // std code
    }
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      // std code
    }
  }
  if (*(long *)PTR____stack_chk_guard_101ab4610 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}
}
