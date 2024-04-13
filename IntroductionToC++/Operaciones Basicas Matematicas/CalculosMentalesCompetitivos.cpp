#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double r;

    std::cin >> r;

    double original = r + 5;
    double secondResult = pow(original, 2);
    double thirdResult = secondResult / (r * 1/3);
    double fourthResult = pow(thirdResult, 3);

    std::cout << std::fixed << std::setprecision(6) << r << "\n" << original << "\n" << secondResult << "\n" << thirdResult << "\n" << fourthResult;

    return 0;
}