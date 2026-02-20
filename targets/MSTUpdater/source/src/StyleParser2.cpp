#include <ni/controller_editor/StyleParser2.hpp>
namespace NI::NWL::StyleGrammar::onStateSelector(NI::NWL {

void StyleParser2::tStateSelector const&) {
tStateSelector *ptVar1;
  
  ptVar1 = *(tStateSelector **)(this + 0x1070);
  if (ptVar1 != *(tStateSelector **)(this + 0x1078)) {
    *ptVar1 = *param_1;
    // std code
    *(long *)(this + 0x1070) = *(long *)(this + 0x1070) + 0x20;
    return;
  }
  // std code
  vector<NI::NWL::StyleParser2::tStateSelector,// std code
  ::__push_back_slow_path<NI::NWL::StyleParser2::tStateSelector_const&>
            ((vector<NI::NWL::StyleParser2::tStateSelector,// std code
              *)(this + 0x1068),param_1);
  return;
}
}
