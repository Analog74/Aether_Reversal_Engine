#pragma once
namespace agg::rasterizer_cells_aa<agg {
class cell_aa> {
public:
    virtual void line(int, int, int, int);
    virtual void render_hline(int, int, int, int, int);
    virtual void set_curr_cell(int, int);
    virtual void sort_cells();
};
}
