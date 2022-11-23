#pragma once
#include "Expression.hpp"

class Context;

class Variable : public Expression {
public:
    virtual int Interprete(Context *ctx) override;
};
