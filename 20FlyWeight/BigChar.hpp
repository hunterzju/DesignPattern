#pragma once
#include <iostream>

static const char *strList[] = { "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "......##........\n"
                                 "..######........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "..##########....\n"
                                 "................\n",

                                 "....######......\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "......####......\n"
                                 "....##..........\n"
                                 "..##............\n"
                                 "..##########....\n"
                                 "................\n",
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "......####......\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "........##......\n"
                                 "......####......\n"
                                 "....##..##......\n"
                                 "..##....##......\n"
                                 "..########......\n"
                                 "........##......\n"
                                 "......######....\n"
                                 "................\n",
                                 "..##########....\n"
                                 "..##............\n"
                                 "..##............\n"
                                 "..########......\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##............\n"
                                 "..########......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "..##########....\n"
                                 "..##......##....\n"
                                 "..........##....\n"
                                 "........##......\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "......##........\n"
                                 "................\n",
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "....######......\n"
                                 "..##......##....\n"
                                 "..##......##....\n"
                                 "....########....\n"
                                 "..........##....\n"
                                 "..##......##....\n"
                                 "....######......\n"
                                 "................\n",
                                 "................\n"
                                 "................\n"
                                 "................\n"
                                 "................\n"
                                 "..##########....\n"
                                 "................\n"
                                 "................\n"
                                 "................\n" };

class BigChar {
public:
    BigChar(int order) : m_char(strList[order % 11]) {}

    void Show() {
        std::cout << m_char << std::endl;
    }

private:
    const char *m_char;
};
