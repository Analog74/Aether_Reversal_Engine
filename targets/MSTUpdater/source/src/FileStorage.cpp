#include <ni/controller_editor/FileStorage.hpp>
namespace NI::GP {

void FileStorage::close() {
char cVar1;
  int iVar2;
  long *plVar3;
  
  cVar1 = (**(code **)(*(long *)this + 0x10))();
  if (cVar1 == '\0') {
    return;
  }
  if (*(FILE **)(this + 200) != (FILE *)0x0) {
    if (this[0xe0] != (FileStorage)0x0) {
      _fflush(*(FILE **)(this + 200));
      iVar2 = _fileno(*(FILE **)(this + 200));
      if (-1 < iVar2) {
        _flock(iVar2,0xc);
      }
    }
    _fclose(*(FILE **)(this + 200));
    goto LAB_10019c1d1;
  }
  plVar3 = *(long **)(this + 0xd0);
  if (plVar3 == (long *)0x0) goto LAB_10019c1d1;
  if (plVar3[3] == 0) {
LAB_10019c1c0:
    (**(code **)(*plVar3 + 8))();
  }
  else {
    _msync(plVar3[3],(unsigned long)*(uint *)(plVar3 + 7) + plVar3[6],3);
    plVar3 = *(long **)(this + 0xd0);
    if (plVar3 != (long *)0x0) goto LAB_10019c1c0;
  }
  *(unsigned long long *)(this + 0xd0) = 0;
LAB_10019c1d1:
  *(unsigned int *)(this + 8) = 0;
  *(unsigned int *)(this + 0xc) = 0;
  *(unsigned long long *)(this + 200) = 0;
  *(unsigned long long *)(this + 0xd8) = 0;
  FileName::clear((FileName *)(this + 0x18));
  this[0xe0] = (FileStorage)0x0;
  return;
}

FileStorage::~FileStorage() {
*(void ***)this = &PTR__FileStorage_100230e68;
  if (*(int *)(this + 0xc) != 0) {
    close(this);
  }
  FileName::~FileName((FileName *)(this + 0x18));
  delete(this);
  return;
}
}
