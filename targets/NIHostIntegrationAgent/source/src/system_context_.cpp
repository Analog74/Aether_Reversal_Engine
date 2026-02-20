#include <ni/controller_editor/system_context_.hpp>
namespace boost::asio::detail::posix_global_impl<boost::asio {

void system_context>::~posix_global_impl() {
system_context *psVar1;
  
  psVar1 = static_ptr_;
  if (static_ptr_ != (system_context *)0x0) {
    system_context::~system_context(static_ptr_);
    delete(psVar1);
    return;
  }
  return;
}
}
