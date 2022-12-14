#include "MessageBox.h"
#include "ProductMgr.h"
#include <cassert>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ProductMgr mgr;
    IProduct *p1 = new MessageBox("Hello");
    mgr.Register("MsgBox", p1);
    p1->Use("World");
    auto p2 = mgr.Create("MsgBox");
    p2->Use("ZhangSan");
    cout << p1 << endl;
    cout << p2 << endl;

    auto pp = mgr.Create("Not");
    assert(pp == nullptr);

    delete p1;
    delete p2;
    return 0;
}
