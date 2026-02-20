#pragma once
namespace boost::program_options {
class error_with_option_name {
public:
    virtual void get_canonical_option_name() const;
    virtual ~error_with_option_name();
};
}
