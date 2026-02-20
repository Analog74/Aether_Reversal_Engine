#pragma once
namespace boost {
class thread {
public:
    virtual void do_try_join_until(timespec const&);
};
}
