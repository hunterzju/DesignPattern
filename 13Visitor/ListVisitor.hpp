#pragma once
#include "Visitor.hpp"
#include <string>
#include <iostream>
#include "File.hpp"
#include "Directory.hpp"

class ListVisitor : public Visitor {
public:
    virtual void Visit(File *file) override {
        std::cout << m_currentDir << "/" << file->GetName() << " " << file->GetSize() << std::endl;
    }
    virtual void Visit(Directory *dir) override {
        std::cout << m_currentDir << "/" << dir->GetName() << " " << dir->GetSize() << std::endl;
        std::string saved = m_currentDir;
        m_currentDir += "/" + dir->GetName();
        auto entryList = dir->GetEntryList();
        for (auto it : entryList) {
            it->Accept(this);
        }
        m_currentDir = saved;
    }

private:
    std::string m_currentDir;
};
