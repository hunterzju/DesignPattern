#include "Add.hpp"
#include "Sub.hpp"
#include "Mul.hpp"
#include "Div.hpp"
#include "Constant.hpp"
#include <iostream>

int main() {
    Context ctx;
    Variable a;
    Variable b;
    Constant c(1024);

    ctx.RegisterVariable(&a, 22);
    ctx.RegisterVariable(&b, 11);
    Expression *e1 = new Mul(&a, &b);
    Expression *e2 = new Div(&a, &b);
    Expression *e3 = new Add(e2, &c);
    Expression *e4 = new Sub(e1, e3);
    std::cout << e4->Interprete(&ctx) << std::endl;

    delete e1, e2, e3, e4;
    return 0;
}
