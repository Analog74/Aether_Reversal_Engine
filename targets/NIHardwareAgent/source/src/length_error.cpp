#include <ni/controller_editor/length_error.hpp>
namespace std {

length_error::length_error(char const*) {
// std code
            ((logic_error *)this,
             "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
  *(void **)this = PTR_vtable_1009cc2a0 + 0x10;
  
}
}
