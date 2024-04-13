#include <iostream>
#include <cmath>

int main() {
    double v0, rad, g, maxHeight;
    g = 9.81;

    std::cin >> v0 >> rad;

    std::cout << (pow(v0, 2) * pow(sin(rad), 2)) / (2 * g) << std::endl;

return 0;
}