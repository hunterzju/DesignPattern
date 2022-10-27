#pragma once
#include "IBuilder.h"

class TextBuilder : public IBuilder
{
public:
    void MakeTitle(const std::string &title) override {
       m_str.append("==============================\n");
       m_str.append("[" + title + "]\n");
       m_str.append("\n");
    }

    void MakeString(const std::string &str) override {
        m_str.append(" * " + str + "\n");
        m_str.append("\n");
    }

    void MakeItems(const std::vector<std::string> &items) override {
        for (auto item : items) {
            m_str.append(".  " + item + "\n");
        }
        m_str.append("\n");
    }

    void Close() override {
        m_str.append("============================\n");
    }

    std::string GetResult() const {
        return m_str;
    }
private:
    std::string m_str;
};
