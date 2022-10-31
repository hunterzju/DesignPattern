#include "Player.h"
#include "ProbStrategy.h"
#include "WinningStrategy.hpp"
#include <iostream>
#include <memory>
#include <string>

int main() {
    std::shared_ptr<IStrategy> s1(new WinningStrategy);
    std::shared_ptr<IStrategy> s2(new ProbStrategy);
    Player p1("ZhangSan", s1.get());
    Player p2("Lisi", s2.get());

    for (int i = 0; i < 65535; ++i) {
        Hand h1 = p1.NextHand();
        Hand h2 = p2.NextHand();
        if (h1 == h2) {
            p1.Even();
            p2.Even();
        }
        else if (h1 > h2) {
            p1.Win();
            p2.Lose();
        }
        else {
            p1.Lose();
            p2.Win();
        }
    }

    std::cout << p1.GetString() << std::endl;
    std::cout << p2.GetString() << std::endl;
    return 0;
}
