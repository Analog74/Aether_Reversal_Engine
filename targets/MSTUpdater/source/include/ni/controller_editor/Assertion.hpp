#pragma once
namespace NI::GP {
class Assertion {
public:
    virtual void DoFail(char const*, int, char const*);
    virtual void setSilent(bool);
};
}
