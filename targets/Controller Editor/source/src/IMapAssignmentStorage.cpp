#include <ni/controller_editor/IMapAssignmentStorage.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2 {

void IMapAssignmentStorage::associateAssignmentsWithDeviceSection(unsigned int) {
unsigned long *puVar1;
  unsigned long *puVar2;
  unsigned long *puVar3;
  unsigned long *puVar4;
  
  puVar1 = *(unsigned long **)(this + 0x10);
  puVar2 = (unsigned long *)puVar1[9];
  while( true ) {
  }
  return;
}

IMapAssignmentStorage::~IMapAssignmentStorage() {
unsigned long uVar1;
  ordered_index_node *poVar2;
  
  *(void ***)this = &PTR__IMapAssignmentStorage_101afec68;
  uVar1 = *(unsigned long *)(*(long *)(this + 0x10) + 0x40) & 0xfffffffffffffffe;
  poVar2 = (ordered_index_node *)(uVar1 - 0x40);
  if (uVar1 == 0) {
    poVar2 = (ordered_index_node *)0x0;
  }
  // boost code
  ordered_index_impl<// boost code
  ::delete_all_nodes((ordered_index_impl<// boost code
                      *)(this + 0x18),poVar2);
  delete(*(void **)(this + 0x10));
  delete(this);
  return;
}
}
