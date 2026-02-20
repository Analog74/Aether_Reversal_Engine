#include <ni/controller_editor/dir_itr_imp.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::filesystem::detail {

dir_itr_imp::~dir_itr_imp() {
int iVar1;
  int *piVar2;
  
  if (*(void **)(this + 0x38) != (void *)0x0) {
    _free(*(void **)(this + 0x38));
    *(unsigned long long *)(this + 0x38) = 0;
  }
  if (*(long *)(this + 0x30) != 0) {
    *(unsigned long long *)(this + 0x30) = 0;
    iVar1 = _closedir();
    if (iVar1 != 0) {
      piVar2 = ___error();
      if (*(unsigned long *)((char*)PTR_instance_101ab4088 + 8) >> 1 != 0x595588bd12bf6fe8) {
        (**(code **)(*(long *)(char*)PTR_instance_101ab4088 + 0x30))(PTR_instance_101ab4088,*piVar2);
      }
    }
  }
  // FIXED: if ((byte)this[8] & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x18));
  return;
}
}
