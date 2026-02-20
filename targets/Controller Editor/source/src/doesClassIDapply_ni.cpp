#include <ni/controller_editor/doesClassIDapply_ni.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::ClassSelector {

void doesClassIDapply(ni::symbol) const {
uint uVar1;
  void *pvVar2;
  unsigned long extraout_RDX;
  unsigned long uVar3;
  unsigned long uVar4;
  long extraout_RDX_00;
  unsigned long uVar5;
  unsigned char auVar6 [16];
  unsigned char auVar7 [16];
  long local_30;
  
  if (*(long *)this == param_2) {
    return true;
  }
  if (*(long *)this != emptyStdString) {
    local_30 = param_2;
    auVar6 = ni::symbol::std_string_view((symbol *)&local_30);
    if (auVar6._8_8_ == 0) {
      uVar5 = 0xffffffffffffffff;
      ni::symbol::std_string_view((symbol *)this);
      if (extraout_RDX_00 != -1) {
        return false;
      }
    }
    else {
      pvVar2 = _memchr(auVar6._0_8_,0x3c,auVar6._8_8_);
      uVar5 = -(unsigned long)(pvVar2 == (void *)0x0) | (long)pvVar2 - (long)auVar6._0_8_;
      ni::symbol::std_string_view((symbol *)this);
      if (uVar5 != extraout_RDX) {
        return false;
      }
    }
    auVar6 = ni::symbol::std_string_view((symbol *)&local_30);
    auVar7 = ni::symbol::std_string_view((symbol *)this);
    uVar3 = auVar7._8_8_;
    if (auVar6._8_8_ < uVar5) {
      uVar5 = auVar6._8_8_;
    }
    uVar4 = uVar5;
    if (uVar3 < uVar5) {
      uVar4 = uVar3;
    }
    if ((uVar4 == 0) || (uVar1 = _memcmp(auVar6._0_8_,auVar7._0_8_,uVar4), uVar1 == 0)) {
      uVar1 = (uint)(uVar5 != uVar3);
    }
    return uVar1 == 0;
  }
  return true;
}
}
