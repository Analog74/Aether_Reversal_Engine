#include <ni/controller_editor/dir_itr_imp_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::intrusive_ptr<boost::filesystem::detail {

void dir_itr_imp>::~intrusive_ptr() {
int *piVar1;
  detail local_28 [24];
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      filesystem::detail::dir_itr_close(local_28,(void **)(piVar1 + 0xc),(void **)(piVar1 + 0xe));
      if ((*(byte *)(piVar1 + 2) & 1) != 0) {
        delete(*(void **)(piVar1 + 6));
      }
      delete(piVar1);
    }
  }
  return;
}
}
