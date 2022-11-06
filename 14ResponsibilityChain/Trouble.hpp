#pragma once
#include <string>

class Trouble {
public:
    Trouble(int number) : m_number(number) {}
    int GetNumber() const {
        return m_number;
    }
    std::string ToString() const {
        return "[ Trouble " + std::to_string(m_number) + " ]";
    }
private:
    int m_number;
};
