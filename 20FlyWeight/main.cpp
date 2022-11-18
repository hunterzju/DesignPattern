#include "BigCharFactor.hpp"

int main() {
    BigCharFactory f;
    for (int i = 0; i < 20; ++i) {
        for (int j = 0; j < 2; ++j) {
            BigChar *b = f.GetBigChar(i);
            std::cout << i << "  " << b << std::endl;
            b->Show();
        }
    }

    return 0;
}
