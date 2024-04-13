#include <iostream>

int main() {
    int limit;
    std::cin >> limit;

    for (int i=0; i<limit; i++) {
        int iterationsTemp;
        std::cin >> iterationsTemp;

        for (int j=0; j<iterationsTemp; j++) {
            std::cout << "<3";
        }

        std::cout << "\n";
    }
    return 0;
}