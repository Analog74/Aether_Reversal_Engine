#pragma once
namespace pplx::details {
class platform {
public:
    virtual void GetCurrentThreadId();
};
}
