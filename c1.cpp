#include <iostream>
using namespace std;

int main() {
    int numTerminos;
    cout << "Ingresa el número de términos de la serie: ";
    cin >> numTerminos;

    double x = 0.0;
    int terminorep = 1;
    int signo = 1; // Usaremos 1 y -1 para alternar el signo

    while (terminorep <= numTerminos) {
        int numerador = terminorep * terminorep + terminorep;
        int denominador = 2 * terminorep - 1;
        double termValor = numerador / (denominador * 1.0);  // Multiplicamos el denominador por 1.0 para obtener un resultado decimal

        if (signo == 1) {
            x += termValor;
        } else {
            x -= termValor;
        }

        signo = -signo; // Alternar el signo
        terminorep++;
    }

    cout << "El valor de x es: " << x << endl;

    return 0;
}