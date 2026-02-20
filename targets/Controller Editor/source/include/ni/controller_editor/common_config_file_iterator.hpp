#pragma once
namespace boost::program_options::detail {
class common_config_file_iterator {
public:
    virtual void add_option(char const*);
    virtual void get() [clone .cold.2];
    virtual ~common_config_file_iterator();
};
}
