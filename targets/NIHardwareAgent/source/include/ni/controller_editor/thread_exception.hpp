#pragma once
namespace boost {
class thread_exception {
public:
    thread_exception(int, char const*);
    virtual ~thread_exception();
};
}
