#include <ni/controller_editor/showDeviceConflictDialog_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::ControllerEditorApp {

void showDeviceConflictDialog(1 param_1, NI::Model* {
uint uVar1;
  void **local_338 [6];
  void **local_308;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned char local_48;
  Model *local_40;
  unsigned long long local_38;
  unsigned int local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_101ab4610;
  uVar1 = (**(code **)(*(long *)(param_1 + 0x7c8) + 0x10))(param_1 + 0x7c8);
  local_40 = param_1;
  if (uVar1 < 2) {
    NWL::Dialog::Dialog((Dialog *)local_338);
    local_338[0] = &PTR__IMultiInstanceDialog_101af5ec0;
    local_308 = &PTR__IMultiInstanceDialog_101af5f58;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 2;
    local_38 = 0xffffffff00000000;
    local_30 = 1;
    IMultiInstanceDialog::showDialog((IMultiInstanceDialog *)local_338);
  }
  else {
    NWL::Dialog::Dialog((Dialog *)local_338);
    local_338[0] = &PTR__IMultiInstanceDialog_101af5ec0;
    local_308 = &PTR__IMultiInstanceDialog_101af5f58;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 1;
    local_38 = 0xffffffff00000000;
    local_30 = 1;
    IMultiInstanceDialog::showDialog((IMultiInstanceDialog *)local_338);
  }
  IMultiInstanceDialog::~IMultiInstanceDialog((IMultiInstanceDialog *)local_338);
  if (*(long *)PTR____stack_chk_guard_101ab4610 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
