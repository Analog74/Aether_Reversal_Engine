#pragma once
namespace fmt::ArgVisitor<fmt::internal {
class PrecisionHandler, int> {
public:
    virtual void visit_double(double);
    virtual void visit_long_double(long double);
    virtual void visit_pointer(void const*);
    virtual void visit_unhandled_arg();
};
}
