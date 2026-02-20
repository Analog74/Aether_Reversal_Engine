#include <ni/controller_editor/bad_function_call.hpp>
namespace std {

bad_function_call::~bad_function_call() {
// std code
  delete(this);
  return;
}
}
