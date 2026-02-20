#pragma once
namespace Concurrency::streams::details {
class streambuf_state_manager<unsigned char> {
public:
    virtual void _close_read();
    virtual void _close_write();
    virtual void alloc(unsigned long);
    virtual void bumpc() [clone .cold.2];
    virtual void can_read() const;
    virtual void can_write() const;
    virtual void commit(unsigned long);
    virtual void exception() const;
    virtual void getc() [clone .cold.2];
    virtual void is_eof() const;
    virtual void is_open() const;
    virtual void nextc() [clone .cold.2];
    virtual void sbumpc();
    virtual void sgetc();
};
}
