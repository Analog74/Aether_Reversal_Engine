#include <ni/controller_editor/utf8_codecvt_facet.hpp>
namespace boost::filesystem::detail {

void utf8_codecvt_facet::do_always_noconv() const {
return 0;
}

void utf8_codecvt_facet::do_encoding() const {
return 0;
}

void utf8_codecvt_facet::do_max_length() const {
return 6;
}

utf8_codecvt_facet::~utf8_codecvt_facet() {
// std code
  delete(this);
  return;
}
}
