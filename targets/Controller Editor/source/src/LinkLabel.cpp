#include <ni/controller_editor/LinkLabel.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace non-virtual thunk to NI {

LinkLabel::~LinkLabel() {
*(void ***)(this + -0x60) = &PTR__LinkLabel_101af5640;
  *(void ***)this = &PTR__LinkLabel_101af5728;
  if (((byte)this[0x380] & 1) != 0) {
    delete(*(void **)(this + 0x390));
  }
  if (((byte)this[0x368] & 1) != 0) {
    delete(*(void **)(this + 0x378));
  }
  NWL::Label::~Label((Label *)(this + -0x60));
  delete((Label *)(this + -0x60));
  return;
}
}
