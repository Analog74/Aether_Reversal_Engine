#pragma once
namespace boost::asio::ssl {
class rfc2818_verification {
public:
    virtual void match_pattern(char const*, unsigned long, char const*);
};
}
