#pragma once
namespace void eggs::variants::detail {
class move_assign {
public:
    virtual void call<bool>(void*, void*);
    virtual void call<float>(void*, void*);
    virtual void call<int>(void*, void*);
    virtual void call<unsigned int>(void*, void*);
};
}
