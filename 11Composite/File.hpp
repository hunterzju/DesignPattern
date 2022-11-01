#pragma once
#include "Entry.hpp"
#include <iostream>

class File : public Entry {
public:
    File(const std::string &name, int size) : m_name(name), m_size(size) {}
    virtual std::string GetName() const override {
        return m_name;
    }
    virtual int GetSize() const override {
        return m_size;
    }
    virtual void PrintList(const std::string &str) override {
        std::cout << str << "/" << ToString() << std::endl;
    }

private:
    std::string m_name;
    int m_size;
};
