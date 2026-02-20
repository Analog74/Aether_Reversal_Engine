#pragma once
namespace boost::asio::detail {
class pipe_select_interrupter {
public:
    virtual void open_descriptors();
    virtual ~pipe_select_interrupter();
};
}
