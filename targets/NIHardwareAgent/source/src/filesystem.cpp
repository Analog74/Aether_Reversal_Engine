#include <ni/controller_editor/filesystem.hpp>
namespace ni::filesystem::unlock_file(ni {

void filesystem::file_handle const&) {
byte bVar1;
  int iVar2;
  unsigned int extraout_var;
  ostream *poVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  long *plVar7;
  id local_20 [8];
  
  while( true ) {
    bVar1 = (anonymous_namespace)::thread_lock;
    LOCK();
    (anonymous_namespace)::thread_lock = 1;
    UNLOCK();
    if ((bVar1 & 1) == 0) break;
    _sched_yield();
  }
  iVar2 = *(int *)(param_1 + 8);
  if ((iVar2 < 0) &&
     ((*(FILE **)param_1 == (FILE *)0x0 || (iVar2 = _fileno(*(FILE **)param_1), iVar2 < 0)))) {
    poVar3 = // std code
                       ((ostream *)PTR_cerr_1009cc078,"filesystem: invalid file or descriptor",0x26)
    ;
    // std code
    plVar7 = (long *)// std code
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    // std code
    // std code
    // std code
  }
  else {
    iVar2 = _flock(iVar2,8);
    if (iVar2 == 0) {
      (anonymous_namespace)::thread_lock = 0;
      return 0((int7)(CONCAT44(extraout_var,iVar2) >> 8),1);
    }
    poVar3 = // std code
                       ((ostream *)PTR_cerr_1009cc078,"filesystem: ",0xc);
    piVar4 = ___error();
    pcVar5 = _strerror(*piVar4);
    sVar6 = strlen(pcVar5);
    poVar3 = // std code
    // std code
    plVar7 = (long *)// std code
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    // std code
    // std code
    // std code
  }
  (anonymous_namespace)::thread_lock = 0;
  return 0;
}
}
