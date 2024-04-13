#include <iostream>


int main() {
    int temp;
    std::cin >> temp;

    bool death = temp < 15 || temp > 34;

    if (temp < 21) {
        std::cout << "fria!";
    } else if (temp > 29) {
        std::cout << "caliente!";
    } else {
        std::cout << "tibia";
    }

    if (death) std::cout << "\nRIP escamitas :(";
    
    return 0;
}