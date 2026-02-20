#pragma once
namespace NI::UIA {
class AppTarget {
public:
    virtual void asString() const;
    virtual void setTarget(unsigned int);
};
}
