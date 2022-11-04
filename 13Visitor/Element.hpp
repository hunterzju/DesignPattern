#pragma once
#include "Visitor.hpp"

class Element {
public:
    virtual ~Element() {}
    virtual void Accept(Visitor *visitor) = 0;
};
