#include <ni/controller_editor/Label.hpp>
namespace non-virtual thunk to NI::NWL {

Label::~Label() {
TextPanel<NI::NWL::Label>::~TextPanel((TextPanel<NI::NWL::Label> *)(this + -0x60));
  delete((TextPanel<NI::NWL::Label> *)(this + -0x60));
  return;
}
}
