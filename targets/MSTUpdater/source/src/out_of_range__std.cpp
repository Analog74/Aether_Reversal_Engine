#include <ni/controller_editor/out_of_range__std.hpp>
namespace void boost::throw_exception<std {

void out_of_range>(std::out_of_range const&) {
clone_impl<// boost code
  void *local_58 [2];
  void *local_48;
  unsigned long long local_40;
  unsigned long long local_38;
  unsigned long long local_30;
  unsigned int local_28;
  
  this = (clone_impl<// boost code
         ___cxa_allocate_exception(0x40);
  // std code
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0xffffffff;
  local_58[0] = PTR_vtable_100227240 + 0x10;
  local_48 = PTR_vtable_100227240 + 0x38;
  exception_detail::clone_impl<// boost code
  clone_impl(this,(error_info_injector *)local_58);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,PTR_typeinfo_100227168,
               exception_detail::
               clone_impl<// boost code
               ~clone_impl);
}
}
