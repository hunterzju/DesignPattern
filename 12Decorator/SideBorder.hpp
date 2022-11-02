#pragma once
#include "Border.hpp"

class SideBorder : public Border {
public:
    SideBorder(IDisplay *display, const char &borderChar) : Border(display), m_borderChar(borderChar) {}
    virtual int GetRows() const override {
        return m_display->GetRows();
    }
    virtual int GetColumns() const override {
        return 1 + m_display->GetColumns() + 1;
    }
    virtual std::string GetRow(int index) const override {
        return m_borderChar + m_display->GetRow(index) + m_borderChar;
    }

private:
    char m_borderChar;
};
