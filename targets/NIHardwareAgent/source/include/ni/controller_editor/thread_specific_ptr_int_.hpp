#pragma once
namespace boost {
class thread_specific_ptr<int> {
public:
    virtual void cleanup_caller(void (*)(void*), void*);
    virtual void default_deleter(int*);
    virtual void ~thread_specific_ptr();
};
}
