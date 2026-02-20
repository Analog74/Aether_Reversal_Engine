#pragma once
namespace boost::pthread {
class pthread_mutex_scoped_lock {
public:
    virtual ~pthread_mutex_scoped_lock();
};
}
