#pragma once
namespace web::http::client::details {
class request_context {
public:
    virtual void _get_readbuffer() [clone .cold.1];
    virtual void _get_writebuffer() [clone .cold.1];
    virtual void complete_headers();
    virtual void finish();
    virtual void get_compression_header() const;
    virtual void handle_compression();
    virtual ~request_context();
};
}
