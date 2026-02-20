#include <ni/controller_editor/rate_limited_compression_timer.hpp>
namespace ni::asio {

rate_limited_compression_timer::~rate_limited_compression_timer() {
rate_limited_compression_timer *prVar1;
  
  prVar1 = *(rate_limited_compression_timer **)(this + 0xa0);
  if (this + 0x80 == prVar1) {
    (**(code **)(*(long *)prVar1 + 0x20))();
  }
  else if (prVar1 != (rate_limited_compression_timer *)0x0) {
    (**(code **)(*(long *)prVar1 + 0x28))();
  }
  // boost code
  io_object_impl<// boost code
  ::~io_object_impl((io_object_impl<// boost code
                     *)this);
  return;
}
}
