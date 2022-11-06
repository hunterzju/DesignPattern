#pragma once
#include "Support.hpp"

class SpecialSupport : public Support {
public:
    SpecialSupport(const std::string &name, int num) : Support(name), m_num(num) {}

    virtual bool resolve(Trouble *trouble) override {
        if (trouble->GetNumber() == m_num) {
            return true;
        }
        else {
            return false;
        }
    }

private:
    int m_num;
};
