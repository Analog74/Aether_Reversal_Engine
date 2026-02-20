#include <ni/controller_editor/ClientInstance.hpp>
namespace NI::dawcontrol {

ClientInstance::~ClientInstance() {
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
