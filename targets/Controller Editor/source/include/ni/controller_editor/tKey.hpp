#pragma once
namespace NI::GP::Registry2 {
class tKey {
public:
    virtual void createData();
    virtual void disposeData();
    virtual void getValueBool(char const*, bool&) const;
};
}
