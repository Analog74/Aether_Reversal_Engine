#pragma once
namespace boost::asio {
class cancellation_slot {
public:
    virtual void prepare_memory(unsigned long, unsigned long);
};
}
