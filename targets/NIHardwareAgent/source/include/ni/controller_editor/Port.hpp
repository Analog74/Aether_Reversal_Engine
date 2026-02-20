#pragma once
namespace bmidilib {
class Port {
public:
    virtual void initInputPort();
    virtual void initOutputPort();
    virtual ~Port();
};
}
