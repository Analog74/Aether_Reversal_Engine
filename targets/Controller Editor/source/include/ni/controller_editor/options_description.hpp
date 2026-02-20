#pragma once
namespace boost::program_options {
class options_description {
public:
    virtual void add_options();
    virtual ~options_description();
};
}
