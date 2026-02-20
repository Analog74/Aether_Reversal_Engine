#include <ni/controller_editor/addPageAtIndex_unsigned_int__pugi.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::MapHandler {

void addPageAtIndex(1 param_1, unsigned int, pugi::xml_node&, unsigned long {
unsigned int uVar1;
  long *plVar2;
  unsigned long long uVar3;
  _func_void_xml_node_ptr_ptr_ptr *p_Var4;
  long lVar5;
  unsigned long uVar6;
  unsigned long long local_48;
  unsigned long long uStack_40;
  void *local_38;
  
  // std code
  uVar1 = *(unsigned int *)(this + 0x124);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = (void *)0x0;
  (**(code **)(**(long **)(this + 0x200) + 0xe8))
            (*(long **)(this + 0x200),param_1,uVar1,&local_48,1);
  if ((local_48 & 1) != 0) {
    delete(local_38);
  }
  uVar3 = pugi::xml_node::first_child((xml_node *)param_2);
  *(unsigned long long *)param_2 = uVar3;
  p_Var4 = pugi::xml_node::operator_cast_to_function_pointer((xml_node *)param_2);
  if (p_Var4 != (_func_void_xml_node_ptr_ptr_ptr *)0x0) {
    lVar5 = (**(code **)(**(long **)(this + 0x200) + 0xb8))(*(long **)(this + 0x200),param_1,uVar1);
    (**(code **)(**(long **)(lVar5 + 0x38) + 0x38))(*(long **)(lVar5 + 0x38),param_2,1);
  }
  uVar6 = (**(code **)(**(long **)(this + 0x200) + 200))(*(long **)(this + 0x200),param_1,uVar1);
  if (uVar6 != param_3) {
    plVar2 = *(long **)(this + 0x200);
    uVar3 = (**(code **)(*plVar2 + 200))(plVar2,param_1,uVar1);
    (**(code **)(*plVar2 + 0x100))(plVar2,param_1,uVar1,uVar3,param_3);
  }
  local_48 = CONCAT44(param_1,3);
  (**(code **)(*(long *)this + 0x110))(this,&local_48);
  // std code
  (**(code **)(*(long *)(this + 8) + 0x10))(this + 8,param_1,0);
  return;
}
}
