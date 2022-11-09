#pragma once
#include <string>

class IMediator;

class IColleague {
public:
    virtual ~IColleague() {}
    virtual void ReceivedMsg(const std::string &msg) = 0;
    virtual void SendMsg(int id, const std::string &msg) = 0;
    virtual void SetMediator(IMediator *mediator) = 0;
};
