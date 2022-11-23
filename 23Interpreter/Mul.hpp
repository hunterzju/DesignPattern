#pragma once
#include "Context.hpp"

class Mul : public Expression {
public:
    Mul(Expression *left, Expression *right) : m_left(left), m_right(right) {}

    virtual int Interprete(Context *ctx) override {
        return m_left->Interprete(ctx) * m_right->Interprete(ctx);
    }

private:
    Expression *m_left, *m_right;
};
