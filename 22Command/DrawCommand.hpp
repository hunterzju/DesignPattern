#pragma once
#include "Drawable.hpp"
#include "ICommand.hpp"

class DrawCommand : public ICommand {
public:
    DrawCommand(int x, int y, Drawable *drawable) : m_x(x), m_y(y), m_drawable(drawable) {}
    virtual void Execute() override {
        m_drawable->Draw(m_x, m_y);
    }

private:
    int m_x;
    int m_y;
    Drawable *m_drawable;
};
