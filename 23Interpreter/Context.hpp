#pragma once
#include "Variable.hpp"
#include <unordered_map>

class Context {
public:
    void RegisterVariable(Variable *var, int val) {
        m_map.insert({var, val});
    }

    int LoopUpValue(Variable *var) {
        auto iter = m_map.find(var);
        if (iter != m_map.end()) {
            return iter->second;
        }
        return 0;
    }

private:
    std::unordered_map<Variable*, int> m_map;
};
