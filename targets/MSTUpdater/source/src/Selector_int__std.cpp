#include <ni/controller_editor/Selector_int__std.hpp>
namespace NI::NWL::Selector {

void Selector(int, std::string) {
ni::symbol::symbol((symbol *)this);
  ni::symbol::symbol((symbol *)(this + 8));
  ni::symbol::symbol((symbol *)(this + 0x10));
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(Selector **)(this + 0x18) = this + 0x20;
  *(Selector **)(this + 0x30) = this + 0x30;
  *(Selector **)(this + 0x38) = this + 0x30;
  *(unsigned long long *)(this + 0x40) = 0;
  StateSelector::StateSelector((StateSelector *)(this + 0x48));
  ni::symbol::symbol((symbol *)(this + 0x68),param_3);
  *(unsigned int *)(this + 0x70) = param_1;
  return;
}
}
