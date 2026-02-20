#pragma once
namespace Concurrency::streams::details {
class basic_producer_consumer_buffer<unsigned char> {
public:
    virtual void _sbumpc();
    virtual void _sgetc();
    virtual void _sync();
    virtual void _ungetc();
    virtual void can_seek() const;
    virtual void has_size() const;
    virtual void in_avail() const;
};
}
