#include <iostream>

int main() {
    int final = 0, temp = 0;

    do {
        std::cin >> temp;
        final += temp;
    } while (temp != 0);

    std::cout << final;
    return 0;
}