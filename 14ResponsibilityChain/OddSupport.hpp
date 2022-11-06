#pragma once
#include "Support.hpp"

class OddSupport : public Support {
public:
    using Support::Support;
    virtual bool resolve(Trouble *trouble) override {
        if (trouble->GetNumber() % 2 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
};
