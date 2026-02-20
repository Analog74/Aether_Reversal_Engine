#pragma once
namespace boost::asio::ssl::detail {
class engine {
public:
    virtual void do_accept(void*, unsigned long);
    virtual void do_connect(void*, unsigned long);
    virtual void do_read(void*, unsigned long);
    virtual void do_write(void*, unsigned long);
    engine(ssl_ctx_st*);
    virtual void native_handle();
    virtual void verify_callback_function(int, x509_store_ctx_st*);
    virtual ~engine();
};
}
