#include <ni/controller_editor/WindowingPane.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

WindowingPane::WindowingPane() {
Pane::Pane((Pane *)this);
  *(void ***)this = &PTR__WindowingPane_101b0a740;
  
}

WindowingPane::~WindowingPane() {
Pane::~Pane((Pane *)this);
  delete(this);
  return;
}
}
