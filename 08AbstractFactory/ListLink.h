#pragma once
#include "ILink.h"

class ListLink : public ILink {
public:
    using ILink::ILink;
    std::string MakeHTML() override {
        return "<li><a href=\"" + m_url + "\">" + m_caption + "</a> </li>\n";
    }
};
