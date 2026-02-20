#include <ni/controller_editor/setItem_int__bmidilib.hpp>
namespace Bome::BList<bmidilib::Port*> {

void setItem(int, bmidilib::Port* const&) {
*(Port **)(*(long *)(this + 8) + (long)param_1 * 8) = *param_2;
  return;
}
}
