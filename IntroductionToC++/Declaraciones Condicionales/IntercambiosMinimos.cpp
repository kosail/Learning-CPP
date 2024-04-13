#include <iostream>

int main() {
    int a, b, c, counter;
    counter = 0;

    std::cin >> a >> b >> c;

    if (a > c) {
        a ^= c; c ^= a; a ^= c;
        counter++;
    }

    if (a > b) {
        a ^= b; b ^= a; a ^= b;
        counter++;
    }

    if (b > c) {
        b ^= c; c ^= b; b ^= c;
        counter++;
    }

    std::cout << counter;
    return 0;
}