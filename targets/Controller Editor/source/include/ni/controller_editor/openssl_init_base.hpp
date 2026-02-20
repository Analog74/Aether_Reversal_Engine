#pragma once
namespace boost::asio::ssl::detail {
class openssl_init_base {
public:
    virtual void instance();
};
}
