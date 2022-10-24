#pragma once
#include <string>
class IProduct;
class IFactory {
public:
    virtual ~IFactory() {}
    virtual void RegisterProduct(IProduct *) = 0;
    virtual IProduct *CreateProduct(const std::string &owner) = 0;
    virtual IProduct *Create(const std::string &owner) {
        auto *prod = CreateProduct(owner);
        RegisterProduct(prod);
        return prod;
    }
};
