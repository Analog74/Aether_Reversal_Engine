#include <ni/controller_editor/throw_bad_variant_access_std.hpp>
namespace std::string const& eggs::variants::detail {

void throw_bad_variant_access<std::string const&>() {
unsigned long long *puVar1;
  
  puVar1 = (unsigned long long *)___cxa_allocate_exception(8);
  *puVar1 = &PTR__bad_variant_access_100236fc8;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(puVar1,&bad_variant_access::typeinfo,bad_variant_access::~bad_variant_access);
}
}
