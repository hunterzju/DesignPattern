#pragma once
#include <sstream>
#include <string>

class HtmlWriter {
public:
    void Title(const std::string &title) {
        m_ss << "<html>"
             << "<head>"
             << "<title>" + title + "</title>"
             << "</head>"
             << "<body>\n"
             << "<h1>" + title + "</h1>\n";
    }

    void Paragraph(const std::string &msg) {
        m_ss << "<p>" + msg + "</p>\n";
    }

    void Link(const std::string &href, const std::string &caption) {
        Paragraph("<a href=\"" + href + "\">" + caption + "</a>");
    }

    void MailTo(const std::string &mailAddr, const std::string &userName) {
        Link("MailTo:" + mailAddr, userName);
    }

    void Close() {
        m_ss << "</body>"
             << "</html>\n";
    }

    std::string ToString() const {
        return m_ss.str();
    }

private:
    std::stringstream m_ss;
};
