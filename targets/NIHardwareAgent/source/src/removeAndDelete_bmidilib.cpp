#include <ni/controller_editor/removeAndDelete_bmidilib.hpp>
namespace Bome::BList<bmidilib::Port*> {

void removeAndDelete(bmidilib::Port* const&) {
long lVar1;
  int iVar2;
  
  iVar2 = -1;
  if (0 < *(int *)(this + 0x10)) {
    lVar1 = 0;
    do {
      if (*(Port **)(*(long *)(this + 8) + lVar1 * 8) == *param_1) {
        iVar2 = (int)lVar1;
        break;
      }
      lVar1 = lVar1 + 1;
    } while (*(int *)(this + 0x10) != (int)lVar1);
  }
  removeAndDelete(this,iVar2,1);
  return;
}
}
