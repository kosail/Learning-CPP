#include <iostream>
#include <cmath>

int main() {
    int n = 0, counter = 1;
    std::cin >> n;

    if (n % 2 == 0) {
        n /= 2;
    } else {
        n += 1;
    }

    if (floor(log10(n) + 1) >= 3) {
        n /= 100;
        counter++;
    } else if (floor(log10(n) + 1) == 2) {
        n /= 10;
        counter++;
    }

    if (n % 3 == 0) {
        n -= 1;
        counter++;
    }

    std::cout << n << " " << counter;
}