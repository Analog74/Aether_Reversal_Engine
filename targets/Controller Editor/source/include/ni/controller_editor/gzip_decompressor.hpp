#pragma once
namespace web::http::compression::builtin {
class gzip_decompressor {
public:
    virtual ~gzip_decompressor();
};
}
