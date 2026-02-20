#include <ni/controller_editor/openssl_init_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::ssl::detail {

void openssl_init_base::instance() {
long *plVar1;
  unsigned long long *puVar2;
  int iVar3;
  void *pvVar4;
  
  if (instance()::init == '\0') {
    iVar3 = ___cxa_guard_acquire(&instance()::init);
    if (iVar3 != 0) {
      pvVar4 = new char[1];
      instance()::init = pvVar4;
      0 = (unsigned long long *)new char[0x20];
      0[1] = 0;
      0[2] = 0;
      *0 = &PTR____shared_ptr_pointer_101b2bbe8;
      0[3] = pvVar4;
      ___cxa_atexit(// std code
                    ~shared_ptr,&instance()::init,0x100000000);
      ___cxa_guard_release(&instance()::init);
    }
  }
  *(void **)this = instance()::init;
  puVar2 = 0;
  *(unsigned long long **)(this + 8) = 0;
  if (puVar2 != (unsigned long long *)0x0) {
    LOCK();
    plVar1 = puVar2 + 1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return this;
}
}
