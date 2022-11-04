#pragma once
#include <string>
#include "Element.hpp"

class Entry : public Element {
public:
    virtual ~Entry() {}
    virtual std::string GetName() const = 0;
    virtual int GetSize() const = 0;
    virtual void AddEntry(Entry *entry) {}
    virtual void PrintList(const std::string &str) = 0;

    void PrintList() {
        PrintList("");
    }

    std::string ToString() const  {
        return GetName() + " (" + std::to_string(GetSize()) + ")";
    }
};
