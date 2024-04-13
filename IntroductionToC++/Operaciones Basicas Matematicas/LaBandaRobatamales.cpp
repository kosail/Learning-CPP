#include <iostream>

int main() {
    int tamales, banda;
    int leader = 0;
    std::cin >> tamales >> banda;

    if (tamales % 2 == 0) {
        leader = tamales / 2;
    } else {
        leader = (tamales / 2) + 1;
    }

    tamales -= leader;
    tamales %= banda - 1;
    leader += tamales;

    std::cout << leader;
    return 0;
}