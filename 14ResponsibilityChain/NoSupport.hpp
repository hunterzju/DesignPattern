#pragma once
#include "Support.hpp"

class NoSupport : public Support {
public:
    using Support::Support;
    virtual bool resolve(Trouble *trouble) override {
        return false;
    }
};
