#pragma once
#include <string>
#include <vector>

class Memento {
public:
    Memento(int money) : m_money(money) {}

    int GetMoney() const {
        return m_money;
    }

    const std::vector<std::string> &GetFruits() const {
        return m_fruits;
    }

    void AddFruit(const std::string &fruit) {
        m_fruits.push_back(fruit);
    }

private:
    int m_money;
    std::vector<std::string> m_fruits;
};
