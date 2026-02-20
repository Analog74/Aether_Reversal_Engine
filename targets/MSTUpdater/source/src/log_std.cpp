#include <ni/controller_editor/log_std.hpp>
namespace NI::NWL::StyleSheetErrorsLogSource {

void log(std::string const&) {
long *plVar1;
  long lVar2;
  unsigned long long *puVar3;
  long lVar4;
  
  
  lVar2 = 0;
  if (m_logSinks != 0) {
    lVar4 = m_logSinks;
    do {
      // std code
      plVar1 = *(long **)(lVar4 + 0x20);
      if (plVar1 == (long *)0x0) {
        puVar3 = (unsigned long long *)___cxa_allocate_exception(8);
        *puVar3 = PTR_vtable_100227298 + 0x10;
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(puVar3,PTR_typeinfo_100227198,// std code
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,local_40);
      // std code
      lVar4 = lVar4 + 0x30;
    } while (lVar2 != lVar4);
  }
  return;
}
}
