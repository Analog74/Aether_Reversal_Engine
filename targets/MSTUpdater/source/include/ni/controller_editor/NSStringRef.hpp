#pragma once
namespace NI::GP {
class NSStringRef {
public:
    virtual void assign(NSString*, bool);
    virtual ~NSStringRef();
};
}
