#pragma once
namespace fmt::v9 {
class format_error {
public:
    format_error(char const*);
    virtual ~format_error();
};
}
