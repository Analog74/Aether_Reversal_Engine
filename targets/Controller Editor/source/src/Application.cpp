#include <ni/controller_editor/Application.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void Application::setName(char const*) {
_strncpy(s_pAppName,param_1,0x100);
  0 = 0;
  return;
}
}
