#pragma once
#include <string>

class IColleague;

class IMediator {
public:
    virtual ~IMediator() {}
    virtual void Oper(int id, const std::string &msg) = 0;
    virtual void RegisterColleague(int id, IColleague *) = 0;
};
