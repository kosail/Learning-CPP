#include <iostream>
using std::cout, std::cin;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "I";
        return 0;
    }

    if (a <= b && b <= c) {
        cout << "C";
    } else if (a >= b && b >= c) {
        cout << "D";
    } else {
        cout << "X";
    }

    return 0;
}