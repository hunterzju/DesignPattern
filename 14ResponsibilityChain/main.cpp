#include "NoSupport.hpp"
#include "LimitSupport.hpp"
#include "OddSupport.hpp"
#include "SpecialSupport.hpp"

int main() {
    Support *s1 = new NoSupport("Alance");
    Support *s2 = new LimitSupport("Bob", 30);
    Support *s3 = new OddSupport("Charlie");
    Support *s4 = new SpecialSupport("David", 55);
    s1->SetNext(s2)->SetNext(s3)->SetNext(s4);

    for (int i = 0; i < 100; i++) {
        Trouble t(i);
        s1->support(&t);
    }

    delete s1;
    delete s2;
    delete s3;
    delete s4;
    return 0;
}
