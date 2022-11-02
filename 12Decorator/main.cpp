#include "FullBorder.hpp"
#include "SideBorder.hpp"
#include "StringDisplay.hpp"
#include <cassert>

int main() {
    IDisplay *d1 = new StringDisplay("Hello");
    assert(d1->GetRow(-1).empty());
    IDisplay *d2 = new SideBorder(d1, '#');
    IDisplay *d3 = new FullBorder(d2);
    d1->Show();
    d2->Show();
    d3->Show();
    IDisplay *d4 = new SideBorder(new FullBorder(new FullBorder(new SideBorder(new FullBorder(new StringDisplay("Hello, World")), '*'))), '/');
    d4->Show();
    delete d1;
    delete d4;
    return 0;
}
