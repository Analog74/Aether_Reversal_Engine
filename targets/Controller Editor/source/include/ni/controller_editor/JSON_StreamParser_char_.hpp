#pragma once
namespace web::json::details {
class JSON_StreamParser<char> {
public:
    virtual void NextCharacter();
    virtual void PeekCharacter();
};
}
