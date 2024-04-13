#include <iostream>

int main() {
    int m = 0, n = 0;

    std::cin >> m >> n;

    for (int i = m; i <= n; i++) {
        std::cout << i << " ";
    }

    return 0;
}