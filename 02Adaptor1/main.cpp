#include "PainterBanner.h"
#include <iostream>
using std::cout;
using std::endl;
int main(int argc, char **argv) {
    Painter *painter = new PainterBanner(std::string("Hellow World!"));
    painter->PrintWeak();
    painter->PrintStrong();
    delete painter;
    return 0;
}
