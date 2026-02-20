#include <ni/controller_editor/filesystem_error.hpp>
namespace boost::filesystem {

filesystem_error::~filesystem_error() {
~filesystem_error(this);
  delete(this);
  return;
}
}
