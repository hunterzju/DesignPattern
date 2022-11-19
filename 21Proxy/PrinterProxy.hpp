#pragma once
#include "Printer.hpp"

class PrinterProxy : public Printable {
public:
    PrinterProxy(const std::string &name) : m_name(name) {}
    ~PrinterProxy() {
        delete m_printer;
    }

    virtual void SetPrinterName(const std::string &name) override {
        if (m_printer != nullptr) {
            m_printer->SetPrinterName(name);
        }
        m_name = name;
    }

    virtual const std::string &GetPrinterName() const override {
        return m_name;
    }

    void Print() override {
        if (nullptr == m_printer) {
            m_printer = new Printer(m_name);
        }
        m_printer->Print();
    }

private:
    Printer *m_printer = nullptr;
    std::string m_name;
};
