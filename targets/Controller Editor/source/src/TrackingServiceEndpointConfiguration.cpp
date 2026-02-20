#include <ni/controller_editor/TrackingServiceEndpointConfiguration.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace ni::uret::cfg {

TrackingServiceEndpointConfiguration::~TrackingServiceEndpointConfiguration() {
if (((byte)this[0x18] & 1) != 0) {
    delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  delete(*(void **)(this + 0x10));
  return;
}
}
