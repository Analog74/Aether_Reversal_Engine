#pragma once
namespace boost::detail {
class externally_launched_thread {
public:
    virtual void run();
    virtual ~externally_launched_thread();
};
}
