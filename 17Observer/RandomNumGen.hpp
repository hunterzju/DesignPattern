#pragma once
#include "NumGen.hpp"
#include "random"
#include <random>

class RandomNumGen : public NumGen {
public:
    virtual int GetNumber() override {
        return m_number;
    }
    virtual void Execute() override {
        for (int i = 0; i < 20; i++) {
            m_number = m_dis(m_gen);
            NotifyObserves();
        }
    }

private:
    std::random_device m_rd;
    std::mt19937 m_gen{ m_rd() };
    std::uniform_int_distribution<int> m_dis{0, 100};
    int m_number{0};
};
