#include "CColleague1.hpp"
#include "CColleague2.hpp"
#include "CMediator.hpp"

int main() {
    IColleague *c1 = new CColleague1;
    IColleague *c2 = new CColleague2;
    IMediator *md = new CMediator;
    md->RegisterColleague(1, c1);
    md->RegisterColleague(2, c2);

    c1->SendMsg(2, "I am c1");
    c2->SendMsg(1, "Hello, I am c2");
    delete c1;
    delete c2;
    delete md;
    return 0;
}
