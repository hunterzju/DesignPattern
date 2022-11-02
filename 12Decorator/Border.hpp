#pragma once
#include "IDisplay.hpp"

class Border : public IDisplay {
public:
    Border(IDisplay *display) : m_display(display) {}
    virtual ~Border() {
        delete m_display;
    }

protected:
    IDisplay *m_display;
};
