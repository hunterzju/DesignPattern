#include "DigitObserver.hpp"
#include "GraphObserver.hpp"
#include "RandomNumGen.hpp"

int main() {
    NumGen *gen = new RandomNumGen();
    NumGenObserver *ob1 = new DigitObserver();
    NumGenObserver *ob2 = new GraphObserver();
    gen->AddObserver(ob1);
    gen->AddObserver(ob2);
    gen->Execute();

    delete gen;
    delete ob1;
    delete ob2;
    
    return 0;
}
