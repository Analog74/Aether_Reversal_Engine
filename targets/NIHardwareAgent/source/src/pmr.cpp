#include <ni/controller_editor/pmr.hpp>
namespace boost::container {

void pmr::get_default_resource() {
int iVar1;
  void **ppuVar2;
  
  iVar1 = _boost_cont_global_sync_lock();
  if (iVar1 == 0) {
    ppuVar2 = &dtl::singleton_default<// boost code
               obj;
    if (dtl::singleton_default<// boost code
        '\0') {
      iVar1 = ___cxa_guard_acquire
                        (&dtl::singleton_default<// boost code
                          instance()::obj);
      if (iVar1 != 0) {
        ___cxa_guard_release
                  (&dtl::singleton_default<// boost code
                    instance()::obj);
      }
    }
  }
  else {
    ppuVar2 = default_memory_resource;
    if ((default_memory_resource == (void **)0x0) &&
       (ppuVar2 = &dtl::singleton_default<// boost code
                   instance()::obj,
       dtl::singleton_default<// boost code
       '\0')) {
      iVar1 = ___cxa_guard_acquire
                        (&dtl::singleton_default<// boost code
                          instance()::obj);
      if (iVar1 != 0) {
        ___cxa_guard_release
                  (&dtl::singleton_default<// boost code
                    instance()::obj);
      }
    }
    _boost_cont_global_sync_unlock();
  }
  return ppuVar2;
}
}
