#pragma once
#include "IProduct.h"
#include <unordered_map>

class ProductMgr
{
public:
    void Register(const std::string &name, IProduct *prod) {
        m_map.insert({name, prod});
    }
    IProduct *Create(const std::string &name) {
        auto item = m_map.find(name);
        if (item != m_map.end()) {
            return item->second->Clone();
        }
        else {
            return nullptr;
        }
    }
private:
    std::unordered_map<std::string, IProduct *> m_map;
};
