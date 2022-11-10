#pragma once
#include "NumGen.hpp"
#include "NumGenObserver.hpp"
#include <chrono>
#include <iostream>
#include <thread>

class DigitObserver : public NumGenObserver {
public:
    virtual void Update(NumGen *numGen) override {
        std::cout << numGen->GetNumber() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
};
