#include <ni/controller_editor/auto_delete_helper.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::cancellation_slot {

auto_delete_helper::~auto_delete_helper() {
long lVar1;
  unsigned char *puVar2;
  void *pvVar3;
  long lVar4;
  
  if (*(long *)this != 0) {
    pvVar3 = _pthread_getspecific
                       (asio::detail::
                        call_stack<// boost code
                        ::top_);
    if (pvVar3 == (void *)0x0) {
      _free(*(void **)this);
      return;
    }
    lVar1 = *(long *)((long)pvVar3 + 8);
    puVar2 = *(unsigned char **)this;
    if ((lVar1 == 0) || (0x3fc < *(unsigned long *)(this + 8))) {
      _free(puVar2);
      return;
    }
    if (*(long *)(lVar1 + 0x30) == 0) {
      lVar4 = 6;
    }
    else {
      if (*(long *)(lVar1 + 0x38) != 0) return;
      lVar4 = 7;
    }
    *puVar2 = puVar2[*(unsigned long *)(this + 8)];
    *(unsigned char **)(lVar1 + lVar4 * 8) = puVar2;
  }
  return;
}
}
