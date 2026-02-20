#include <ni/controller_editor/log_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NWL::StyleSheetErrorsLogSource {

void log(std::string const&) {
long *plVar1;
  long lVar2;
  long lVar3;
  
  void *local_30;
  
  lVar2 = 0;
  if (m_logSinks != 0) {
    lVar3 = m_logSinks;
    do {
      // std code
      plVar1 = *(long **)(lVar3 + 0x20);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        // std code
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,local_40);
      if (((byte)local_40[0] & 1) != 0) {
        delete(local_30);
      }
      lVar3 = lVar3 + 0x30;
    } while (lVar2 != lVar3);
  }
  return;
}
}
