#include <ni/controller_editor/filesystem_error.hpp>
namespace boost::filesystem {

void filesystem_error::what() const {
long lVar1;
  byte *pbVar2;
  unsigned long uVar3;
  byte *pbVar4;
  
  pbVar4 = *(byte **)(this + 0x38);
  if (pbVar4 == (byte *)0x0) {
    pbVar4 = (byte *)system::system_error::what((system_error *)this);
    return pbVar4;
  }
  if ((pbVar4[0x30] & 1) == 0) {
    uVar3 = (unsigned long)(pbVar4[0x30] >> 1);
  }
  else {
    uVar3 = *(unsigned long *)(pbVar4 + 0x38);
  }
  if (uVar3 == 0) {
    system::system_error::what((system_error *)this);
    // std code
    pbVar4 = *(byte **)(this + 0x38);
    if ((*pbVar4 & 1) == 0) {
      uVar3 = (unsigned long)(*pbVar4 >> 1);
    }
    else {
      uVar3 = *(unsigned long *)(pbVar4 + 8);
    }
    if (uVar3 != 0) {
      // std code
      pbVar4 = *(byte **)(this + 0x38);
      pbVar2 = pbVar4 + 1;
      if ((*pbVar4 & 1) != 0) {
        pbVar2 = *(byte **)(pbVar4 + 0x10);
      }
      // std code
      // std code
      pbVar4 = *(byte **)(this + 0x38);
    }
    if ((pbVar4[0x18] & 1) == 0) {
      uVar3 = (unsigned long)(pbVar4[0x18] >> 1);
    }
    else {
      uVar3 = *(unsigned long *)(pbVar4 + 0x20);
    }
    if (uVar3 != 0) {
      // std code
      lVar1 = *(long *)(this + 0x38);
      uVar3 = lVar1 + 0x19;
      if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
        uVar3 = *(unsigned long *)(lVar1 + 0x28);
      }
      // std code
      // std code
      pbVar4 = *(byte **)(this + 0x38);
    }
  }
  if ((pbVar4[0x30] & 1) == 0) {
    pbVar4 = pbVar4 + 0x31;
  }
  else {
    pbVar4 = *(byte **)(pbVar4 + 0x40);
  }
  return pbVar4;
}

filesystem_error::~filesystem_error() {
long *plVar1;
  int *piVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  *(void **)this = PTR_vtable_1002271c8 + 0x10;
  plVar4 = *(long **)(this + 0x40);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      LOCK();
      piVar2 = (int *)((long)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  *(void **)this = PTR_vtable_100227270 + 0x10;
  // std code
  // std code
  delete(this);
  return;
}
}
