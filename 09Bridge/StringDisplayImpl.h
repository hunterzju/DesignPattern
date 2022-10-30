#pragma once
#include "IDisplayImpl.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;

class StringDisplayImpl : public IDisplayImpl {
public: 
    StringDisplayImpl(const std::string &str) : m_str(str) {}
    virtual void RawOpen() override {
        PrintLine();
    }
    virtual void RawPrint() override {
        cout << "|" << m_str << "|" << endl;
    }
    virtual void RawClose() override {
        PrintLine();
    }

private:
    void PrintLine() {
        cout << "+";
        for (size_t i = 0; i < m_str.length(); ++i) {
            cout << "-";
        }
        cout << "+" << endl;
    }
private:
    std::string m_str;
};
