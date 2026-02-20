#pragma once
namespace web::http::details {
class http_msg_base {
public:
    virtual void _extract_vector();
    virtual void _prepare_to_receive_data();
    http_msg_base() [clone .cold.2];
    virtual ~http_msg_base();
};
}
