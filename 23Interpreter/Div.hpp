#pragma once
#include "Context.hpp"
#include <cassert>

class Div : public Expression {
public:
    Div(Expression *left, Expression *right) : m_left(left), m_right(right) {}

    virtual int Interprete(Context *ctx) override {
        assert(m_right->Interprete(ctx) != 0);
        return m_left->Interprete(ctx) / m_right->Interprete(ctx);
    }

private:
    Expression *m_left, *m_right;
};
