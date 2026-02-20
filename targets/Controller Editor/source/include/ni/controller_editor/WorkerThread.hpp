#pragma once
namespace ni::uret {
class WorkerThread {
public:
    virtual void main();
    virtual void track() [clone .cold.1];
    virtual ~WorkerThread();
};
}
