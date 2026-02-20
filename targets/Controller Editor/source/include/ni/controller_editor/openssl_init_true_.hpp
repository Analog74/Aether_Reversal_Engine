#pragma once
namespace boost::asio::ssl::detail {
class openssl_init<true> {
public:
    virtual void ~openssl_init();
};
}
