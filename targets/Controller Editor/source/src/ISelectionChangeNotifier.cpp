#include <ni/controller_editor/ISelectionChangeNotifier.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI {

ISelectionChangeNotifier::~ISelectionChangeNotifier() {
~ISelectionChangeNotifier(this);
  delete(this);
  return;
}
}
