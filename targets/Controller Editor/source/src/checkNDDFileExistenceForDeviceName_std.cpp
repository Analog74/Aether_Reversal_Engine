#include <ni/controller_editor/checkNDDFileExistenceForDeviceName_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::IModel {

void checkNDDFileExistenceForDeviceName(1 param_1, std::string const& {
unsigned long uVar1;
  string *psVar2;
  uint local_58 [2];
  filesystem local_50 [16];
  void *local_40;
  unsigned long local_38 [2];
  void *local_28;
  
  if (((byte)*param_1 & 1) == 0) {
    if ((byte)*param_1 >> 1 == 0) return;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    uVar1 = 0;
    return;
  }
  ni::filesystem::system_data_ni_dir(local_50);
  // boost code
  // boost code
  if (((byte)*param_1 & 1) == 0) {
    psVar2 = param_1 + 1;
    uVar1 = (unsigned long)((byte)*param_1 >> 1);
  }
  else {
    uVar1 = *(unsigned long *)(param_1 + 8);
    psVar2 = *(string **)(param_1 + 0x10);
  }
  // boost code
  local_38[0] = CONCAT35(local_38[0]._5_3_,0x64646e06);
  // boost code
  if ((local_38[0] & 1) != 0) {
    delete(local_28);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_28 = (void *)0x0;
  // boost code
  uVar1 = 0((int7)((unsigned long)psVar2 >> 8),1 < local_58[0]);
  if (((byte)local_50[0] & 1) != 0) {
    delete(local_40);
  }
  return uVar1 & 0xffffffff;
}
}
