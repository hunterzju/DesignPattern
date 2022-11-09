#pragma once
#include "IColleague.hpp"
#include "IMediator.hpp"
#include <iostream>

class CColleague2 : public IColleague {
public:
    virtual void ReceivedMsg(const std::string &msg) override {
        std::cout << __FUNCTION__ << " " << msg << std::endl;
    }

    virtual void SendMsg(int id, const std::string &msg) override {
        std::cout << __FUNCTION__ << id << " " << msg << std::endl;
        if (m_mediator) {
            m_mediator->Oper(id, msg);
        }
    }

    virtual void SetMediator(IMediator *mediator) override {
        m_mediator = mediator;
    }

private:
    IMediator *m_mediator = nullptr;
};
