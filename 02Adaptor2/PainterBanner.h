#pragma once
#include "Banner.h"
#include "Painter.h"

class PainterBanner : public Painter {
public:
    PainterBanner(const std::string &str) : m_banner(str) {}
    virtual void PrintStrong() override {
        m_banner.ShowWithParen();
    }
    virtual void PrintWeak() override {
        m_banner.ShowWithAster();
    }
private:
    Banner m_banner;
};
