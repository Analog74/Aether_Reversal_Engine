#pragma once
namespace boost::asio::cancellation_slot {
class auto_delete_helper {
public:
    virtual ~auto_delete_helper();
};
}
