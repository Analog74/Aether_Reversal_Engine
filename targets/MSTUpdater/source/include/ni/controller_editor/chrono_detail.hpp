#pragma once
namespace boost::chrono {
class chrono_detail {
public:
    virtual void steady_full();
    virtual void steady_simplified();
};
}
