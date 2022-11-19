#pragma once
#include "Printable.hpp"
#include <chrono>
#include <iostream>
#include <thread>

class Printer : public Printable {
public:
    Printer(const std::string &name) : m_name(name) {
        HeavyJob();
    }

    virtual void SetPrinterName(const std::string &name) override {
        m_name = name;
    }

    virtual const std::string &GetPrinterName() const override {
        return m_name;
    }

    void Print() override {
        std::cout << __FUNCTION__ << GetPrinterName() << std::endl;
    }

private:
    void HeavyJob() {
        std::cout << __FUNCTION__ << " start " << std::endl;
        for (int i = 0; i < 5; i++) {
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }
        std::cout << __FUNCTION__ << " end " << std::endl;
    }

private:
    std::string m_name;
};
