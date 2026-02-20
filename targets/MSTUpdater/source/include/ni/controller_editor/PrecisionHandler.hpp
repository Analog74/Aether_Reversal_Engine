#pragma once
namespace fmt::internal {
class PrecisionHandler {
public:
    virtual void report_unhandled_arg();
};
}
