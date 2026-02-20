#pragma once
namespace boost::program_options {
class invalid_config_file_syntax {
public:
    virtual void tokens() const;
    virtual ~invalid_config_file_syntax();
};
}
