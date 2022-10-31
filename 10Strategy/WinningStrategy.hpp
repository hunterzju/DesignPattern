#pragma once
#include "IStrategy.h"
#include <random>

class WinningStrategy : public IStrategy {
public:
    WinningStrategy() : m_gen(m_rd()), m_dis(0, 2), m_preHand(Hand::HandFlags::Rock) {};
    virtual Hand NextHand() override {
        if (!m_win) {
            m_preHand = Hand(static_cast<Hand::HandFlags>(GetRandom()));
        }
        return m_preHand;
    }
    virtual void Study(bool win) override {
        m_win = win;
    }

protected:
    int GetRandom() {
        return m_dis(m_gen);
    }

private:
    std::random_device m_rd;
    std::mt19937 m_gen;
    std::uniform_int_distribution<int> m_dis;
    Hand m_preHand;
    bool m_win = false;
};
