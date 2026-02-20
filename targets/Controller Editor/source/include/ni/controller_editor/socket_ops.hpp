#pragma once
namespace boost::asio::detail {
class socket_ops {
public:
    virtual void freeaddrinfo(addrinfo*);
    virtual void translate_addrinfo_error(int);
};
}
