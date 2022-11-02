#pragma once
#include "Border.hpp"

class FullBorder : public Border {
public:
    FullBorder(IDisplay *display) : Border(display) {}
    virtual int GetRows() const override {
        return 1 + m_display->GetRows() + 1;
    }
    virtual int GetColumns() const override {
        return 1 + m_display->GetColumns() + 1;
    }
    virtual std::string GetRow(int index) const override {
        if (index == 0) {
            return "+" + MakeLine('-', m_display->GetColumns()) + "+";
        } else if (index == m_display->GetRows() + 1) {
            return "+" + MakeLine('-', m_display->GetColumns()) + "+";
        } else {
            return "|" + m_display->GetRow(index - 1) + "|";
        }
    }

private:
    std::string MakeLine(char ch, int count) const {
        std::string str;
        str.resize(count, ch);
        return str;
    }
};
