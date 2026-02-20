#pragma once
namespace boost::asio {
class io_context {
public:
    io_context(int);
    virtual ~io_context();
};
}
