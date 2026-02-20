#include <ni/controller_editor/CLI.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::UIA {

void CLI::parseCommandLineArguments(int, char**) {
char cVar1;
  size_t sVar2;
  char *pcVar3;
  unsigned long uVar4;
  char *pcVar5;
  long lVar6;
  unsigned long uVar7;
  char *local_40;
  int local_38;
  char local_31;
  
  uVar7 = (unsigned long)param_1;
  local_40 = (char *)0x0;
  uVar4 = (long)0 - (long)(anonymous_namespace)::s_collCmdlArgs >> 3;
  if (uVar4 < uVar7) {
    // std code
              ((vector<char*,// std code
               uVar7 - uVar4,&local_40);
  }
  else if(2 param_2, 2 param_2, uVar7 < uVar4 {
    0 = (anonymous_namespace::s_collCmdlArgs + uVar7;
  }
  setCommandLineArguments(param_1,param_2);
  local_38 = param_1;
  if (param_1 < 1) {
    lVar6 = 0;
  }
  else {
    uVar4 = 0;
    lVar6 = 0;
    do {
      sVar2 = strlen(param_2[uVar4]);
      lVar6 = lVar6 + sVar2;
      uVar4 = uVar4 + 1;
    } while ((uint)param_1 != uVar4);
  }
  uVar7 = lVar6 + uVar7;
  local_31 = '\0';
  uVar4 = (long)0 - (long)(anonymous_namespace)::s_collCmdlBuffer;
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    if (uVar7 < uVar4) {
      0 = (anonymous_namespace)::s_collCmdlBuffer + uVar7;
    }
  }
  else {
    // std code
              ((vector<char,// std code
               uVar7 - uVar4,&local_31);
  }
  if (0 < local_38) {
    uVar4 = 0;
    pcVar3 = (anonymous_namespace)::s_collCmdlBuffer;
    do {
      (anonymous_namespace)::s_collCmdlArgs[uVar4] = pcVar3;
      pcVar5 = param_2[uVar4];
      cVar1 = *pcVar5;
      while (cVar1 != '\0') {
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar5;
      }
      *pcVar3 = '\0';
      pcVar3 = pcVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != (uint)param_1);
  }
  setCommandLineArguments(local_38,(anonymous_namespace)::s_collCmdlArgs);
  return 1;
}

void CLI::setCommandLineArguments(int, char**) {
s_argc = param_1;
  s_argv = param_2;
  return;
}
}
