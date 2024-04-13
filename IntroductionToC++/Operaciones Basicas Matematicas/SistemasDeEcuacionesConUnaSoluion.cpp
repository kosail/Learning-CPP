#include <iostream>
#include <iomanip>

int main() {
    // Leer los coeficientes a1, b1, c1, a2, b2, c2
    double a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    // Calcular los determinantes
    double det = a1 * b2 - a2 * b1;
    double det_x = c1 * b2 - c2 * b1;
    double det_y = a1 * c2 - a2 * c1;

    // Calcular los valores de x e y
    double x = det_x / det;
    double y = det_y / det;

    // Imprimir la solución
    std::cout << std::fixed << std::setprecision(6) << x << " " << y;

    return 0;
}