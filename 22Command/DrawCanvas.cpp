#pragma once
#include "Drawable.hpp"
#include "MacroCommand.hpp"
#include <iostream>

class DrawCanvas : public Drawable {
public:
    DrawCanvas(MacroCommand *macrocommand) : m_macroCommand(macrocommand) {}
    virtual void Draw(int x, int y) override {
        std::cout << __FUNCTION__ << " " << x << " " << y  << std::endl;
    }

    void Paint() {
        m_macroCommand->Execute();
    }

private:
    MacroCommand *m_macroCommand;
};
