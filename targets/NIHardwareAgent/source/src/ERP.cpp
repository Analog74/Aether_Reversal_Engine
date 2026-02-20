#include <ni/controller_editor/ERP.hpp>
namespace NI::NHL2::SERVER {

ERP::ERP(unsigned int) {
*(uint *)this = param_1;
  *(unsigned int *)(this + 4) = 0xfffffc19;
  *(unsigned long long *)(this + 8) = 0;
  
}

ERP::~ERP() {
return;
}
}
