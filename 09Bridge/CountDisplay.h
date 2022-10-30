#pragma once
#include "Display.h"

class CountDisplay : public Display {
public:
    using Display::Display;
    void MultiDisplay(unsigned int count) {
        Open();
        for (unsigned int i = 0; i < count; i++) {
            Print();
        }
        Close();
    }
};
