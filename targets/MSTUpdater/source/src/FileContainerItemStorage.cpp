#include <ni/controller_editor/FileContainerItemStorage.hpp>
namespace NI::GP {

FileContainerItemStorage::~FileContainerItemStorage() {
*(void ***)this = &PTR__FileContainerItemStorage_10023b6e8;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(void ***)this = &PTR__RangeLimitingStorage_100230fd8;
  if ((this[0x20] != (FileContainerItemStorage)0x0) && (*(long **)(this + 0x18) != (long *)0x0)) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  delete(this);
  return;
}
}
