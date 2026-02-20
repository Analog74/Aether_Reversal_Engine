#include <ni/controller_editor/CLI.hpp>
namespace NI::UIA {

void CLI::setCommandLineArguments(int, char**) {
s_argc._0_4_ = param_1;
  s_argv = param_2;
  return;
}
}
