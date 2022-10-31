#pragma once
#include "IStrategy.h"
#include <sstream>
#include <string>

class Player {
public:
    Player(const std::string &name, IStrategy *strategy) : m_strategy(strategy), m_name(name) {}
    
    Hand NextHand() {
        return m_strategy->NextHand();
    }

    void Win() {
        m_strategy->Study(true);
        m_gameCount++;
        m_winCount++;
    }

    void Lose() {
        m_strategy->Study(false);
        m_gameCount++;
        m_loseCount++;
    }

    void Even() {
        m_gameCount++;
    }

    std::string GetString() const {
        std::stringstream ss;
        ss << "Player: " << m_name << " gameCount:" << m_gameCount << " win:" << m_winCount << " lose:" << m_loseCount << " even:" << m_gameCount - m_winCount - m_loseCount;
        return ss.str();
    }

private:
    IStrategy *m_strategy;
    std::string m_name;
    int m_gameCount = 0;
    int m_winCount = 0;
    int m_loseCount = 0;
};
