#include "Memento.hpp"
#include "Gamer.hpp"

int main() {
    Gamer g(100);
    Memento m = g.CreateMemento();
    
    for (int i = 0; i < 100; i++) {
        std::cout << "====== " << i << std::endl;
        std::cout << g.ToString() << std::endl;
        g.Bet();
        if (g.GetMoney() > m.GetMoney()) {
            m = g.CreateMemento();
            std::cout << "AddMoney, Save." << std::endl;
        }
        else if (g.GetMoney() < m.GetMoney() / 2) {
            g.RestoreMemento(m);
            std::cout << "DecMoney, Restore." << std::endl;
        }
    }

    return 0;
}
