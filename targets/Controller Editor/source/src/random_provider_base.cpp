#include <ni/controller_editor/random_provider_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::uuids::detail {

void random_provider_base::get_random_bytes(void*, unsigned long) {
code *pcVar1;
  ssize_t sVar2;
  int *piVar3;
  unsigned long uVar4;
  char *local_78;
  char *local_70;
  unsigned long long local_68;
  void *local_60 [2];
  long local_50;
  string local_48;
  unsigned int local_47;
  unsigned char local_43;
  
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      sVar2 = _read(*(int *)this,(void *)((long)param_1 + uVar4),param_2 - uVar4);
      if (sVar2 < 0) {
        piVar3 = ___error();
        local_50 = (long)*piVar3;
        if (local_50 != 4) {
          local_48 = (string)0x8;
          local_47 = 0x64616572;
          local_43 = 0;
          // std code
          local_60[0] = (char*)PTR_vtable_101ab4508 + 0x10;
          local_78 = 
          "/Volumes/build/NIBuild/3rdparty/boost-v1.78.0-R11/boost/uuid/detail/random_provider_posix.ipp"
          ;
          local_70 = 
          "void // boost code
          local_68 = 0x62;
          throw_exception<// boost code
                    ((entropy_error *)local_60,(source_location *)&local_78);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      else {
        uVar4 = uVar4 + sVar2;
      }
    } while (uVar4 < param_2);
  }
  return;
}

random_provider_base::random_provider_base() {
code *pcVar1;
  int iVar2;
  int *piVar3;
  char *local_58;
  char *local_50;
  unsigned long long local_48;
  void *local_40 [2];
  long local_30;
  string local_28;
  char local_27 [23];
  
  *(unsigned int *)this = 0xffffffff;
  iVar2 = _open("/dev/urandom",0x1000000);
  *(int *)this = iVar2;
  if (iVar2 != -1) {
    
  }
  piVar3 = ___error();
  iVar2 = *piVar3;
  local_28 = (string)0x22;
  builtin_strncpy(local_27,"open /dev/urandom",0x12);
  // std code
  local_40[0] = (char*)PTR_vtable_101ab4508 + 0x10;
  local_58 = 
  "/Volumes/build/NIBuild/3rdparty/boost-v1.78.0-R11/boost/uuid/detail/random_provider_posix.ipp";
  local_50 = "// boost code
  local_48 = 0x3c;
  local_30 = (long)iVar2;
  throw_exception<// boost code
            ((entropy_error *)local_40,(source_location *)&local_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
}
