#pragma once
namespace NI::UIA {
class JPGSourceManager<512ul> {
public:
    virtual void fillInputBuffer(jpeg_decompress_struct*);
    virtual void initSource(jpeg_decompress_struct*);
    virtual void jpg_term_source(jpeg_decompress_struct*);
    virtual void skipInputData(jpeg_decompress_struct*, long);
};
}
