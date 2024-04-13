#include <iostream>
#include <iomanip>
#include <cmath>

double calculateDistance(double x1, double y1, double x2, double y2) {
        return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    double sides[4] = {calculateDistance(x1,y1,x2,y2), calculateDistance(x2,y2,x3,y3), calculateDistance(x3,y3,x4,y4), calculateDistance(x4, y4, x1, y1)};

    int smallestSide = sides[0];

    for (int i=1; i < sizeof(sides) / sizeof(double); i++) {
        if (sides[i] < smallestSide) {
            smallestSide = i;
        }
    }

    std::cout << std::fixed << std::setprecision(6) << sides[smallestSide];
    return 0;
}