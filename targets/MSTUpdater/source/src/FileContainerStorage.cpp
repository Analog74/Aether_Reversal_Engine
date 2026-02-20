#include <ni/controller_editor/FileContainerStorage.hpp>
namespace non-virtual thunk to NI::GP {

void FileContainerStorage::getAvailableContentTocs() {
unsigned int local_40 [2];
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned int local_28;
  unsigned long long local_20;
  unsigned long long local_18;
  unsigned long long local_10;
  
  local_40[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  local_10 = 0x7fffffffffffffff;
  getAvailableTocsFromRange(this + -0x60,(vector *)(this + 8),(FileContentRange *)local_40);
  return;
}

FileContainerStorage::~FileContainerStorage() {
~FileContainerStorage(this + -0x60);
  delete(this + -0x60);
  return;
}
}
