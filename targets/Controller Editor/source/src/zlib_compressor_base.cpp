#include <ni/controller_editor/zlib_compressor_base.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace web::http::compression::builtin {

zlib_compressor_base::~zlib_compressor_base() {
*(void ***)this = &PTR_algorithm_101b1d9c0;
  _deflateEnd((z_streamp)(this + 0x10));
  delete(this);
  return;
}
}
