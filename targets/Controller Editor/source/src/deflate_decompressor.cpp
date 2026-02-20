#include <ni/controller_editor/deflate_decompressor.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

deflate_decompressor::~deflate_decompressor() {
*(void ***)this = &PTR_algorithm_101b1ddf0;
  _inflateEnd((z_streamp)(this + 0x10));
  delete(this);
  return;
}
}
