#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    float x;
    std::cin >> x;

    double y = (x + 5) / (2 * (x + 1));
    double z = (pow(y, 2) + x * (x - 2 * y)) / (x * y);

    std::cout << std::fixed << std::setprecision(6) << z;

    return 0;
}