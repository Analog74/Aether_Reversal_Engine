#include <ni/controller_editor/path_locale_deleter.hpp>
namespace (anonymous namespace) {

path_locale_deleter::~path_locale_deleter() {
locale *plVar1;
  
  plVar1 = g_path_locale;
  if (g_path_locale != (locale *)0x0) {
    // std code
    delete(plVar1);
  }
  g_path_locale = (locale *)0x0;
  return;
}
}
