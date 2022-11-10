#pragma once
#include "NumGenObserver.hpp"
#include <algorithm>
#include <vector>

class NumGen {
public:
    virtual ~NumGen() {}
    void AddObserver(NumGenObserver *observer) {
        m_observerList.push_back(observer);
    }
    void DeleteObserver(NumGenObserver *observe) {
        m_observerList.erase(std::remove(m_observerList.begin(), m_observerList.end(), observe), m_observerList.end());
    }
    void NotifyObserves() {
        for (auto gen : m_observerList) {
            gen->Update(this);
        }
    }
    virtual int GetNumber() = 0;
    virtual void Execute() = 0;

private:
    std::vector<NumGenObserver *> m_observerList;
};
