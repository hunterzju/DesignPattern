#pragma once
#include "IColleague.hpp"
#include "IMediator.hpp"
#include <unordered_map>
#include <utility>

class CMediator : public IMediator {
public:
    virtual void Oper(int id, const std::string &msg) override {
        auto it = m_map.find(id);
        if (it != m_map.end()) {
            it->second->ReceivedMsg(msg);
        }
    }

    virtual void RegisterColleague(int id, IColleague *colleague) override {
        auto it = m_map.find(id);
        if (it == m_map.end()) {
            m_map.insert(std::make_pair(id, colleague));
            colleague->SetMediator(this);
        }
    }

private:
    std::unordered_map<int, IColleague *> m_map;
};
