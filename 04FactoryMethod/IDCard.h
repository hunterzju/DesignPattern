#pragma once
#include "IProduct.h"
#include <iostream>
#include <string>

class IDCard : public IProduct {
public:
    IDCard(const std::string &owner) : m_owner(owner) {}
    void Use() override {
        std::cout << "Use IDCard with owner " << m_owner << std::endl;
    }
private:
    std::string m_owner;
};
