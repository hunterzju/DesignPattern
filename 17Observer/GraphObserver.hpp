#pragma once
#include "NumGen.hpp"
#include "NumGenObserver.hpp"
#include <chrono>
#include <iostream>
#include <thread>

class GraphObserver : public NumGenObserver {
public:
    virtual void Update(NumGen *numGen) override {
        auto num = numGen->GetNumber();
        std::cout << "GraphObserver:";
        for (int i = 0; i < num; i++) {
            std::cout << "*";
        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
};
