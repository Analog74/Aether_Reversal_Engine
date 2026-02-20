#pragma once
namespace boost::uuids {
class entropy_error {
public:
    virtual void errcode() const;
    virtual ~entropy_error();
};
}
