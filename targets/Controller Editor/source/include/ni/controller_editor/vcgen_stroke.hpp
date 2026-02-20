#pragma once
namespace agg {
class vcgen_stroke {
public:
    virtual void add_vertex(double, double, unsigned int);
    virtual void remove_all();
    virtual void rewind(unsigned int);
    vcgen_stroke();
    virtual void vertex(double*, double*);
};
}
