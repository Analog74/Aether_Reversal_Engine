#include <ni/controller_editor/IEditingChangeNotifier.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

IEditingChangeNotifier::~IEditingChangeNotifier() {
~IEditingChangeNotifier(this);
  delete(this);
  return;
}
}
