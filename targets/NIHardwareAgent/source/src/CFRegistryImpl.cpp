#include <ni/controller_editor/CFRegistryImpl.hpp>
namespace NI::GP::DETAIL {

void CFRegistryImpl::needElevation() const {
Authentication::isAuthenticationNeeded();
  return;
}

void CFRegistryImpl::setForceElevation() {
return;
}

CFRegistryImpl::~CFRegistryImpl() {
~CFRegistryImpl(this);
  delete(this);
  return;
}
}
