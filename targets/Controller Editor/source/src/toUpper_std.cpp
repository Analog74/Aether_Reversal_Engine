#include <ni/controller_editor/toUpper_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP::StringUtil {

void toUpper(1 param_1, std::string& {
if (((byte)*param_1 & 1) != 0) {
    transformUtfStringRange<char32_t(*)(char32_t)>
              (param_1,0,*(unsigned long *)(param_1 + 8),DETAIL::toUpperCodePoint);
    return;
  }
  transformUtfStringRange<char32_t(*)(char32_t)>
            (param_1,0,(unsigned long)((byte)*param_1 >> 1),DETAIL::toUpperCodePoint);
  return;
}
}
