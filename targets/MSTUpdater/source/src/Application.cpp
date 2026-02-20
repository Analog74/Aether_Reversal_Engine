#include <ni/controller_editor/Application.hpp>
namespace NI::GP {

void Application::setName(char const*) {
_strncpy(s_pAppName,param_1,0x100);
  return;
}
}
