#pragma once
#include "IItem.h"
#include "ILink.h"
#include "IPage.h"
#include "ITray.h"
#include <functional>
#include <unordered_map>

class IFactory
{
public:
    virtual ~IFactory() {}
    virtual ILink *CreateLink(const std::string &caption, const std::string &url) = 0;
    virtual ITray *CreateTray(const std::string &caption) = 0;
    virtual IPage *CreatePage(const std::string &title, const std::string &author) = 0;
};

class IFactoryHelper
{
public:
    static void RegisterFactory(const std::string &name, std::function<IFactory *()> createCallback) {
        s_createrMap.insert(std::make_pair(name, createCallback));
    }

    static IFactory *GetFactory(const std::string &name) {
        auto iter = s_createrMap.find(name);
        if (iter == s_createrMap.end()) {
            return nullptr;
        }
        return iter->second();
    }

private:
    static std::unordered_map<std::string, std::function<IFactory *()>> s_createrMap;
};
std::unordered_map<std::string, std::function<IFactory *()>> IFactoryHelper::s_createrMap;
