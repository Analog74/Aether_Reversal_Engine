#pragma once
namespace web::http::client::details {
class asio_context {
public:
    virtual void generate_basic_auth_header();
    virtual void generate_basic_proxy_auth_header();
    virtual void read_headers();
    virtual void start_request() [clone .cold.1];
    virtual void write_request();
    virtual ~asio_context();
};
}
