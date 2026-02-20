#include <ni/controller_editor/StringCropper.hpp>
namespace NI::GP {

void StringCropper::initFileNameAliasMap() {
char cVar1;
  unsigned long long local_c8;
  unsigned long long uStack_c0;
  unsigned long long local_b8;
  unsigned long long uStack_b0;
  unsigned long long local_a8;
  unsigned long long uStack_a0;
  unsigned long long local_98;
  unsigned long long uStack_90;
  unsigned long long local_88;
  unsigned long long uStack_80;
  unsigned long long local_78;
  unsigned long long uStack_70;
  unsigned long long local_68;
  unsigned long long uStack_60;
  unsigned long long local_58;
  unsigned long long uStack_50;
  unsigned long long local_48;
  unsigned long long uStack_40;
  unsigned long long local_38;
  unsigned int local_30;
  unsigned long long local_28;
  void2 local_20;
  
  if (initFileNameAliasMap()::s_bSymbolicFoldersInitialized == '\0') {
    local_28 = 0;
    local_20 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_30 = 0;
    local_38 = 0;
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7fff,0x61707073,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7ffd,0x61737570,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7fff,0x73646174,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7fff,0x63757372,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7ffb,0x646f6373,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7ffb,0xb5646f63,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    cVar1 = (anonymous_namespace)::getSystemFolder(-0x7ffb,0x70646f63,(FileName *)&local_c8,false);
    if (cVar1 != '\0') {
      addAlias((FileName *)&local_c8);
    }
    initFileNameAliasMap()::s_bSymbolicFoldersInitialized = '\x01';
    FileName::~FileName((FileName *)&local_c8);
  }
  return;
}

StringCropper::StringCropper() {
*(unsigned int *)this = 0;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(StringCropper **)(this + 0x20) = this + 0x28;
  
}
}
