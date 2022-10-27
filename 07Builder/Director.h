#pragma once
#include "IBuilder.h"

class Director
{
public:
    Director(IBuilder *builder) : m_builder(builder) {}
    void Construct() {
        m_builder->MakeTitle("Greeting");
        m_builder->MakeString(u8"上午-下午");
        m_builder->MakeItems(std::vector<std::string>{u8"早会", u8"方案评审"});
        m_builder->MakeString(u8"晚上");
        m_builder->MakeItems(std::vector<std::string>{u8"工作总结", u8"工作计划"});
        m_builder->Close();
    }

private:
    IBuilder *m_builder;
};
