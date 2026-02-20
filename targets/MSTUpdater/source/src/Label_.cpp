#include <ni/controller_editor/Label_.hpp>
namespace non-virtual thunk to NI::NWL::WidgetTemplate<NI::NWL {

void Label>::~WidgetTemplate() {
WidgetTemplate<NI::NWL::Label> *pWVar1;
  
  *(void ***)(this + -0x60) = &PTR__WidgetTemplate_100236b38;
  *(void ***)this = &PTR__WidgetTemplate_100236c18;
  pWVar1 = *(WidgetTemplate<NI::NWL::Label> **)(this + 0x270);
  if (pWVar1 == this + 0x250) {
    (**(code **)(*(long *)pWVar1 + 0x20))();
  }
  else if (pWVar1 != (WidgetTemplate<NI::NWL::Label> *)0x0) {
    (**(code **)(*(long *)pWVar1 + 0x28))();
  }
  pWVar1 = *(WidgetTemplate<NI::NWL::Label> **)(this + 0x240);
  if (pWVar1 == this + 0x220) {
    (**(code **)(*(long *)pWVar1 + 0x20))();
  }
  else if (pWVar1 != (WidgetTemplate<NI::NWL::Label> *)0x0) {
    (**(code **)(*(long *)pWVar1 + 0x28))();
  }
  Widget::~Widget((Widget *)(this + -0x60));
  delete((Widget *)(this + -0x60));
  return;
}
}
