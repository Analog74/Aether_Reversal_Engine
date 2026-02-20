#include <ni/controller_editor/scoped_c_thread_locale.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace utility::details {

scoped_c_thread_locale::scoped_c_thread_locale() {
int iVar1;
  char *pcVar2;
  long lVar3;
  runtime_error *this_00;
  unsigned char *local_30;
  unsigned char **local_28;
  unsigned char local_20 [8];
  
  *(unsigned long long *)this = 0;
  pcVar2 = (char *)_setlocale(0,0);
  if (pcVar2 == (char *)0x0) {
    this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
    // std code
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(this_00,PTR_typeinfo_101ab4310,PTR__runtime_error_101ab40c0);
  }
  iVar1 = _strcmp(pcVar2,"C");
  if (iVar1 != 0) {
    if (g_c_localeFlag != -1) {
      local_30 = local_20;
      local_28 = &local_30;
      // std code
                       // std code
                       __call_once_proxy<// std code
                      );
    }
    lVar3 = _uselocale(*g_c_locale);
    *(long *)this = lVar3;
    if (lVar3 == 0) {
      this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
      // std code
      return;
    }
  }
  
}
}
