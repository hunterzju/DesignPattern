#pragma once
#include "Memento.hpp"
#include <iostream>
#include <random>
#include <string>
#include <vector>

class Gamer {
public:
    Gamer(int money) : m_money(money) {}

    int GetMoney() const {
        return m_money;
    }

    void Bet() {
        int dice = m_dis(m_gen) + 1;
        if (dice == 1) {
            m_money += 100;
            std::cout << "money add" << std::endl;
        }
        else if (dice == 2) {
            m_money /= 2;
            std::cout << "mondy dec" << std::endl;
        }
        else if (dice == 6) {
            auto f = GetFruit();
            m_fruits.push_back(f);
            std::cout << "Get fruit " << f << std::endl;
        }
    }

    std::string GetFruit() {
        return s_fruitNames[m_dis(m_gen) % 4];
    }

    std::string ToString() {
        std::string str;
        str = "[money = " + std::to_string(m_money) + ", fruits = ";
        for (auto f : m_fruits) {
            str += f + " ";
        }
        str += " ]";
        return str;
    }

    Memento CreateMemento() {
        Memento m(m_money);
        for (auto f : m_fruits) {
            m.AddFruit(f);
        }
        return m;
    }

    void RestoreMemento(const Memento &m) {
        m_money = m.GetMoney();
        m_fruits = m.GetFruits();
    }

private:
    int m_money;
    std::vector<std::string> m_fruits;

    std::random_device m_rd;
    std::mt19937 m_gen{ m_rd() };
    std::uniform_int_distribution<int> m_dis{0, 6};

    std::string s_fruitNames[4] = {"apple", "grape", "orange", "banana"};
};
