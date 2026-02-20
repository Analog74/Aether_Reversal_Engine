#include <ni/controller_editor/gzip_decompressor.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

gzip_decompressor::~gzip_decompressor() {
*(void ***)this = &PTR_algorithm_101b1ddf0;
  _inflateEnd((z_streamp)(this + 0x10));
  delete(this);
  return;
}
}
