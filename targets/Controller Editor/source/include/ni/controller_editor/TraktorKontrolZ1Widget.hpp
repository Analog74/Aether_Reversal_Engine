#pragma once
namespace NI {
class TraktorKontrolZ1Widget {
public:
    virtual void createMainPanel() [clone .cold.2];
    virtual void setLabelVisibility(bool);
    virtual void supportsLabelVisibility() const;
    virtual ~TraktorKontrolZ1Widget();
};
}
