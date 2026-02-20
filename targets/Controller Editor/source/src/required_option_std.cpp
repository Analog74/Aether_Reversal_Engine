#include <ni/controller_editor/required_option_std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::required_option {

void required_option(1 param_1, std::string const& {
ushort local_50 [8];
  void *local_40;
  unsigned long local_38 [2];
  char *local_28;
  
  local_28 = (char *)new char[0x40];
  local_38[0] = 0x41;
  local_38[1] = 0x37;
  builtin_strncpy(local_28,"the option \'%canonical_option%\' is required but missing",0x38);
  local_50[0] = 0;
  error_with_option_name::error_with_option_name
            ((error_with_option_name *)this,(string *)local_38,(string *)local_50,param_1,0);
  if ((local_50[0] & 1) != 0) {
    delete(local_40);
  }
  if ((local_38[0] & 1) != 0) {
    delete(local_28);
  }
  *(void **)this = (char*)PTR_vtable_101ab4498 + 0x10;
  return;
}
}
