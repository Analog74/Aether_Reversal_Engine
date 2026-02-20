#pragma once
namespace boost::asio::detail::kqueue_reactor {
class descriptor_state {
public:
    virtual ~descriptor_state();
};
}
