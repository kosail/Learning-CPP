#include <iostream>

int main() {
    int x;

    std::cin >> x;

    if (x % 2 != 0) {
        std::cout << "impar";
    } else {
        std::cout << "par";
    }
    
    return 0;
}