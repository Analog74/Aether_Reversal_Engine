#pragma once
namespace boost::asio::detail {
class thread_context {
public:
    virtual void top_of_thread_call_stack();
};
}
