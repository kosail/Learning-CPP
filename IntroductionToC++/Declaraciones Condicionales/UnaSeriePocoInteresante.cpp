#include <iostream>

using namespace std;

int main() {
    // Entrada de N y P
    int N, P;
    cin >> N >> P;

    // Calculamos los números que están P posiciones antes y después de N dentro de la misma secuencia
    int antes = (N - 1 - (P % 3) + 3) % 3 + 1;
    int despues = (N - 1 + (P % 3)) % 3 + 1;

    // Salida de los números antes y después de N
    cout << antes << " " << despues << endl;

    return 0;
}
