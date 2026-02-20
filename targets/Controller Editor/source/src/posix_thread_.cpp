#include <ni/controller_editor/posix_thread_.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::asio::detail::scoped_ptr<boost::asio::detail {

void posix_thread>::~scoped_ptr() {
unsigned long long *puVar1;
  
  puVar1 = *(unsigned long long **)this;
  if (puVar1 != (unsigned long long *)0x0) {
    if (*(char *)(puVar1 + 1) == '\0') {
      _pthread_detach((pthread_t)*puVar1);
    }
    delete(puVar1);
    return;
  }
  return;
}
}
