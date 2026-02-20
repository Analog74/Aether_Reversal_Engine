#include <ni/controller_editor/std_category.hpp>
namespace boost::system::detail {

void std_category::default_error_condition(int) const {
long *plVar1;
  long *plVar2;
  long extraout_RDX;
  unsigned int in_register_0000003c;
  bool bVar3;
  unsigned char auVar4 [16];
  
  auVar4._0_4_ = (**(code **)(**(long **)(CONCAT44(in_register_0000003c,param_1) + 8) + 8))();
  auVar4._4_4_ = 0;
  if (extraout_RDX != 0) {
    if (*(long *)(extraout_RDX + 8) == -0x4d54ee85da81202f) {
      plVar1 = (long *)// std code
      goto LAB_1002f303d;
    }
    if (*(long *)(extraout_RDX + 8) != -0x4d54ee85da812030) {
      plVar1 = *(long **)(extraout_RDX + 0x10);
      if (*(long **)(extraout_RDX + 0x10) == (long *)0x0) {
        plVar1 = (long *)new(0x10);
        *plVar1 = (long)(PTR_vtable_1009cc240 + 0x10);
        plVar1[1] = extraout_RDX;
        LOCK();
        plVar2 = *(long **)(extraout_RDX + 0x10);
        bVar3 = plVar2 == (long *)0x0;
        if (bVar3) {
          *(long **)(extraout_RDX + 0x10) = plVar1;
          plVar2 = (long *)0x0;
        }
        UNLOCK();
        if (!bVar3) {
          (**(code **)(*plVar1 + 8))(plVar1);
          plVar1 = plVar2;
        }
      }
      goto LAB_1002f303d;
    }
  }
  plVar1 = (long *)// std code
LAB_1002f303d:
  auVar4._8_8_ = plVar1;
  return auVar4;
}

std_category::~std_category() {
// std code
  delete(this);
  return;
}
}
