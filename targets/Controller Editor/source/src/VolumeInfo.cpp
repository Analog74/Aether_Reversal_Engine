#include <ni/controller_editor/VolumeInfo.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::GP {

void VolumeInfo::getFreeSpace() const {
unsigned long uVar1;
  
  uVar1 = getFreeSpaceInBytes(this);
  return uVar1 >> 10;
}

void VolumeInfo::getFreeSpaceInBytes() const {
char cVar1;
  long in_RAX;
  unsigned long long uVar2;
  long lVar3;
  unsigned long long uVar4;
  VolumeInfo *pVVar5;
  long local_28;
  
  if (((byte)this[0x18] & 1) == 0) {
    if ((byte)this[0x18] >> 1 == 0) {
      return 0;
    }
  }
  else if (*(long *)(this + 0x20) == 0) {
    return 0;
  }
  local_28 = in_RAX;
  uVar2 = _objc_autoreleasePoolPush();
  if (((byte)this[0x18] & 1) == 0) {
    pVVar5 = this + 0x19;
  }
  else {
    pVVar5 = *(VolumeInfo **)(this + 0x28);
  }
  uVar4 = 0;
  lVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)
                    (&_OBJC_CLASS___NSURL,
                     "fileURLWithFileSystemRepresentation:isDirectory:relativeToURL:",pVVar5,1,0);
  if (lVar3 != 0) {
    local_28 = 0;
    cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (lVar3,"getResourceValue:forKey:error:",&local_28,
                       *(unsigned long long *)PTR__NSURLVolumeAvailableCapacityKey_101ab4030,0);
    if ((cVar1 == '\0') || (local_28 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (*(code *)PTR__objc_msgSend_101ab46d8)(local_28,"unsignedLongLongValue");
    }
  }
  _objc_autoreleasePoolPop(uVar2);
  return uVar4;
}

void VolumeInfo::getTotalSpace() const {
unsigned long uVar1;
  
  uVar1 = getTotalSpaceInBytes(this);
  return uVar1 >> 10;
}

void VolumeInfo::getTotalSpaceInBytes() const {
char cVar1;
  unsigned long long uVar2;
  long lVar3;
  unsigned long long uVar4;
  VolumeInfo *pVVar5;
  long local_20;
  
  if (*(int *)(this + 0x30) != 0x40) {
    if (((byte)this[0x18] & 1) == 0) {
      if ((byte)this[0x18] >> 1 == 0) {
        return 0;
      }
    }
    else if (*(long *)(this + 0x20) == 0) {
      return 0;
    }
    uVar2 = _objc_autoreleasePoolPush();
    if (((byte)this[0x18] & 1) == 0) {
      pVVar5 = this + 0x19;
    }
    else {
      pVVar5 = *(VolumeInfo **)(this + 0x28);
    }
    lVar3 = (*(code *)PTR__objc_msgSend_101ab46d8)
                      (&_OBJC_CLASS___NSURL,
                       "fileURLWithFileSystemRepresentation:isDirectory:relativeToURL:",pVVar5,1,0);
    if (lVar3 != 0) {
      local_20 = 0;
      cVar1 = (*(code *)PTR__objc_msgSend_101ab46d8)
                        (lVar3,"getResourceValue:forKey:error:",&local_20,
                         *(unsigned long long *)PTR__NSURLVolumeTotalCapacityKey_101ab4040,0);
      if ((cVar1 != '\0') && (local_20 != 0)) {
        uVar4 = (*(code *)PTR__objc_msgSend_101ab46d8)(local_20,"unsignedLongLongValue");
        _objc_autoreleasePoolPop(uVar2);
        return uVar4;
      }
    }
    _objc_autoreleasePoolPop(uVar2);
  }
  return 0;
}
}
