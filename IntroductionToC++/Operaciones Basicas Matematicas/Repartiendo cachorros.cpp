#include <iostream>

int main() {
    int c, p, h;
    std::cin >> c >> p >> h;

    c -= p;
    c %= h + 1;
    p += c;

    std::cout << p;
    return 0;
}