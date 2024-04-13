#include <iostream>
using std::cout;
using std::endl;

int main() {
    int x = 24;
    int *pointerX = &x;

    cout << "Valor x: " << x << endl;
    cout << "Valor del puntero x: " << pointerX << endl;

    int y = *pointerX;

    cout << "Valor de Y: " << y << endl;

    *pointerX = 30;

    cout << "Nuevo valor de Y: " << y << endl;
    return 0;
}