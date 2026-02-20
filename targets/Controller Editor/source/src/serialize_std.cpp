#include <ni/controller_editor/serialize_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::json::value {

void serialize(std::ostream&) const {
unsigned long uVar1;
  char *pcVar2;
  long local_40;
  unsigned long long local_38;
  unsigned long uStack_30;
  char *local_28;
  
  utility::details::scoped_c_thread_locale::scoped_c_thread_locale
            ((scoped_c_thread_locale *)&local_40);
  local_38 = 0;
  uStack_30 = 0;
  local_28 = (char *)0x0;
  (**(code **)(**(long **)this + 0x40))(*(long **)this,&local_38);
  uVar1 = uStack_30;
  pcVar2 = local_28;
  if ((local_38 & 1) == 0) {
    uVar1 = local_38 >> 1 & 0x7f;
    pcVar2 = (char *)((long)&local_38 + 1);
  }
  // std code
  if ((local_38 & 1) != 0) {
    delete(local_28);
  }
  if (local_40 != 0) {
    _uselocale();
  }
  return;
}
}
