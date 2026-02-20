#pragma once
namespace NI::GP {
class CFString {
public:
    virtual void retain() const;
    virtual ~CFString();
};
}
