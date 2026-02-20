#include <ni/controller_editor/FileStorage_.hpp>
namespace NI::GP::MultiPartStorage<NI::GP {

void FileStorage>::closePart(int param_1) {
}

void FileStorage>::flush() {
return;
}

void FileStorage>::getCurrentStorageSize() {
long lVar1;
  unsigned long uVar2;
  unsigned long uVar3;
  long lVar4;
  
  uVar3 = *(long *)(this + 0x20) - *(long *)(this + 0x18) >> 3;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = 0;
    do {
      lVar1 = (**(code **)(*(long *)this + 0xb0))(this,uVar2 & 0xffffffff);
      lVar4 = lVar4 + lVar1;
      uVar2 = uVar2 + 1;
    } while (uVar3 != uVar2);
    this[0x54] = (MultiPartStorage<NI::GP::FileStorage>)((byte)this[0x54] & 0xfe);
  }
  return lVar4;
}

void FileStorage>::getMaxAllowedPartCount() const {
return *(unsigned long long *)(this + 0x38);
}

void FileStorage>::getMaxAllowedPartSize() const {
return *(unsigned long long *)(this + 0x40);
}

void FileStorage>::getMaxAllowedStorageSize() const {
return *(unsigned long long *)(this + 0x30);
}

void FileStorage>::getMaximumPartSizeForCurrentMode(int param_1) {
}

void FileStorage>::getPartOffset(int param_1) {
}

void FileStorage>::getPartSize(int param_1) {
}

void FileStorage>::isOpen() const {
return 0((int7)((unsigned long)*(long *)(this + 0x18) >> 8),
                  *(long *)(this + 0x18) != *(long *)(this + 0x20));
}

void FileStorage>::openPartStorageAt(int param_1) {
}

void FileStorage>::setMaxAllowedPartCount(long long) {
*(longlong *)(this + 0x38) = param_1;
  return;
}

void FileStorage>::setMaxAllowedPartSize(long long) {
*(longlong *)(this + 0x40) = param_1;
  return;
}

void FileStorage>::setMaxAllowedStorageSize(long long) {
*(longlong *)(this + 0x30) = param_1;
  return;
}

void FileStorage>::~MultiPartStorage() {
~MultiPartStorage(this);
  delete(this);
  return;
}
}
