#pragma once
namespace boost::asio::detail {
class scheduler {
public:
    virtual void can_dispatch();
    virtual void init_task();
    virtual void stop();
    virtual ~scheduler();
};
}
