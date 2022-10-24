#include "IDCardFactory.h"

int main() {
    IFactory *factory = new IDCardFactory;
    IProduct *prod1 = factory->Create("ZhangSan");
    IProduct *prod2 = factory->Create("LiSi");
    IProduct *prod3 = factory->Create("WangWu");
    prod1->Use();
    prod2->Use();
    prod3->Use();
    
    delete prod1;
    delete prod2;
    delete prod3;
    delete factory;
    return 0;
}
