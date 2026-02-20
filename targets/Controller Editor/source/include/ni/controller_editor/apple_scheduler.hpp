#pragma once
namespace pplx::details {
class apple_scheduler {
public:
    virtual void schedule(void (*)(void*), void*);
    virtual ~apple_scheduler();
};
}
