#pragma once
#include <iostream>
#include <string>

class Banner {
public:
    Banner(const std::string &str) : m_str(str) {}
    void ShowWithParen() {
        std::cout << "(" << m_str << ")" << std::endl;
    }
    void ShowWithAster() {
        std::cout << "*" << m_str << "*" << std::endl;
    }
private:
    std::string m_str;
};
