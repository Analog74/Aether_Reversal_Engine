#pragma once
namespace boost::program_options {
class option_description {
public:
    virtual void canonical_display_name(int) const;
    virtual void set_names(char const*);
    virtual ~option_description();
};
}
