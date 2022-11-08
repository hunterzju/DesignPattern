#pragma once
#include "Database.hpp"
#include "HtmlWriter.hpp"
#include <iostream>

class PageMaker {
public:
    ~PageMaker() = default;
    PageMaker(const PageMaker &) = delete;
    PageMaker(PageMaker &&) = delete;
    PageMaker &operator=(const PageMaker &) = delete;
    PageMaker &operator=(PageMaker &&) = delete;

    static PageMaker &GetInstance() {
        static PageMaker pm;
        return pm;
    }

    void MakeWelcomePage(const std::string &mailAddr) {
        auto name = Database::GetInstance().GetNameByEmail(mailAddr);
        HtmlWriter htmlWriter;
        htmlWriter.Title("Welcome to " + name + "'s page'");
        htmlWriter.Paragraph(name + u8"欢迎来到" + name + u8"的主页。");
        htmlWriter.Paragraph(u8"期待您的邮件！");
        htmlWriter.MailTo(mailAddr, name);
        htmlWriter.Close();
        std::cout << htmlWriter.ToString() << std::endl;
    }

protected:
    PageMaker() {}
};
