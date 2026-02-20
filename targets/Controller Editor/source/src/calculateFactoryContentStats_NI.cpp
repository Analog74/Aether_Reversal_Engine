#include <ni/controller_editor/calculateFactoryContentStats_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void calculateFactoryContentStats(1 param_1, NI::Model* {
__tree_node **local_48;
  __tree_node *local_40;
  unsigned long long uStack_38;
  __tree_node **local_30;
  __tree_node *local_28;
  unsigned long long uStack_20;
  
  local_30 = &local_28;
  local_28 = (__tree_node *)0x0;
  uStack_20 = 0;
  local_48 = &local_40;
  local_40 = (__tree_node *)0x0;
  uStack_38 = 0;
  currentFactoryContentEntries((set *)&local_30,param_1);
  readContentHistoryEntries((set *)&local_48,param_1);
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0;
  *(unsigned long long *)this = uStack_20;
  compareFactoryEntriesToContentHistory
            ((set *)&local_30,(set *)&local_48,(unsigned long *)(this + 8),(unsigned long *)(this + 0x10));
  // std code
            ((__tree<// std code
             local_40);
  // std code
            ((__tree<// std code
             local_28);
  return this;
}
}
