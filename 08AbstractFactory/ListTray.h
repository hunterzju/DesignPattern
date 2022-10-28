#pragma once
#include "ITray.h"

class ListTray : public ITray {
public:
    using ITray::ITray;
    std::string MakeHTML() override {
        std::string str;
        str.append("<li>\n");
        str.append(m_caption + "\n");
        str.append("<ul>\n");

        for (auto item : m_itemList) {
            str.append(item->MakeHTML());
        }

        str.append("</ul>\n");
        str.append("</li>\n");
        return str;
    }
};
