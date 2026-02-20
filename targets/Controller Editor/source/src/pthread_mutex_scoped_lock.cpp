#include <ni/controller_editor/pthread_mutex_scoped_lock.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::pthread {

pthread_mutex_scoped_lock::~pthread_mutex_scoped_lock() {
pthread_mutex_t *ppVar1;
  int iVar2;
  
  if (this[8] != (pthread_mutex_scoped_lock)0x0) {
    ppVar1 = *(pthread_mutex_t **)this;
    do {
      iVar2 = _pthread_mutex_unlock(ppVar1);
    } while (iVar2 == 4);
    this[8] = (pthread_mutex_scoped_lock)0x0;
  }
  return;
}
}
