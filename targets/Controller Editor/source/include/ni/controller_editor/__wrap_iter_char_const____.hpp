#pragma once
namespace boost::spirit::qi {
template<typename T>
class expectation_failure {
public:
    virtual ~expectation_failure();
};
}
