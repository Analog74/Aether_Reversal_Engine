#pragma once
namespace NI::dawcontrol::generic_daw {
class GenericDAWClient {
public:
    virtual void onFocus(bool);
    virtual ~GenericDAWClient();
};
}
