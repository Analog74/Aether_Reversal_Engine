#pragma once
namespace NI::GP::DETAIL {
class CFRegistryImpl {
public:
    virtual void needElevation() const;
    virtual void setForceElevation();
    virtual ~CFRegistryImpl();
};
}
