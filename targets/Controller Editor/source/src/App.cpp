#include <ni/controller_editor/App.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL {

App::~App() {
UIA::Application::~Application((Application *)this);
  return;
}
}
