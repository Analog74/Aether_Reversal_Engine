#include <ni/controller_editor/Destination__std.hpp>
namespace NI::NHL2::Logging::setInfoAndDebugDestination(NI::NHL2::Logging {

void Destination, std::ostream*) {
void *puVar1;
  void *puVar2;
  
  puVar1 = param_2;
  puVar2 = param_2;
  if (param_1 != '\x02') {
    if (param_1 == '\x01') {
      PTR_cerr_1009f82b8 = PTR_cerr_1009cc078;
      destinationStream = PTR_cerr_1009cc078;
      return;
    }
    puVar1 = destinationStream;
    puVar2 = PTR_cerr_1009f82b8;
    if (param_1 == '\0') {
      destinationStream = (void *)0x0;
      PTR_cerr_1009f82b8 = (void *)0x0;
      return;
    }
  }
  PTR_cerr_1009f82b8 = puVar2;
  destinationStream = puVar1;
  return;
}
}
