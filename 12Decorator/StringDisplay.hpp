#pragma once
#include "IDisplay.hpp"

class StringDisplay : public IDisplay {
public:
    StringDisplay(const std::string &str) : m_str(str) {}
    virtual int GetRows() const override {
        return 1;
    }
    virtual int GetColumns() const override {
        return static_cast<int>(m_str.length());
    }
    virtual std::string GetRow(int index) const override {
        if (index == 0) {
            return m_str;
        } else {
            return {};
        }
    }

private:
    std::string m_str;
};
