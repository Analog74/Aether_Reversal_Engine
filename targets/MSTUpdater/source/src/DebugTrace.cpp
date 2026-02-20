#include <ni/controller_editor/DebugTrace.hpp>
namespace NI::GP {

void DebugTrace::isGroupEnabled(char const*) {
long lVar1;
  unsigned long long *puVar2;
  long lVar3;
  unsigned long long *puVar4;
  char cVar5;
  ushort uVar6;
  byte *pbVar7;
  unsigned long long *puVar8;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    return 1;
  }
  if (cVar5 == '+') {
    return 1;
  }
  if (s_theMode == 1) {
    if (cVar5 != '-') goto LAB_100184948;
  }
  else {
    if (s_theMode != 2) {
      return 0;
    }
    if (cVar5 != '-') {
      return 1;
    }
  }
  param_1 = param_1 + 1;
LAB_100184948:
  puVar8 = (anonymous_namespace)::s_setDebugTraceGroups;
  if ((anonymous_namespace)::s_setDebugTraceGroups != (unsigned long long *)&0) {
    do {
      if ((*(ushort *)(puVar8 + 4) & 1) == 0) {
        uVar6 = *(ushort *)(puVar8 + 4) >> 8;
        pbVar7 = (byte *)((long)puVar8 + 0x21);
      }
      else {
        pbVar7 = (byte *)puVar8[6];
        uVar6 = (ushort)*pbVar7;
      }
      if ((char)uVar6 != '\0') {
        lVar3 = 0;
        do {
          cVar5 = (char)uVar6;
          if ((param_1[lVar3] == '\0') || (param_1[lVar3] != cVar5)) goto LAB_1001849c3;
          lVar1 = lVar3 + 1;
          uVar6 = (ushort)pbVar7[lVar1];
          lVar3 = lVar3 + 1;
        } while (pbVar7[lVar1] != 0);
        cVar5 = '\0';
LAB_1001849c3:
        if ((param_1 + lVar3 != param_1) && (cVar5 == '\0')) {
          cVar5 = param_1[lVar3];
          if (cVar5 == '\0') {
            return 1;
          }
          if (cVar5 == '.') {
            return 1;
          }
        }
      }
      puVar2 = (unsigned long long *)puVar8[1];
      if ((unsigned long long *)puVar8[1] == (unsigned long long *)0x0) {
        puVar4 = (unsigned long long *)puVar8[2];
        if ((unsigned long long *)*puVar4 != puVar8) {
          do {
            puVar8 = (unsigned long long *)puVar8[2];
            puVar4 = (unsigned long long *)puVar8[2];
          } while ((unsigned long long *)*puVar4 != puVar8);
        }
      }
      else {
        do {
          puVar4 = puVar2;
          puVar2 = (unsigned long long *)*puVar4;
        } while ((unsigned long long *)*puVar4 != (unsigned long long *)0x0);
      }
      puVar8 = puVar4;
    } while (puVar4 != (unsigned long long *)&0);
  }
  return 0;
}
}
