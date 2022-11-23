#pragma once
#include "Expression.hpp"

class Constant : public Expression {
public:
    Constant(int value) : m_value(value) {}
    virtual int Interprete(Context *ctx) override {
        return m_value;
    }

private:
    int m_value;
};
