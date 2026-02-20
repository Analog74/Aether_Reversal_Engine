#include <ni/controller_editor/IEditingChangeNotifier_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IEditingChangeNotifier {

void IEditingChangeNotifier(1 param_1, NI::Model* {
__bind local_60 [8];
  long local_58;
  code *local_48;
  unsigned long long local_40;
  IEditingChangeNotifier *local_38;
  Model *local_30;
  unsigned char local_28;
  
  ___bzero(this,400);
  *(unsigned long long *)(this + 0x10) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(IEditingChangeNotifier **)(this + 0x50) = this + 0x70;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 1;
  *(unsigned long long *)(this + 0xa0) = 0;
  *(void ***)(this + 0xa8) = &PTR_operator___101ad5050;
  *(unsigned long long *)(this + 0xb0) = 0;
  *(unsigned long long *)(this + 0xb8) = 0;
  *(unsigned long long *)(this + 0xc0) = 0;
  *(unsigned long long *)(this + 0xd0) = 0x32aaaba7;
  *(unsigned long long *)(this + 0xd8) = 0;
  *(unsigned long long *)(this + 0xe0) = 0;
  *(unsigned long long *)(this + 0xe8) = 0;
  *(unsigned long long *)(this + 0xf0) = 0;
  *(unsigned long long *)(this + 0xf8) = 0;
  *(unsigned long long *)(this + 0x100) = 0;
  *(unsigned long long *)(this + 0x108) = 0;
  *(IEditingChangeNotifier **)(this + 0x110) = this + 0x130;
  *(unsigned long long *)(this + 0x118) = 0;
  *(unsigned long long *)(this + 0x120) = 1;
  *(unsigned long long *)(this + 0x160) = 0;
  *(void ***)(this + 0x168) = &PTR_operator___101ad4ee8;
  *(unsigned long long *)(this + 0x170) = 0;
  *(unsigned long long *)(this + 0x178) = 0;
  *(unsigned long long *)(this + 0x180) = 0;
  *(void ***)this = &PTR__IEditingChangeNotifier_101ad4e98;
  this[400] = (IEditingChangeNotifier)0x0;
  *(unsigned long long *)(this + 0x1a0) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x1a8) = 0;
  *(unsigned long long *)(this + 0x1b0) = 0;
  *(unsigned long long *)(this + 0x1b8) = 0;
  *(unsigned long long *)(this + 0x1c0) = 0;
  *(unsigned long long *)(this + 0x1c8) = 0;
  *(unsigned long long *)(this + 0x1d0) = 0;
  *(unsigned long long *)(this + 0x1d8) = 0;
  *(IEditingChangeNotifier **)(this + 0x1e0) = this + 0x200;
  *(unsigned long long *)(this + 0x1e8) = 0;
  *(unsigned long long *)(this + 0x1f0) = 1;
  *(unsigned long long *)(this + 0x230) = 0;
  *(void ***)(this + 0x238) = &PTR_operator___101ad4f18;
  *(unsigned long long *)(this + 0x240) = 0;
  *(unsigned long long *)(this + 0x248) = 0;
  *(unsigned long long *)(this + 0x250) = 0;
  *(unsigned long long *)(this + 0x260) = 0;
  *(unsigned long long *)(this + 0x268) = 0;
  local_48 = emitMappingWasEdited;
  local_40 = 0;
  local_28 = 1;
  local_38 = this;
  local_30 = param_1;
  nod::signal_type<nod::multithread_policy,void(NI::SelectionContentUpdateScope)>::
  connect<// std code
            (local_60);
  if (local_58 != 0) {
    // std code
  }
  return;
}
}
