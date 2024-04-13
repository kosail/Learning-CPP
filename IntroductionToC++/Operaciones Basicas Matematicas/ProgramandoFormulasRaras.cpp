#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x, y, z;

    std::cin >> x >> y >> z;

    std::cout << std::fixed << std::setprecision(6) << (x + x * (y + pow(z, 2))) / ((x + M_PI) * (y + M_PI));

    return 0;
}