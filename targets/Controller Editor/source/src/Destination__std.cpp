#include <ni/controller_editor/Destination__std.hpp>
#include "../../../../dynamic_headers/ni_common_types.h"
namespace NI::NHL2::Logging::setInfoAndDebugDestination(NI::NHL2::Logging {

void Destination, std::ostream*) {
void *puVar1;
  void *puVar2;
  
  puVar1 = param_2;
  puVar2 = param_2;
  if (param_1 != '\x02') {
    if (param_1 == '\x01') {
      PTR_cerr_101b873d8 = PTR_cerr_101ab40e8;
      destinationStream = PTR_cerr_101ab40e8;
      return;
    }
    puVar1 = destinationStream;
    puVar2 = PTR_cerr_101b873d8;
    if (param_1 == '\0') {
      destinationStream = (void *)0x0;
      PTR_cerr_101b873d8 = (void *)0x0;
      return;
    }
  }
  PTR_cerr_101b873d8 = puVar2;
  destinationStream = puVar1;
  return;
}
}
