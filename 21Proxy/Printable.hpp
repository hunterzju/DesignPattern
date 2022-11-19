#pragma once
#include <string>

class Printable {
public:
    virtual ~Printable() {}
    virtual void SetPrinterName(const std::string &name) = 0;
    virtual const std::string &GetPrinterName() const = 0;
    virtual void Print() = 0;
};
