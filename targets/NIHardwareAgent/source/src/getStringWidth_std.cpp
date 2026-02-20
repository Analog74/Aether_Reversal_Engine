#include <ni/controller_editor/getStringWidth_std.hpp>
namespace NI::UIA::Font {

void getStringWidth(std::string const&, int) const {
if (((byte)*param_1 & 1) != 0) {
    getStringWidth(this,*(char **)(param_1 + 0x10),param_2);
    return;
  }
  getStringWidth(this,(char *)(param_1 + 1),param_2);
  return;
}
}
