#pragma once
#include <iostream>
#include <string>

class IDisplay {
public:
    virtual ~IDisplay() {}
    virtual int GetRows() const = 0;
    virtual int GetColumns() const = 0;
    virtual std::string GetRow(int index) const = 0;
    void Show() {
        int r = GetRows();
        for (int i = 0; i < r; ++i) {
            std::cout << GetRow(i) << std::endl;
        }
    }
};
