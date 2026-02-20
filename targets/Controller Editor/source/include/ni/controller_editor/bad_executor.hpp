#pragma once
namespace boost::asio::execution {
class bad_executor {
public:
    bad_executor();
    virtual ~bad_executor();
};
}
