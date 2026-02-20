#include <ni/controller_editor/AssignmentVisitor.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

AssignmentVisitor::~AssignmentVisitor() {
*(void ***)this = &PTR__AssignmentVisitor_101ab4f68;
  // std code
  destroy((__tree<NI::AssignmentInfo,// std code
           *)(this + 8),*(__tree_node **)(this + 0x10));
  delete(this);
  return;
}
}
