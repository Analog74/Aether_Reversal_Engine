#pragma once
namespace boost::asio::detail {
class thread_info_base {
public:
    virtual void capture_current_exception();
    virtual ~thread_info_base();
};
}
