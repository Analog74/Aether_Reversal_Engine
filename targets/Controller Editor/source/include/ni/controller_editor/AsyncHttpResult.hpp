#pragma once
namespace ni::uret {
class AsyncHttpResult {
public:
    virtual void waitForResult(unsigned int);
};
}
