#pragma once
#include "IDisplayImpl.h"

class Display {
public:
    virtual ~Display() {}
    Display(IDisplayImpl *impl) : m_pImpl(impl) {}
    virtual void Open() {
        m_pImpl->RawOpen();
    }
    virtual void Print() {
        m_pImpl->RawPrint();
    }
    virtual void Close() {
        m_pImpl->RawClose();
    }
    void RunDisplay() {
        Open();
        Print();
        Close();
    }
private:
    IDisplayImpl *m_pImpl;
};
