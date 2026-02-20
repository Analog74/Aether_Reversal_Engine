#pragma once
namespace boost::asio::ssl {
class context {
public:
    virtual void set_default_verify_paths();
    virtual void set_options(long);
    virtual ~context();
};
}
