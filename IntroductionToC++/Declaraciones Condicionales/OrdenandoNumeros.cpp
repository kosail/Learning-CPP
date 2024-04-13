#include <iostream>

int main() {
    int a, b, c, d;

    std::cin >> a >> b >> c >> d;
    if (a > b) {
        a ^= b; b ^= a; a^=b; 
    }

    if (c > d) {
        c ^= d; d ^= c; c ^= d;
    }

    if (a > c) {
        a ^= c; c ^= a; a ^= c;
    }

    if (b > d) {
        b ^= d; d ^= b; b ^= d;
    }

    if (b > c) {
        b ^= c; c ^= b; b ^= c;
    }

    std::cout << a << " " << b << " " << c << " " << d;
    return 0;
}