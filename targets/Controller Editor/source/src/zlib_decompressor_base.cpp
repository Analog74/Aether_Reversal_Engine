#include <ni/controller_editor/zlib_decompressor_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

zlib_decompressor_base::~zlib_decompressor_base() {
*(void ***)this = &PTR_algorithm_101b1ddf0;
  _inflateEnd((z_streamp)(this + 0x10));
  delete(this);
  return;
}
}
