#pragma once
#include <string>
#include <vector>

class IBuilder
{
public:
    virtual ~IBuilder() {}
    virtual void MakeTitle(const std::string &title) = 0;
    virtual void MakeString(const std::string &str) = 0;
    virtual void MakeItems(const std::vector<std::string> &items) = 0;
    virtual void Close() = 0;
};
