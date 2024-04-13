#include <iostream>

int main() {
    int x, y, z;
    std::cin >> x >> y >> z;

    if (x == y && y == z) {
        std::cout << "equilatero";
    } else if (y == z && x != y) {
        std::cout << "isosceles";
    } else if (x != y && y != z) {
        std::cout << "escaleno";
    }

    return 0;
}