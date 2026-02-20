#include <ni/controller_editor/DebugTrace.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void DebugTrace::clearGroupFilter() {
__tree_node *p_Var1;
  long lVar2;
  __tree_node **pp_Var3;
  __tree_node **local_20;
  __tree_node *local_18;
  long local_10;
  
  lVar2 = 0;
  p_Var1 = 0;
  local_20 = GP::(anonymous_namespace)::s_setDebugTraceGroups;
  local_18 = 0;
  local_10 = 0;
  0 = (__tree_node *)0x0;
  0 = 0;
  pp_Var3 = &local_18;
  if (lVar2 != 0) {
    *(__tree_node ***)(p_Var1 + 0x10) = &local_18;
    pp_Var3 = local_20;
  }
  local_20 = pp_Var3;
  GP::(anonymous_namespace)::s_setDebugTraceGroups = &0;
  // std code
            ((__tree<// std code
             p_Var1);
  return;
}

void DebugTrace::isGroupEnabled(char const*) {
unsigned long long *puVar1;
  unsigned long long uVar2;
  unsigned long long *puVar3;
  long lVar4;
  unsigned long long *puVar5;
  char *pcVar6;
  char cVar7;
  
  uVar2 = 1;
  if (((param_1 == (char *)0x0) || (cVar7 = *param_1, cVar7 == '\0')) || (cVar7 == '+')) {
    return uVar2;
  }
  if (s_theMode == 1) {
    if (cVar7 != '-') return;
  }
  else {
    if (s_theMode != 2) {
      return 0;
    }
    if (cVar7 != '-') {
      return uVar2;
    }
  }
  param_1 = param_1 + 1;
  puVar5 = GP::(anonymous_namespace)::s_setDebugTraceGroups;
  if (GP::(anonymous_namespace)::s_setDebugTraceGroups != &0) {
    do {
      if ((*(byte *)(puVar5 + 4) & 1) == 0) {
        pcVar6 = (char *)((long)puVar5 + 0x21);
        cVar7 = *pcVar6;
      }
      else {
        pcVar6 = (char *)puVar5[6];
        cVar7 = *pcVar6;
      }
      if (cVar7 != '\0') {
        lVar4 = 0;
        do {
          if ((param_1[lVar4] == '\0') || (param_1[lVar4] != cVar7)) return;
          cVar7 = pcVar6[lVar4 + 1];
          lVar4 = lVar4 + 1;
        } while (cVar7 != '\0');
        if (lVar4 != 0) {
          if (param_1[lVar4] == '\0') {
            return uVar2;
          }
          if (param_1[lVar4] == '.') {
            return uVar2;
          }
        }
      }
      puVar1 = (unsigned long long *)puVar5[1];
      if ((unsigned long long *)puVar5[1] == (unsigned long long *)0x0) {
        puVar3 = (unsigned long long *)puVar5[2];
        if ((unsigned long long *)*puVar3 != puVar5) {
          do {
            puVar5 = (unsigned long long *)puVar5[2];
            puVar3 = (unsigned long long *)puVar5[2];
          } while ((unsigned long long *)*puVar3 != puVar5);
        }
      }
      else {
        do {
          puVar3 = puVar1;
          puVar1 = (unsigned long long *)*puVar3;
        } while ((unsigned long long *)*puVar3 != (unsigned long long *)0x0);
      }
      puVar5 = puVar3;
    } while (puVar3 != &0);
  }
  return 0;
}
}
