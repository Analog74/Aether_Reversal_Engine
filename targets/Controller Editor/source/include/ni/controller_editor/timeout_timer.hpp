#pragma once
namespace web::http::client::details::asio_context {
class timeout_timer {
public:
    virtual ~timeout_timer();
};
}
