#include <ni/controller_editor/add_bmidilib.hpp>
namespace Bome::BList<bmidilib::Port*> {

void add(bmidilib::Port* const&) {
int iVar1;
  Port *pPVar2;
  
  makeRoom(this);
  pPVar2 = *param_1;
  iVar1 = *(int *)(this + 0x10);
  *(int *)(this + 0x10) = iVar1 + 1;
  *(Port **)(*(long *)(this + 8) + (long)iVar1 * 8) = pPVar2;
  return;
}
}
