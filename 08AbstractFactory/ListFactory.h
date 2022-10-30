#pragma once
#include "IFactory.h"
#include "ListLink.h"
#include "ListPage.h"
#include "ListTray.h"

class ListFacotry : public IFactory {
public:
    ILink *CreateLink(const std::string &caption, const std::string &url) override {
        return new ListLink(caption, url);
    }

    ITray *CreateTray(const std::string &caption) override {
        return new ListTray(caption);
    }

    IPage *CreatePage(const std::string &title, const std::string &author) override {
        return new ListPage(title, author);
    }
};

static int ListFacotryInit = []() -> int {
    std::cout << "1" << std::endl;
    IFactoryHelper::RegisterFactory("ListFactory", []() { return new ListFacotry; });
    return 0;
}();
