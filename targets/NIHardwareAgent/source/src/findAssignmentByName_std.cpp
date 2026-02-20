#include <ni/controller_editor/findAssignmentByName_std.hpp>
namespace NI::NHL2::MapHandler {

void findAssignmentByName(std::string const&) const {
unsigned int uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  // std code
  lVar4 = (**(code **)(**(long **)(this + 0x200) + 0x20))(*(long **)(this + 0x200),param_1);
  uVar1 = *(unsigned int *)(this + 0x124);
  uVar3 = (**(code **)(**(long **)(this + 0x200) + 0x98))();
  if ((lVar4 == 0) && (uVar3 != 0)) {
    iVar5 = 0;
    do {
      lVar4 = (**(code **)(**(long **)(this + 0x200) + 0xb8))(*(long **)(this + 0x200),iVar5,uVar1);
      if ((lVar4 == 0) || (plVar2 = *(long **)(lVar4 + 0x38), plVar2 == (long *)0x0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
      }
    } while ((iVar5 + 1U < uVar3) && (iVar5 = iVar5 + 1, lVar4 == 0));
  }
  // std code
  return lVar4 != 0;
}
}
