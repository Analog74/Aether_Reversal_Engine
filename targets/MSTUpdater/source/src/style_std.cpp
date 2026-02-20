#include <ni/controller_editor/style_std.hpp>
namespace NI::NWL::Label {

void style(std::string const&, char const*) {
void **local_98;
  Label *local_90;
  __func<NI::NWL::Label::style(// std code
  *local_78;
  long local_68 [4];
  function<void(NI::NWL::Label_const&,NI::NWL::PaintContext&)> *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1002272e0;
  local_98 = &PTR____func_100229468;
  local_90 = this;
  local_78 = (__func<NI::NWL::Label::style(// std code
              *)&local_98;
  local_48 = (function<void(NI::NWL::Label_const&,NI::NWL::PaintContext&)> *)local_68;
  // std code
  __func<NI::NWL::Label::style(// std code
  ::__clone((__func<NI::NWL::Label::style(// std code
             *)&local_98,(__base *)local_68);
  // std code
            ((function<void(NI::NWL::Label_const&,NI::NWL::PaintContext&)> *)local_68,
             (function *)(this + 0x280));
  if (local_48 == (function<void(NI::NWL::Label_const&,NI::NWL::PaintContext&)> *)local_68) {
    (**(code **)(local_68[0] + 0x20))(local_68);
  }
  else if (local_48 != (function<void(NI::NWL::Label_const&,NI::NWL::PaintContext&)> *)0x0) {
    (**(code **)(*(long *)local_48 + 0x28))();
  }
  Widget::setInvalid((Widget *)this,0);
  if (local_78 ==
      (__func<NI::NWL::Label::style(// std code
       *)&local_98) {
    (*(code *)local_98[4])(&local_98);
  }
  else if (local_78 !=
           (__func<NI::NWL::Label::style(// std code
            *)0x0) {
    (**(code **)(*(long *)local_78 + 0x28))();
  }
  TextPanel<NI::NWL::Label>::setText((TextPanel<NI::NWL::Label> *)this,param_1);
  Widget::styleDefault((Widget *)this,param_2);
  if (*(long *)PTR____stack_chk_guard_1002272e0 == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}
}
