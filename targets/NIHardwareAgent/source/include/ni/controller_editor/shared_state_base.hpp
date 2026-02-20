#pragma once
namespace boost::detail {
class shared_state_base {
public:
    virtual void notify_deferred();
};
}
