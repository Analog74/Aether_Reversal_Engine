#include <ni/controller_editor/WindowingPane.hpp>
namespace NI::NWL {

WindowingPane::WindowingPane() {
Pane::Pane((Pane *)this);
  *(void ***)this = &PTR__WindowingPane_100228778;
  
}

WindowingPane::~WindowingPane() {
Pane::~Pane((Pane *)this);
  delete(this);
  return;
}
}
