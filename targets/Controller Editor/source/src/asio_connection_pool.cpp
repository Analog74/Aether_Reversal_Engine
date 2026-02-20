#include <ni/controller_editor/asio_connection_pool.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::client::details {

asio_connection_pool::asio_connection_pool() {
int iVar1;
  unsigned long long uVar2;
  void ***local_50;
  unsigned long long **local_48;
  void **local_40;
  unsigned char *local_38;
  unsigned char local_29;
  
  *(unsigned long long *)this = 0;
  *(unsigned long long *)(this + 8) = 0;
  *(unsigned long long *)(this + 0x10) = 0x32aaaba7;
  *(unsigned long long *)(this + 0x18) = 0;
  *(unsigned long long *)(this + 0x20) = 0;
  *(unsigned long long *)(this + 0x28) = 0;
  *(unsigned long long *)(this + 0x30) = 0;
  *(unsigned long long *)(this + 0x38) = 0;
  *(unsigned long long *)(this + 0x40) = 0;
  *(unsigned long long *)(this + 0x48) = 0;
  *(unsigned long long *)(this + 0x58) = 0;
  *(unsigned long long *)(this + 0x60) = 0;
  *(asio_connection_pool **)(this + 0x50) = this + 0x58;
  this[0x68] = (asio_connection_pool)0x0;
  if (::(anonymous_namespace)::initialize_shared_threadpool(unsigned_long)::uninit_threadpool ==
      '\0') {
    iVar1 = ___cxa_guard_acquire
                      (&::(anonymous_namespace)::initialize_shared_threadpool(unsigned_long)::
                        uninit_threadpool);
    if (iVar1 != 0) {
      0 = 0;
      ___cxa_atexit(::(anonymous_namespace)::(anonymous_namespace)::
                    uninitialized<(anonymous_namespace)::threadpool_impl>::~uninitialized,
                    &::(anonymous_namespace)::initialize_shared_threadpool(unsigned_long)::
                     uninit_threadpool,0x100000000);
      ___cxa_guard_release
                (&::(anonymous_namespace)::initialize_shared_threadpool(unsigned_long)::
                  uninit_threadpool);
    }
  }
  local_29 = 0;
  local_40 = (void **)0x1;
  local_38 = &local_29;
  if (::(anonymous_namespace)::initialize_shared_threadpool(unsigned_long)::of != -1) {
    local_50 = &local_40;
    local_48 = &local_50;
    // std code
                               ::of,&local_48,
                     // std code
                     __call_once_proxy<// std code
                    );
  }
  local_40 = &// boost code
              typeid_wrapper<// boost code
              ::typeinfo;
  local_38 = (unsigned char *)0x0;
  uVar2 = // boost code
                    (0,(key *)&local_40,
                     // boost code
                     create<// boost code
                     ,&0);
  *(unsigned long long *)(this + 0x70) = uVar2;
  *(unsigned long long *)(this + 0x88) = 0;
  *(unsigned long long *)(this + 0x90) = 0;
  *(unsigned long long *)(this + 0x98) = 0xffffffffffffffff;
  *(unsigned long long *)(this + 0xa0) = 0;
  *(unsigned long long *)(this + 0xa8) = 0;
  *(void ***)(this + 0xd8) =
       &// boost code
        target_fns_table<// boost code
        ::fns_with_execute;
  *(void ***)(this + 200) =
       &// boost code
        object_fns_table<// boost code
        ::fns;
  *(service_registry ***)(this + 0xb0) = &0;
  *(asio_connection_pool **)(this + 0xd0) = this + 0xb0;
  *(void ***)(this + 0xe0) =
       &// boost code
        any_executor<// boost code
        ::prop_fns_table<// boost code
        fns;
  *(unsigned long long *)(this + 0x78) = 0x7ffffffffffffffe;
  this[0x80] = (asio_connection_pool)0x0;
  
}
}
