#pragma once
#include "IDCard.h"
#include "IFactory.h"
#include <string>
#include <vector>

class IDCardFactory : public IFactory {
public:
    IProduct *CreateProduct(const std::string &owner) {
        return new IDCard(owner);
    }
    void RegisterProduct(IProduct *prod) {
        m_productList.push_back(prod);
    }
private:
    std::vector<IProduct *> m_productList;
};
