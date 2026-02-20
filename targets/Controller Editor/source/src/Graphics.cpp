#include <ni/controller_editor/Graphics.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Maschine {

void Graphics::deInitFonts() {
ni::detail::reset<NI::UIA::Font>(this + 0x50);
  ni::detail::reset<NI::UIA::Font>(this);
  ni::detail::reset<NI::UIA::Font>(this + 0xa0);
  ni::detail::reset<NI::UIA::Font>(this + 400);
  ni::detail::reset<NI::UIA::Font>(this + 0xf0);
  ni::detail::reset<NI::UIA::Font>(this + 0x140);
  return;
}

Graphics::~Graphics() {
if (((byte)this[0x1b8] & 1) != 0) {
    delete(*(void **)(this + 0x1c8));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x198),*(__tree_node **)(this + 0x1a0));
  if (((byte)this[0x168] & 1) != 0) {
    delete(*(void **)(this + 0x178));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x148),*(__tree_node **)(this + 0x150));
  if (((byte)this[0x118] & 1) != 0) {
    delete(*(void **)(this + 0x128));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0xf8),*(__tree_node **)(this + 0x100));
  // FIXED: if ((byte)this[200] & 1) != 0) {
    delete(*(void **)(this + 0xd8));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0xa8),*(__tree_node **)(this + 0xb0));
  if (((byte)this[0x78] & 1) != 0) {
    delete(*(void **)(this + 0x88));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 0x58),*(__tree_node **)(this + 0x60));
  if (((byte)this[0x28] & 1) != 0) {
    delete(*(void **)(this + 0x38));
  }
  // std code
  __tree<// std code
  ::destroy((__tree<// std code
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}
}
