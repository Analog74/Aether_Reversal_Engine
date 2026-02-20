#include <ni/controller_editor/gzip_compressor.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

gzip_compressor::~gzip_compressor() {
*(void ***)this = &PTR_algorithm_101b1d9c0;
  _deflateEnd((z_streamp)(this + 0x10));
  delete(this);
  return;
}
}
