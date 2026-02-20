#pragma once
namespace web::http::client::details {
class _http_client_communicator {
public:
    virtual void base_uri() const;
    virtual void client_config() const;
    virtual void finish_request() [clone .cold.1];
    virtual ~_http_client_communicator();
};
}
