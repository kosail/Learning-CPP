#include <iostream>
#include <iomanip>

int main() {
    double a, b, c;

    std::cin >> a >> b >> c;

    if (b == 0) {
        std::cout << "indefinido";
        return 0;
    }

    if (c == 0) {
        std::cout << std::fixed << std::setprecision(6) << a/b;
    } else {
        std::cout << std::fixed << std::setprecision(6) << (a/b) + c << " " << (a/b) - c;
    }

    return 0;
}