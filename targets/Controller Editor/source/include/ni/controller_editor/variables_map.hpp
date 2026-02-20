#pragma once
namespace boost::program_options {
class variables_map {
public:
    virtual void notify() [clone .cold.1];
    variables_map();
    virtual ~variables_map();
};
}
