#pragma once
#include "Entry.hpp"
#include <iostream>
#include <string>
#include <vector>

class Directory : public Entry {
public:
    Directory(const std::string &name) : m_name(name) {}
    ~Directory() {
        for (auto it : m_dirs) {
            delete it;
        }
        m_dirs.clear();
    }

    virtual std::string GetName() const override {
        return m_name;
    }
    virtual int GetSize() const override {
        int size = 0;
        for (auto it : m_dirs) {
            size += it->GetSize();
        }
        return size;
    }
    virtual void AddEntry(Entry *entry) override {
        m_dirs.push_back(entry);
    }
    const std::vector<Entry *> &GetEntryList() const {
        return m_dirs;
    }
    virtual void PrintList(const std::string &str) override {
        std::cout << str << "/" << ToString() << std::endl;
        for (auto it : m_dirs) {
            it->PrintList(str + "/" + m_name);
        }
    }
    virtual void Accept(Visitor *visitor) override {
        visitor->Visit(this);
    }

private:
    std::string m_name;
    std::vector<Entry *> m_dirs;
};
