#pragma once
class Context;

class Expression {
public:
    virtual ~Expression() {}
    virtual int Interprete(Context *ctx) = 0;
};
