#pragma once
namespace boost::signals2 {
class connection {
public:
    virtual void disconnect() const;
};
}
