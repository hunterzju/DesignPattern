#include "PrinterProxy.hpp"

int main() {
    Printable *p = new PrinterProxy("abc");
    std::cout << p->GetPrinterName() << std::endl;
    p->SetPrinterName("def");
    std::cout << p->GetPrinterName() << std::endl;
    p->Print();
    p->SetPrinterName("ghi");
    p->Print();

    delete p;
    return 0;
}
