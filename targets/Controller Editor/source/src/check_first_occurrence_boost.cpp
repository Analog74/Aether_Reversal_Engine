#include <ni/controller_editor/check_first_occurrence_boost.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace boost::program_options::validators {

void check_first_occurrence(boost::any const&) [clone .cold.1] {
if (((byte)param_1[0x48] & 1) != 0) {
    delete(*(void **)(param_1 + 0x58));
  }
  return;
}
}
