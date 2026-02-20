#include <ni/controller_editor/convertLegacyContentHistoryIntoRegistry_NI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

void convertLegacyContentHistoryIntoRegistry(1 param_1, NI::Model const* {
char cVar1;
  __tree_node *p_Var2;
  __tree_node *p_Var3;
  __tree_node *p_Var4;
  unsigned long uVar5;
  unsigned char *puVar6;
  __tree_node *local_78;
  __tree_node *local_70;
  long lStack_68;
  NI local_60;
  unsigned char auStack_5f [15];
  unsigned char *local_50;
  unsigned long local_48 [2];
  void *local_38;
  
  local_70 = (__tree_node *)0x0;
  lStack_68 = 0;
  local_78 = (__tree_node *)&local_70;
  importLegacyContentHistory((set *)&local_78,param_1);
  if (lStack_68 == 0) {
    cVar1 = readContentHistoryFromRegistry((set *)&local_78,param_1);
    if (cVar1 != '\0') return;
    contentHistoryRegistryKeyForDevice(&local_60,param_1);
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
    currentFactoryContentEntries((set *)&local_78,param_1);
    if (local_78 != (__tree_node *)&local_70) {
      p_Var3 = local_78;
      do {
        if (((byte)p_Var3[0x20] & 1) == 0) {
          uVar5 = (long)p_Var3 + 0x21;
        }
        else {
          uVar5 = *(unsigned long *)(p_Var3 + 0x30);
        }
        // std code
        // std code
        p_Var4 = *(__tree_node **)(p_Var3 + 8);
        if (*(__tree_node **)(p_Var3 + 8) == (__tree_node *)0x0) {
          p_Var2 = *(__tree_node **)(p_Var3 + 0x10);
          if ((__tree_node *)*(__tree_node ***)p_Var2 != p_Var3) {
            do {
              p_Var3 = *(__tree_node **)(p_Var3 + 0x10);
              p_Var2 = *(__tree_node **)(p_Var3 + 0x10);
            } while (*(__tree_node **)p_Var2 != p_Var3);
          }
        }
        else {
          do {
            p_Var2 = p_Var4;
            p_Var4 = *(__tree_node **)p_Var2;
          } while (*(__tree_node **)p_Var2 != (__tree_node *)0x0);
        }
        p_Var3 = p_Var2;
      } while (p_Var2 != (__tree_node *)&local_70);
    }
    puVar6 = local_50;
    if (((byte)local_60 & 1) == 0) {
      puVar6 = auStack_5f;
    }
    GP::Registry::set(puVar6,local_48,0);
  }
  else {
    contentHistoryRegistryKeyForDevice(&local_60,param_1);
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
    if (local_78 != (__tree_node *)&local_70) {
      p_Var3 = local_78;
      do {
        if (((byte)p_Var3[0x20] & 1) == 0) {
          p_Var4 = p_Var3 + 0x21;
        }
        else {
          p_Var4 = *(__tree_node **)(p_Var3 + 0x30);
        }
        // std code
        // std code
        p_Var4 = *(__tree_node **)(p_Var3 + 8);
        if (*(__tree_node **)(p_Var3 + 8) == (__tree_node *)0x0) {
          p_Var2 = *(__tree_node **)(p_Var3 + 0x10);
          if (*(__tree_node **)p_Var2 != p_Var3) {
            do {
              p_Var3 = *(__tree_node **)(p_Var3 + 0x10);
              p_Var2 = *(__tree_node **)(p_Var3 + 0x10);
            } while (*(__tree_node **)p_Var2 != p_Var3);
          }
        }
        else {
          do {
            p_Var2 = p_Var4;
            p_Var4 = *(__tree_node **)p_Var2;
          } while (*(__tree_node **)p_Var2 != (__tree_node *)0x0);
        }
        p_Var3 = p_Var2;
      } while (p_Var2 != (__tree_node *)&local_70);
    }
    puVar6 = local_50;
    if (((byte)local_60 & 1) == 0) {
      puVar6 = auStack_5f;
    }
    GP::Registry::set(puVar6,local_48,0);
  }
  if ((local_48[0] & 1) != 0) {
    delete(local_38);
  }
  if (((byte)local_60 & 1) != 0) {
    delete(local_50);
  }
  // std code
            ((__tree<// std code
             local_70);
  return;
}
}
