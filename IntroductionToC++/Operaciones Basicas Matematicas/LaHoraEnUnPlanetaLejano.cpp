#include <iostream>

int main() {
    int s;

    std::cin >> s;

    int days = s/50/70/12;
    int hours = s/50/70;
    int minutes = s/50;

    std::cout << days << " " << hours - (days * 12) << " " << minutes - (hours * 70) << " " << s - (minutes * 50);

    return 0;
}
