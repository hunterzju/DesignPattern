#pragma once
#include "Hand.h"

class IStrategy {
public:
    virtual ~IStrategy() {}
    virtual Hand NextHand() = 0;
    virtual void Study(bool win) = 0;
};
