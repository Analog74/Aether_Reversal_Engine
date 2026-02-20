#include <ni/controller_editor/Socket.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

Socket::~Socket() {
*(void ***)this = &PTR__Socket_101b82d38;
  if (*(int *)(this + 8) != -1) {
    _close(*(int *)(this + 8));
  }
  delete(this);
  return;
}
}
