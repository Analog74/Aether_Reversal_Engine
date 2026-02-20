#include <ni/controller_editor/Assertion.hpp>
namespace NI::GP {

void Assertion::DoFail(char const*, int, char const*) {
code *pcVar1;
  int iVar2;
  unsigned long uVar3;
  long lVar4;
  char cVar5;
  unsigned long long *puVar6;
  unsigned long uVar7;
  char *pcVar8;
  long lVar9;
  char local_838;
  char acStack_837 [2055];
  char *local_30;
  size_t local_28;
  
  if (param_1 == (char *)0x0) {
LAB_100184656:
    param_1 = (char *)0x0;
  }
  else {
    cVar5 = *param_1;
    if (cVar5 != '\0') {
      lVar4 = 1;
      do {
        lVar9 = lVar4;
        if (cVar5 < '\0') goto LAB_100184656;
        if (lVar9 == 0x400) break;
        cVar5 = param_1[lVar9];
        lVar4 = lVar9 + 1;
      } while (cVar5 != '\0');
      if (lVar9 == 0x400) goto LAB_100184656;
    }
  }
  if (param_3 != (char *)0x0) {
    cVar5 = *param_3;
    if (cVar5 == '\0') goto LAB_100184697;
    lVar4 = 1;
    do {
      lVar9 = lVar4;
      if (cVar5 < '\0') goto LAB_100184695;
      if (lVar9 == 0x400) break;
      cVar5 = param_3[lVar9];
      lVar4 = lVar9 + 1;
    } while (cVar5 != '\0');
    if (lVar9 != 0x400) goto LAB_100184697;
  }
LAB_100184695:
  param_3 = (char *)0x0;
LAB_100184697:
  if (s_bThrowException == '\0') {
    LOCK();
    iVar2 = s_iAssertReenter + -1;
    UNLOCK();
    if (s_iAssertReenter < 1) {
      LOCK();
      UNLOCK();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    s_iAssertReenter = iVar2;
    if (s_PreAssertionHandler != (code *)0x0) {
      (*s_PreAssertionHandler)();
    }
    if (param_3 == (char *)0x0) {
      _sprintf(&local_838,"Error %s:%d",param_1,(unsigned long)(uint)param_2);
    }
    else {
      _sprintf(&local_838,"Error %s:%d\n\n%s",param_1,(unsigned long)(uint)param_2,param_3);
    }
    local_30 = acStack_837 + 0x3ff;
    pcVar8 = local_30;
    if (local_838 != '\0') {
      uVar3 = 0;
      do {
        uVar7 = uVar3;
        if (0x3ff < uVar7 + 1) {
          pcVar8 = acStack_837 + uVar7 + 0x3ff;
          goto LAB_100184765;
        }
        acStack_837[uVar7 + 0x3ff] = local_838;
        local_838 = acStack_837[uVar7];
        uVar3 = uVar7 + 1;
      } while (local_838 != '\0');
      pcVar8 = acStack_837 + uVar7 + 0x400;
    }
LAB_100184765:
    *pcVar8 = '\0';
    local_28 = strlen(local_30);
    Message::show(&local_30,0,7,0,0);
    if (s_TerminationHandler != (code *)0x0) {
      (*s_TerminationHandler)();
    }
    fcloseall();
    ExitProcess(1);
  }
  puVar6 = (unsigned long long *)___cxa_allocate_exception(0x20);
  *puVar6 = &PTR__exception_100230c80;
  puVar6[1] = param_1;
  *(int *)(puVar6 + 2) = param_2;
  puVar6[3] = param_3;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar6,&exception::typeinfo,exception::~exception);
}

void Assertion::setSilent(bool param_1) {
}
}
