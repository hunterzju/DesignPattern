#pragma
#include "Banner.h"
#include "Painter.h"

class PainterBanner : public Banner, public Painter {
public:
    PainterBanner(const std::string &str) : Banner(str) {}
    virtual void PrintStrong() override {
        ShowWithParen();
    }
    virtual void PrintWeak() override {
        ShowWithAster();
    }
};
