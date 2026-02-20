#include <ni/controller_editor/MethodManager.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace anyrpc {

MethodManager::MethodManager() {
unsigned long long *puVar1;
  long lVar2;
  unsigned char *local_40 [2];
  
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(MethodManager **)this = this + 8;
  *(unsigned long long *)(this + 0x18) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x50) = 0;
  *(unsigned long long *)(this + 0x58) = 0x3cb0b1bb;
  *(unsigned long long *)(this + 0x60) = 0;
  *(unsigned long long *)(this + 0x68) = 0;
  *(unsigned long long *)(this + 0x70) = 0;
  *(unsigned long long *)(this + 0x78) = 0;
  *(unsigned long long *)(this + 0x80) = 0;
  puVar1 = (unsigned long long *)new char[0x50];
  *puVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  *(unsigned char *)(puVar1 + 7) = 1;
  *(unsigned int *)((long)puVar1 + 0x3c) = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  puVar1[9] = this;
  *puVar1 = &PTR__ListMethod_101b831a8;
  local_40[0] = &LIST_METHODS;
  lVar2 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)this,(piecewise_construct_t *)&LIST_METHODS,
                     (tuple *)&// std code
  *(unsigned long long **)(lVar2 + 0x38) = puVar1;
  puVar1 = (unsigned long long *)new char[0x50];
  *puVar1 = &PTR__Method_101b837f0;
  // std code
  // std code
  *(unsigned char *)(puVar1 + 7) = 1;
  *(unsigned int *)((long)puVar1 + 0x3c) = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  puVar1[9] = this;
  *puVar1 = &PTR__HelpMethod_101b83210;
  local_40[0] = &METHOD_HELP;
  lVar2 = // std code
          __tree<// std code
          ::
          __emplace_unique_key_args<// std code
                    ((string *)this,(piecewise_construct_t *)&METHOD_HELP,
                     (tuple *)&// std code
  *(unsigned long long **)(lVar2 + 0x38) = puVar1;
  
}

MethodManager::~MethodManager() {
~MethodManager(this);
  return;
}
}
