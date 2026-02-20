#include <ni/controller_editor/system.hpp>
namespace void boost::throw_exception<boost::system::system_error>(boost {

void system::system_error const&) {
clone_impl<// boost code
  void *local_90 [2];
  unsigned long long local_80;
  unsigned long long local_78;
  
  void *local_58;
  unsigned long long local_50;
  unsigned long long local_48;
  unsigned long long local_40;
  unsigned int local_38;
  
  this = (clone_impl<// boost code
         ___cxa_allocate_exception(0x68);
  // std code
  local_90[0] = PTR_vtable_100227270 + 0x10;
  local_80 = *(unsigned long long *)(param_1 + 0x10);
  local_78 = *(unsigned long long *)(param_1 + 0x18);
  // std code
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0xffffffff;
  local_90[0] = PTR_vtable_100227230 + 0x10;
  local_58 = PTR_vtable_100227230 + 0x38;
  exception_detail::
  clone_impl<// boost code
            (this,(error_info_injector *)local_90);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_100227158,
               exception_detail::
               clone_impl<// boost code
               ::~clone_impl);
}
}
