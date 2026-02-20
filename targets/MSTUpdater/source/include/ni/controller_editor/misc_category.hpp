#pragma once
namespace boost::asio::error::detail {
class misc_category {
public:
    virtual void message(int) const;
    virtual void name() const;
    virtual ~misc_category();
};
}
