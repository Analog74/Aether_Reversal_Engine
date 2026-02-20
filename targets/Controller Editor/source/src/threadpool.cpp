#include <ni/controller_editor/threadpool.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace crossplat {

threadpool::~threadpool() {
*(void ***)this = &PTR__threadpool_101b1fa50;
  // boost code
  delete(this);
  return;
}
}
