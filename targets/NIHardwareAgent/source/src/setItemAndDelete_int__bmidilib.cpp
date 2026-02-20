#include <ni/controller_editor/setItemAndDelete_int__bmidilib.hpp>
namespace Bome::BList<bmidilib::Port*> {

void setItemAndDelete(int, bmidilib::Port* const&) {
long lVar1;
  Port *this_00;
  long lVar2;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = (long)param_1;
  this_00 = *(Port **)(lVar1 + lVar2 * 8);
  if (this_00 != (Port *)0x0) {
    bmidilib::Port::~Port(this_00);
    delete(this_00);
    *(unsigned long long *)(lVar1 + lVar2 * 8) = 0;
  }
  *(Port **)(lVar1 + lVar2 * 8) = *param_2;
  return;
}
}
