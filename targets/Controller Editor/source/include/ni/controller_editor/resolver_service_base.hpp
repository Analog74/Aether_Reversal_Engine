#pragma once
namespace boost::asio::detail {
class resolver_service_base {
public:
    virtual void base_shutdown();
    virtual void start_work_thread();
    virtual ~resolver_service_base();
};
}
