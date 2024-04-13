#include <iostream>

int main() {
    int years[4];
    std::cin >> years[0] >> years[1] >> years[2] >> years[3];

    /*
    * Un año es bisiesto si es divisible entre 4 Y ADEMÁS NO es divisible entre 100. La única excepción a esa regla es si el año es divisible entre 400.
    */
    
    for (int i=0; i<4; i++) {
        if (years[i] % 4 == 0 && years[i] % 100 != 0 || years[i] % 400 == 0) {
            std::cout << 29;
        } else {
            std::cout << 28;
        }

        if (i < 3) {
            std::cout << " ";
        }
    }

    return 0;
}