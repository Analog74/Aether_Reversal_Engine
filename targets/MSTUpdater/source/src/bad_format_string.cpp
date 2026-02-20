#include <ni/controller_editor/bad_format_string.hpp>
namespace boost::io {

bad_format_string::~bad_format_string() {
// std code
  delete(this);
  return;
}
}
