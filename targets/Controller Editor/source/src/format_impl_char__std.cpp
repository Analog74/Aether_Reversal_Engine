#include <ni/controller_editor/format_impl_char__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace void web::json::details::_Object {

void format_impl<char>(std::string&) const {
string *psVar1;
  string *psVar2;
  char cVar3;
  
  cVar3 = (char)param_1;
  // std code
  psVar2 = *(string **)(this + 8);
  psVar1 = *(string **)(this + 0x10);
  if (psVar2 != psVar1) {
    for (; psVar2 != psVar1 + -0x20; psVar2 = psVar2 + 0x20) {
      // std code
      append_escape_string<char>(param_1,psVar2);
      // std code
      // std code
      (**(code **)(**(long **)(psVar2 + 0x18) + 200))(*(long **)(psVar2 + 0x18),param_1);
      // std code
    }
    // std code
    append_escape_string<char>(param_1,psVar1 + -0x20);
    // std code
    // std code
    (**(code **)(**(long **)(psVar1 + -8) + 200))(*(long **)(psVar1 + -8),param_1);
  }
  // std code
  return;
}
}
