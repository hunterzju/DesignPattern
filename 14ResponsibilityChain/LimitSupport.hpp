#pragma once
#include "Support.hpp"

class LimitSupport : public Support {
public:
    LimitSupport(const std::string &name, int limit) : Support(name), m_limit(limit) {}
    virtual bool resolve(Trouble *trouble) override {
        if (trouble->GetNumber() <= m_limit) {
            return true;
        }
        else {
            return false;
        }
    }

private:
    int m_limit;
};
